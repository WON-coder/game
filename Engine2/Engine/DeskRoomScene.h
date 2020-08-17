#pragma once
#include "Scene.h"
#include "Sprite.h"
class DeskRoomScene :
	public Scene
{
public:
	DeskRoomScene();
	~DeskRoomScene();

	void Render();
	void Update(float dTime);

	Sprite* date;
};

