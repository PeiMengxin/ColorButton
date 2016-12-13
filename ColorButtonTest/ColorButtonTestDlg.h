
// ColorButtonTestDlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"
#include "ColorButton.h"
#include "ColourPopup.h"


// CColorButtonTestDlg �Ի���
class CColorButtonTestDlg : public CDialogEx
{
// ����
public:
	CColorButtonTestDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_COLORBUTTONTEST_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg LONG OnSelEndOK(UINT lParam, LONG wParam);
	afx_msg LONG OnSelEndCancel(UINT lParam, LONG wParam);
	afx_msg LONG OnSelChange(UINT lParam, LONG wParam);
	afx_msg LONG OnCloseUp(UINT lParam, LONG wParam);
	afx_msg LONG OnDropDown(UINT lParam, LONG wParam);

	DECLARE_MESSAGE_MAP()
public:
	CColorButton m_volColor;
	CEdit m_editColor;
};
