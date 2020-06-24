#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(0, 0, 0);
    ofSetBackgroundAuto(false);

    for(int i = 0;i <num;i++){
        pos[i].set(ofRandom(ofGetWidth()),ofRandom(ofGetHeight()));
        vel[i].set(ofRandom(-1,1),ofRandom(-1,1));
        col[i].set(ofRandom(255),ofRandom(255),ofRandom(255),ofRandom(30,100));
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i=0;i<num;i++){
        pos[i] = pos[i] + vel[i];
    }
    
    for (int i=0; i<num; i++) {
        if(pos[i].x > ofGetWidth() || pos[i].x < 0){
            vel[i].x = vel[i].x * -1.0;
        }
        if(pos[i].y > ofGetHeight() || pos[i].y < 0){
            vel[i].y = vel[i].y * -1.0;
        }
    }
    
//    for (int i = 0; i<num; i++) {
//
//    if(pos[i].x > ofGetWidth()){
//        pos[i].x = 0.0;
//    }
//    if(pos[i].x < 0){
//        pos[i].x = ofGetWidth();
//    }
//    if(pos[i].y > ofGetHeight()){
//        pos[i].y = 0.0;
//    }
//    if(pos[i].y < 0){
//        pos[i].y = ofGetHeight();
//    }
//    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    for (int i = 0; i< num; i++) {
        ofSetColor(255,0,0);
        ofDrawCircle(pos[i].x, pos[i].y, 0.01);
    }
    for (int i = 0; i<num; i++) {
        for (int j = 0; j<num; j++) {
            float dist = pos[i].distance(pos[j]);
            if(dist < 70){
                ofSetColor(255,0,0,1);
//                ofSetColor(col[i]);
                ofDrawLine(pos[i].x, pos[i].y, pos[j].x, pos[j].y);
            }
        }
    }
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
