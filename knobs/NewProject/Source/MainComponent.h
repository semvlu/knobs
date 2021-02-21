#pragma once

#include <JuceHeader.h>

class OtherLookAndFeel : public juce::LookAndFeel_V4
{
public:
    void drawRotarySlider (juce::Graphics &g, int x, int y, int width, int height, float sliderPos, float rotaryStartAngle, float rotaryEndAngle, juce::Slider &slider) override
    {
        float diameter = fmin(50, 50);
        float radius = diameter /2;
        float centreX = x + width/2;
        float centreY = y + height/2;
        float rx = centreX - radius;
        float ry = centreY - radius;
        float angle = rotaryStartAngle + (sliderPos * (rotaryEndAngle - rotaryStartAngle));
        
        std::cout << rotaryStartAngle << " " << rotaryEndAngle << std::endl;
        
        //knobarea
        juce::Rectangle<float> dialArea (rx, ry, diameter, diameter);
        g.setColour(juce::Colours::blanchedalmond);
        
        //pointer
        g.fillEllipse(dialArea);
        g.setColour(juce::Colours::indigo);
        
        juce::Path dialTick;
        dialTick.addRectangle(0, -radius, 6.0f, radius * 0.84);
        g.fillPath(dialTick);
        g.fillPath(dialTick, juce::AffineTransform::rotation(angle).translated(centreX, centreY));
        
        //knob_edge
        g.setColour(juce::Colours::cornsilk);
        g.drawEllipse(rx, ry, diameter, diameter, 5.0f);
    }
    
};
class MainComponent  : public juce::Component
{
public:
    //==============================================================================
    MainComponent();
    ~MainComponent() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    juce::Slider dial1;
    juce::Slider dial2;
    juce::Slider dial3;
    juce::Slider dial4;
    OtherLookAndFeel otherLookAndFeel;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};
