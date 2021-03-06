#pragma once
#include "afxcmn.h"
#include <opencv2/opencv.hpp>

// ExpandReduceDlg 대화 상자

class ExpandReduceDlg : public CDialogEx
{
	DECLARE_DYNAMIC(ExpandReduceDlg)

public:
	ExpandReduceDlg(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~ExpandReduceDlg();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_EXPANDREDUCEDLG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	UINT ratioValue;
	int num;
	afx_msg void OnBnClickedRadio1();
	afx_msg void OnBnClickedRadio2();
	afx_msg void OnBnClickedOk();
};
