#include "MainComponent.h"


MainComponent::MainComponent()
{
    setSize (600, 400);
    
    addAndMakeVisible(dial1);
    dial1.setSliderStyle(juce::Slider::SliderStyle::RotaryHorizontalVerticalDrag);
    dial1.setTextBoxStyle(juce::Slider::NoTextBox, false, 0, 0);
    dial1.setLookAndFeel(&otherLookAndFeel);
    
    addAndMakeVisible(dial2);
    dial2.setSliderStyle(juce::Slider::SliderStyle::RotaryHorizontalVerticalDrag);
    dial2.setTextBoxStyle(juce::Slider::NoTextBox, false, 0, 0);
    dial2.setLookAndFeel(&otherLookAndFeel);
    
    addAndMakeVisible(dial3);
    dial3.setSliderStyle(juce::Slider::SliderStyle::RotaryHorizontalVerticalDrag);
    dial3.setTextBoxStyle(juce::Slider::NoTextBox, false, 0, 0);
    dial3.setLookAndFeel(&otherLookAndFeel);
    
    addAndMakeVisible(dial4);
    dial4.setSliderStyle(juce::Slider::SliderStyle::RotaryHorizontalVerticalDrag);
    dial4.setTextBoxStyle(juce::Slider::NoTextBox, false, 0, 0);
    dial4.setLookAndFeel(&otherLookAndFeel);
}

MainComponent::~MainComponent()
{
    
}

void MainComponent::paint (juce::Graphics& g)
{
    g.fillAll(juce::Colours::steelblue);
    
}

void MainComponent::resized()
{
    dial1.setBounds(150, 250, 200, 200);
    dial2.setBounds(250, 250, 200, 200);
    dial3.setBounds(350, 250, 200, 200);
    dial4.setBounds(450, 250, 200, 200);



}
