declare filename "voice.dsp";
declare name "voice";
import("stdfaust.lib");
music = library("music.lib");


// Constants
A4 = 69.0; // 440 Hz

// Functions
key2hz(base_freq, x) = base_freq * pow(2.0, x / 12);
normalize(min_val,max_val) = max(min_val) : min(max_val);
multiselect(n,s) = ro.interleave(n,2) <: par(i,n, select2(s));
// Sliders
key = hslider("key",49,1,127,1);
duty = hslider("duty",0,0,1,00.1);
type = hslider("type",0,0,1,1);
ws = hslider("shape",0,0,6,1);


// Oscillator
osc_(pitch, lfo) = waveform_select(key2hz(440.0, kbd_track * (pitch - A4) + tune + finetune +(lfo_to_p * lfo)),ws)
with {
  kbd_track = hslider("kbd", 1, -12, 12, 0.1);
  tune = hslider("[01]tune", 0, -24, 24, 1);
  finetune = hslider("[02]finetune", 0, -1, 1, 0.01);
  lfo_to_p = hslider("lfo_to_p", 0, -12, 12, 0.1);
};

// Waveform Select
waveform_select(freq,ws) = saw(freq),revSaw(freq),square(freq),tri(freq),triSaw(freq),pulse(freq),sin_wave(freq):ba.selectn(7,ws):_
with{
  saw(freq) = os.saw2ptr(freq);
  revSaw(freq )= saw(freq), -1: *;
  square(freq) = os.square(freq);
  tri(freq) = os.triangle(freq);
  triSaw(freq) = (saw(freq) + tri(freq))/2;
  pulse(freq)= os.pulsetrain(freq,duty);
  sin_wave(freq)= os.oscsin(freq);

};

 


// LFO Waveforms
saw_lfo(lf) = os.lf_saw(lf);
square_lfo(lf)= os.lf_squarewave(lf);
tri_lfo  = os.lf_triangle(lf);
lfo_wave(lws,lf) = saw_lfo(lf),square_lfo(lf)  :ba.selectn(2,lws);

// LFO
lfo(gate) = lfo_wave(lws,lf)
with {
  lws = hslider("lfo shape",0,0,1,1);
  lf = hslider("lfo_freq",0,0,60,1);
  x = hslider("sync",1,1,16,1);


};
//Envelope

env = music.adsr(
   hslider("attack", 0, 0, 2, 0.005),
   hslider("decay", 1, 0, 4, 0.01),
   hslider("sustain", 1, 0, 1, 0.01) * 100,
   hslider("release", 1, 0, 4, 0.01));

//Amp
amp = _,(gate:env):*:_*gain ;
gain = hslider("gain",0,0,1,0.01);
// Gate

// LFO Group
lfo1 = vgroup("lfo1", select2(checkbox("Lfo power"), 0, lfo));
lfo1_sync = vgroup("lfo1_sync", select2(checkbox("power"), 0, x));
// OSC Group
osc1 = vgroup("osc1", select2(checkbox("Voice power"), 0, osc_(key)));

gate = button("gate");

// Process
//process = osc_(key,lfo1(gate))*gate: normalize(-1,1)*0.5;
voice = lfo1(gate):osc1:>amp:normalize(-1,1);
process = voice;
