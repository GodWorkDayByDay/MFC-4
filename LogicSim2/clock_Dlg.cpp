// clock_Dlg.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "LogicSim2.h"
#include "clock_Dlg.h"
#include "afxdialogex.h"


// clock_Dlg ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(clock_Dlg, CDialogEx)

clock_Dlg::clock_Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

clock_Dlg::~clock_Dlg()
{
}

void clock_Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(clock_Dlg, CDialogEx)
	ON_BN_CLICKED(IDOK, &clock_Dlg::OnBnClickedOk)
END_MESSAGE_MAP()


// clock_Dlg �޽��� ó�����Դϴ�.


void clock_Dlg::OnBnClickedOk()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	CDialogEx::OnOK();
}


void clock_Dlg::OnOK()
{
	// TODO: ���⿡ Ư��ȭ�� �ڵ带 �߰� ��/�Ǵ� �⺻ Ŭ������ ȣ���մϴ�.
	GetDlgItemText(IDC_EDIT1, str);
	i = _ttoi(str);

	CDialogEx::OnOK();
}


BOOL clock_Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  ���⿡ �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
	str.Format(_T("%d"), i);
	SetDlgItemText(IDC_EDIT1, str);

	return TRUE;  // return TRUE unless you set the focus to a control
				  // ����: OCX �Ӽ� �������� FALSE�� ��ȯ�ؾ� �մϴ�.
}
