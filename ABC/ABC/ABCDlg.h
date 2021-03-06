
// ABCDlg.h: 헤더 파일
//

#pragma once

// class라고 쓴 것: 캡슐화(Encapsulation), 상속(Inheritance), 다형성(Polymorphism)
// CABCDlg 대화 상자
class CABCDlg : public CDialogEx
{
	// 생성입니다.
public:

	// 괄호가 있으면 맴버 함수, 없으면 맴버 변수
	// CABCDlg: 데이터타입 ex) int i; 에서 int 같은 것
	CABCDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

	// 소멸자: 소멸자 이름은 클래스 이름과 같아야 하고 앞에 ~를 달아야 한다. 인수, 반환값 없음
	 /*~CABCDlg()
	{
		 ...
	}
	 이렇게 사용*/

	/*
	public: 상속가능, 클래스 외부에서 접근 가능
	private: 상속불가, 클래스 외부에서 접근 불가
	protected: 상속가능, 클래스 외부에서 접근 불가
	*/

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABC_DIALOG };
#endif

	protected:
	// virtual: DoDataExchange 함수가 완전하게 만들어지지 않았다, 나중에 구현부에서 완벽하게 만들어야 한다, 가상함수 
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	// 맴버변수
	HICON m_hIcon;

	// 맴버 함수
	// 생성된 메시지 맵 함수
	// OnInitDialog: 우리가 알림창을 만들때 일일히 컨트롤안함. 대신 얘가 해줌
	virtual BOOL OnInitDialog();
	// OnSysCommand: 시스템메뉴를 누르면 자동적으로 실행되는 함수
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	// Onpaint: 화면의 크기가 변경되거나 화면이 겹쳐졌다가 다시 나타날때 재실행되는 함수
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
};
