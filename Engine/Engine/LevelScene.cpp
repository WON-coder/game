#include "stdafx.h"
#include "LevelScene.h"

LevelScene::LevelScene() {
	levelOneButton = new Sprite("Resources/Image/level1.png");
	AddObject(levelOneButton);
	levelOneButton->setPos(300, 100);

	levelTwoButton = new Sprite("Resources/Image/level2.png");
	AddObject(levelTwoButton);
	levelTwoButton->setPos(300, 300);

	levelThreeButton = new Sprite("Resources/Image/level3.png");
	AddObject(levelThreeButton);
	levelThreeButton->setPos(300, 500);
}

LevelScene::~LevelScene() {

}

void LevelScene::Render() {
	levelOneButton->Render();
	levelTwoButton->Render();
	levelThreeButton->Render();
}

void LevelScene::Update(float dTime) {
	Scene::Update(dTime);

	if (inputManager->GetKeyState(VK_LBUTTON) == KEY_DOWN) {

		if (levelOneButton->IsPointInRect(inputManager->GetMousePos())) {
			sceneManager->ChangeScene(new GameScene(4));
			return;
		}

		if (levelTwoButton->IsPointInRect(inputManager->GetMousePos())) {
			sceneManager->ChangeScene(new GameScene(6));
			return;
		}

		if (levelThreeButton->IsPointInRect(inputManager->GetMousePos())) {
			sceneManager->ChangeScene(new GameScene(8));
			return;
		}

	}
}