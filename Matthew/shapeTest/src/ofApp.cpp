#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    Shape s = Shape();
    Shape t = Shape();
    float an1, an2, an3;
    an1 =s.getAngle(0);
    an2 =s.getAngle(1);
    an3 =s.getAngle(2);
    
    float tot = an1+an2+an3;
    
    t.setVertex(2, 200, 90);
    
    cout<<"s angles:"<<s.getAngle(0)<<", "<<s.getAngle(1)<<", "<<s.getAngle(2)<<endl;
    cout<<"t angles:"<<t.getAngle(0)<<", "<<t.getAngle(1)<<", "<<t.getAngle(2)<<endl;
    
    
    if(s.compare(t)){
        cout<<"True"<<endl;
    } else{
        cout<<"False"<<endl;
    }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

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