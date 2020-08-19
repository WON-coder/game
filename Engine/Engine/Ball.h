#pragma once
#include "Object.h"
#include "Sprite.h"


class Ball :
	public Object
{
private:
	Sprite* ball;
	int diffX, diffY;
public:
	Ball();
	~Ball();

	void Update(float dTime);
	void Render();

};

