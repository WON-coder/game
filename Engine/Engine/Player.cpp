#include "stdafx.h"
#include "Player.h"
Player::Player() {
	playerAnimation = new Animation(10);
	playerAnimation->AddFrame("Resources/Image/player-stop.png");
	playerAnimation->AddFrame("Resources/Image/player-run.png");
	AddChild(playerAnimation);

	rect = playerAnimation->getRect();

}

Player::~Player() {

}

void Player::Render() {
	Object::Render();
	playerAnimation->Render();
}

void Player::Update(float dTime) {
	if (inputManager->GetKeyState(VK_UP) == KEY_ON) {
		setPos(getPosX(), getPosY() - 10);
	}
	if (inputManager->GetKeyState(VK_DOWN) == KEY_ON) {
		setPos(getPosX(), getPosY() + 10);
	}
	if (inputManager->GetKeyState(VK_LEFT) == KEY_ON) {
		setPos(getPosX() - 10, getPosY());
	}
	if (inputManager->GetKeyState(VK_RIGHT) == KEY_ON) {
		setPos(getPosX() + 10, getPosY());
	}

	if (getPosY() < 0) {
		setPos(getPosX(), 0);
	}
	if (getPosY() > 645) {
		setPos(getPosX(), 645);
	}
	if (getPosX() < 0) {
		setPos(0, getPosY()); 
	}
	if (getPosX() > 970) {
		setPos(970, getPosY());
	}

	playerAnimation->Update(dTime);
}