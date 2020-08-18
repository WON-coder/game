#include "stdafx.h"
#include "Score.h"

Score::Score() {
	currentScore = 0;

	score[0] = new Sprite("Resources/Image/num-0.png");
	score[1] = new Sprite("Resources/Image/num-1.png");
	score[2] = new Sprite("Resources/Image/num-2.png");
	score[3] = new Sprite("Resources/Image/num-3.png");
	score[4] = new Sprite("Resources/Image/num-4.png");
	score[5] = new Sprite("Resources/Image/num-5.png");
	score[6] = new Sprite("Resources/Image/num-6.png");
	score[7] = new Sprite("Resources/Image/num-7.png");
	score[8] = new Sprite("Resources/Image/num-8.png");
	score[9] = new Sprite("Resources/Image/num-9.png");

	for (int i = 0; i < 10; i++) {
		AddChild(score[i]);
	}
}

Score::~Score() {
	for (int i = 0; i < 10; i++) {
		SAFE_DELETE(score[i]);
	}
}

void Score::Render() {
	Object::Render();
	score[currentScore]->Render();
}

void Score::Update(float dTime) {
	Object::Update(dTime);


}

void Score::setScore(int score) {
	currentScore = score;
}

int Score::getScore() {
	return currentScore;
}