#include "TextMasterStyle9Level.h"


void STextMasterStyle9Level::ReadFromStream(POLE::Stream *pStream)
{
    m_pf9.ReadFromStream(pStream);
    m_cf9.ReadFromStream(pStream);
}
