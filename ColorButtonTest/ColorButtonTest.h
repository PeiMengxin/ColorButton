
// ColorButtonTest.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CColorButtonTestApp: 
// �йش����ʵ�֣������ ColorButtonTest.cpp
//

class CColorButtonTestApp : public CWinApp
{
public:
	CColorButtonTestApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CColorButtonTestApp theApp;