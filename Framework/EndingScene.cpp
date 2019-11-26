#include "stdafx.h"
#include "EndingScene.h"

EndingScene::EndingScene(unsigned short cnt)
	:cnt(cnt)
{
}
void EndingScene::Initialize()
{
	//testObject = new TestObject();
	//Scene::GetCurrentScene().PushBackGameObject(testObject);

	GameObject* g = PushBackGameObject(new GameObject(L"resources/background/background_black.png", Vector2(320.0f, 415.0f / 2.0f)));
	num1 = new GameObject(L"resources/number/0.png", Vector2(590.0f/2.0f, 495.0f/2.0f-70.0f));
	num1->transform->SetScale(1.0f, 1.0f);
	num2 = new GameObject(L"resources/number/0.png", Vector2(590.0f / 2.0f, 495.0f / 2.0f - 70.0f));
	num2->transform->SetScale(1.0f, 1.0f);
	
	DrawNumber(cnt);
	Scene::GetCurrentScene().PushBackGameObject(num1);
	Scene::GetCurrentScene().PushBackGameObject(num2);
	
}
void EndingScene::DrawNumber(unsigned short sec)
{
	HelpDrawNumber1(sec / 10);
	HelpDrawNumber2(sec % 10);
}

void EndingScene::HelpDrawNumber1(unsigned short num)
{
	switch (num)
	{
	case 0:
	{
		Scene::GetCurrentScene().Destroy(num1);
		num1 = new GameObject(L"resources/number/0.png", Vector2(590.0f / 2.0f, 495.0f / 2.0f - 70.0f));
		num1->transform->SetScale(0.5f, 0.5f);
		Scene::GetCurrentScene().PushBackGameObject(num1);
		break;
	}

	case 1:
	{
		Scene::GetCurrentScene().Destroy(num1);
		num1 = new GameObject(L"resources/number/1.png", Vector2(590.0f / 2.0f, 495.0f / 2.0f - 70.0f));
		num1->transform->SetScale(0.5f, 0.5f);
		Scene::GetCurrentScene().PushBackGameObject(num1);
		break;
	}

	case 2:
	{
		Scene::GetCurrentScene().Destroy(num1);
		num1 = new GameObject(L"resources/number/2.png", Vector2(590.0f / 2.0f, 495.0f / 2.0f - 70.0f));
		num1->transform->SetScale(0.5f, 0.5f);
		Scene::GetCurrentScene().PushBackGameObject(num1);
		break;
	}

	case 3:
	{
		Scene::GetCurrentScene().Destroy(num1);
		num1 = new GameObject(L"resources/number/3.png", Vector2(590.0f / 2.0f, 495.0f / 2.0f - 70.0f));
		num1->transform->SetScale(0.5f, 0.5f);
		Scene::GetCurrentScene().PushBackGameObject(num1);
		break;
	}

	case 4:
	{
		Scene::GetCurrentScene().Destroy(num1);
		num1 = new GameObject(L"resources/number/4.png", Vector2(590.0f / 2.0f, 495.0f / 2.0f - 70.0f));
		num1->transform->SetScale(0.5f, 0.5f);
		Scene::GetCurrentScene().PushBackGameObject(num1);
		break;
	}

	case 5:
	{
		Scene::GetCurrentScene().Destroy(num1);
		num1 = new GameObject(L"resources/number/5.png", Vector2(590.0f / 2.0f, 495.0f / 2.0f - 70.0f));
		num1->transform->SetScale(0.5f, 0.5f);
		Scene::GetCurrentScene().PushBackGameObject(num1);
		break;
	}

	case 6:
	{
		Scene::GetCurrentScene().Destroy(num1);
		num1 = new GameObject(L"resources/number/6.png", Vector2(590.0f / 2.0f, 495.0f / 2.0f - 70.0f));
		num1->transform->SetScale(0.5f, 0.5f);
		Scene::GetCurrentScene().PushBackGameObject(num1);
		break;
	}

	case 7:
	{
		Scene::GetCurrentScene().Destroy(num1);
		num1 = new GameObject(L"resources/number/7.png", Vector2(590.0f / 2.0f, 495.0f / 2.0f - 70.0f));
		num1->transform->SetScale(0.5f, 0.5f);
		Scene::GetCurrentScene().PushBackGameObject(num1);
		break;
	}

	case 8:
	{
		Scene::GetCurrentScene().Destroy(num1);
		num1 = new GameObject(L"resources/number/8.png", Vector2(590.0f / 2.0f, 495.0f / 2.0f - 70.0f));
		num1->transform->SetScale(0.5f, 0.5f);
		Scene::GetCurrentScene().PushBackGameObject(num1);
		break;
	}

	case 9:
	{
		Scene::GetCurrentScene().Destroy(num1);
		num1 = new GameObject(L"resources/number/9.png", Vector2(590.0f / 2.0f, 495.0f / 2.0f - 70.0f));
		num1->transform->SetScale(0.5f, 0.5f);
		Scene::GetCurrentScene().PushBackGameObject(num1);
		break;
	}
	}
}

void EndingScene::HelpDrawNumber2(unsigned short num)
{
	switch (num)
	{
	case 0:
	{
		Scene::GetCurrentScene().Destroy(num2);
		num2 = new GameObject(L"resources/number/0.png", Vector2(590.0f / 2.0f + 31.0f, 495.0f / 2.0f - 70.0f));
		num2->transform->SetScale(0.5f, 0.5f);
		Scene::GetCurrentScene().PushBackGameObject(num2);
		break;
	}

	case 1:
	{
		Scene::GetCurrentScene().Destroy(num2);
		num2 = new GameObject(L"resources/number/1.png", Vector2(590.0f / 2.0f + 31.0f, 495.0f / 2.0f - 70.0f));
		num2->transform->SetScale(0.5f, 0.5f);
		Scene::GetCurrentScene().PushBackGameObject(num2);
		break;
	}

	case 2:
	{
		Scene::GetCurrentScene().Destroy(num2);
		num2 = new GameObject(L"resources/number/2.png", Vector2(590.0f / 2.0f + 31.0f, 495.0f / 2.0f - 70.0f));
		num2->transform->SetScale(0.5f, 0.5f);
		Scene::GetCurrentScene().PushBackGameObject(num2);
		break;
	}

	case 3:
	{
		Scene::GetCurrentScene().Destroy(num2);
		num2 = new GameObject(L"resources/number/3.png", Vector2(590.0f / 2.0f + 31.0f, 495.0f / 2.0f - 70.0f));
		num2->transform->SetScale(0.5f, 0.5f);
		Scene::GetCurrentScene().PushBackGameObject(num2);
		break;
	}

	case 4:
	{
		Scene::GetCurrentScene().Destroy(num2);
		num2 = new GameObject(L"resources/number/4.png", Vector2(590.0f / 2.0f + 31.0f, 495.0f / 2.0f - 70.0f));
		num2->transform->SetScale(0.5f, 0.5f);
		Scene::GetCurrentScene().PushBackGameObject(num2);
		break;
	}

	case 5:
	{
		Scene::GetCurrentScene().Destroy(num2);
		num2 = new GameObject(L"resources/number/5.png", Vector2(590.0f / 2.0f + 31.0f, 495.0f / 2.0f - 70.0f));
		num2->transform->SetScale(0.5f, 0.5f);
		Scene::GetCurrentScene().PushBackGameObject(num2);
		break;
	}

	case 6:
	{
		Scene::GetCurrentScene().Destroy(num2);
		num2 = new GameObject(L"resources/number/6.png", Vector2(590.0f / 2.0f + 31.0f, 495.0f / 2.0f - 70.0f));
		num2->transform->SetScale(0.5f, 0.5f);
		Scene::GetCurrentScene().PushBackGameObject(num2);
		break;
	}

	case 7:
	{
		Scene::GetCurrentScene().Destroy(num2);
		num2 = new GameObject(L"resources/number/7.png", Vector2(590.0f / 2.0f + 31.0f, 495.0f / 2.0f - 70.0f));
		num2->transform->SetScale(0.5f, 0.5f);
		Scene::GetCurrentScene().PushBackGameObject(num2);
		break;
	}

	case 8:
	{
		Scene::GetCurrentScene().Destroy(num2);
		num2 = new GameObject(L"resources/number/8.png", Vector2(590.0f / 2.0f + 31.0f, 495.0f / 2.0f - 70.0f));
		num2->transform->SetScale(0.5f, 0.5f);
		Scene::GetCurrentScene().PushBackGameObject(num2);
		break;
	}

	case 9:
	{
		Scene::GetCurrentScene().Destroy(num2);
		num2 = new GameObject(L"resources/number/9.png", Vector2(590.0f / 2.0f + 31.0f, 495.0f / 2.0f - 70.0f));
		num2->transform->SetScale(0.5f, 0.5f);
		Scene::GetCurrentScene().PushBackGameObject(num2);
		break;
	}

	}
}
