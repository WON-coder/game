#pragma once
#include "Scene.h"
#include "Sprite.h"
#include <list>
#include <time.h>
#include "Ball.h"
#include "Player.h"
#include "Score.h"
class GameScene :
	public Scene
{
private:
	int start, now;
	int ballNum;
	int score;
	Player* player;
	Score* scoreArray[4];
	Ball* ballArray[31];

public:
	GameScene(int ballNum);
	~GameScene();

	void Render();
	void Update(float dTime);
};

