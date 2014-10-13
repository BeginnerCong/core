#include "precompiled_xls.h"
#include "PtgElfLel.h"
#include <Binary/CFRecord.h>

namespace XLS
{;


BiffStructurePtr PtgElfLel::clone()
{
	return BiffStructurePtr(new PtgElfLel(*this));
}

//
//void PtgElfLel::setXMLAttributes(MSXML2::IXMLDOMElementPtr xml_tag)
//{
//	xml_tag->setAttribute(L"ilel", ilel);
//	xml_tag->setAttribute(L"fQuoted", fQuoted);
//}


void PtgElfLel::storeFields(CFRecord& record)
{
	unsigned __int16 flags = 0;
	SETBIT(flags, 0, fQuoted);
	record << ilel << flags;
}


void PtgElfLel::loadFields(CFRecord& record)
{
	unsigned __int16 flags;
	record >> ilel >> flags;
	fQuoted = GETBIT(flags, 0);
}


void PtgElfLel::assemble(AssemblerStack& ptg_stack, PtgQueue& extra_data, BiffStructurePtr & parent)
{
	ptg_stack.push(L"#NAME?"); // The best decision I think
}


} // namespace XLS
