
// 20220224.h : 20220224 ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CMy20220224App:
// �� Ŭ������ ������ ���ؼ��� 20220224.cpp�� �����Ͻʽÿ�.
//

class CMy20220224App : public CWinApp
{
public:
	CMy20220224App();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// �����Դϴ�.

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy20220224App theApp;
