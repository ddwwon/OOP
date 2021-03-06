
// ABC.h: PROJECT_NAME 애플리케이션에 대한 주 헤더 파일입니다.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH에 대해 이 파일을 포함하기 전에 'pch.h'를 포함합니다."
#endif

#include "resource.h"		// 주 기호입니다.


// CABCApp:
// 이 클래스의 구현에 대해서는 ABC.cpp을(를) 참조하세요.
//


class CABCApp : public CWinApp
{
public:
	CABCApp();

// 재정의입니다.(오버라이딩): 원래 CWinApp에 있던것을 상속받아서 재선언함(InitInstance)
public:
	
	// InitInstance: 현재 프로그램이 만들어질때 자동적으로 실행되도록
	virtual BOOL InitInstance();

// 구현입니다.

	DECLARE_MESSAGE_MAP()
};

// theApp: MFC에서 가장 중요한것, 전역변수 하지만 클래스야!! 
// ABC.cpp에 저장되어 있고 이파일에서는 참조한 것
// CABCApp라고 실체를 하나 만드는데 이름을 theApp로 한 것 (야간 구조체 너낌)
extern CABCApp theApp;
