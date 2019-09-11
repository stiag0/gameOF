
#pragma once

#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>

#include "ofMain.h"

class Player {
public:
    ofPoint pos;
    float width, height, speed, h, w;
    int lives;
    
    bool is_left_pressed, is_right_pressed, is_down_pressed, is_up_pressed, rotate_left, rotate_right, mini;
    
    void setup(ofImage * _img, ofPoint _pos);
    void update();
    void draw();
    void shoot();
    
    void calculate_movement();
    
    bool check_canshoot();
    
    ofImage * img;
	ofParameter<float> rotateX;
	float rotationX;
};


#endif /* Player_hpp */
