#include "stdafx.h"
#include "Bullet.h"


Bullet::Bullet()
	:GameObject(L"resources/object/bug_resized.png")
	,col(*transform, 45.0f)
{
	//transform->SetScale(0.15f, 0.15f);
	//transform->SetRotation(10.0f);
	
}
Bullet::Bullet(int x, int y)
	:GameObject(L"resources/object/bug_resized.png")
	, col(*transform, 45.0f)
{
	//transform->SetScale(0.15f, 0.15f);
	transform->position.x = x;
	transform->position.y = y;
}
void Bullet::Update()
{



}

Bullet::~Bullet()
{
}
