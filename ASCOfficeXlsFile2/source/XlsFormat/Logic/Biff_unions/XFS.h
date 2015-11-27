#pragma once

#include <Logic/CompositeObject.h>

namespace XLS
{


// Logical representation of XFS union of records 
class XFS: public CompositeObject
{
	BASE_OBJECT_DEFINE_CLASS_NAME(XFS)
public:
	XFS();
	~XFS();

	BaseObjectPtr clone();

	virtual const bool loadContent(BinProcessor& proc);

	int serialize(std::wostream & stream);

	static const ElementType	type = typeXFS;
	
	size_t cell_xf_current_id;
	size_t style_xf_current_id;

	std::vector<BaseObjectPtr>	m_arCellXFs;
	std::vector<BaseObjectPtr>	m_arCellStyles;
	std::vector<BaseObjectPtr>	m_arXFext;

};

} // namespace XLS

