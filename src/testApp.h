#ifndef _TEST_APP
#define _TEST_APP

#include "ofxOpenNI.h"
#include "ofMain.h"
#include "ofxOsc.h"

#define HOST "localhost"
#define PORT 12345

class testApp : public ofBaseApp{

public:
    
	void setup();
	void update();
	void draw();
    void exit();
    
	void keyPressed  (int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y );
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void windowResized(int w, int h);

    void userEvent(ofxOpenNIUserEvent & event);
   
    ofxOscSender sender;
    ofxOscMessage m;

	ofxOpenNI openNIDevice;
    ofPoint head;
    ofPoint leftHand;
    ofPoint rightHand;
    ofPoint leftFoot;
    ofPoint rightFoot;
    ofPoint torso;
    int array_size;
    int a;
    int b,c,CX1,CY1,CX2,CY2;
    
    vector<ofPoint> array_head;
    vector<ofPoint> array_leftHand;
    vector<ofPoint> array_rightHand;
    vector<ofPoint> array_leftFoot;
    vector<ofPoint> array_rightFoot;
    vector<ofPoint> array_torso;
    
    ofTrueTypeFont verdana;
    
    ofSoundPlayer   re;
    ofSoundPlayer   so;
    ofSoundPlayer   la,Do,Do2,Mi;
    ofImage bg;
    
    int nCurveVertices;
    
};

#endif
