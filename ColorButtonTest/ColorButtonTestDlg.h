
// ColorButtonTestDlg.h : 头文件
//

#pragma once
#include "afxwin.h"
#include "ColorButton.h"
#include "ColourPopup.h"


// CColorButtonTestDlg 对话框
class CColorButtonTestDlg : public CDialogEx
{
// 构造
public:
	CColorButtonTestDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_COLORBUTTONTEST_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
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
