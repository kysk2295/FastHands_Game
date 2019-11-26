#pragma once
#include "GameObject.h"
#include "Bullet.h"
#include "TestObject.h"
#include "Font.h"
#include "FontRenderer.h"
#include "FontObject.h"

class TestObject;

class BulletManager :
	public GameObject
{
public:

	BulletManager();
	std::list<Bullet*> Bullets;
	std::list<Bullet*> destroyed;
	Bullet* PushBackBullets(Bullet* b);
	TestObject* testObject;
	int currentTime, currentTime2;
	int pastTime = 0, pastTime2 = 0;
	int tmpx = -1, tmpy = -1;

	//void Destroy(Bullet* b);
	//void Remove();
	virtual void Update();
	//virtual void LateUpdate();
	void CreateBullet();
	void DrawNumber(unsigned short sec);
	void HelpDrawNumber1(unsigned short num);
	void HelpDrawNumber2(unsigned short num);

	//static BulletManager* getInstance();
	//~BulletManager();

	GameObject* num1, *num2;
	unsigned short sec = 60;
	unsigned short createTime = 500;
	short cnt = -1;
};
