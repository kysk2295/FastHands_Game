#include "stdafx.h"
#include "Framework.h"
#include "GameScene.h"
#include "Math.h"

int main()
{
	Framework& f = Framework::GetInstance();
	f.Run(new GameScene(),L"순발력 테스트", 640, 415, false);

	return 0;
}