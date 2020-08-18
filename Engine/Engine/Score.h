#pragma once
#include "Object.h"
#include "Sprite.h"
class Score :
	public Object
{
private:
	Sprite* score[10];
	int currentScore;
public:
	Score();
	~Score();

	void Update(float dTime);
	void Render();

	void setScore(int num);
	int getScore();
};

