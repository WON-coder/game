#pragma once
#include "Scene.h"
#include "Sprite.h"
#include "GameScene.h"
class CharacterScene :
	public Scene
{
public:
	CharacterScene();
	~CharacterScene();

	Sprite* background;
	Sprite* dong;
	Sprite* triangle;
	Sprite* rectangle;

	void Render();
	void Update(float dTime);
};

