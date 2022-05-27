﻿#pragma once
#include "ElementShape.h"
#include "ElementParagraph.h"
#include "ElementImage.h"

namespace NSDocxRenderer
{
    const double STANDART_LEFT_INDENT_MM = 30;
    const double STANDART_RIGHT_INDENT_MM = 15;
    const double STANDART_FIRSTLINE_INDENT_MM = 12.5;

    inline bool IsSpaceUtf32(const uint32_t& c)
    {
        return (' ' == c) ? true : false;
    }
    inline bool IsSpaceUtf32(NSStringUtils::CStringUTF32& oText)
    {
        if (1 != oText.length())
            return false;
        return IsSpaceUtf32(oText[0]);
    }

    inline bool IsUnicodeSymbol( int symbol )
    {
        bool result = false;

        if ( ( 0x0009 == symbol ) || ( 0x000A == symbol ) || ( 0x000D == symbol ) ||
           ( ( 0x0020 <= symbol ) && ( 0xD7FF >= symbol ) ) || ( ( 0xE000 <= symbol ) && ( symbol <= 0xFFFD ) ) ||
           ( ( 0x10000 <= symbol ) && symbol ) )
        {
            result = true;
        }

        return result;
    }

    class CPage
    {
    public:
        NSStructures::CFont*		m_pFont;
        NSStructures::CPen*			m_pPen;
        NSStructures::CBrush*		m_pBrush;
        NSStructures::CShadow*		m_pShadow;
        NSStructures::CEdgeText*	m_pEdgeText;

        Aggplus::CMatrix*			m_pTransform;
        Aggplus::CGraphicsPathSimpleConverter* m_pSimpleGraphicsConverter;

        CVectorGraphics				m_oVector;

        double m_dWidth;
        double m_dHeight;

        LONG						m_lCurrentCommand;

        std::vector<CBaseItem*>	m_arGraphicItems;
        std::vector<CParagraph*> m_arParagraphs;

        std::vector<CTextLine*> m_arTextLine;
        CTextLine* m_pCurrentLine;

        CFontManager		m_oManager;
        CFontManagerLight	m_oManagerLight;

        TextAssociationType m_eTextAssociationType;

        NSStringUtils::CStringBuilder m_oWriterVML;

        bool m_bIsDeleteTextClipPage;

        double m_dLastTextX;
        double m_dLastTextY;
        double m_dLastTextX_block;

    public:
        CPage(NSFonts::IApplicationFonts* pFonts);
        ~CPage();
        void Init(NSStructures::CFont* pFont, NSStructures::CPen* pPen, NSStructures::CBrush* pBrush,
            NSStructures::CShadow* pShadow, NSStructures::CEdgeText* pEdge, Aggplus::CMatrix* pMatrix, Aggplus::CGraphicsPathSimpleConverter* pSimple);

        void Clear();
        void ClearTextLines();
        void ClearGraphicItems();
        void ClearParagraphs();

        void SetCurrentLineByBaseline(const double& dBaseLinePos);
        //удаляем то, что выходит за границы страницы
        void DeleteTextClipPage();

        // image commands
        //набивается содержимым вектор m_arGraphicItems
        void WriteImage(CImageInfo& oInfo, double& fX, double& fY, double& fWidth, double& fHeight);

        // path commands
        void MoveTo(double& dX, double& dY);
        void LineTo(double& dX, double& dY);
        void CurveTo(double& x1, double& y1, double& x2, double& y2, double& x3, double& y3);
        void Start();
        void End();
        void Close();
        //набивается содержимым вектор m_arGraphicItems
        void DrawPath(LONG lType, LONG lTxId);

        //набивается содержимым вектор m_arTextLine
        void WriteText(unsigned int* pUnicodes, unsigned int* pGids, unsigned int nCount,
                       double fX, double fY, double fWidth, double fHeight,
                       double fBaseLineOffset, bool bIsPDFAnalyzer);

        void Build();
        void BuildByTypeBlockChar();
        void BuildByTypeBlockLine();
        void BuildByTypePlainLine();
        void BuildByTypeShapeLine();
        void BuildByTypePlainParagraph();

        //вычисляем примерный тип выравнивания строки
        void CalculateTextAlignmentType(CParagraph& a_rParagraph);

        //Объединяем строки, которые находятся на расстроянии не большем dAffinity
        void Merge(double dAffinity);

        //конвертим m_arGraphicItems, m_arParagraphs в xml-строку
        void Write(NSStringUtils::CStringBuilder& oWriter);

        void WriteSectionToFile(bool bLastPage, NSStringUtils::CStringBuilder& oWriter);
    };
}
