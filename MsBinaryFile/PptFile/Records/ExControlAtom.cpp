#include "ExControlAtom.h"


void CRecordExControlAtom::ReadFromStream(SRecordHeader &oHeader, POLE::Stream *pStream)
{
    m_oHeader = oHeader;

    m_nSlideIdRef = StreamUtils::ReadDWORD(pStream);
}
