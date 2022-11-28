#include "KinsokuAtom.h"


void CRecordKinsokuAtom::ReadFromStream(SRecordHeader &oHeader, POLE::Stream *pStream)
{
    m_oHeader = oHeader;

    m_nLevel = StreamUtils::ReadDWORD(pStream);
}
