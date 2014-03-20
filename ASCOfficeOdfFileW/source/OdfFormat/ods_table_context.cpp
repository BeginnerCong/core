#include "precompiled_cpodf.h"

#include "ods_table_context.h"
//#include "ods_textcontext.h"
#include "ods_conversion_context.h"
#include "logging.h"

#include <boost/foreach.hpp>
#include <iostream>

namespace cpdoccore {
namespace odf {

ods_table_context::ods_table_context(ods_conversion_context & Context/*, xlsx_text_context & textCotnext*/): context_(Context)
{        
}

ods_table_state & ods_table_context::state()
{
    return table_state_list_.back();
}

void ods_table_context::start_table(office_element_ptr & elm, std::wstring & name)
{
	table_state_list_.push_back( ods_table_state(context_, elm) );
	
	state().set_name(name);
	
	std::wstring style_name_new = L"ta" + boost::lexical_cast<std::wstring>(table_state_list_.size());

	office_element_ptr & style = context_.styles_context().add_or_find(style_name_new, style_family::Table, true);
	style->create_child_element(L"style", L"table-properties");
	
	
	state().set_table_style(style);

	//��� ������� ��������, � �� ������� - ����� ������� master-page c page layout � ������� �� ����� �� ������ �������
	//������ �����, �.�. � ������ ������� ��� ��� ��� �������� �����. �� ���� �������� ����� ��������� �� ������� �������� � ������� ..
	//todooo




}

void ods_table_context::end_table()
{
	state().convert();
}

void ods_table_context::add_column(office_element_ptr & elm_column, int repeated, const std::wstring & style_name)
{
	state().add_column(elm_column, repeated,style_name);

}

}
}