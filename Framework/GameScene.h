#pragma once
#include "Scene.h"
#include "Player.h"
#include "BulletManager.h"
#include "TestObject.h"
#include "Number.h"

//class BulletManager;
//����� ������ ��ü�� �ʿ��մϴ�.
//Scene�� ��ӹ޾� ��ü�� �����մϴ�.
class GameScene :
	public Scene
{
public:
	virtual void Initialize();		//��� Scene���� �ݵ�� Initialize�Լ��� �־���մϴ�. (�߻� Ŭ���� ����)
	//virtual void LateUpdate();
public:
	class BulletManager * mbullet;
	class TestObject* t;
	Number* numbers[2];
	float score;
	void setScore(float score);

};
