#pragma once

#define NUM 5

#include "ofMain.h"

class Shulte {

    public:
        void setup();
        void draw();
        void mix();

    private:
        void swap(int &a, int &b);

        int table[NUM][NUM];
        int tileSize;
        ofTrueTypeFont	tileValue;
};

class testApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed  (int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		Shulte shulte;
};


