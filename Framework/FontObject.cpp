#include "stdafx.h"
#include "FontObject.h"

FontObject::FontObject()
	:GameObject(fontRenderer = new FontRenderer()), str(L"60")
{
	font = new Font(L"Arial");						//��Ʈ, ���� ���� ���ϴ� Font Ŭ���� ����(Font.h ����), �⺻ ũ�� 20pt
	fontRenderer->font = this->font;				//�ؽ�Ʈ�� �Ӽ��� �������ݴϴ�.
	fontRenderer->text = const_cast<wchar_t*>(str);						//�ؽ�Ʈ�� ������ �������ݴϴ�.
	transform->SetPosition(50.0f, 50.0f);			//��ġ ����
	transform->SetScale(3.0f, 1.0f);				//ũ�� ���� ��� �����մϴ�.
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
