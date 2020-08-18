#include "stdafx.h"
#include "ScoreScene.h"
#include "MainScene.h"

ScoreScene::ScoreScene(int score) {
	background = new Sprite("Resources/Image/gameover.png");
	AddObject(background);
	background->setPos(0,0);

	mainButton = new Sprite("Resources/Image/go-to-main.png");
	AddObject(mainButton);
	mainButton->setPos(300, 600);



	for (int i = 0; i < 4; i++) {
		scoreArray[i] = new Score();
		scoreArray[i]->setPos(300 + 60 * i, 350);
		AddObject(scoreArray[i]);
	}

	scoreArray[0]->setScore(score / 1000);
	scoreArray[1]->setScore(score / 100 % 10);
	scoreArray[2]->setScore(score / 10 % 10);
	scoreArray[3]->setScore(score % 10);
}

ScoreScene::~ScoreScene() {

}

void ScoreScene::Render() {
	background->Render();
	mainButton->Render();
	for (int i = 0; i < 4; i++) {
		scoreArray[i]->Render();
	}
}

void ScoreScene::Update(float dTime) {
	Scene::Update(dTime);

	if (inputManager->GetKeyState(VK_LBUTTON) == KEY_DOWN) {
		if (mainButton->IsPointInRect(inputManager->GetMousePos())) {
			sceneManager->ChangeScene(new MainScene());
			return;
		}
	}
}