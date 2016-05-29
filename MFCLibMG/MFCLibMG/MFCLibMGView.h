
// MFCLibMGView.h : CMFCLibMGView 类的接口
//

#pragma once


class CMFCLibMGView : public CView
{
protected: // 仅从序列化创建
	CMFCLibMGView();
	DECLARE_DYNCREATE(CMFCLibMGView)

// 特性
public:
	CMFCLibMGDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~CMFCLibMGView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFCLibMGView.cpp 中的调试版本
inline CMFCLibMGDoc* CMFCLibMGView::GetDocument() const
   { return reinterpret_cast<CMFCLibMGDoc*>(m_pDocument); }
#endif

