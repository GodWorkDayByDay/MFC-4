
// MainFrm.h : interface of the CMainFrame class
//

#pragma once
#include "afxext.h"
#include "LogicSim2View.h"
#include "Tree.h"
#include "OptionView.h"

class CMainFrame : public CFrameWnd
{
	
protected: // create from serialization only
	CMainFrame();
	DECLARE_DYNCREATE(CMainFrame)

// Attributes
public:

// Operations
public:
	CLogicSim2View* m_main;
	Tree*			m_tree;
	OptionView*		m_option;
// Overrides
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

// Implementation
public:
	virtual ~CMainFrame();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:  // control bar embedded members
	CToolBar          m_wndToolBar;
	CStatusBar        m_wndStatusBar;
	CToolBar		  m_gateToolBar;
	

// Generated message map functions
protected:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	DECLARE_MESSAGE_MAP()

public:
	afx_msg void OnViewGatetoolbar();
	BOOL m_bShowToolBar;
	afx_msg void OnUpdateViewGatetoolbar(CCmdUI *pCmdUI); 
	CSplitterWnd m_wndSplitter;

	virtual BOOL OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext* pContext);
	CSplitterWnd m_subSplitter;
};


