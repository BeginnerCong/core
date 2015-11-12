#pragma once
#include "../PPTXShape.h"

namespace OOXMLShapes
{
	class CTextCanUp : public CPPTXShape
	{
		public:
			CTextCanUp()
			{
				LoadFromXML(
					_T("<ooxml-shape>")
					_T("<avLst xmlns=\"http://schemas.openxmlformats.org/drawingml/2006/main\">")
					  _T("<gd name=\"adj\" fmla=\"val 85714\" />")
					_T("</avLst>")
					_T("<gdLst xmlns=\"http://schemas.openxmlformats.org/drawingml/2006/main\">")
					  _T("<gd name=\"a\" fmla=\"pin 66667 adj 100000\" />")
					  _T("<gd name=\"dy1\" fmla=\"*/ a h 100000\" />")
					  _T("<gd name=\"dy\" fmla=\"+- h 0 dy1\" />")
					  _T("<gd name=\"y0\" fmla=\"+- t dy1 0\" />")
					  _T("<gd name=\"y1\" fmla=\"+- t dy 0\" />")
					_T("</gdLst>")
					_T("<ahLst xmlns=\"http://schemas.openxmlformats.org/drawingml/2006/main\">")
					  _T("<ahXY gdRefY=\"adj\" minY=\"66667\" maxY=\"100000\">")
						_T("<pos x=\"hc\" y=\"y0\" />")
					  _T("</ahXY>")
					_T("</ahLst>")
					_T("<pathLst xmlns=\"http://schemas.openxmlformats.org/drawingml/2006/main\">")
					  _T("<path>")
						_T("<moveTo>")
						  _T("<pt x=\"l\" y=\"y1\" />")
						_T("</moveTo>")
						_T("<arcTo wR=\"wd2\" hR=\"dy\" stAng=\"cd2\" swAng=\"cd2\" />")
					  _T("</path>")
					  _T("<path>")
						_T("<moveTo>")
						  _T("<pt x=\"l\" y=\"b\" />")
						_T("</moveTo>")
						_T("<arcTo wR=\"wd2\" hR=\"dy\" stAng=\"cd2\" swAng=\"cd2\" />")
					  _T("</path>")
					_T("</pathLst>")
					_T("</ooxml-shape>")
				);
			}
	};
}