
#include "Enemy.hpp"

void Enemy::setup(float max_enemy_amplitude, float max_enemy_shoot_interval, ofImage * enemy_image) {
	if (ofRandom(2)>1){
		pos.x = ofRandom(ofGetWidth());
		pos.y = 200;
	}
	else{
		pos.x = ofRandom(ofGetWidth());
		pos.y = 600;
	}
	
	img = enemy_image;
    width = img->getWidth();
    speed = 2.5;
    amplitude = ofRandom(max_enemy_amplitude);
    shoot_interval = ofRandom(0.5, max_enemy_shoot_interval);
    start_shoot = ofGetElapsedTimef();
    backnforth = 0;
}
void Enemy::update() {
    pos.y += amplitude * cos(ofGetElapsedTimef());
    pos.x += amplitude * sin(ofGetElapsedTimef());

}
void Enemy::draw() {
    img->draw(pos.x - width/2, pos.y - width/2);
}
bool Enemy::time_to_shoot() {
    if (ofGetElapsedTimef() - start_shoot > shoot_interval) {
        start_shoot = ofGetElapsedTimef();
        return true;
    }
    return false;
}
