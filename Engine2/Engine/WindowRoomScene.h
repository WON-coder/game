#pragma once
#include "Scene.h"
#include "Sprite.h"
class WindowRoomScene :
	public Scene
{
public:
	WindowRoomScene();
	~WindowRoomScene();
	
	void Render();
	void Update(float dTime);

	Sprite* plant;
};

