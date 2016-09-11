#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0, 0, 0);
    
    for (int i=0; i<20; i++) {
        balls[i].x = ofRandomWidth();
        balls[i].y = ofRandomHeight();
        balls[i].vx = ofRandom(-15,15);
        balls[i].vy = ofRandom(-15,15);
        balls[i].radius = ofRandom(20,60);
    }

}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i=0; i<20; i++) {
        balls[i].x = balls[i].x + balls[i].vx;
        balls[i].y = balls[i].y + balls[i].vy;
        
        if (balls[i].x<0 || balls[i].x > ofGetWidth()) {
            balls[i].vx = -balls[i].vx;
        }
        
        if (balls[i].y<0 || balls[i].y > ofGetHeight()) {
            balls[i].vy = -balls[i].vy;
        }
        
        
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
   // for (int i=0; i<10; i++) {
   //     ofSetColor(255, 255, 0);
   //     ofDrawCircle(balls[i].x, balls[i], balls[i].radius);
   // }
        for (int i=0; i<20; i++) {
            ofSetColor(0, ofRandom(100,155), 0);
            ofCircle(balls[i].x, balls[i].y, balls[i].radius);
        }
}

//--------------------------------------------------------------
void ofApp::KeyPressed(int key){
    
}