#include "TextStructures.h"


#define DEFAULT_BEFORE(EXIST_PARAM, PARAM)  \
if (!EXIST_PARAM && oSrc.##EXIST_PARAM)     \
{										    \
    EXIST_PARAM = true;						\
    PARAM = oSrc.##PARAM;					\
}

#define APPLY_AFTER(EXIST_PARAM, PARAM)		\
if (oSrc.##EXIST_PARAM)						\
{										    \
    EXIST_PARAM = true;						\
    PARAM = oSrc.##PARAM;					\
}

std::wstring PPT_FORMAT::ToNode(const NSCommon::nullable_base<WORD> &prop, const std::wstring &strName)
{
    if (!prop.is_init()) return L"";

    return _T("<") + strName + _T(">") + std::to_wstring( (int)prop.get() ) + _T("</") + strName + _T(">");
}

std::wstring PPT_FORMAT::ToNode(const NSCommon::nullable_base<LONG> &prop, const std::wstring &strName)
{
    if (!prop.is_init()) return L"";

    return _T("<") + strName + _T(">") + std::to_wstring( (int)prop.get() ) + _T("</") + strName + _T(">");
}

std::wstring PPT_FORMAT::ToNode(const NSCommon::nullable_base<_UINT32> &prop, const std::wstring &strName)
{
    if (!prop.is_init()) return L"";

    return _T("<") + strName + _T(">") + std::to_wstring((int)prop.get()) + _T("</") + strName + _T(">");
}

std::wstring PPT_FORMAT::ToNode(const NSCommon::nullable_base<double> &prop, const std::wstring &strName)
{
    if (!prop.is_init()) return L"";

    return _T("<") + strName + _T(">") + XmlUtils::ToString(prop.get()) + _T("</") + strName + _T(">");
}

std::wstring PPT_FORMAT::ToNode(const NSCommon::nullable_base<CColor> &prop, const std::wstring &strName)
{
    if (!prop.is_init()) return L"";

    return _T("<") + strName + _T(">") + std::to_wstring((unsigned int)prop->GetLONG()) + _T("</") + strName + _T(">");
}

PPT_FORMAT::CFontProperty::CFontProperty() : PitchFamily(0), Charset(0) {}

PPT_FORMAT::CFontProperty::CFontProperty(const CFontProperty &oSrc)
{
    *this = oSrc;
}

PPT_FORMAT::CFontProperty &PPT_FORMAT::CFontProperty::operator=(const CFontProperty &oSrc)
{
    Name		= oSrc.Name;
    PitchFamily	= oSrc.PitchFamily;
    Charset		= oSrc.Charset;

    return *this;
}

std::wstring PPT_FORMAT::CFontProperty::getXmlArgsStr() const
{
    std::wstring str = L" typeface=\"" + Name + L"\"";
    if (IsValidPitchFamily(PitchFamily))
        str += L" pitchFamily=\"" + std::to_wstring(PitchFamily) + L"\"";
    if (IsValidCharset(Charset))
        str += L" charset=\"" + std::to_wstring((char)Charset) + L"\"";

    return str;
}

bool PPT_FORMAT::CFontProperty::IsValidCharset(int value)
{
    if (value <= 0 || value > 255)
        return false;

    std::set<int> BLCharset = {128, 136, 129};
    return BLCharset.find(value) == BLCharset.end();
}

bool PPT_FORMAT::CFontProperty::IsValidPitchFamily(int value)
{
    if (value <= 0 || value > 255)
        return false;

    std::set<int> BLPitchFamily = {148, 164};
    return BLPitchFamily.find(value) == BLPitchFamily.end();
}

bool PPT_FORMAT::CBulletAutoNum::isDefault() const
{
    return type.get_value_or(L"arabicPeriod") == L"arabicPeriod" &&
            (startAt.is_init() ? *startAt == 1 : true);
}

PPT_FORMAT::CFontProperties::CFontProperties(const CFontProperties &oSrc)
{
    *this = oSrc;
}

PPT_FORMAT::CFontProperties &PPT_FORMAT::CFontProperties::operator=(const CFontProperties &oSrc)
{
    font	= oSrc.font;
    ansi	= oSrc.ansi;
    ea		= oSrc.ea;
    sym		= oSrc.sym;

    return *this;
}

PPT_FORMAT::CTextCFRun::CTextCFRun()
{
}

PPT_FORMAT::CTextCFRun::CTextCFRun(const CTextCFRun &oSrc)
{
    *this = oSrc;
}

PPT_FORMAT::CTextCFRun &PPT_FORMAT::CTextCFRun::operator=(const CTextCFRun &oSrc)
{
    FontBold		= oSrc.FontBold;
    FontItalic		= oSrc.FontItalic;
    FontUnderline	= oSrc.FontUnderline;
    FontStrikeout	= oSrc.FontStrikeout;
    FontShadow		= oSrc.FontShadow;

    fontRef			= oSrc.fontRef;
    eaFontRef		= oSrc.eaFontRef;
    ansiFontRef		= oSrc.ansiFontRef;
    symbolFontRef	= oSrc.symbolFontRef;
    pp9rt           = oSrc.pp9rt;
    BaseLineOffset	= oSrc.BaseLineOffset;

    Color			= oSrc.Color;
    Size			= oSrc.Size;

    font		= oSrc.font;
    font.ea		= oSrc.font.ea;
    font.ansi	= oSrc.font.ansi;
    font.sym	= oSrc.font.sym;

    Cap				= oSrc.Cap;

    Language		= oSrc.Language;
    return *this;
}

PPT_FORMAT::CTextCFRun::~CTextCFRun()
{
}

void PPT_FORMAT::CTextCFRun::ApplyBefore(const CTextCFRun &oSrc)
{
    if (!FontBold.is_init()) 		FontBold = oSrc.FontBold;
    if (!FontItalic.is_init())		FontItalic = oSrc.FontItalic;
    if (!FontUnderline.is_init())	FontUnderline = oSrc.FontUnderline;
    if (!FontStrikeout.is_init())	FontStrikeout = oSrc.FontStrikeout;
    if (!FontShadow.is_init())		FontShadow = oSrc.FontShadow;

    if (!fontRef.is_init())			fontRef = oSrc.fontRef;
    if (!eaFontRef.is_init())		eaFontRef = oSrc.eaFontRef;
    if (!ansiFontRef.is_init())		ansiFontRef = oSrc.ansiFontRef;
    if (!symbolFontRef.is_init())	symbolFontRef = oSrc.symbolFontRef;
    if (!pp9rt.is_init())           pp9rt = oSrc.pp9rt;
    if (!BaseLineOffset.is_init())	BaseLineOffset = oSrc.BaseLineOffset;
    if (!Color.is_init())			Color = oSrc.Color;
    if (!Size.is_init())			Size = oSrc.Size;
    if (!Cap.is_init())				Cap = oSrc.Cap;

    if (!font.font.is_init())		font.font	= oSrc.font.font;
    if (!font.ansi.is_init())		font.ansi	= oSrc.font.ansi;
    if (!font.ea.is_init())			font.ea		= oSrc.font.ea;
    if (!font.sym.is_init())		font.sym	= oSrc.font.sym;

    if (!Language.is_init())		Language = oSrc.Language;
}

void PPT_FORMAT::CTextCFRun::ApplyAfter(const CTextCFRun &oSrc)
{
    if (oSrc.FontBold.is_init())			FontBold = oSrc.FontBold;
    if (oSrc.FontItalic.is_init())			FontItalic = oSrc.FontItalic;
    if (oSrc.FontUnderline.is_init())		FontUnderline = oSrc.FontUnderline;
    if (oSrc.FontStrikeout.is_init())		FontStrikeout = oSrc.FontStrikeout;
    if (oSrc.FontShadow.is_init())			FontShadow = oSrc.FontShadow;
    if (oSrc.pp9rt.is_init())               pp9rt = oSrc.pp9rt;

    bool bFontRefSetUp = false;
    if (oSrc.fontRef.is_init())
    {
        fontRef = oSrc.fontRef;
        bFontRefSetUp = true;
    }
    if (oSrc.eaFontRef.is_init())		eaFontRef = oSrc.eaFontRef;
    if (oSrc.ansiFontRef.is_init())		ansiFontRef = oSrc.ansiFontRef;
    if (oSrc.symbolFontRef.is_init())	symbolFontRef = oSrc.symbolFontRef;
    if (oSrc.BaseLineOffset.is_init())	BaseLineOffset = oSrc.BaseLineOffset;
    if (oSrc.pp9rt.is_init())           pp9rt = oSrc.pp9rt;

    if (oSrc.Color.is_init())			Color = oSrc.Color;
    if (oSrc.Size.is_init())			Size = oSrc.Size;
    if (oSrc.Cap.is_init())				Cap = oSrc.Cap;
    if (oSrc.Language.is_init())		Language = oSrc.Language;

    if (oSrc.font.ansi.is_init())		font.ansi = oSrc.font.ansi;
    if (oSrc.font.ea.is_init())			font.ea = oSrc.font.ea;
    if (oSrc.font.sym.is_init())		font.sym = oSrc.font.sym;
    if (oSrc.font.font.is_init())		font.font = oSrc.font.font;
    //{
    //	FontProperties = oSrc.FontProperties;
    //	if (!bFontRefSetUp)
    //		fontRef.reset();
    //}

}

PPT_FORMAT::CTextPFRun::CTextPFRun() : bIsOneLine(false)
{
}

PPT_FORMAT::CTextPFRun::CTextPFRun(const CTextPFRun &oSrc)
{
    *this = oSrc;
}

PPT_FORMAT::CTextPFRun &PPT_FORMAT::CTextPFRun::operator =(const CTextPFRun &oSrc)
{
    hasBullet			= oSrc.hasBullet;

    bulletFontRef		= oSrc.bulletFontRef;
    bulletSize			= oSrc.bulletSize;
    bulletChar			= oSrc.bulletChar;
    bulletColor			= oSrc.bulletColor;
    bulletFontProperties = oSrc.bulletFontProperties;
    bulletAutoNum       = oSrc.bulletAutoNum;

    textAlignment		= oSrc.textAlignment;
    lineSpacing			= oSrc.lineSpacing;
    spaceBefore			= oSrc.spaceBefore;
    spaceAfter			= oSrc.spaceAfter;
    leftMargin			= oSrc.leftMargin;
    indent				= oSrc.indent;
    defaultTabSize		= oSrc.defaultTabSize;

    tabStops			= oSrc.tabStops;

    fontAlign			= oSrc.fontAlign;
    textDirection		= oSrc.textDirection;
    wrapFlags			= oSrc.wrapFlags;

    bIsOneLine			= oSrc.bIsOneLine;

    return *this;
}

void PPT_FORMAT::CTextPFRun::ApplyBefore(const CTextPFRun &oSrc)
{
    if (!hasBullet.is_init())
    {
        hasBullet			= oSrc.hasBullet;
    }
    if (!bulletSize.is_init())
    {
        bulletSize			= oSrc.bulletSize;
    }
    if (!bulletChar.is_init())//master style (78).ppt
    {
        bulletChar			= oSrc.bulletChar;
        bulletFontRef		= oSrc.bulletFontRef;
    }
    if (!bulletColor.is_init())
    {
        bulletColor			= oSrc.bulletColor;
    }
    bulletFontProperties.reset();
    bulletAutoNum.reset();

    if (!textAlignment.is_init())			textAlignment = oSrc.textAlignment;
    if (!lineSpacing.is_init())				lineSpacing = oSrc.lineSpacing;
    if (!spaceBefore.is_init())				spaceBefore = oSrc.spaceBefore;
    if (!spaceAfter.is_init())				spaceAfter = oSrc.spaceAfter;
    if (!leftMargin.is_init())				leftMargin = oSrc.leftMargin;
    if (!indent.is_init())					indent = oSrc.indent;
    if (!defaultTabSize.is_init())			defaultTabSize = oSrc.defaultTabSize;

    if (!fontAlign.is_init())				fontAlign = oSrc.fontAlign;
    if (!textDirection.is_init())			textDirection = oSrc.textDirection;
    if (!wrapFlags.is_init())				wrapFlags = oSrc.wrapFlags;

    if ((0 == tabStops.size()) && (0 != oSrc.tabStops.size()))
    {
        tabStops.insert(tabStops.end(), oSrc.tabStops.begin(), oSrc.tabStops.end());
    }
}

void PPT_FORMAT::CTextPFRun::ApplyAfter(const CTextPFRun &oSrc)
{
    if (oSrc.hasBullet.is_init())
    {
        hasBullet = oSrc.hasBullet;

        bulletSize = oSrc.bulletSize;
        bulletChar		= oSrc.bulletChar;
        bulletFontRef	= oSrc.bulletFontRef;
        bulletColor		= oSrc.bulletColor;

        bulletFontProperties.reset();
        bulletAutoNum.reset();
    }

    if (oSrc.textAlignment.is_init())		textAlignment	= oSrc.textAlignment;
    if (oSrc.lineSpacing.is_init())			lineSpacing		= oSrc.lineSpacing;
    if (oSrc.spaceBefore.is_init())			spaceBefore		= oSrc.spaceBefore;
    if (oSrc.spaceAfter.is_init())			spaceAfter		= oSrc.spaceAfter;
    if (oSrc.leftMargin.is_init())			leftMargin		= oSrc.leftMargin;
    if (oSrc.indent.is_init())				indent			= oSrc.indent;
    if (oSrc.defaultTabSize.is_init())		defaultTabSize	= oSrc.defaultTabSize;

    if (oSrc.fontAlign.is_init())			fontAlign		= oSrc.fontAlign;
    if (oSrc.textDirection.is_init())		textDirection	= oSrc.textDirection;
    if (oSrc.wrapFlags.is_init())			wrapFlags		= oSrc.wrapFlags;

    if (!oSrc.tabStops.empty())				tabStops		= oSrc.tabStops;
}

std::wstring PPT_FORMAT::CTextPFRun::ToString(LONG lCount)
{
    return L"";
}

PPT_FORMAT::CTextRuler::CTextRuler()
{
}

PPT_FORMAT::CTextRuler::CTextRuler(const CTextRuler &oSrc)
{
    *this = oSrc;
}

PPT_FORMAT::CTextRuler &PPT_FORMAT::CTextRuler::operator =(const CTextRuler &oSrc)
{
    DefaultTabSize	= oSrc.DefaultTabSize;
    CLevels			= oSrc.CLevels;
    TabStops		= oSrc.TabStops;

    LeftMargin1 = oSrc.LeftMargin1;
    LeftMargin2 = oSrc.LeftMargin2;
    LeftMargin3 = oSrc.LeftMargin3;
    LeftMargin4 = oSrc.LeftMargin4;
    LeftMargin5 = oSrc.LeftMargin5;

    Indent1 = oSrc.Indent1;
    Indent2 = oSrc.Indent2;
    Indent3 = oSrc.Indent3;
    Indent4 = oSrc.Indent4;
    Indent5 = oSrc.Indent5;

    tabsStops = oSrc.tabsStops;

    return *this;
}

PPT_FORMAT::CTextRuler::~CTextRuler()
{
    tabsStops.clear();
}

void PPT_FORMAT::CTextRuler::ApplyBefore(const CTextRuler &oSrc)
{
    if (!DefaultTabSize.is_init())			DefaultTabSize = oSrc.DefaultTabSize;
    if (!CLevels.is_init())					CLevels		= oSrc.CLevels;

    if (!LeftMargin1.is_init())				LeftMargin1 = oSrc.LeftMargin1;
    if (!LeftMargin2.is_init())				LeftMargin2 = oSrc.LeftMargin2;
    if (!LeftMargin3.is_init())				LeftMargin3 = oSrc.LeftMargin3;
    if (!LeftMargin4.is_init())				LeftMargin4 = oSrc.LeftMargin4;
    if (!LeftMargin5.is_init())				LeftMargin5 = oSrc.LeftMargin5;

    if (!Indent1.is_init())					Indent1 = oSrc.Indent1;
    if (!Indent2.is_init())					Indent2 = oSrc.Indent2;
    if (!Indent3.is_init())					Indent3 = oSrc.Indent3;
    if (!Indent4.is_init())					Indent4 = oSrc.Indent4;
    if (!Indent5.is_init())					Indent5 = oSrc.Indent5;

    if (!tabsStops.empty())					tabsStops = oSrc.tabsStops;
}

std::wstring PPT_FORMAT::CTextRuler::ToString()
{
    return L"";
}

PPT_FORMAT::CTextSIRun::CTextSIRun()
{
    bIsExt = true;
    lCount  = 0;

    bSpell = false;
    bLang = false;
    bAltLang = false;

    bPp10ext = false;
    bBidi = false;
    bSmartTag = false;

    Spell = 0;
    Lang = 0;
    AltLang = 0;

    Bidi = 0;
    pp10runid = 0;

    bGramma = false;
}

PPT_FORMAT::CTextSIRun::CTextSIRun(const CTextSIRun &oSrc)
{
    *this = oSrc;
}

PPT_FORMAT::CTextSIRun &PPT_FORMAT::CTextSIRun::operator =(const CTextSIRun &oSrc)
{
    bIsExt		= oSrc.bIsExt;
    lCount		= oSrc.lCount;

    bSpell		= oSrc.bSpell;
    bLang		= oSrc.bLang;
    bAltLang	= oSrc.bAltLang;

    bPp10ext	= oSrc.bPp10ext;
    bBidi		= oSrc.bBidi;
    bSmartTag	= oSrc.bSmartTag;

    Spell		= oSrc.Spell;
    Lang		= oSrc.Lang;
    AltLang		= oSrc.AltLang;

    Bidi		= oSrc.Bidi;
    pp10runid	= oSrc.pp10runid;

    bGramma		= oSrc.bGramma;

    arSmartTags = oSrc.arSmartTags;

    return *this;
}

void PPT_FORMAT::CTextSIRun::ApplyBefore(const CTextSIRun &oSrc)
{
    /*
             * gcc 4.8 doesn't understand this construction:
             *
                        DEFAULT_BEFORE(bSpell, Spell);
                        DEFAULT_BEFORE(bLang, Lang);
                        DEFAULT_BEFORE(bAltLang, AltLang);
                        DEFAULT_BEFORE(bBidi, Bidi);
                        DEFAULT_BEFORE(bPp10ext, pp10runid);
            */
    if (!bSpell && oSrc.bSpell)
    {
        bSpell = true;
        Spell = oSrc.Spell;
    }
    if (!bLang && oSrc.bLang)
    {
        bLang = true;
        Lang = oSrc.Lang;
    }
    if (!bAltLang && oSrc.bAltLang)
    {
        bAltLang = true;
        AltLang = oSrc.AltLang;
    }
    if (!bBidi && oSrc.bBidi)
    {
        bBidi = true;
        Bidi = oSrc.Bidi;
    }
    if (!bPp10ext && oSrc.bPp10ext)
    {
        bPp10ext = true;
        pp10runid = oSrc.pp10runid;
    }


    if (!bGramma)
    {
        bGramma = oSrc.bGramma;
    }
}

std::wstring PPT_FORMAT::CTextSIRun::ToString()
{
    return L"";
}

PPT_FORMAT::CSpan::CSpan() : m_bField(false), m_bBreak(false)
{
}

PPT_FORMAT::CSpan::CSpan(const CSpan &oSrc)
{
    *this = oSrc;
}

PPT_FORMAT::CSpan &PPT_FORMAT::CSpan::operator=(const CSpan &oSrc)
{
    m_oRun		= oSrc.m_oRun;
    m_strText	= oSrc.m_strText;
    m_bField	= oSrc.m_bField;
    m_bBreak	= oSrc.m_bBreak;
    m_arrInteractive = oSrc.m_arrInteractive;

    return *this;
}

PPT_FORMAT::CSpan::~CSpan()
{
}

PPT_FORMAT::CTextStyleLevel::CTextStyleLevel()
{
}

PPT_FORMAT::CTextStyleLevel::CTextStyleLevel(const CTextStyleLevel &oSrc)
{
    *this = oSrc;
}

PPT_FORMAT::CTextStyleLevel &PPT_FORMAT::CTextStyleLevel::operator=(const CTextStyleLevel &oSrc)
{
    m_oPFRun	= oSrc.m_oPFRun;
    m_oCFRun	= oSrc.m_oCFRun;

    return *this;
}

void PPT_FORMAT::CTextStyleLevel::ApplyAfter(const CTextStyleLevel &oSrc)
{
    m_oPFRun.ApplyAfter(oSrc.m_oPFRun);
    m_oCFRun.ApplyAfter(oSrc.m_oCFRun);
}

void PPT_FORMAT::CTextStyleLevel::ApplyBefore(const CTextStyleLevel &oSrc)
{
    m_oPFRun.ApplyBefore(oSrc.m_oPFRun);
    m_oCFRun.ApplyBefore(oSrc.m_oCFRun);
}

PPT_FORMAT::CTextStyles::CTextStyles()
{
    for (int i = 0; i < 10; ++i)
    {
        m_pLevels[i] = NULL;
    }
}

PPT_FORMAT::CTextStyles::CTextStyles(const CTextStyles &oSrc)
{
    *this = oSrc;
}

PPT_FORMAT::CTextStyles &PPT_FORMAT::CTextStyles::operator=(const CTextStyles &oSrc)
{
    for (int i = 0; i < 10; ++i)
    {
        m_pLevels[i] = oSrc.m_pLevels[i];
    }
    return *this;
}

void PPT_FORMAT::CTextStyles::SetStyles(CTextStyles *pStyles)
{
    for (int i = 0; i < 10; ++i)
    {
        m_pLevels[i] = pStyles->m_pLevels[i];
    }
}

void PPT_FORMAT::CTextStyles::SetLanguage(nullable<WORD> &language)
{
    if (!language.is_init()) return;

    for (int i = 0; i < 10; ++i)
    {
        if (m_pLevels[i].is_init())
        {
            m_pLevels[i]->m_oCFRun.Language = language;
        }
    }
}

void PPT_FORMAT::CTextStyles::ApplyAfter(const CTextStyles &oSrc)
{
    for (int i = 0; i < 10; ++i)
    {
        if (!m_pLevels[i].is_init())
        {
            m_pLevels[i] = oSrc.m_pLevels[i];
        }
        else if (oSrc.m_pLevels[i].is_init())
        {
            m_pLevels[i]->ApplyAfter(oSrc.m_pLevels[i].get());
        }

    }
}

void PPT_FORMAT::CTextStyles::ApplyBefore(const CTextStyles &oSrc)
{
    for (int i = 0; i < 10; ++i)
    {
        if (!m_pLevels[i].is_init())
        {
            m_pLevels[i] = oSrc.m_pLevels[i];
        }
        else if (oSrc.m_pLevels[i].is_init())
        {
            m_pLevels[i]->ApplyBefore(oSrc.m_pLevels[i].get());
        }

    }
}

PPT_FORMAT::CParagraph::CParagraph()
{
    m_lTextType			= -1;
    m_lTextLevel		= 0;
    m_lStyleThemeIndex	= -1;
}

PPT_FORMAT::CParagraph::CParagraph(const CParagraph &oSrc)
{
    *this = oSrc;
}

PPT_FORMAT::CParagraph &PPT_FORMAT::CParagraph::operator=(const CParagraph &oSrc)
{
    m_lTextLevel		= oSrc.m_lTextLevel;
    m_lTextType			= oSrc.m_lTextType;
    m_lStyleThemeIndex	= oSrc.m_lStyleThemeIndex;

    m_oPFRun			= oSrc.m_oPFRun;

    m_arSpans			= oSrc.m_arSpans;

    return *this;
}

PPT_FORMAT::CParagraph::~CParagraph()
{
    m_arSpans.clear();
}

void PPT_FORMAT::CParagraph::CheckErrors()
{
    //if (IsEmpty())
    //{
    //             m_oPFRun.hasBullet = false;
    //}
    size_t nCountS = m_arSpans.size();
    for (size_t i = 0; i < nCountS; ++i)
    {
        std::replace( m_arSpans[i].m_strText.begin(), m_arSpans[i].m_strText.end(), (wchar_t)(11), (wchar_t)(13));
    }
}

bool PPT_FORMAT::CParagraph::IsEmpty()
{
    size_t nCountSpans = m_arSpans.size();
    for (size_t i = 0; i < nCountSpans; ++i)
    {
        size_t nLen = m_arSpans[i].m_strText.length();

        if (nLen > 1)
            return false;

        if ((nLen == 1) && ((wchar_t)(13) != m_arSpans[i].m_strText[0]))
            return false;
    }
    return true;
}
