#pragma once
#include "Scene.h"
#include "Sprite.h"
#include "GameScene.h"
class LevelScene :
	public Scene
{
public:
	LevelScene();
	~LevelScene();

	void Render();
	void Update(float dTime);

	Sprite* levelOneButton;
	Sprite* levelTwoButton;
	Sprite* levelThreeButton;
};

