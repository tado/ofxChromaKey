#pragma once
#include "ofMain.h"

class ofxChromaKey {
public:
    ofxChromaKey();
    void draw();
    void begin();
    void end();
    
    ofShader shader;
    ofColor keyColor;
    float threshold;
};