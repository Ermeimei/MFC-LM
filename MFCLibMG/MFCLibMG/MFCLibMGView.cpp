
// MFCLibMGView.cpp : CMFCLibMGView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CMFCLibMGView ����/����

CMFCLibMGView::CMFCLibMGView()
{
	// TODO:  �ڴ˴���ӹ������

}

CMFCLibMGView::~CMFCLibMGView()
{
}

BOOL CMFCLibMGView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCLibMGView ����

void CMFCLibMGView::OnDraw(CDC* /*pDC*/)
{
	CMFCLibMGDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCLibMGView ��ӡ

BOOL CMFCLibMGView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFCLibMGView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFCLibMGView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO:  ��Ӵ�ӡ����е��������
}


// CMFCLibMGView ���

#ifdef _DEBUG
void CMFCLibMGView::AssertValid() const
{
	CView::AssertValid();
}

void CMFCLibMGView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCLibMGDoc* CMFCLibMGView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCLibMGDoc)));
	return (CMFCLibMGDoc*)m_pDocument;
}
#endif //_DEBUG


// CMFCLibMGView ��Ϣ�������
