#include "CBookContentItem.h"

CBookContentItem::CBookContentItem()
{

}

CBookContentItem::~CBookContentItem()
{

}

void CBookContentItem::Clear()
{
    m_sID.clear();
    m_sLinear.clear();
}

bool CBookContentItem::ReadContentItem(XmlUtils::CXmlLiteReader &oXmlLiteReader, const int& depth)
{
    if (!oXmlLiteReader.IsValid() || oXmlLiteReader.IsEmptyNode())
        return false;

    if (oXmlLiteReader.ReadNextSiblingNode(depth))
    {
        oXmlLiteReader.MoveToElement();

        if (oXmlLiteReader.GetAttributesCount() > 0 &&
            oXmlLiteReader.MoveToFirstAttribute())
        {
            std::wstring sAttributeName = oXmlLiteReader.GetName();

            while (!sAttributeName.empty())
            {
               const std::wstring& sAttributeValue = oXmlLiteReader.GetText();

                if (sAttributeName == L"idref")
                    m_sID = sAttributeValue;
                else if (sAttributeName == L"linear")
                    m_sLinear = sAttributeValue;

                if (!oXmlLiteReader.MoveToNextAttribute())
                    break;

                sAttributeName = oXmlLiteReader.GetName();
            }
        }
        else
            return false;
    }
    else
        return false;

    return true;
}
