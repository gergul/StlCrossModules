
// CrossModules_test_mfc.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CCrossModules_test_mfcApp: 
// �йش����ʵ�֣������ CrossModules_test_mfc.cpp
//

class CCrossModules_test_mfcApp : public CWinApp
{
public:
	CCrossModules_test_mfcApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CCrossModules_test_mfcApp theApp;