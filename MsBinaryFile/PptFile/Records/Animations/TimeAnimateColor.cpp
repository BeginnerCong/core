#include "TimeAnimateColor.h"


unsigned long TimeAnimateColor::FRGB(BYTE alpha)
{
    return ((component2 <<  16) |	(component1 << 8) | (component0 <<   0) | (alpha << 24));
}
