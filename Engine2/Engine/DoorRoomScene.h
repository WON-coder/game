#pragma once
#include "Scene.h"
#include "Sprite.h"
class DoorRoomScene :
	public Scene
{
public:
	DoorRoomScene();
	~DoorRoomScene();

	void Render();
	void Update(float dTime);


};

