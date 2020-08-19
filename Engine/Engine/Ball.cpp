#include "stdafx.h"
#include "Ball.h"
#include "Sprite.h"

Ball::Ball() {
	if (rand() % 3 == 2) {
		ball = new Sprite("Resources/Image/ball1.png");
	}
	else if (rand() % 2) {
		ball = new Sprite("Resources/Image/ball2.png");
	}
	else {
		ball = new Sprite("Resources/Image/ball3.png");
	}

	AddChild(ball);
	diffX = 7;
	diffY = 7;

	if (rand() % 10 + 1 > 4) {
		diffX *= -1;
	}
	if (rand() % 10 + 1 > 4) {
		diffY *= -1;
	}

	rect = ball->getRect();
}

Ball::~Ball() {

}

void Ball::Render() {
	Object::Render();
	ball->Render();
}

void Ball::Update(float dTime) {
	if (getPosX() >= 1000 || getPosX() <= 0) {
		diffX *= -1;
	}
	if (getPosY() >= 700 || getPosY() <= 0) {
		diffY *= -1;
	}
	setPos(getPosX() + diffX, getPosY() + diffY);
}