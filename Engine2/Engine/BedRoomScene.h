#pragma once
#include "Scene.h"
#include "Sprite.h"
class BedRoomScene :
	public Scene
{
public:
	BedRoomScene();
	~BedRoomScene();

	void Render();
	void Update(float dTime);

	Sprite* basket;
	Sprite* fox;
	Sprite* bege;
};

