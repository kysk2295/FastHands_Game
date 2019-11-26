#include "stdafx.h"
#include "BulletManager.h"
#include <time.h>
#include <cstdlib>
#include "EndingScene.h"
#include "Scene.h"

BulletManager::BulletManager()
{
	testObject = new TestObject();
	Scene::GetCurrentScene().PushBackGameObject(testObject);
	num1 = new GameObject(L"resources/number/6.png", Vector2(30.0f, 30.0f));
	num1->transform->SetScale(0.5f, 0.5f);
	num2 = new GameObject(L"resources/number/0.png", Vector2(57.0f, 30.0f));
	num2->transform->SetScale(0.5f, 0.5f);
	Scene::GetCurrentScene().PushBackGameObject(num1);
	Scene::GetCurrentScene().PushBackGameObject(num2);
}
void BulletManager::Update()
{
	/*if (((GameScene&)Scene::GetCurrentScene()).isRunning) {*/
		currentTime = clock();
		currentTime2 = clock();
		//std::cout << "ms : " << currentTime << std::endl;

		if (currentTime - pastTime >= createTime && currentTime <= 60001)
		{
			CreateBullet();
			pastTime = currentTime;
		}

		if (currentTime2 - pastTime2 >= 1000 && currentTime2 <= 61000)
		{
			sec--;
			DrawNumber(sec);
			pastTime2 = currentTime2;
		}

		if (currentTime2 >= 61000)
		{
			Scene::GetCurrentScene().ChangeScene(new EndingScene(cnt));
		}
	/*}*/
}

void BulletManager::CreateBullet()
{
	srand((unsigned int)time(0));
	unsigned short x, y;
	x = rand() * rand() % 570+20;
	if (tmpx != -1) {
		while (x == tmpx)
			x = rand() * rand() % 570+20;
	}
	tmpx = x;
	y = rand() * rand() % 345+45;
	if (tmpy != -1) {
		while (y == tmpy)
			y = rand() * rand() % 345+45;
	}
	tmpy = y;

	if (testObject->bullet != NULL) {
		Scene::GetCurrentScene().Destroy(testObject->bullet);
	}

	else {
		cnt++;
		testObject->cnt = cnt;
	}

	unsigned short tmp = rand() % 8;
	switch (tmp)
	{
	case 0:
	{
		Bullet * bullet = new Bullet(x, y);
		bullet->renderer = new Renderer(Scene::GetCurrentScene().GetResourceManager().LoadBitmapFromFile(L"resources/object/blue.png", 0, 0));
		testObject->bullet = (Bullet*)Scene::GetCurrentScene().PushBackGameObject(bullet);
		break;
	}
	case 1:
	{
		Bullet * bullet = new Bullet(x, y);
		bullet->renderer = new Renderer(Scene::GetCurrentScene().GetResourceManager().LoadBitmapFromFile(L"resources/object/green.png", 0, 0));
		testObject->bullet = (Bullet*)Scene::GetCurrentScene().PushBackGameObject(bullet);
		break;
	}
	case 2:
	{
		Bullet * bullet = new Bullet(x, y);
		bullet->renderer = new Renderer(Scene::GetCurrentScene().GetResourceManager().LoadBitmapFromFile(L"resources/object/orange.png", 0, 0));
		testObject->bullet = (Bullet*)Scene::GetCurrentScene().PushBackGameObject(bullet);
		break;
	}
	case 3:
	{
		Bullet * bullet = new Bullet(x, y);
		bullet->renderer = new Renderer(Scene::GetCurrentScene().GetResourceManager().LoadBitmapFromFile(L"resources/object/pink.png", 0, 0));
		testObject->bullet = (Bullet*)Scene::GetCurrentScene().PushBackGameObject(bullet);
		break;
	}

	case 4:
	{
		Bullet * bullet = new Bullet(x, y);
		bullet->renderer = new Renderer(Scene::GetCurrentScene().GetResourceManager().LoadBitmapFromFile(L"resources/object/purple.png", 0, 0));
		testObject->bullet = (Bullet*)Scene::GetCurrentScene().PushBackGameObject(bullet);
		break;
	}

	case 5:
	{
		Bullet * bullet = new Bullet(x, y);
		bullet->renderer = new Renderer(Scene::GetCurrentScene().GetResourceManager().LoadBitmapFromFile(L"resources/object/red.png", 0, 0));
		testObject->bullet = (Bullet*)Scene::GetCurrentScene().PushBackGameObject(bullet);
		break;
	}
	case 6:
	{
		Bullet * bullet = new Bullet(x, y);
		bullet->renderer = new Renderer(Scene::GetCurrentScene().GetResourceManager().LoadBitmapFromFile(L"resources/object/skyblue.png", 0, 0));
		testObject->bullet = (Bullet*)Scene::GetCurrentScene().PushBackGameObject(bullet);
		break;
	}
	case 7:
	{
		Bullet * bullet = new Bullet(x, y);
		bullet->renderer = new Renderer(Scene::GetCurrentScene().GetResourceManager().LoadBitmapFromFile(L"resources/object/yellow.png", 0, 0));
		testObject->bullet = (Bullet*)Scene::GetCurrentScene().PushBackGameObject(bullet);
		break;
	}


	}

}

void BulletManager::DrawNumber(unsigned short sec)
{
	HelpDrawNumber1(sec / 10);
	HelpDrawNumber2(sec % 10);
}

void BulletManager::HelpDrawNumber1(unsigned short num)
{
	switch (num)
	{
	case 0:
	{
		printf("fuck");
		Scene::GetCurrentScene().Destroy(num1);
		num1 = new GameObject(L"resources/number/0.png", Vector2(30.0f, 30.0f));
		num1->transform->SetScale(0.5f, 0.5f);
		Scene::GetCurrentScene().PushBackGameObject(num1);
		break;
	}

	case 1:
	{
		Scene::GetCurrentScene().Destroy(num1);
		printf("fuck");
		num1 = new GameObject(L"resources/number/1.png", Vector2(30.0f, 30.0f));
		num1->transform->SetScale(0.5f, 0.5f);
		Scene::GetCurrentScene().PushBackGameObject(num1);
		break;
	}

	case 2:
	{
		Scene::GetCurrentScene().Destroy(num1);
		num1 = new GameObject(L"resources/number/2.png", Vector2(30.0f, 30.0f));
		num1->transform->SetScale(0.5f, 0.5f);
		Scene::GetCurrentScene().PushBackGameObject(num1);
		break;
	}

	case 3:
	{
		Scene::GetCurrentScene().Destroy(num1);
		num1 = new GameObject(L"resources/number/3.png", Vector2(30.0f, 30.0f));
		num1->transform->SetScale(0.5f, 0.5f);
		Scene::GetCurrentScene().PushBackGameObject(num1);
		break;
	}

	case 4:
	{
		Scene::GetCurrentScene().Destroy(num1);
		num1 = new GameObject(L"resources/number/4.png", Vector2(30.0f, 30.0f));
		num1->transform->SetScale(0.5f, 0.5f);
		Scene::GetCurrentScene().PushBackGameObject(num1);
		break;
	}

	case 5:
	{
		Scene::GetCurrentScene().Destroy(num1);
		num1 = new GameObject(L"resources/number/5.png", Vector2(30.0f, 30.0f));
		num1->transform->SetScale(0.5f, 0.5f);
		Scene::GetCurrentScene().PushBackGameObject(num1);
		break;
	}

	case 6:
	{
		Scene::GetCurrentScene().Destroy(num1);
		num1 = new GameObject(L"resources/number/6.png", Vector2(30.0f, 30.0f));
		num1->transform->SetScale(0.5f, 0.5f);
		Scene::GetCurrentScene().PushBackGameObject(num1);
		break;
	}

	case 7:
	{
		Scene::GetCurrentScene().Destroy(num1);
		num1 = new GameObject(L"resources/number/7.png", Vector2(30.0f, 30.0f));
		num1->transform->SetScale(0.5f, 0.5f);
		Scene::GetCurrentScene().PushBackGameObject(num1);
		break;
	}

	case 8:
	{
		Scene::GetCurrentScene().Destroy(num1);
		num1 = new GameObject(L"resources/number/8.png", Vector2(30.0f, 30.0f));
		num1->transform->SetScale(0.5f, 0.5f);
		Scene::GetCurrentScene().PushBackGameObject(num1);
		break;
	}

	case 9:
	{
		Scene::GetCurrentScene().Destroy(num1);
		num1 = new GameObject(L"resources/number/9.png", Vector2(30.0f, 30.0f));
		num1->transform->SetScale(0.5f, 0.5f);
		Scene::GetCurrentScene().PushBackGameObject(num1);
		break;
	}
	}
}

void BulletManager::HelpDrawNumber2(unsigned short num)
{
	switch (num)
	{
	case 0:
	{
		Scene::GetCurrentScene().Destroy(num2);
		num2 = new GameObject(L"resources/number/0.png", Vector2(57.0f, 30.0f));
		num2->transform->SetScale(0.5f, 0.5f);
		Scene::GetCurrentScene().PushBackGameObject(num2);
		break;
	}

	case 1:
	{
		Scene::GetCurrentScene().Destroy(num2);
		num2 = new GameObject(L"resources/number/1.png", Vector2(57.0f, 30.0f));
		num2->transform->SetScale(0.5f, 0.5f);
		Scene::GetCurrentScene().PushBackGameObject(num2);
		break;
	}

	case 2:
	{
		Scene::GetCurrentScene().Destroy(num2);
		num2 = new GameObject(L"resources/number/2.png", Vector2(57.0f, 30.0f));
		num2->transform->SetScale(0.5f, 0.5f);
		Scene::GetCurrentScene().PushBackGameObject(num2);
		break;
	}

	case 3:
	{
		Scene::GetCurrentScene().Destroy(num2);
		num2 = new GameObject(L"resources/number/3.png", Vector2(57.0f, 30.0f));
		num2->transform->SetScale(0.5f, 0.5f);
		Scene::GetCurrentScene().PushBackGameObject(num2);
		break;
	}

	case 4:
	{
		Scene::GetCurrentScene().Destroy(num2);
		num2 = new GameObject(L"resources/number/4.png", Vector2(57.0f, 30.0f));
		num2->transform->SetScale(0.5f, 0.5f);
		Scene::GetCurrentScene().PushBackGameObject(num2);
		break;
	}

	case 5:
	{
		Scene::GetCurrentScene().Destroy(num2);
		num2 = new GameObject(L"resources/number/5.png", Vector2(57.0f, 30.0f));
		num2->transform->SetScale(0.5f, 0.5f);
		Scene::GetCurrentScene().PushBackGameObject(num2);
		break;
	}

	case 6:
	{
		Scene::GetCurrentScene().Destroy(num2);
		num2 = new GameObject(L"resources/number/6.png", Vector2(57.0f, 30.0f));
		num2->transform->SetScale(0.5f, 0.5f);
		Scene::GetCurrentScene().PushBackGameObject(num2);
		break;
	}

	case 7:
	{
		Scene::GetCurrentScene().Destroy(num2);
		num2 = new GameObject(L"resources/number/7.png", Vector2(57.0f, 30.0f));
		num2->transform->SetScale(0.5f, 0.5f);
		Scene::GetCurrentScene().PushBackGameObject(num2);
		break;
	}

	case 8:
	{
		Scene::GetCurrentScene().Destroy(num2);
		num2 = new GameObject(L"resources/number/8.png", Vector2(57.0f, 30.0f));
		num2->transform->SetScale(0.5f, 0.5f);
		Scene::GetCurrentScene().PushBackGameObject(num2);
		break;
	}

	case 9:
	{
		Scene::GetCurrentScene().Destroy(num2);
		num2 = new GameObject(L"resources/number/9.png", Vector2(57.0f, 30.0f));
		num2->transform->SetScale(0.5f, 0.5f);
		Scene::GetCurrentScene().PushBackGameObject(num2);
		break;
	}
	}
}