
// MFCLibMG.h : MFCLibMG Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCLibMGApp:
// �йش����ʵ�֣������ MFCLibMG.cpp
//

class CMFCLibMGApp : public CWinApp
{
public:
	CMFCLibMGApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCLibMGApp theApp;
