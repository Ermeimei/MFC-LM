
// MFCLibMGView.h : CMFCLibMGView ��Ľӿ�
//

#pragma once


class CMFCLibMGView : public CView
{
protected: // �������л�����
	CMFCLibMGView();
	DECLARE_DYNCREATE(CMFCLibMGView)

// ����
public:
	CMFCLibMGDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CMFCLibMGView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFCLibMGView.cpp �еĵ��԰汾
inline CMFCLibMGDoc* CMFCLibMGView::GetDocument() const
   { return reinterpret_cast<CMFCLibMGDoc*>(m_pDocument); }
#endif

