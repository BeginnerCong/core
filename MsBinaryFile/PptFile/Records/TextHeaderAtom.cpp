#include "TextHeaderAtom.h"


CRecordTextHeaderAtom::CRecordTextHeaderAtom()
{
}

CRecordTextHeaderAtom::~CRecordTextHeaderAtom()
{
}

void CRecordTextHeaderAtom::ReadFromStream(SRecordHeader &oHeader, POLE::Stream *pStream)
{
    m_oHeader = oHeader;
    m_nTextType = (UINT)StreamUtils::ReadDWORD(pStream);
}
