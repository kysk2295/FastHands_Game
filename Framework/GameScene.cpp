#include "stdafx.h"
#include "GameScene.h"
#include "FontObject.h"
#include "InputManager.h"

void GameScene::Initialize()
{
	//isRunning = false;

	t = (TestObject*)PushBackGameObject(new TestObject());		//테스트용 오브젝트입니다.
	//t->transform->SetPosition(200.0f,100.0f);

	mbullet = (BulletManager*)PushBackGameObject(new BulletManager());			//오브젝트를 생성하고 싶다면, PushBackGameObject함수를 호출하여 생성합니다.
	//player->enemy = t;

	PushBackGameObject(new GameObject(L"resources/background/background_black.png", Vector2(320, 415.0f / 2.0f)));
	score = 0;
	numbers[1] = (Number*)PushBackGameObject(new Number());
	numbers[1]->transform->SetPosition(590.0f, 30.0f);

	numbers[0] = (Number*)PushBackGameObject(new Number());
	numbers[0]->transform->SetPosition(617.0f, 30.0f);

	//PushBackGameObject(new FontObject());		//글씨 출력은 FontObject.h, FontObjct.cpp 참고
}
void GameScene::setScore(float score)
{
	this->score = score;
	int tmp = (int)score;
	for (int i = 0; i < 2; i++, tmp /= 10) {
		numbers[i]->SetNumber(tmp % 10);
	}
}

//void GameScene::LateUpdate() {
//	if (InputManager::GetKeyUp(VK_SPACE)) {
//		printf("asdf");
//		//isRunning = !isRunning;
//	}
//}
