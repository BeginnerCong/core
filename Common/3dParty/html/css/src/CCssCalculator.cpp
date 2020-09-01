#include "CCssCalculator.h"
#include "CCssCalculator_Private.h"


namespace NSCSS
{
    CCssCalculator::CCssCalculator()
    {
        m_pInternal = new CCssCalculator_Private();
    }

    CCssCalculator::~CCssCalculator()
    {
        delete m_pInternal;
    }

    std::vector<std::pair<std::wstring, std::vector<std::pair<std::wstring, std::wstring>>>> CCssCalculator::GetDeclarations(const std::wstring& sSelector)  const
    {
        return m_pInternal->GetDeclarations(sSelector);
    }

    CCompiledStyle CCssCalculator::GetCompiledStyle(const std::vector<std::string>& arSelectors, UnitMeasure unitMeasure) const
    {
        return  m_pInternal->GetCompiledStyle(arSelectors, unitMeasure);
    }

    CCompiledStyle CCssCalculator::GetCompiledStyle(const CNode& oNode, const std::vector<CNode>& oParents, const UnitMeasure& unitMeasure) const
    {
        return  m_pInternal->GetCompiledStyle(oNode, oParents, unitMeasure);
    }

    void CCssCalculator::AddStyle(const std::vector<std::string>& sSelectors, const std::string &sStyle)
    {
        m_pInternal->AddStyle(sSelectors, sStyle);
    }

    void CCssCalculator::AddStyles(const std::string &sStyle)
    {
        m_pInternal->AddStyles(sStyle);
    }

    void CCssCalculator::AddStyles(const std::wstring &sStyle)
    {
        m_pInternal->AddStyles(sStyle);

    }

    void CCssCalculator::AddStylesFromFile(const std::wstring &sFileName)
    {
        m_pInternal->AddStylesFromFile(sFileName);
    }

    void CCssCalculator::SetUnitMeasure(const UnitMeasure& nType)
    {
        m_pInternal->SetUnitMeasure(nType);
    }

    void CCssCalculator::SetDpi(const int& nValue)
    {
        m_pInternal->SetDpi(nValue);
    }

    const UnitMeasure& CCssCalculator::GetUnitMeasure() const
    {
        return m_pInternal->GetUnitMeasure();
    }

    const std::wstring& CCssCalculator::GetEncoding() const
    {
        return m_pInternal->GetEncoding();
    }

    const int& CCssCalculator::GetDpi() const
    {
        return m_pInternal->GetDpi();
    }

    void CCssCalculator::Print() const
    {
        m_pInternal->Print();
    }

    void CCssCalculator::Clear()
    {
        m_pInternal->Clear();
    }
}
