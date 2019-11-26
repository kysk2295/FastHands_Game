#include "stdafx.h"
#include "FontObject.h"

FontObject::FontObject()
	:GameObject(fontRenderer = new FontRenderer()), str(L"60")
{
	font = new Font(L"Arial");						//폰트, 색상 등을 지니는 Font 클래스 생성(Font.h 참고), 기본 크기 20pt
	fontRenderer->font = this->font;				//텍스트의 속성을 지정해줍니다.
	fontRenderer->text = const_cast<wchar_t*>(str);						//텍스트의 내용을 지정해줍니다.
	transform->SetPosition(50.0f, 50.0f);			//위치 지정
	transform->SetScale(3.0f, 1.0f);				//크기 지정 모두 가능합니다.
}

FontObject::~FontObject()
{
	SAFE_DELETE(font);
}

FontObject::FontObject(const wchar_t* s)
	:GameObject(fontRenderer = new FontRenderer()), str(s)
{
	font = new Font(L"Arial");						
	fontRenderer->font = this->font;		
	fontRenderer->text = const_cast<wchar_t*>(str);				
	transform->SetPosition(50.0f, 50.0f);
	//transform->SetScale(3.0f, 1.0f);
	//kysk2295@naver.com

}
