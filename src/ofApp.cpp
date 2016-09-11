#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundAuto(false);
    ofBackground(0,0,0);
    ofEnableAlphaBlending();
    ofSetFrameRate(150);
    
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

        for (int i=0; i<20; i++) {
            ofSetColor(0,0,0,20);
            ofRect(0,0,ofGetWidth(),ofGetHeight());
            //ofSetColor(255,255,255,50);
            //ofCircle(mouseX, mouseY, 20);
            ofSetColor(0, ofRandom(100,155), 0);
            ofCircle(balls[i].x, balls[i].y, balls[i].radius);
        }
}

//--------------------------------------------------------------
void ofApp::KeyPressed(int key){
    
}