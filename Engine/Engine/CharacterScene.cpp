#include "stdafx.h"
#include "CharacterScene.h"

CharacterScene::CharacterScene() {
    background = new Sprite("Resources/Image/Background.png");
    AddObject(background);
    background->setPos(0, 0);

    dong = new Sprite("Resources/Image/dong-stop.png");
    AddObject(dong);
    dong->setPos(50, 200);

    triangle = new Sprite("Resources/Image/triangle-stop.png");
    AddObject(triangle);
    triangle->setPos(400, 200);

    rectangle = new Sprite("Resources/Image/rectangle-stop.png");
    AddObject(rectangle);
    rectangle->setPos(750, 200);
}

CharacterScene::~CharacterScene() {

}

 void CharacterScene::Render() {
     background->Render();
     dong->Render();
     triangle->Render();
     rectangle->Render();
}

 void CharacterScene::Update(float dTime) {
     Scene::Update(dTime);
 }