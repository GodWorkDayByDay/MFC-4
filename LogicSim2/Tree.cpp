// Tree.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "LogicSim2.h"
#include "Tree.h"


// Tree

IMPLEMENT_DYNCREATE(Tree, CTreeView)

Tree::Tree()
{

}

Tree::~Tree()
{
}

BEGIN_MESSAGE_MAP(Tree, CTreeView)
END_MESSAGE_MAP()


// Tree �����Դϴ�.

#ifdef _DEBUG
void Tree::AssertValid() const
{
	CTreeView::AssertValid();
}

#ifndef _WIN32_WCE
void Tree::Dump(CDumpContext& dc) const
{
	CTreeView::Dump(dc);
}
#endif
#endif //_DEBUG


// Tree �޽��� ó�����Դϴ�.


void Tree::OnInitialUpdate()
{
	CTreeView::OnInitialUpdate();

	CImageList il;
	il.Create(IDB_BITMAP1, 16, 1, RGB(255, 255, 255));
	
	CTreeCtrl& tree = GetTreeCtrl();
	tree.SetImageList(&il, TVSIL_NORMAL);
	il.Detach();

	//level 1
	HTREEITEM hProgram = tree.InsertItem(_T("���α׷�"), NULL, NULL, TVI_ROOT, TVI_LAST);

	//level 2
	HTREEITEM hLogicGate = tree.InsertItem(_T("Gate"), NULL, NULL, hProgram, TVI_LAST);
	HTREEITEM hFlipFlop = tree.InsertItem(_T("Flip-Flop"), NULL, NULL, hProgram, TVI_LAST);
	HTREEITEM hInputOutput = tree.InsertItem(_T("Input/Output"), NULL, NULL, hProgram, TVI_LAST);

	//level 3
	HTREEITEM hGates[6];
	CString gates[] = { _T("AND"),_T("OR"), _T("NOT"), _T("NAND"), _T("NOR"), _T("XOR") };

	HTREEITEM hFlops[3];
	CString Flops[] = { _T("D-FF"),_T("JK-FF"),_T("T-FF") };

	HTREEITEM hInOut[4];
	CString InOuts[] = { _T("Switch") ,_T("Lamp") ,_T("Clock") ,_T("7-Segment") };

	for (int i = 0 ; i < 6; i++) {
		hGates[i] = tree.InsertItem(gates[i], i, i, hLogicGate, TVI_LAST);
	}

	for (int i = 0; i < 3; i++) {
		hFlops[i] = tree.InsertItem(Flops[i], i, i, hFlipFlop, TVI_LAST);
	}

	for (int i = 0; i < 4; i++) {
		hInOut[i] = tree.InsertItem(InOuts[i], i, i, hInputOutput, TVI_LAST);
	}
}


BOOL Tree::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: ���⿡ Ư��ȭ�� �ڵ带 �߰� ��/�Ǵ� �⺻ Ŭ������ ȣ���մϴ�.
	cs.style |= TVS_HASBUTTONS;
	cs.style |= TVS_HASLINES;
	cs.style |= TVS_LINESATROOT;
	cs.style |= TVS_TRACKSELECT;
	return CTreeView::PreCreateWindow(cs);
}
