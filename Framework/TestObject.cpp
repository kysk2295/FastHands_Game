#include "stdafx.h"
#include "TestObject.h"
#include "InputManager.h"
#include "Scene.h"
#include "GameScene.h"

TestObject::TestObject()
	:GameObject()		//게임오브젝트를 생성합니다.
{
	//game = new GameScene();
	//game->isRunning = false;
	
	num1 = new GameObject(L"resources/number/0.png", Vector2(590.0f, 30.0f));
	//num1->transform->SetScale(0.5f, 0.5f);
	num2 = new GameObject(L"resources/number/0.png", Vector2(617.0f, 30.0f));
	//num2->transform->SetScale(0.5f, 0.5f);
	Scene::GetCurrentScene().PushBackGameObject(num1);
	Scene::GetCurrentScene().PushBackGameObject(num2);
}

void TestObject::Update()
{
	//DrawNumber(cnt);
}

void TestObject::LateUpdate()
{
	if (InputManager::GetKeyDown(VK_LBUTTON))
	{
		int x = -1;
		if (bullet != NULL)
		{
			if (bullet->col.Intersected(InputManager::GetMouseVector2()))
			{
				Scene::GetCurrentScene().Destroy(bullet);
				float score = ((GameScene&)Scene::GetCurrentScene()).score;
				((GameScene&)Scene::GetCurrentScene()).setScore(score+1);
				//Scene::GetCurrentScene().PushBackGameObject(num1);
				//Scene::GetCurrentScene().PushBackGameObject(num2);
				bullet = NULL;
				//cnt++;
			
			}
		}
	}
	
	if (InputManager::GetKeyUp(VK_SPACE)) {
			printf("space");
			//game->isRunning = true;
		}
	
}

//void TestObject::DrawNumber(unsigned short sec)
//{
//	HelpDrawNumber1(sec / 10);
//	HelpDrawNumber2(sec % 10);
//}
//
//void TestObject::HelpDrawNumber1(unsigned short num)
//{
//	switch (num)
//	{
//	case 0:
//	{
//		Scene::GetCurrentScene().Destroy(num1);
//		num1 = new GameObject(L"resources/number/0.png", Vector2(590.0f, 30.0f));
//		num1->transform->SetScale(0.5f, 0.5f);
		//Scene::GetCurrentScene().PushBackGameObject(num1);
//		break;
//	}
//
//	case 1:
//	{
//		Scene::GetCurrentScene().Destroy(num1);
//		num1 = new GameObject(L"resources/number/1.png", Vector2(590.0f, 30.0f));
//		num1->transform->SetScale(0.5f, 0.5f);
//		Scene::GetCurrentScene().PushBackGameObject(num1);
//		break;
//	}
//
//	case 2:
//	{
//		Scene::GetCurrentScene().Destroy(num1);
//		num1 = new GameObject(L"resources/number/2.png", Vector2(590.0f, 30.0f));
//		num1->transform->SetScale(0.5f, 0.5f);
//		Scene::GetCurrentScene().PushBackGameObject(num1);
//		break;
//	}
//
//	case 3:
//	{
//		Scene::GetCurrentScene().Destroy(num1);
//		num1 = new GameObject(L"resources/number/3.png", Vector2(590.0f, 30.0f));
//		num1->transform->SetScale(0.5f, 0.5f);
//		Scene::GetCurrentScene().PushBackGameObject(num1);
//		break;
//	}
//
//	case 4:
//	{
//		Scene::GetCurrentScene().Destroy(num1);
//		num1 = new GameObject(L"resources/number/4.png", Vector2(590.0f, 30.0f));
//		num1->transform->SetScale(0.5f, 0.5f);
//		Scene::GetCurrentScene().PushBackGameObject(num1);
//		break;
//	}
//
//	case 5:
//	{
//		Scene::GetCurrentScene().Destroy(num1);
//		num1 = new GameObject(L"resources/number/5.png", Vector2(590.0f, 30.0f));
//		num1->transform->SetScale(0.5f, 0.5f);
//		Scene::GetCurrentScene().PushBackGameObject(num1);
//		break;
//	}
//
//	case 6:
//	{
//		Scene::GetCurrentScene().Destroy(num1);
//		num1 = new GameObject(L"resources/number/6.png", Vector2(590.0f, 30.0f));
//		num1->transform->SetScale(0.5f, 0.5f);
//		Scene::GetCurrentScene().PushBackGameObject(num1);
//		break;
//	}
//
//	case 7:
//	{
//		Scene::GetCurrentScene().Destroy(num1);
//		num1 = new GameObject(L"resources/number/7.png", Vector2(590.0f, 30.0f));
//		num1->transform->SetScale(0.5f, 0.5f);
//		Scene::GetCurrentScene().PushBackGameObject(num1);
//		break;
//	}
//
//	case 8:
//	{
//		Scene::GetCurrentScene().Destroy(num1);
//		num1 = new GameObject(L"resources/number/8.png", Vector2(590.0f, 30.0f));
//		num1->transform->SetScale(0.5f, 0.5f);
//		Scene::GetCurrentScene().PushBackGameObject(num1);
//		break;
//	}
//
//	case 9:
//	{
//		Scene::GetCurrentScene().Destroy(num1);
//		num1 = new GameObject(L"resources/number/9.png", Vector2(590.0f, 30.0f));
//		num1->transform->SetScale(0.5f, 0.5f);
//		Scene::GetCurrentScene().PushBackGameObject(num1);
//		break;
//	}
//	}
//}
//
//void TestObject::HelpDrawNumber2(unsigned short num)
//{
//	switch (num)
//	{
//	case 0:
//	{
//		Scene::GetCurrentScene().Destroy(num2);
//		num2 = new GameObject(L"resources/number/0.png", Vector2(617.0f, 30.0f));
//		num2->transform->SetScale(0.5f, 0.5f);
//		Scene::GetCurrentScene().PushBackGameObject(num2);
//		break;
//	}
//
//	case 1:
//	{
//		Scene::GetCurrentScene().Destroy(num2);
//		num2 = new GameObject(L"resources/number/1.png", Vector2(617.0f, 30.0f));
//		num2->transform->SetScale(0.5f, 0.5f);
//		Scene::GetCurrentScene().PushBackGameObject(num2);
//		break;
//	}
//
//	case 2:
//	{
//		Scene::GetCurrentScene().Destroy(num2);
//		num2 = new GameObject(L"resources/number/2.png", Vector2(617.0f, 30.0f));
//		num2->transform->SetScale(0.5f, 0.5f);
//		Scene::GetCurrentScene().PushBackGameObject(num2);
//		break;
//	}
//
//	case 3:
//	{
//		Scene::GetCurrentScene().Destroy(num2);
//		num2 = new GameObject(L"resources/number/3.png", Vector2(617.0f, 30.0f));
//		num2->transform->SetScale(0.5f, 0.5f);
//		Scene::GetCurrentScene().PushBackGameObject(num2);
//		break;
//	}
//
//	case 4:
//	{
//		Scene::GetCurrentScene().Destroy(num2);
//		num2 = new GameObject(L"resources/number/4.png", Vector2(617.0f, 30.0f));
//		num2->transform->SetScale(0.5f, 0.5f);
//		Scene::GetCurrentScene().PushBackGameObject(num2);
//		break;
//	}
//
//	case 5:
//	{
//		Scene::GetCurrentScene().Destroy(num2);
//		num2 = new GameObject(L"resources/number/5.png", Vector2(617.0f, 30.0f));
//		num2->transform->SetScale(0.5f, 0.5f);
//		Scene::GetCurrentScene().PushBackGameObject(num2);
//		break;
//	}
//
//	case 6:
//	{
//		Scene::GetCurrentScene().Destroy(num2);
//		num2 = new GameObject(L"resources/number/6.png", Vector2(617.0f, 30.0f));
//		num2->transform->SetScale(0.5f, 0.5f);
//		Scene::GetCurrentScene().PushBackGameObject(num2);
//		break;
//	}
//
//	case 7:
//	{
//		Scene::GetCurrentScene().Destroy(num2);
//		num2 = new GameObject(L"resources/number/7.png", Vector2(617.0f, 30.0f));
//		num2->transform->SetScale(0.5f, 0.5f);
//		Scene::GetCurrentScene().PushBackGameObject(num2);
//		break;
//	}
//
//	case 8:
//	{
//		Scene::GetCurrentScene().Destroy(num2);
//		num2 = new GameObject(L"resources/number/8.png", Vector2(617.0f, 30.0f));
//		num2->transform->SetScale(0.5f, 0.5f);
//		Scene::GetCurrentScene().PushBackGameObject(num2);
//		break;
//	}
//
//	case 9:
//	{
//		Scene::GetCurrentScene().Destroy(num2);
//		num2 = new GameObject(L"resources/number/9.png", Vector2(617.0f, 30.0f));
//		num2->transform->SetScale(0.5f, 0.5f);
//		Scene::GetCurrentScene().PushBackGameObject(num2);
//		break;
//	}
//	}
//}
