#include "stdafx.h"
#include "GameScene.h"
#include "ScoreScene.h"

GameScene::GameScene(int num) {
	start = time(NULL);
	ballNum = num;
	score = 0;

	player = new Player();
	AddObject(player);
	player->setPos(400, 250);

	for (int i = 0; i < 4; i++) {
		scoreArray[i] = new Score();
		scoreArray[i]->setPos(380 + 60 * i, 10);
		AddObject(scoreArray[i]);
	}
	int w, h;
	for (int i = 0; i < ballNum; i++) {
		ballArray[i] = new Ball;
		AddObject(ballArray[i]);

		if (rand() % 2) {
			w = rand() % 300;
		}
		else {
			w = rand() % 250 + 750;
		}

		if (rand() % 2) {
			h = rand() % 150;
		}
		else {
			h = rand() % 200 + 500;
		}

		ballArray[i]->setPos(w,h);
	}
}

GameScene::~GameScene() {
	
}

void GameScene::Render() {
	player->Render();
	for (int i = 0; i < ballNum; i++) {
		ballArray[i]->Render();
	}
	for (int i = 0; i < 4; i++) {
		scoreArray[i]->Render();
	}
}

void GameScene::Update(float dTime) {
	Scene::Update(dTime);
	now = time(NULL);
	score = now - start;

	scoreArray[0]->setScore(score / 1000);
	scoreArray[1]->setScore(score / 100 % 10);
	scoreArray[2]->setScore(score / 10 % 10);
	scoreArray[3]->setScore(score % 10);



	for (int i = 0; i < ballNum; i++) {
		if (player->IsCollisionRect(ballArray[i])) {
			sceneManager->ChangeScene(new ScoreScene(score));
			return;
		}
	}

}