
// MFCRandomPickNameDlg.cpp: 实现文件
//

#include "pch.h"
#include "framework.h"
#include "MFCRandomPickName.h"
#include "MFCRandomPickNameDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCRandomPickNameDlg 对话框

BEGIN_DHTML_EVENT_MAP(CMFCRandomPickNameDlg)
	DHTML_EVENT_ONCLICK(_T("ButtonOK"), OnButtonOK)
	DHTML_EVENT_ONCLICK(_T("ButtonCancel"), OnButtonCancel)
END_DHTML_EVENT_MAP()


CMFCRandomPickNameDlg::CMFCRandomPickNameDlg(CWnd* pParent /*=nullptr*/)
	: CDHtmlDialog(IDD_MFCRANDOMPICKNAME_DIALOG, IDR_HTML_MFCRANDOMPICKNAME_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCRandomPickNameDlg::DoDataExchange(CDataExchange* pDX)
{
	CDHtmlDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_STATIC_TEXT, c_text);
	DDX_Control(pDX, IDC_STATIC_TEXT_ROUND, c_text_round);
	DDX_Control(pDX, IDC_CHECK1_ALLOW_REPETITION, c_check_allow_peretition);
}

BEGIN_MESSAGE_MAP(CMFCRandomPickNameDlg, CDHtmlDialog)
	ON_BN_CLICKED(IDC_MFCBUTTON1, &CMFCRandomPickNameDlg::OnBnClickedMfcbutton1)
END_MESSAGE_MAP()


// CMFCRandomPickNameDlg 消息处理程序

BOOL CMFCRandomPickNameDlg::OnInitDialog()
{
	CDHtmlDialog::OnInitDialog();

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CMFCRandomPickNameDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDHtmlDialog::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CMFCRandomPickNameDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

HRESULT CMFCRandomPickNameDlg::OnButtonOK(IHTMLElement* /*pElement*/)
{
	OnOK();
	return S_OK;
}

HRESULT CMFCRandomPickNameDlg::OnButtonCancel(IHTMLElement* /*pElement*/)
{
	OnCancel();
	return S_OK;
}

CString v_zp71[42], v_tstr, v_staticstr,v_rstr;
bool v_init,v_picked[42];
short v_round,v_tnum,v_allow_repetition;

void f_init() {
	v_zp71[0] = _T("万好");
	v_zp71[1] = _T("邓涵仪");
	v_zp71[2] = _T("吕明兮");
	v_zp71[3] = _T("史雨茗");
	v_zp71[4] = _T("苏介然");
	v_zp71[5] = _T("王若羽");
	v_zp71[6] = _T("杨惟亦");
	v_zp71[7] = _T("俞越");
	v_zp71[8] = _T("方铨铎");
	v_zp71[9] = _T("郝鑫雨");
	v_zp71[10] = _T("黄禹森");
	v_zp71[11] = _T("靳博雄");
	v_zp71[12] = _T("孔凡卓");
	v_zp71[13] = _T("刘厚杰");
	v_zp71[14] = _T("刘宇轩");
	v_zp71[15] = _T("刘子墨");
	v_zp71[16] = _T("龙墨涵");
	v_zp71[17] = _T("陆昊宇");
	v_zp71[18] = _T("路博仲");
	v_zp71[19] = _T("马天琪");
	v_zp71[20] = _T("佘锦添");
	v_zp71[21] = _T("沈琪霖");
	v_zp71[22] = _T("施景耀");
	v_zp71[23] = _T("石译辰");
	v_zp71[24] = _T("宋昊轩");
	v_zp71[25] = _T("谭云起");
	v_zp71[26] = _T("王泱博");
	v_zp71[27] = _T("王泽涛");
	v_zp71[28] = _T("吴玖鲲");
	v_zp71[29] = _T("颜肇祯");
	v_zp71[30] = _T("杨东润");
	v_zp71[31] = _T("杨紫尧");
	v_zp71[32] = _T("袁靖程");
	v_zp71[33] = _T("张洛凯");
	v_zp71[34] = _T("张绪德");
	v_zp71[35] = _T("周子涵");
	v_zp71[36] = _T("邹成蹊");
	v_zp71[37] = _T("欧阳宗润");
	v_zp71[38] = _T("郑泽元");
	v_zp71[39] = _T("沈千翔");
	v_zp71[40] = _T("陈予扬");
	v_zp71[41] = _T("刘添一");

	v_round = 1;

	for (short i = 0; i < 42; i++) {
		v_picked[i] = false;
	}

	v_staticstr = _T(" - ");

	srand(time(0));

	v_init = true;
}

void CMFCRandomPickNameDlg::OnBnClickedMfcbutton1()
{
	// TODO: 在此添加控件通知处理程序代码

	while (!v_init) {
		f_init();
	}

	v_allow_repetition = c_check_allow_peretition.GetCheck();

	v_tnum = rand() % 42;
	while (v_picked[v_tnum] && v_allow_repetition==BST_UNCHECKED) {
		v_tnum = rand() % 42;
	}

	v_picked[v_tnum] = true;

	v_tstr = _T("");
	v_tstr.Format(_T("%d%s%s"),v_tnum+1, v_staticstr, v_zp71[v_tnum]);

	v_rstr = "";
	v_rstr.Format(_T("%d / %d"), v_round, 42);

	c_text.SetWindowText(v_tstr);
	c_text_round.SetWindowTextW(v_rstr);

	v_round++;
	if (v_round > 42) {
		for (short i = 0; i < 42; i++) {
			v_picked[i] = false;
		}
		v_round = 1;
	}
}