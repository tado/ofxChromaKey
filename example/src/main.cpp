#include "ofMain.h"
#include "ofApp.h"

// use GLSL ver 150
int main( ){
    ofGLFWWindowSettings settings;
    settings.setGLVersion(3, 2);
    settings.width = 1280;
    settings.height = 720;
    ofCreateWindow(settings);
    ofRunApp(new ofApp());
}

/*
// use GLSL ver 120
int main( ){
	ofSetupOpenGL(1280,720,OF_WINDOW);
	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}
*/
