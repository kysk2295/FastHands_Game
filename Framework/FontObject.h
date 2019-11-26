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

	Font* font;						//자세한 설명은 Font.h 참고
	FontRenderer* fontRenderer;		//자세한 설명은 FontRenderer.h 참고
	const wchar_t* str;
};

