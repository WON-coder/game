#include "stdafx.h"
#include "MainScene.h"

MainScene::MainScene() {
	background = new Sprite("Resources/Image/background.png");
	AddObject(background);
	background->setPos(0, 0);

	startButton = new Sprite("Resources/Image/start.png");
	AddObject(startButton);
	startButton->setPos(300, 350);

	exitButton = new Sprite("Resources/Image/end.png");
	AddObject(exitButton);
	exitButton->setPos(300, 500);
}

MainScene::~MainScene() {

}

void MainScene::Render() {
	background->Render();
	startButton->Render();
	exitButton->Render();
}

void MainScene::Update(float dTime) {
	Scene::Update(dTime);

	if (inputManager->GetKeyState(VK_LBUTTON) == KEY_DOWN) {

		if (startButton->IsPointInRect(inputManager->GetMousePos())) {
			sceneManager->ChangeScene(new LevelScene());
			return;
		}

		if (exitButton->IsPointInRect(inputManager->GetMousePos())) {
			PostQuitMessage(0);
			return;
		}

	}
}