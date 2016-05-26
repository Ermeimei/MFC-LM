
// MFCLibMGView.cpp : CMFCLibMGView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCLibMG.h"
#endif

#include "MFCLibMGDoc.h"
#include "MFCLibMGView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCLibMGView

IMPLEMENT_DYNCREATE(CMFCLibMGView, CView)

BEGIN_MESSAGE_MAP(CMFCLibMGView, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CMFCLibMGView 构造/析构

CMFCLibMGView::CMFCLibMGView()
{
	// TODO:  在此处添加构造代码

}

CMFCLibMGView::~CMFCLibMGView()
{
}

BOOL CMFCLibMGView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCLibMGView 绘制

void CMFCLibMGView::OnDraw(CDC* /*pDC*/)
{
	CMFCLibMGDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  在此处为本机数据添加绘制代码
}


// CMFCLibMGView 打印

BOOL CMFCLibMGView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMFCLibMGView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加额外的打印前进行的初始化过程
}

void CMFCLibMGView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  添加打印后进行的清理过程
}


// CMFCLibMGView 诊断

#ifdef _DEBUG
void CMFCLibMGView::AssertValid() const
{
	CView::AssertValid();
}

void CMFCLibMGView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCLibMGDoc* CMFCLibMGView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCLibMGDoc)));
	return (CMFCLibMGDoc*)m_pDocument;
}
#endif //_DEBUG


// CMFCLibMGView 消息处理程序
