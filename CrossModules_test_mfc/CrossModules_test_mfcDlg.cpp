
// CrossModules_test_mfcDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "CrossModules_test_mfc.h"
#include "CrossModules_test_mfcDlg.h"
#include "afxdialogex.h"
#include <StlApiDef.h>
#include "..\CrossModules_test_dll\CrossModules_test_dll.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCrossModules_test_mfcDlg �Ի���



CCrossModules_test_mfcDlg::CCrossModules_test_mfcDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_CROSSMODULES_TEST_MFC_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCrossModules_test_mfcDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CCrossModules_test_mfcDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CCrossModules_test_mfcDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CCrossModules_test_mfcDlg::OnBnClickedButton2)
END_MESSAGE_MAP()


// CCrossModules_test_mfcDlg ��Ϣ�������

BOOL CCrossModules_test_mfcDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ���ô˶Ի����ͼ�ꡣ  ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO: �ڴ���Ӷ���ĳ�ʼ������

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ  ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CCrossModules_test_mfcDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR CCrossModules_test_mfcDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CCrossModules_test_mfcDlg::OnBnClickedButton1()
{
	GL::vector<int> vct;
	fnCrossModules_test_vector(vct);

	GL::string s = fnCrossModules_test_string();

	GL::set<GL::wstring> st;
	fnCrossModules_test_set(st);

	GL::map<int, GL::string> mp;
	fnCrossModules_test_map(mp);

	GL::multimap<int, GL::string> mmp;
	fnCrossModules_test_multimap(mmp);
}


void CCrossModules_test_mfcDlg::OnBnClickedButton2()
{
	std::vector<int> vct;
	fnCrossModules_test_stdvector(vct);

	std::string s = fnCrossModules_test_stdstring();

	std::set<std::wstring> st;
	fnCrossModules_test_stdset(st);

	std::map<int, std::string> mp;
	fnCrossModules_test_stdmap(mp);

	std::multimap<int, std::string> mmp;
	fnCrossModules_test_stdmultimap(mmp);
}
