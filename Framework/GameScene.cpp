#include "stdafx.h"
#include "GameScene.h"
#include "FontObject.h"
#include "InputManager.h"

void GameScene::Initialize()
{
	//isRunning = false;

	t = (TestObject*)PushBackGameObject(new TestObject());		//�׽�Ʈ�� ������Ʈ�Դϴ�.
	//t->transform->SetPosition(200.0f,100.0f);

	mbullet = (BulletManager*)PushBackGameObject(new BulletManager());			//������Ʈ�� �����ϰ� �ʹٸ�, PushBackGameObject�Լ��� ȣ���Ͽ� �����մϴ�.
	//player->enemy = t;

	PushBackGameObject(new GameObject(L"resources/background/background_black.png", Vector2(320, 415.0f / 2.0f)));
	score = 0;
	numbers[1] = (Number*)PushBackGameObject(new Number());
	numbers[1]->transform->SetPosition(590.0f, 30.0f);

	numbers[0] = (Number*)PushBackGameObject(new Number());
	numbers[0]->transform->SetPosition(617.0f, 30.0f);

	//PushBackGameObject(new FontObject());		//�۾� ����� FontObject.h, FontObjct.cpp ����
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
