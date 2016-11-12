#pragma once

#include "ofMain.h"
#include "Smooth.h"

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    void audioOut(ofSoundBuffer &outBuffer);
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    double wavePhase;
    double pulsePhase;
    double sampleRate;
    
    mutex audioMutex;
    ofSoundBuffer lastBuffer;
    ofPolyline waveform;
    float rms;
    float randomness = 0;
    Smooth smooth[3];
};
