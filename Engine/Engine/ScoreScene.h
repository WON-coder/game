#pragma once
#include "Scene.h"
#include "Sprite.h"
#include "Score.h"
class ScoreScene :
	public Scene
{
public:
	ScoreScene(int score);
	~ScoreScene();

	void Render();
	void Update(float dTime);

	Sprite* background;
	Sprite* mainButton;

	Score* scoreArray[4];
};

