#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetFrameRate(60);
    ofBackground(255,255,255);
    ofSetColor(0,0,0);
    srand(time(NULL));
    shulte.setup();
    shulte.mix();
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    shulte.draw();
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){

}

//--------------------------------------------------------------
void Shulte::setup(){
    for (int i = 0; i < NUM; i++)
        for (int j = 0; j < NUM; j++)
            table[i][j] = i * NUM + j + 1;
    tileSize = (int)(ofGetWindowWidth() / NUM);
    tileValue.loadFont("verdana.ttf", 30, true, true);
	tileValue.setLineHeight(34.0f);
	tileValue.setLetterSpacing(1.035);
}

//--------------------------------------------------------------
void Shulte::draw(){
    string caption;
    ofPoint textPos;

    for (int i = 0; i < NUM + 1; i ++){
        ofLine(0, i * tileSize, NUM * tileSize, i * tileSize); //horizontal line
        ofLine(i * tileSize, 0, i * tileSize, NUM * tileSize); //vertical line
    }

    for (int i = 0; i < NUM; i++)
        for (int j = 0; j < NUM; j++){
            caption = ofToString(table[i][j]);
            textPos.x = tileSize * i + tileSize / 2 - tileValue.getSize();
            textPos.y = tileSize * j + tileSize / 2 + tileValue.getLineHeight() / 2;
            tileValue.drawString(caption, textPos.x, textPos.y);
        }
}

//--------------------------------------------------------------
void Shulte::mix(){
    for (int i = 0; i < NUM; i++)
        for (int j = 0; j < NUM; j++)
            swap(table[i][j], table[rand() % NUM][rand() % NUM]);
}

//--------------------------------------------------------------
void Shulte::swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
