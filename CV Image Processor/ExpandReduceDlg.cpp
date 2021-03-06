// ExpandReduceDlg.cpp: 구현 파일
//

#include "stdafx.h"
#include "CV Image Processor.h"
#include "ExpandReduceDlg.h"
#include "afxdialogex.h"


// ExpandReduceDlg 대화 상자

IMPLEMENT_DYNAMIC(ExpandReduceDlg, CDialogEx)

ExpandReduceDlg::ExpandReduceDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_EXPANDREDUCEDLG, pParent)
	, ratioValue(0)
{

	num = -1;
}

ExpandReduceDlg::~ExpandReduceDlg()
{
}

void ExpandReduceDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDITRATIO, ratioValue);
}


BEGIN_MESSAGE_MAP(ExpandReduceDlg, CDialogEx)
	ON_BN_CLICKED(IDC_RADIO1, &ExpandReduceDlg::OnBnClickedRadio1)
	ON_BN_CLICKED(IDC_RADIO2, &ExpandReduceDlg::OnBnClickedRadio2)
	ON_BN_CLICKED(IDOK, &ExpandReduceDlg::OnBnClickedOk)
END_MESSAGE_MAP()


// ExpandReduceDlg 메시지 처리기
BOOL ExpandReduceDlg::OnInitDialog()
{
	CDialog::OnInitDialog();
	ratioValue = 100;
	UpdateData(FALSE);
	return TRUE;
}

void ExpandReduceDlg::OnBnClickedRadio1()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	num = cv::INTER_NEAREST;
}


void ExpandReduceDlg::OnBnClickedRadio2()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	num = cv::INTER_LINEAR;
}


void ExpandReduceDlg::OnBnClickedOk()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (num == -1) AfxMessageBox(_T("보간 방식을 선택하시오"));
	else CDialogEx::OnOK();
}
