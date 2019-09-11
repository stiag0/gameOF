
#include "Player.hpp"
#include "ofApp.hpp"

//--------------------------------------------------------------
void Player::setup(ofImage * _img, ofPoint _pos){
    img = _img;
    height = img->getHeight();
    width = img->getWidth();
    pos.set(_pos);
    speed = 2.8;
    lives = 7;
	rotationX = 0.0;
	//_img.add(rotateX.set("x", 0.0, 0.0, 9.0));

}

//--------------------------------------------------------------
void Player::update(){
	rotationX = rotationX + rotateX;
    if (is_up_pressed)
        pos.y -= speed;
    if (is_down_pressed)
        pos.y += speed;
    if (is_left_pressed)
        pos.x -= speed;
    if (is_right_pressed)
        pos.x += speed;
	if (mini) {
		h = height / 2;
		w = width / 2;
	}else{
		h = height;
		w = width;
	}
	if (rotate_left)
	{

	}
}

//--------------------------------------------------------------
void Player::draw(){
    img->draw(pos.x - width/2,pos.y - height/2,w,h);
}

//--------------------------------------------------------------
void Player::shoot(){
}
