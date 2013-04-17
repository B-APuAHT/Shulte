#include "ofMain.h"
#include "testApp.h"
#include "ofAppGlutWindow.h"

//========================================================================
int main( ){
    int windowH = 500;
    int windowW = 500;

    ofAppGlutWindow window;
	ofSetupOpenGL(&window, windowW, windowH, OF_WINDOW);			// <-------- setup the GL context
    glShadeModel(GL_SMOOTH);
    window.setWindowTitle("Таблица Шульте");
	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp( new testApp());

}
