#pragma once


// RotateDlg 대화 상자

class RotateDlg : public CDialogEx
{
	DECLARE_DYNAMIC(RotateDlg)

public:
	RotateDlg(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~RotateDlg();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ROTATEDLG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	UINT rotAngle;
};
