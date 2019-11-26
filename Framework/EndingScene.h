#pragma once
#include "Scene.h"
#include "TestObject.h"
class EndingScene :
	public Scene
{
public:
	TestObject *testObject;
	EndingScene(unsigned short cnt);
	unsigned short cnt;
	virtual void Initialize();
	void DrawNumber(unsigned short sec);
	void HelpDrawNumber1(unsigned short num);
	void HelpDrawNumber2(unsigned short num);

	GameObject* num1, *num2;
};

