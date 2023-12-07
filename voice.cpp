
//------------------------------------------------------------------------------
// This file was generated using the Faust compiler (https://faust.grame.fr),
// and the Faust post-processor (https://github.com/jpcima/faustpp).
//
// Source: voice.dsp
// Name: voice
// Author: 
// Copyright: 
// License: 
// Version: 
//------------------------------------------------------------------------------






#include "voice.hpp"



#include <utility>
#include <cmath>

class voice::BasicDsp {
public:
    virtual ~BasicDsp() {}
};

//------------------------------------------------------------------------------
// Begin the Faust code section

namespace {

template <class T> inline T min(T a, T b) { return (a < b) ? a : b; }
template <class T> inline T max(T a, T b) { return (a > b) ? a : b; }

class Meta {
public:
    // dummy
    void declare(...) {}
};

class UI {
public:
    // dummy
    void openHorizontalBox(...) {}
    void openVerticalBox(...) {}
    void closeBox(...) {}
    void declare(...) {}
    void addButton(...) {}
    void addCheckButton(...) {}
    void addVerticalSlider(...) {}
    void addHorizontalSlider(...) {}
    void addVerticalBargraph(...) {}
    void addHorizontalBargraph(...) {}
};

typedef voice::BasicDsp dsp;

} // namespace

#define FAUSTPP_VIRTUAL // do not declare any methods virtual
#define FAUSTPP_PRIVATE public // do not hide any members
#define FAUSTPP_PROTECTED public // do not hide any members

// define the DSP in the anonymous namespace
#define FAUSTPP_BEGIN_NAMESPACE namespace {
#define FAUSTPP_END_NAMESPACE }


#if defined(__GNUC__)
#   pragma GCC diagnostic push
#   pragma GCC diagnostic ignored "-Wunused-parameter"
#endif

#ifndef FAUSTPP_PRIVATE
#   define FAUSTPP_PRIVATE private
#endif
#ifndef FAUSTPP_PROTECTED
#   define FAUSTPP_PROTECTED protected
#endif
#ifndef FAUSTPP_VIRTUAL
#   define FAUSTPP_VIRTUAL virtual
#endif

#ifndef FAUSTPP_BEGIN_NAMESPACE
#   define FAUSTPP_BEGIN_NAMESPACE
#endif
#ifndef FAUSTPP_END_NAMESPACE
#   define FAUSTPP_END_NAMESPACE
#endif

FAUSTPP_BEGIN_NAMESPACE

#ifndef FAUSTFLOAT
#define FAUSTFLOAT float
#endif 

FAUSTPP_END_NAMESPACE
#include <algorithm>
#include <cmath>
#include <cstdint>
#include <math.h>
FAUSTPP_BEGIN_NAMESPACE

#ifndef FAUSTCLASS 
#define FAUSTCLASS mydsp
#endif

#ifdef __APPLE__ 
#define exp10f __exp10f
#define exp10 __exp10
#endif

#if defined(_WIN32)
#define RESTRICT __restrict
#else
#define RESTRICT __restrict__
#endif

class mydspSIG0 {
	
  FAUSTPP_PRIVATE:
	
	int iVec3[2];
	int iRec5[2];
	
  public:
	
	int getNumInputsmydspSIG0() {
		return 0;
	}
	int getNumOutputsmydspSIG0() {
		return 1;
	}
	
	void instanceInitmydspSIG0(int sample_rate) {
		for (int l7 = 0; l7 < 2; l7 = l7 + 1) {
			iVec3[l7] = 0;
		}
		for (int l8 = 0; l8 < 2; l8 = l8 + 1) {
			iRec5[l8] = 0;
		}
	}
	
	void fillmydspSIG0(int count, float* table) {
		for (int i1 = 0; i1 < count; i1 = i1 + 1) {
			iVec3[0] = 1;
			iRec5[0] = (iVec3[1] + iRec5[1]) % 65536;
			table[i1] = std::sin(9.58738e-05f * float(iRec5[0]));
			iVec3[1] = iVec3[0];
			iRec5[1] = iRec5[0];
		}
	}

};

static mydspSIG0* newmydspSIG0() { return (mydspSIG0*)new mydspSIG0(); }
static void deletemydspSIG0(mydspSIG0* dsp) { delete dsp; }

static float mydsp_faustpower2_f(float value) {
	return value * value;
}
static float ftbl0mydspSIG0[65536];

class mydsp : public dsp {
	
 FAUSTPP_PRIVATE:
	
	FAUSTFLOAT fCheckbox0;
	FAUSTFLOAT fHslider0;
	FAUSTFLOAT fCheckbox1;
	FAUSTFLOAT fHslider1;
	int iVec0[2];
	FAUSTFLOAT fHslider2;
	int fSampleRate;
	float fConst0;
	float fConst1;
	float fRec2[2];
	FAUSTFLOAT fHslider3;
	FAUSTFLOAT fHslider4;
	FAUSTFLOAT fHslider5;
	FAUSTFLOAT fHslider6;
	FAUSTFLOAT fHslider7;
	float fRec0[2];
	float fRec3[2];
	float fVec1[2];
	int IOTA0;
	float fVec2[4096];
	float fConst2;
	float fConst3;
	float fRec4[2];
	float fConst4;
	FAUSTFLOAT fHslider8;
	float fConst5;
	float fRec6[2];
	FAUSTFLOAT fButton0;
	int iRec7[2];
	FAUSTFLOAT fHslider9;
	FAUSTFLOAT fHslider10;
	FAUSTFLOAT fHslider11;
	FAUSTFLOAT fHslider12;
	float fRec8[2];
	FAUSTFLOAT fHslider13;
	
 public:
	mydsp() {}

	void metadata(Meta* m) { 
		m->declare("basics.lib/name", "Faust Basic Element Library");
		m->declare("basics.lib/tabulateNd", "Copyright (C) 2023 Bart Brouns <bart@magnetophon.nl>");
		m->declare("basics.lib/version", "1.11.1");
		m->declare("compile_options", "-a /tmp/tmp4v4k6j1b.cpp -lang cpp -ct 1 -es 1 -mcd 16 -single -ftz 0");
		m->declare("filename", "voice.dsp");
		m->declare("filters.lib/lowpass0_highpass1", "MIT-style STK-4.3 license");
		m->declare("filters.lib/name", "Faust Filters Library");
		m->declare("filters.lib/pole:author", "Julius O. Smith III");
		m->declare("filters.lib/pole:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
		m->declare("filters.lib/pole:license", "MIT-style STK-4.3 license");
		m->declare("filters.lib/version", "1.3.0");
		m->declare("math.lib/author", "GRAME");
		m->declare("math.lib/copyright", "GRAME");
		m->declare("math.lib/deprecated", "This library is deprecated and is not maintained anymore. It will be removed in August 2017.");
		m->declare("math.lib/license", "LGPL with exception");
		m->declare("math.lib/name", "Math Library");
		m->declare("math.lib/version", "1.0");
		m->declare("maths.lib/author", "GRAME");
		m->declare("maths.lib/copyright", "GRAME");
		m->declare("maths.lib/license", "LGPL with exception");
		m->declare("maths.lib/name", "Faust Math Library");
		m->declare("maths.lib/version", "2.7.0");
		m->declare("music.lib/author", "GRAME");
		m->declare("music.lib/copyright", "GRAME");
		m->declare("music.lib/deprecated", "This library is deprecated and is not maintained anymore. It will be removed in August 2017.");
		m->declare("music.lib/license", "LGPL with exception");
		m->declare("music.lib/name", "Music Library");
		m->declare("music.lib/version", "1.0");
		m->declare("name", "voice");
		m->declare("oscillators.lib/lf_sawpos:author", "Bart Brouns, revised by Stéphane Letz");
		m->declare("oscillators.lib/lf_sawpos:licence", "STK-4.3");
		m->declare("oscillators.lib/name", "Faust Oscillator Library");
		m->declare("oscillators.lib/saw1:author", "Bart Brouns");
		m->declare("oscillators.lib/saw1:licence", "STK-4.3");
		m->declare("oscillators.lib/saw2ptr:author", "Julius O. Smith III");
		m->declare("oscillators.lib/saw2ptr:license", "STK-4.3");
		m->declare("oscillators.lib/sawN:author", "Julius O. Smith III");
		m->declare("oscillators.lib/sawN:license", "STK-4.3");
		m->declare("oscillators.lib/version", "1.4.0");
		m->declare("platform.lib/name", "Generic Platform Library");
		m->declare("platform.lib/version", "1.3.0");
	}

	FAUSTPP_VIRTUAL int getNumInputs() {
		return 0;
	}
	FAUSTPP_VIRTUAL int getNumOutputs() {
		return 1;
	}
	
	static void classInit(int sample_rate) {
		mydspSIG0* sig0 = newmydspSIG0();
		sig0->instanceInitmydspSIG0(sample_rate);
		sig0->fillmydspSIG0(65536, ftbl0mydspSIG0);
		deletemydspSIG0(sig0);
	}
	
	FAUSTPP_VIRTUAL void instanceConstants(int sample_rate) {
		fSampleRate = sample_rate;
		fConst0 = std::min<float>(1.92e+05f, std::max<float>(1.0f, float(fSampleRate)));
		fConst1 = 1.0f / fConst0;
		fConst2 = 0.5f * fConst0;
		fConst3 = 0.25f * fConst0;
		fConst4 = 1.76e+03f / fConst0;
		fConst5 = 4.4e+02f / fConst0;
	}
	
	FAUSTPP_VIRTUAL void instanceResetUserInterface() {
		fCheckbox0 = FAUSTFLOAT(0.0f);
		fHslider0 = FAUSTFLOAT(0.0f);
		fCheckbox1 = FAUSTFLOAT(0.0f);
		fHslider1 = FAUSTFLOAT(0.0f);
		fHslider2 = FAUSTFLOAT(0.0f);
		fHslider3 = FAUSTFLOAT(0.0f);
		fHslider4 = FAUSTFLOAT(0.0f);
		fHslider5 = FAUSTFLOAT(0.0f);
		fHslider6 = FAUSTFLOAT(49.0f);
		fHslider7 = FAUSTFLOAT(1.0f);
		fHslider8 = FAUSTFLOAT(0.0f);
		fButton0 = FAUSTFLOAT(0.0f);
		fHslider9 = FAUSTFLOAT(1.0f);
		fHslider10 = FAUSTFLOAT(1.0f);
		fHslider11 = FAUSTFLOAT(1.0f);
		fHslider12 = FAUSTFLOAT(0.0f);
		fHslider13 = FAUSTFLOAT(0.0f);
	}
	
	FAUSTPP_VIRTUAL void instanceClear() {
		for (int l0 = 0; l0 < 2; l0 = l0 + 1) {
			iVec0[l0] = 0;
		}
		for (int l1 = 0; l1 < 2; l1 = l1 + 1) {
			fRec2[l1] = 0.0f;
		}
		for (int l2 = 0; l2 < 2; l2 = l2 + 1) {
			fRec0[l2] = 0.0f;
		}
		for (int l3 = 0; l3 < 2; l3 = l3 + 1) {
			fRec3[l3] = 0.0f;
		}
		for (int l4 = 0; l4 < 2; l4 = l4 + 1) {
			fVec1[l4] = 0.0f;
		}
		IOTA0 = 0;
		for (int l5 = 0; l5 < 4096; l5 = l5 + 1) {
			fVec2[l5] = 0.0f;
		}
		for (int l6 = 0; l6 < 2; l6 = l6 + 1) {
			fRec4[l6] = 0.0f;
		}
		for (int l9 = 0; l9 < 2; l9 = l9 + 1) {
			fRec6[l9] = 0.0f;
		}
		for (int l10 = 0; l10 < 2; l10 = l10 + 1) {
			iRec7[l10] = 0;
		}
		for (int l11 = 0; l11 < 2; l11 = l11 + 1) {
			fRec8[l11] = 0.0f;
		}
	}
	
	FAUSTPP_VIRTUAL void init(int sample_rate) {
		classInit(sample_rate);
		instanceInit(sample_rate);
	}
	
	FAUSTPP_VIRTUAL void instanceInit(int sample_rate) {
		instanceConstants(sample_rate);
		instanceResetUserInterface();
		instanceClear();
	}
	
	FAUSTPP_VIRTUAL mydsp* clone() {
		return new mydsp();
	}
	
	FAUSTPP_VIRTUAL int getSampleRate() {
		return fSampleRate;
	}
	
	FAUSTPP_VIRTUAL void buildUserInterface(UI* ui_interface) {
		ui_interface->openVerticalBox("voice");
		ui_interface->addHorizontalSlider("attack", &fHslider12, FAUSTFLOAT(0.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(2.0f), FAUSTFLOAT(0.005f));
		ui_interface->addHorizontalSlider("decay", &fHslider11, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(4.0f), FAUSTFLOAT(0.01f));
		ui_interface->addHorizontalSlider("gain", &fHslider13, FAUSTFLOAT(0.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->addButton("gate", &fButton0);
		ui_interface->openVerticalBox("lfo1");
		ui_interface->addCheckButton("Lfo power", &fCheckbox1);
		ui_interface->addHorizontalSlider("lfo shape", &fHslider1, FAUSTFLOAT(0.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(1.0f));
		ui_interface->addHorizontalSlider("lfo_freq", &fHslider2, FAUSTFLOAT(0.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(6e+01f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->openVerticalBox("osc1");
		ui_interface->addCheckButton("Voice power", &fCheckbox0);
		ui_interface->declare(&fHslider4, "01", "");
		ui_interface->addHorizontalSlider("tune", &fHslider4, FAUSTFLOAT(0.0f), FAUSTFLOAT(-24.0f), FAUSTFLOAT(24.0f), FAUSTFLOAT(1.0f));
		ui_interface->declare(&fHslider5, "02", "");
		ui_interface->addHorizontalSlider("finetune", &fHslider5, FAUSTFLOAT(0.0f), FAUSTFLOAT(-1.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->addHorizontalSlider("duty", &fHslider8, FAUSTFLOAT(0.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.1f));
		ui_interface->addHorizontalSlider("kbd", &fHslider7, FAUSTFLOAT(1.0f), FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f), FAUSTFLOAT(0.1f));
		ui_interface->addHorizontalSlider("key", &fHslider6, FAUSTFLOAT(49.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(127.0f), FAUSTFLOAT(1.0f));
		ui_interface->addHorizontalSlider("lfo_to_p", &fHslider3, FAUSTFLOAT(0.0f), FAUSTFLOAT(-12.0f), FAUSTFLOAT(12.0f), FAUSTFLOAT(0.1f));
		ui_interface->addHorizontalSlider("shape", &fHslider0, FAUSTFLOAT(0.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(6.0f), FAUSTFLOAT(1.0f));
		ui_interface->closeBox();
		ui_interface->addHorizontalSlider("release", &fHslider10, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(4.0f), FAUSTFLOAT(0.01f));
		ui_interface->addHorizontalSlider("sustain", &fHslider9, FAUSTFLOAT(1.0f), FAUSTFLOAT(0.0f), FAUSTFLOAT(1.0f), FAUSTFLOAT(0.01f));
		ui_interface->closeBox();
	}
	
	FAUSTPP_VIRTUAL void compute(int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
		FAUSTFLOAT* output0 = outputs[0];
		int iSlow0 = int(float(fCheckbox0));
		float fSlow1 = float(fHslider0);
		int iSlow2 = fSlow1 >= 4.0f;
		int iSlow3 = fSlow1 >= 2.0f;
		int iSlow4 = fSlow1 >= 1.0f;
		int iSlow5 = int(float(fCheckbox1));
		int iSlow6 = float(fHslider1) >= 1.0f;
		float fSlow7 = fConst1 * float(fHslider2);
		float fSlow8 = float(fHslider3);
		float fSlow9 = float(fHslider7) * (float(fHslider6) + -69.0f) + float(fHslider5) + float(fHslider4);
		int iSlow10 = fSlow1 >= 3.0f;
		int iSlow11 = fSlow1 >= 6.0f;
		int iSlow12 = fSlow1 >= 5.0f;
		float fSlow13 = fConst0 * float(fHslider8);
		float fSlow14 = float(fButton0);
		int iSlow15 = fSlow14 > 0.0f;
		int iSlow16 = fSlow14 <= 0.0f;
		float fSlow17 = 1e+02f * float(fHslider9);
		float fSlow18 = fSlow17 + 0.001f * float(fSlow17 == 0.0f);
		float fSlow19 = float(fHslider10);
		float fSlow20 = 1.0f - 1.0f / std::pow(1e+03f * fSlow18, 1.0f / (float(fSlow19 == 0.0f) + fConst0 * fSlow19));
		float fSlow21 = float(fHslider11);
		float fSlow22 = 1.0f - std::pow(fSlow18, 1.0f / (float(fSlow21 == 0.0f) + fConst0 * fSlow21));
		float fSlow23 = float(fHslider12);
		float fSlow24 = 1.0f / (float(fSlow23 == 0.0f) + fConst0 * fSlow23);
		float fSlow25 = float(fHslider13);
		for (int i0 = 0; i0 < count; i0 = i0 + 1) {
			iVec0[0] = 1;
			int iTemp0 = 1 - iVec0[1];
			float fTemp1 = ((iTemp0) ? 0.0f : fSlow7 + fRec2[1]);
			fRec2[0] = fTemp1 - std::floor(fTemp1);
			float fTemp2 = std::pow(2.0f, 0.083333336f * (fSlow9 + fSlow8 * ((iSlow5) ? ((iSlow6) ? 2.0f * float(fRec2[0] <= 0.5f) + -1.0f : 2.0f * fRec2[0] + -1.0f) : 0.0f)));
			float fTemp3 = 4.4e+02f * fTemp2;
			float fTemp4 = std::max<float>(1.1920929e-07f, std::fabs(fTemp3));
			float fTemp5 = fRec0[1] + fConst1 * fTemp4;
			float fTemp6 = fTemp5 + -1.0f;
			int iTemp7 = fTemp6 < 0.0f;
			fRec0[0] = ((iTemp7) ? fTemp5 : fTemp6);
			float fRec1 = ((iTemp7) ? fTemp5 : fTemp5 + fTemp6 * (1.0f - fConst0 / fTemp4));
			float fTemp8 = 2.0f * fRec1;
			float fTemp9 = fTemp8 + -1.0f;
			float fTemp10 = std::max<float>(fTemp3, 23.44895f);
			float fTemp11 = std::max<float>(2e+01f, std::fabs(fTemp10));
			float fTemp12 = ((iTemp0) ? 0.0f : fRec3[1] + fConst1 * fTemp11);
			fRec3[0] = fTemp12 - std::floor(fTemp12);
			float fTemp13 = mydsp_faustpower2_f(2.0f * fRec3[0] + -1.0f);
			fVec1[0] = fTemp13;
			float fTemp14 = float(iVec0[1]) * (fTemp13 - fVec1[1]) / fTemp11;
			fVec2[IOTA0 & 4095] = fTemp14;
			float fTemp15 = std::max<float>(0.0f, std::min<float>(2047.0f, fConst2 / fTemp10));
			int iTemp16 = int(fTemp15);
			float fTemp17 = std::floor(fTemp15);
			float fTemp18 = (fTemp15 - fTemp17) * fVec2[(IOTA0 - (iTemp16 + 1)) & 4095];
			float fTemp19 = fVec2[(IOTA0 - iTemp16) & 4095] * (fTemp17 + (1.0f - fTemp15));
			fRec4[0] = fConst3 * (fTemp14 - fTemp19 - fTemp18) + 0.999f * fRec4[1];
			float fTemp20 = fConst4 * fRec4[0] * fTemp2;
			float fTemp21 = std::max<float>(0.0f, std::min<float>(2047.0f, fSlow13 / fTemp10));
			int iTemp22 = int(fTemp21);
			float fTemp23 = std::floor(fTemp21);
			float fTemp24 = ((iTemp0) ? 0.0f : fRec6[1] + fConst5 * fTemp2);
			fRec6[0] = fTemp24 - std::floor(fTemp24);
			iRec7[0] = iSlow15 & (iRec7[1] | (fRec8[1] >= 1.0f));
			int iTemp25 = iSlow16 & (fRec8[1] > 0.0f);
			fRec8[0] = (fSlow24 * float(((iRec7[1] == 0) & iSlow15) & (fRec8[1] < 1.0f)) + fRec8[1] * (1.0f - fSlow22 * float(iRec7[1] & (fRec8[1] > fSlow17)) - fSlow20 * float(iTemp25))) * float((iTemp25 == 0) | (fRec8[1] >= 1e-06f));
			output0[i0] = FAUSTFLOAT(std::min<float>(1.0f, std::max<float>(-1.0f, fSlow25 * fRec8[0] * ((iSlow0) ? ((iSlow2) ? ((iSlow11) ? ftbl0mydspSIG0[std::max<int>(0, std::min<int>(int(65536.0f * fRec6[0]), 65535))] : ((iSlow12) ? fConst3 * (fTemp14 - (fVec2[(IOTA0 - iTemp22) & 4095] * (fTemp23 + (1.0f - fTemp21)) + (fTemp21 - fTemp23) * fVec2[(IOTA0 - (iTemp22 + 1)) & 4095])) : 0.5f * (fTemp8 + fTemp20 + -1.0f))) : ((iSlow3) ? ((iSlow10) ? fTemp20 : fConst3 * (fTemp14 - (fTemp19 + fTemp18))) : ((iSlow4) ? -fTemp9 : fTemp9))) : 0.0f))));
			iVec0[1] = iVec0[0];
			fRec2[1] = fRec2[0];
			fRec0[1] = fRec0[0];
			fRec3[1] = fRec3[0];
			fVec1[1] = fVec1[0];
			IOTA0 = IOTA0 + 1;
			fRec4[1] = fRec4[0];
			fRec6[1] = fRec6[0];
			iRec7[1] = iRec7[0];
			fRec8[1] = fRec8[0];
		}
	}

};
FAUSTPP_END_NAMESPACE


#if defined(__GNUC__)
#   pragma GCC diagnostic pop
#endif



//------------------------------------------------------------------------------
// End the Faust code section




voice::voice()
{

    mydsp *dsp = new mydsp;
    fDsp.reset(dsp);
    dsp->instanceResetUserInterface();

}

voice::~voice()
{
}

void voice::init(float sample_rate)
{

    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.classInit(sample_rate);
    dsp.instanceConstants(sample_rate);
    clear();

}

void voice::clear() noexcept
{

    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.instanceClear();

}

void voice::process(
    
    float *out0,
    unsigned count) noexcept
{

    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    float *inputs[] = {
        
    };
    float *outputs[] = {
        out0,
    };
    dsp.compute(count, inputs, outputs);

}

const char *voice::parameter_label(unsigned index) noexcept
{
    switch (index) {
    
    case 0:
        return "attack";
    
    case 1:
        return "decay";
    
    case 2:
        return "gain";
    
    case 3:
        return "gate";
    
    case 4:
        return "Lfo power";
    
    case 5:
        return "lfo shape";
    
    case 6:
        return "lfo_freq";
    
    case 7:
        return "Voice power";
    
    case 8:
        return "tune";
    
    case 9:
        return "finetune";
    
    case 10:
        return "duty";
    
    case 11:
        return "kbd";
    
    case 12:
        return "key";
    
    case 13:
        return "lfo_to_p";
    
    case 14:
        return "shape";
    
    case 15:
        return "release";
    
    case 16:
        return "sustain";
    
    default:
        return 0;
    }
}

const char *voice::parameter_short_label(unsigned index) noexcept
{
    switch (index) {
    
    case 0:
        return "";
    
    case 1:
        return "";
    
    case 2:
        return "";
    
    case 3:
        return "";
    
    case 4:
        return "";
    
    case 5:
        return "";
    
    case 6:
        return "";
    
    case 7:
        return "";
    
    case 8:
        return "";
    
    case 9:
        return "";
    
    case 10:
        return "";
    
    case 11:
        return "";
    
    case 12:
        return "";
    
    case 13:
        return "";
    
    case 14:
        return "";
    
    case 15:
        return "";
    
    case 16:
        return "";
    
    default:
        return 0;
    }
}

const char *voice::parameter_symbol(unsigned index) noexcept
{
    switch (index) {
    
    case 0:
        return "attack";
    
    case 1:
        return "decay";
    
    case 2:
        return "gain";
    
    case 3:
        return "gate";
    
    case 4:
        return "Lfo_power";
    
    case 5:
        return "lfo_shape";
    
    case 6:
        return "lfo_freq";
    
    case 7:
        return "Voice_power";
    
    case 8:
        return "tune";
    
    case 9:
        return "finetune";
    
    case 10:
        return "duty";
    
    case 11:
        return "kbd";
    
    case 12:
        return "key";
    
    case 13:
        return "lfo_to_p";
    
    case 14:
        return "shape";
    
    case 15:
        return "release";
    
    case 16:
        return "sustain";
    
    default:
        return 0;
    }
}

const char *voice::parameter_unit(unsigned index) noexcept
{
    switch (index) {
    
    case 0:
        return "";
    
    case 1:
        return "";
    
    case 2:
        return "";
    
    case 3:
        return "";
    
    case 4:
        return "";
    
    case 5:
        return "";
    
    case 6:
        return "";
    
    case 7:
        return "";
    
    case 8:
        return "";
    
    case 9:
        return "";
    
    case 10:
        return "";
    
    case 11:
        return "";
    
    case 12:
        return "";
    
    case 13:
        return "";
    
    case 14:
        return "";
    
    case 15:
        return "";
    
    case 16:
        return "";
    
    default:
        return 0;
    }
}

const voice::ParameterRange *voice::parameter_range(unsigned index) noexcept
{
    switch (index) {
    
    case 0: {
        static const ParameterRange range = { 0.0, 0.0, 2.0 };
        return &range;
    }
    
    case 1: {
        static const ParameterRange range = { 1.0, 0.0, 4.0 };
        return &range;
    }
    
    case 2: {
        static const ParameterRange range = { 0.0, 0.0, 1.0 };
        return &range;
    }
    
    case 3: {
        static const ParameterRange range = { 0, 0, 1 };
        return &range;
    }
    
    case 4: {
        static const ParameterRange range = { 0, 0, 1 };
        return &range;
    }
    
    case 5: {
        static const ParameterRange range = { 0.0, 0.0, 1.0 };
        return &range;
    }
    
    case 6: {
        static const ParameterRange range = { 0.0, 0.0, 60.0 };
        return &range;
    }
    
    case 7: {
        static const ParameterRange range = { 0, 0, 1 };
        return &range;
    }
    
    case 8: {
        static const ParameterRange range = { 0.0, -24.0, 24.0 };
        return &range;
    }
    
    case 9: {
        static const ParameterRange range = { 0.0, -1.0, 1.0 };
        return &range;
    }
    
    case 10: {
        static const ParameterRange range = { 0.0, 0.0, 1.0 };
        return &range;
    }
    
    case 11: {
        static const ParameterRange range = { 1.0, -12.0, 12.0 };
        return &range;
    }
    
    case 12: {
        static const ParameterRange range = { 49.0, 1.0, 127.0 };
        return &range;
    }
    
    case 13: {
        static const ParameterRange range = { 0.0, -12.0, 12.0 };
        return &range;
    }
    
    case 14: {
        static const ParameterRange range = { 0.0, 0.0, 6.0 };
        return &range;
    }
    
    case 15: {
        static const ParameterRange range = { 1.0, 0.0, 4.0 };
        return &range;
    }
    
    case 16: {
        static const ParameterRange range = { 1.0, 0.0, 1.0 };
        return &range;
    }
    
    default:
        return 0;
    }
}

bool voice::parameter_is_trigger(unsigned index) noexcept
{
    switch (index) {
    
    case 3:
        return true;
    
    default:
        return false;
    }
}

bool voice::parameter_is_boolean(unsigned index) noexcept
{
    switch (index) {
    
    case 3:
        return true;
    
    case 4:
        return true;
    
    case 7:
        return true;
    
    default:
        return false;
    }
}

bool voice::parameter_is_integer(unsigned index) noexcept
{
    switch (index) {
    
    case 3:
        return true;
    
    case 4:
        return true;
    
    case 7:
        return true;
    
    default:
        return false;
    }
}

bool voice::parameter_is_logarithmic(unsigned index) noexcept
{
    switch (index) {
    
    default:
        return false;
    }
}

float voice::get_parameter(unsigned index) const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    switch (index) {
    
    case 0:
        return dsp.fHslider12;
    
    case 1:
        return dsp.fHslider11;
    
    case 2:
        return dsp.fHslider13;
    
    case 3:
        return dsp.fButton0;
    
    case 4:
        return dsp.fCheckbox1;
    
    case 5:
        return dsp.fHslider1;
    
    case 6:
        return dsp.fHslider2;
    
    case 7:
        return dsp.fCheckbox0;
    
    case 8:
        return dsp.fHslider4;
    
    case 9:
        return dsp.fHslider5;
    
    case 10:
        return dsp.fHslider8;
    
    case 11:
        return dsp.fHslider7;
    
    case 12:
        return dsp.fHslider6;
    
    case 13:
        return dsp.fHslider3;
    
    case 14:
        return dsp.fHslider0;
    
    case 15:
        return dsp.fHslider10;
    
    case 16:
        return dsp.fHslider9;
    
    default:
        (void)dsp;
        return 0;
    }
}

void voice::set_parameter(unsigned index, float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    switch (index) {
    
    case 0:
        dsp.fHslider12 = value;
        break;
    
    case 1:
        dsp.fHslider11 = value;
        break;
    
    case 2:
        dsp.fHslider13 = value;
        break;
    
    case 3:
        dsp.fButton0 = value;
        break;
    
    case 4:
        dsp.fCheckbox1 = value;
        break;
    
    case 5:
        dsp.fHslider1 = value;
        break;
    
    case 6:
        dsp.fHslider2 = value;
        break;
    
    case 7:
        dsp.fCheckbox0 = value;
        break;
    
    case 8:
        dsp.fHslider4 = value;
        break;
    
    case 9:
        dsp.fHslider5 = value;
        break;
    
    case 10:
        dsp.fHslider8 = value;
        break;
    
    case 11:
        dsp.fHslider7 = value;
        break;
    
    case 12:
        dsp.fHslider6 = value;
        break;
    
    case 13:
        dsp.fHslider3 = value;
        break;
    
    case 14:
        dsp.fHslider0 = value;
        break;
    
    case 15:
        dsp.fHslider10 = value;
        break;
    
    case 16:
        dsp.fHslider9 = value;
        break;
    
    default:
        (void)dsp;
        (void)value;
        break;
    }
}


float voice::get_attack() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fHslider12;
}

float voice::get_decay() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fHslider11;
}

float voice::get_gain() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fHslider13;
}

float voice::get_gate() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fButton0;
}

float voice::get_Lfo_power() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fCheckbox1;
}

float voice::get_lfo_shape() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fHslider1;
}

float voice::get_lfo_freq() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fHslider2;
}

float voice::get_Voice_power() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fCheckbox0;
}

float voice::get_tune() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fHslider4;
}

float voice::get_finetune() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fHslider5;
}

float voice::get_duty() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fHslider8;
}

float voice::get_kbd() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fHslider7;
}

float voice::get_key() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fHslider6;
}

float voice::get_lfo_to_p() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fHslider3;
}

float voice::get_shape() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fHslider0;
}

float voice::get_release() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fHslider10;
}

float voice::get_sustain() const noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    return dsp.fHslider9;
}


void voice::set_attack(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fHslider12 = value;
}

void voice::set_decay(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fHslider11 = value;
}

void voice::set_gain(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fHslider13 = value;
}

void voice::set_gate(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fButton0 = value;
}

void voice::set_Lfo_power(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fCheckbox1 = value;
}

void voice::set_lfo_shape(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fHslider1 = value;
}

void voice::set_lfo_freq(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fHslider2 = value;
}

void voice::set_Voice_power(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fCheckbox0 = value;
}

void voice::set_tune(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fHslider4 = value;
}

void voice::set_finetune(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fHslider5 = value;
}

void voice::set_duty(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fHslider8 = value;
}

void voice::set_kbd(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fHslider7 = value;
}

void voice::set_key(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fHslider6 = value;
}

void voice::set_lfo_to_p(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fHslider3 = value;
}

void voice::set_shape(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fHslider0 = value;
}

void voice::set_release(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fHslider10 = value;
}

void voice::set_sustain(float value) noexcept
{
    mydsp &dsp = static_cast<mydsp &>(*fDsp);
    dsp.fHslider9 = value;
}



