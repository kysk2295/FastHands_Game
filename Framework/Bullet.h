#pragma once
#include "GameObject.h"
#include "CircleCollider.h"


class Bullet :
	public GameObject
{
public:
	Bullet();
	Bullet(int x, int y);
	int x, y;
	CircleCollider col;

	virtual void Update();
	~Bullet();
};
