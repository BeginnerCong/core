#include "CRect.h"
#include "CStyle.h"
#include "CContainer.h"
#include "../SvgTypes.h"

namespace SVG
{
	CRect::CRect(XmlUtils::CXmlNode& oNode, CSvgGraphicsObject* pParent)
	    : CSvgGraphicsObject(oNode, pParent)
	{}

	void CRect::SetData(const std::map<std::wstring, std::wstring> &mAttributes, unsigned short ushLevel, bool bHardMode)
	{
		SetTransform(mAttributes, ushLevel, bHardMode);
		SetStroke(mAttributes, ushLevel, bHardMode);
		SetFill(mAttributes, ushLevel, bHardMode);
		SetClip(mAttributes, ushLevel, bHardMode);

		if (mAttributes.end() != mAttributes.find(L"x"))
			m_oRect.m_oX.SetValue(mAttributes.at(L"x"), ushLevel, bHardMode);

		if (mAttributes.end() != mAttributes.find(L"y"))
			m_oRect.m_oY.SetValue(mAttributes.at(L"y"), ushLevel, bHardMode);

		if (mAttributes.end() != mAttributes.find(L"width"))
			m_oRect.m_oWidth.SetValue(mAttributes.at(L"width"), ushLevel, bHardMode);

		if (mAttributes.end() != mAttributes.find(L"height"))
			m_oRect.m_oHeight.SetValue(mAttributes.at(L"height"), ushLevel, bHardMode);

		if (mAttributes.end() != mAttributes.find(L"rx"))
			m_oRx.SetValue(mAttributes.at(L"rx"), ushLevel, bHardMode);

		if (mAttributes.end() != mAttributes.find(L"ry"))
			m_oRy.SetValue(mAttributes.at(L"ry"), ushLevel, bHardMode);
	}

	bool CRect::Draw(IRenderer *pRenderer, const CDefs *pDefs, bool bIsClip) const
	{
		if (NULL == pRenderer)
			return false;

		TBounds oBounds = (NULL != m_pParent) ? m_pParent->GetBounds() : TBounds{0., 0., 0., 0.};

		double dParentWidth  = oBounds.m_dRight  - oBounds.m_dLeft;
		double dParentHeight = oBounds.m_dBottom - oBounds.m_dTop;

		double dX      = m_oRect.m_oX     .ToDouble(NSCSS::Pixel, dParentWidth);
		double dY      = m_oRect.m_oY     .ToDouble(NSCSS::Pixel, dParentHeight);
		double dWidth  = m_oRect.m_oWidth .ToDouble(NSCSS::Pixel, dParentWidth);
		double dHeight = m_oRect.m_oHeight.ToDouble(NSCSS::Pixel, dParentHeight);

		StartPath(pRenderer, pDefs, bIsClip);

		if (m_oRx.Empty() && m_oRy.Empty())
		{
			pRenderer->PathCommandMoveTo(dX, dY);
			pRenderer->PathCommandLineTo(dX + dWidth, dY);
			pRenderer->PathCommandLineTo(dX + dWidth, dY + dHeight);
			pRenderer->PathCommandLineTo(dX, dY + dHeight);
			pRenderer->PathCommandClose();
		}
		else
		{
			double dRx = m_oRx.ToDouble(NSCSS::Pixel);
			double dRy = m_oRy.ToDouble(NSCSS::Pixel);

			pRenderer->PathCommandMoveTo(dX, dY + dRy);

			pRenderer->PathCommandLineTo(dX, dY + dHeight - dRy);
			pRenderer->PathCommandArcTo(dX, dY + dHeight - dRy * 2, dRx * 2., dRy * 2., 180., -90.);

			pRenderer->PathCommandLineTo(dX + dWidth - dRx, dY + dHeight);
			pRenderer->PathCommandArcTo(dX + dWidth - dRx * 2, dY + dHeight - dRy * 2., dRx * 2., dRy * 2., 90, -90.0);

			pRenderer->PathCommandLineTo(dX + dWidth, dY + dRy);
			pRenderer->PathCommandArcTo(dX + dWidth - dRx * 2.0, dY, dRx * 2.0, dRy * 2.0, 0.0, -90.0);

			pRenderer->PathCommandLineTo(dX + dRx, dY);
			pRenderer->PathCommandArcTo(dX, dY, dRx * 2.0, dRy * 2.0, 270, -90.0);

			pRenderer->PathCommandClose();
		}

		EndPath(pRenderer, pDefs, bIsClip);

		return true;
	}

	CRect *CRect::Copy() const
	{
		return new CRect(*this);
	}

	void CRect::ApplyStyle(IRenderer *pRenderer, const CDefs *pDefs, int& nTypePath, Aggplus::CMatrix& oOldMatrix) const
	{
		if (NULL == pRenderer)
			return;

		ApplyTransform(pRenderer, oOldMatrix);
		ApplyStroke(pRenderer, nTypePath);
		ApplyFill(pRenderer, pDefs, nTypePath, true);
	}

	TBounds CRect::GetBounds() const
	{
		TBounds oBounds;

		oBounds.m_dLeft   = m_oRect.m_oX.ToDouble(NSCSS::Pixel);
		oBounds.m_dTop    = m_oRect.m_oY.ToDouble(NSCSS::Pixel);
		oBounds.m_dRight  = oBounds.m_dLeft + m_oRect.m_oWidth.ToDouble(NSCSS::Pixel);
		oBounds.m_dBottom = oBounds.m_dTop  + m_oRect.m_oHeight.ToDouble(NSCSS::Pixel);

		return oBounds;
	}
}
