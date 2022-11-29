#pragma once

#include "../../PPTXWriter/ImageManager.h"
#include "../../../../OOXML/PPTXFormat/Logic/Timing/Timing.h"
#include "../../../../OOXML/PPTXFormat/Logic/Timing/Par.h"
#include "../../../../OOXML/PPTXFormat/Logic/Timing/Seq.h"
#include "../../../../OOXML/PPTXFormat/Logic/Timing/Audio.h"
#include "../../../../OOXML/PPTXFormat/Logic/Timing/AnimClr.h"
#include "../../../../OOXML/PPTXFormat/Logic/Timing/AnimEffect.h"
#include "../../../../OOXML/PPTXFormat/Logic/Timing/AnimMotion.h"
#include "../../../../OOXML/PPTXFormat/Logic/Timing/AnimRot.h"
#include "../../../../OOXML/PPTXFormat/Logic/Timing/AnimScale.h"
#include "../../../../OOXML/PPTXFormat/Logic/Timing/Cmd.h"
#include "../../../../OOXML/PPTXFormat/Logic/Timing/Video.h"
#include "../../../../OOXML/PPTXFormat/Logic/Timing/Anim.h"
#include "../../../../OOXML/PPTXFormat/Logic/Timing/Set.h"

#include "../../../../OOXML/PPTXFormat/Logic/Timing/BldP.h"
#include "../../../../OOXML/PPTXFormat/Logic/Timing/BldDgm.h"
#include "../../../../OOXML/PPTXFormat/Logic/Timing/BldOleChart.h"

#include "../../Records/Animations/ParaBuildContainer.h"
#include "../../Records/Animations/ChartBuildContainer.h"
#include "../../Records/Animations/DiagramBuildContainer.h"

#include "intermediate_anim.h" // it using


namespace PPT_FORMAT {
	namespace Converter {
		class Animation_2010;

		class Timing_2010
		{
		public:
			Timing_2010(CRecordPP10SlideBinaryTagExtension* pAnim_2010, const std::unordered_set<int>& shapesID);
			void Convert(PPTX::Logic::Timing& timing, CExMedia* pExMedia, CRelsGenerator* pRels);

		public:
			enum TimeNodeLevel {
				zero,
				root = 1,
				mainSeqOrTrigger = 2,
				eventOrClickGroup = 3,
				parallelShow = 4,
				oneAnim = 5,
				animEffectDescription = 6
			};


		private:
			void ConvertBldLst(PPTX::Logic::Timing& timimg, CRecordBuildListContainer *pBLC);
			void InsertBuildNode(PPTX::Logic::BldLst &bldLst, PPTX::Logic::BuildNodeBase &bnb);
			void InsertBldP(PPTX::Logic::BldLst &bldLst, PPTX::Logic::BuildNodeBase &bnb);
			void FillBuildNodeBase(CRecordBuildListSubContainer* pSub, PPTX::Logic::BuildNodeBase &oBuildNodeBase);
			void FillBldP(CRecordParaBuildContainer *pPBC, PPTX::Logic::BldP &oBP);
			void FillBldOleChart(CRecordChartBuildContainer* pCBC, PPTX::Logic::BldOleChart &oBP);
			void FillBldDgm(CRecordDiagramBuildContainer *pDBC, PPTX::Logic::BldDgm &oBP);

			void ConvertTnLst(PPTX::Logic::Timing &timing, CRecordExtTimeNodeContainer* pETNC);
			bool FillTnChild(CRecordExtTimeNodeContainer *pETNC, PPTX::Logic::TimeNodeBase &oChild);
			void FillSeq(PPT_FORMAT::CRecordExtTimeNodeContainer *pETNC, PPTX::Logic::Seq& oSec);
			void FillPar(
				CRecordExtTimeNodeContainer *pETNC,
				PPTX::Logic::Par &oPar);
			void FillCBhvr(
				CRecordExtTimeNodeContainer *pETNC,
				PPTX::Logic::CBhvr &oBhvr);
			void FillCBhvr(
				CRecordTimeBehaviorContainer *pBhvr,
				PPTX::Logic::CBhvr &oBhvr);
			void FillCBhvr(
				PPTX::Logic::CBhvr &oBhvr, int dur,
				UINT spid, std::wstring attrname, int delay);
			void FillSet(
				PPT_FORMAT::CRecordExtTimeNodeContainer *pETNC,
				PPTX::Logic::Set& oSet);
			void FillAnim(
				CRecordTimeAnimateBehaviorContainer *pTimeAnimateBehavior,
				PPTX::Logic::Anim &oAnim);

			void FillCTnRecursive(CRecordExtTimeNodeContainer *pETNC, PPTX::Logic::CTn &oCTn);
			bool CheckAnimation5Level(const CRecordExtTimeNodeContainer *pETNC, const PPTX::Logic::CTn &oCTn);
			bool IsSlideSpId(_INT32 spid) const;
			bool IsCorrectAnimationSpId(_INT32 spid) const;
			void InsertAnimationSpId(_INT32 spid);
			void ConvertChildTnLst(CRecordExtTimeNodeContainer *pETNC, PPTX::Logic::CTn &oCTn);
			void ConvertCTnIterate(CRecordExtTimeNodeContainer *pETNC, PPTX::Logic::CTn &oCTn);
			void ConvertCTnEndSync(CRecordExtTimeNodeContainer *pETNC, PPTX::Logic::CTn &oCTn);
			void ConvertCTnSubTnLst(CRecordExtTimeNodeContainer *pETNC, PPTX::Logic::CTn &oCTn);
			void ConvertCTnStCondLst(CRecordExtTimeNodeContainer *pETNC, PPTX::Logic::CTn &oCTn);
			void FillCond(PPT_FORMAT::CRecordTimeConditionContainer *oldCond, PPTX::Logic::Cond &cond);
			void FillStCondLst(const std::vector<CRecordTimeConditionContainer*>& timeCondCont, PPTX::Logic::CondLst& stCondLst);
			void FillSubTnLst(std::vector<CRecordSubEffectContainer*> &vecSEC, PPTX::Logic::TnLst &oSubTnLst);
			void FillCondLst(std::vector<CRecordTimeConditionContainer*>& oCondVec, PPTX::Logic::CondLst &oCondLst);
			void FillEmptyTargetCond(PPTX::Logic::Cond &cond);
			void FillCTnProps(CRecordTimePropertyList4TimeNodeContainer *pProp, PPTX::Logic::CTn &oCTn);
			void FillCTnHeadArgs(CRecordExtTimeNodeContainer *pETNC, PPTX::Logic::CTn &oCTn);


			void FillAnimClr(
				CRecordTimeColorBehaviorContainer *pColor,
				CRecordTimePropertyList4TimeNodeContainer *pProp,
				PPTX::Logic::AnimClr &oAnimClr);
			void FillAnimEffect(
				CRecordExtTimeNodeContainer *pETNC,
				PPTX::Logic::AnimEffect &oAnim);
			void FillAnimMotion(
				CRecordExtTimeNodeContainer *pETNC,
				PPTX::Logic::AnimMotion &oAnim);
			void FillAnimRot(
				CRecordExtTimeNodeContainer *pETNC,
				PPTX::Logic::AnimRot &oAnim);
			void FillAnimScale(
				CRecordExtTimeNodeContainer *pETNC,
				PPTX::Logic::AnimScale &oAnim);
			void FillAudio(CRecordExtTimeNodeContainer *pETNC,
				PPTX::Logic::Audio &oAudio);
			void FillAudio(CRecordClientVisualElementContainer *pCVEC,
				PPTX::Logic::Audio &oAudio);
			void FillCmd(
				CRecordExtTimeNodeContainer *pETNC,
				PPTX::Logic::Cmd &oCmd);
			void FillVideo(
				CRecordExtTimeNodeContainer *pETNC,
				PPTX::Logic::Video &oVideo);

		private:
			CRecordPP10SlideBinaryTagExtension* pTagExtAnim = nullptr;
			const std::unordered_set<int> slideShapes;
			std::unordered_set<int> correctAnimatedShapes;
			CExMedia *m_pExMedia = nullptr;
			CRelsGenerator *m_pRels = nullptr;
			bool isMainSeq = false;

			PPTX::Logic::BldLst *m_pBldLst = nullptr; // Do not delete
			PPTX::Logic::BldP   *m_currentBldP = nullptr;

			int cTnId = 1;
			int cTNLevel = TimeNodeLevel::zero;
		};

	}
}
