#pragma once
#include "GameObject.h"
#include "AABBCollider.h"
#include "CircleCollider.h"
#include "Bullet.h"
#include "GameScene.h"

class TestObject :
	public GameObject
{
public:
	TestObject();
public:

	//GameObject* player;
	Bullet* bullet;
//	GameScene *game;
	unsigned short cnt = 0;
	virtual void Update();
	virtual void LateUpdate();
	void DrawNumber(unsigned short sec);
	void HelpDrawNumber1(unsigned short num);
	void HelpDrawNumber2(unsigned short num);
	GameObject* num1, *num2;
	//bool isRunning;
};

