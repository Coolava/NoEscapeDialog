
// NoEscapeDialogExampleDlg.h : header file
//

#pragma once
#include "../../NoEscapeDialog.h"

// CNoEscapeDialogExampleDlg dialog
class CNoEscapeDialogExampleDlg : public NoEscapeDialog
{
// Construction
public:
	CNoEscapeDialogExampleDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_NOESCAPEDIALOGEXAMPLE_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
};
