#pragma once

#include "ofMain.h"

struct Ball {
    int x;
    int y;
    int vx;
    int vy;
    int radius;
};

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
        void KeyPressed(int key);
    
    Ball balls[20];
    
};
