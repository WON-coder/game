#include "stdafx.h"
#include "MainScene.h"

MainScene::MainScene() {
	background = new Sprite("Resources/Image/Background.png");
	AddObject(background);
	background->setPos(0, 0);

	title = new Sprite("Resources/Image/title.png");
	AddObject(title);
	title->setPos(200, 150);

	startButton = new Sprite("Resources/Image/start.png");
	AddObject(startButton);
	startButton->setPos(200, 350);


}

MainScene::~MainScene() {

}

void MainScene::Render() {
	background->Render();
	title->Render();
	startButton->Render();
}

void MainScene::Update(float dTime) {
	Scene::Update(dTime);
	if (inputManager->GetKeyState(VK_SPACE) == KEY_DOWN) {
		sceneManager->ChangeScene(new CharacterScene());
	}
}