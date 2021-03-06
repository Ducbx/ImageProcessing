
// CV Image ProcessorDlg.h: 헤더 파일
//

#pragma once
#include <opencv2/opencv.hpp>
#include <opencv2/core/mat.hpp>
#include <stack>
using namespace std;
using namespace cv;

// CCVImageProcessorDlg 대화 상자
class CCVImageProcessorDlg : public CDialogEx
{
// 생성입니다.
public:
	CCVImageProcessorDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CVIMAGEPROCESSOR_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	Mat image; //현재 이미지
	CString path; //불러온 이미지 경로
	stack<Mat> imgStack; //이미지 스택
	bool opened = false; //이미지가 있는지 확인 여부
	bool openCheck(); //이미지가 있는지 확인하는 함수
	afx_msg void OnFileOpen(); //파일열기 함수
	void DisplayImage(int IDC_PICTURE_TARGET, Mat targetMat); //이미지 출력 함수
	afx_msg void OnQuitProgram(); //프로그램 종료 함수
	afx_msg void OnSave(); //이미지 저장 함수
	afx_msg void OnSaveAs(); //다른이름으로 저장
	afx_msg void OnUndo(); //실행 취소
	afx_msg void OnRGB2GRAY(); //Gray Scaling
	afx_msg void OnSwitchLeftRight(); //좌우 전환
	afx_msg void OnSwitchTopBottom(); //상하 전환
	afx_msg void OnPrintBitPlane(); //BitPlane
	afx_msg void OnHistogramStretching(); //히스토그램 스트레칭
	afx_msg void OnHistogramEqualization(); //히스토그램 평준화
	afx_msg void OnNegativeImage(); //이미지 색상 반전
	afx_msg void OnThresholding(); //Thresholding
	afx_msg void OnBlurring(); //가우시안 블러링
	afx_msg void OnSharpning(); //언샤프마스킹
	afx_msg void OnAverageFiltering(); //평균값 필터링
	afx_msg void OnMedianFiltering(); //중간값 필터링
	afx_msg void OnSobelMasking(); //소벨 마스킹
	afx_msg void OnLaplacianMasking(); //라플라시안 마스킹
	afx_msg void OnOpening();
	afx_msg void OnClosing();
	afx_msg void OnExpandReduce();
	CStatic pictureControl;
	afx_msg void OnRotate();
	afx_msg void OnDithering();
};
