#include "OutlineTextPropsHeaderExAtom.h"


void CRecordOutlineTextPropsHeaderExAtom::ReadFromStream(SRecordHeader &oHeader, POLE::Stream *pStream)
{
    m_oHeader = oHeader;
    m_slideIdRef    = StreamUtils::ReadDWORD(pStream);
    m_eTxType       = (TextTypeEnum)StreamUtils::ReadDWORD(pStream);
}
