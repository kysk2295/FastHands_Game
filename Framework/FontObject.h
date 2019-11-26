#pragma once
#include "GameObject.h"
#include "FontRenderer.h"
class FontObject :
	public GameObject
{
public:
	FontObject();
	FontObject(const wchar_t* s);
	~FontObject();

	Font* font;						//�ڼ��� ������ Font.h ����
	FontRenderer* fontRenderer;		//�ڼ��� ������ FontRenderer.h ����
	const wchar_t* str;
};

