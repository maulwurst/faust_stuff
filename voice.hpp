
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






#pragma once
#ifndef voice_Faust_pp_Gen_HPP_
#define voice_Faust_pp_Gen_HPP_

#include <memory>

class voice {
public:
    voice();
    ~voice();

    void init(float sample_rate);
    void clear() noexcept;

    void process(
        
        float *out0,
        unsigned count) noexcept;

    enum { NumInputs = 0 };
    enum { NumOutputs = 1 };
    enum { NumActives = 17 };
    enum { NumPassives = 0 };
    enum { NumParameters = 17 };

    enum Parameter {
        p_attack,
        p_decay,
        p_gain,
        p_gate,
        p_Lfo_power,
        p_lfo_shape,
        p_lfo_freq,
        p_Voice_power,
        p_tune,
        p_finetune,
        p_duty,
        p_kbd,
        p_key,
        p_lfo_to_p,
        p_shape,
        p_release,
        p_sustain,
        
    };

    struct ParameterRange {
        float init;
        float min;
        float max;
    };

    static const char *parameter_label(unsigned index) noexcept;
    static const char *parameter_short_label(unsigned index) noexcept;
    static const char *parameter_symbol(unsigned index) noexcept;
    static const char *parameter_unit(unsigned index) noexcept;
    static const ParameterRange *parameter_range(unsigned index) noexcept;
    static bool parameter_is_trigger(unsigned index) noexcept;
    static bool parameter_is_boolean(unsigned index) noexcept;
    static bool parameter_is_integer(unsigned index) noexcept;
    static bool parameter_is_logarithmic(unsigned index) noexcept;

    float get_parameter(unsigned index) const noexcept;
    void set_parameter(unsigned index, float value) noexcept;

    
    float get_attack() const noexcept;
    
    float get_decay() const noexcept;
    
    float get_gain() const noexcept;
    
    float get_gate() const noexcept;
    
    float get_Lfo_power() const noexcept;
    
    float get_lfo_shape() const noexcept;
    
    float get_lfo_freq() const noexcept;
    
    float get_Voice_power() const noexcept;
    
    float get_tune() const noexcept;
    
    float get_finetune() const noexcept;
    
    float get_duty() const noexcept;
    
    float get_kbd() const noexcept;
    
    float get_key() const noexcept;
    
    float get_lfo_to_p() const noexcept;
    
    float get_shape() const noexcept;
    
    float get_release() const noexcept;
    
    float get_sustain() const noexcept;
    
    
    void set_attack(float value) noexcept;
    
    void set_decay(float value) noexcept;
    
    void set_gain(float value) noexcept;
    
    void set_gate(float value) noexcept;
    
    void set_Lfo_power(float value) noexcept;
    
    void set_lfo_shape(float value) noexcept;
    
    void set_lfo_freq(float value) noexcept;
    
    void set_Voice_power(float value) noexcept;
    
    void set_tune(float value) noexcept;
    
    void set_finetune(float value) noexcept;
    
    void set_duty(float value) noexcept;
    
    void set_kbd(float value) noexcept;
    
    void set_key(float value) noexcept;
    
    void set_lfo_to_p(float value) noexcept;
    
    void set_shape(float value) noexcept;
    
    void set_release(float value) noexcept;
    
    void set_sustain(float value) noexcept;
    

public:
    class BasicDsp;

private:
    std::unique_ptr<BasicDsp> fDsp;



};




#endif // voice_Faust_pp_Gen_HPP_