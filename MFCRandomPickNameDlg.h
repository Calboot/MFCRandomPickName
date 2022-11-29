
// MFCRandomPickNameDlg.h: 头文件
//

#pragma once


// CMFCRandomPickNameDlg 对话框
class CMFCRandomPickNameDlg : public CDHtmlDialog
{
// 构造
public:
	CMFCRandomPickNameDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCRANDOMPICKNAME_DIALOG, IDH = IDR_HTML_MFCRANDOMPICKNAME_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持

	HRESULT OnButtonOK(IHTMLElement *pElement);
	HRESULT OnButtonCancel(IHTMLElement *pElement);

// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
	DECLARE_DHTML_EVENT_MAP()
public:
	afx_msg void OnBnClickedMfcbutton1();
	CStatic c_text;
	CStatic c_text_round;
	CButton c_check_allow_peretition;
};
