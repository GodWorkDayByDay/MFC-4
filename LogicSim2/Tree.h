#pragma once


// Tree ���Դϴ�.

class Tree : public CTreeView
{
	DECLARE_DYNCREATE(Tree)

protected:
	Tree();           // ���� ����⿡ ���Ǵ� protected �������Դϴ�.
	virtual ~Tree();

public:
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	DECLARE_MESSAGE_MAP()
public:
	virtual void OnInitialUpdate();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	afx_msg void OnTvnSelchanged(NMHDR *pNMHDR, LRESULT *pResult);
};


