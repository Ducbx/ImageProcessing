// BlurringDlg.cpp: 구현 파일
//

#include "stdafx.h"
#include "CV Image Processor.h"
#include "BlurringDlg.h"
#include "afxdialogex.h"


// BlurringDlg 대화 상자

IMPLEMENT_DYNAMIC(BlurringDlg, CDialogEx)

BlurringDlg::BlurringDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_BLURDLG, pParent)
{

	gausian_size = 0;
}

BlurringDlg::~BlurringDlg()
{
}

void BlurringDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(BlurringDlg, CDialogEx)
	ON_BN_CLICKED(IDOK, &BlurringDlg::OnBnClickedOk)
	ON_BN_CLICKED(IDC_RADIO2, &BlurringDlg::OnBnClickedRadio2)
	ON_BN_CLICKED(IDC_RADIO1, &BlurringDlg::OnBnClickedRadio1)
END_MESSAGE_MAP()


// BlurringDlg 메시지 처리기


void BlurringDlg::OnBnClickedOk()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (gausian_size == 0) {
		CString msg = _T("항목을 선택하여 주십시오");
		AfxMessageBox(msg);
		return;
	}
	CDialogEx::OnOK();
}


void BlurringDlg::OnBnClickedRadio1()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	gausian_size = 3;
}


void BlurringDlg::OnBnClickedRadio2()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	gausian_size = 5;
}

