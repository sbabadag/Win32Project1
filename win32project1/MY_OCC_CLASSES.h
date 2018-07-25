#pragma once

#include <GeomAPI_IntCS.hxx>
#include <GC_MakeLine.hxx>
#include <ElSLib.hxx>
#include <ProjLib.hxx>
#include <BRepOffsetAPI_MakePipe.hxx>
#include <Geom_BezierCurve.hxx>
#include <Geom_Plane.hxx>
#include <Geom_CylindricalSurface.hxx>
#include <Geom_ConicalSurface.hxx>
#include <Geom_SphericalSurface.hxx>
#include <Geom_ToroidalSurface.hxx>
#include <Geom_SurfaceOfLinearExtrusion.hxx>
#include <Geom_SurfaceOfRevolution.hxx>
#include <Geom_BezierSurface.hxx>
#include <Geom_BSplineSurface.hxx>
#include <Geom_RectangularTrimmedSurface.hxx>
#include <Geom_OffsetSurface.hxx>
#include <GeomToIGES_GeomSurface.hxx>
#include <BRepTools.hxx>  
#include <Standard_DefineHandle.hxx>  
#include <DsgPrs_LengthPresentation.hxx>  
#include <GCPnts_TangentialDeflection.hxx>  
#include <Geom_Axis2Placement.hxx>  
#include <Geom_CartesianPoint.hxx>  
#include <Geom_Line.hxx>  
#include <Geom_Surface.hxx>  
#include <BRepAdaptor_Surface.hxx>  
#include <GeomAbs_CurveType.hxx>  
#include <GeomAdaptor_Curve.hxx>  
#include <GeomTools_Curve2dSet.hxx>  
#include <gp_Vec.hxx>  
#include <Graphic3d_NameOfMaterial.hxx>  
#include <MMgt_TShared.hxx>  
#include <OSD_Environment.hxx>  
#include <Precision.hxx>  
#include <Prs3d_IsoAspect.hxx>  
#include <Prs3d_LineAspect.hxx>  
#include <Prs3d_Projector.hxx>  
#include <Prs3d_Text.hxx>  
#include <Quantity_Factor.hxx>  
#include <Quantity_Length.hxx>  
#include <Quantity_NameOfColor.hxx>  
#include <Quantity_PhysicalQuantity.hxx>  
#include <Quantity_PlaneAngle.hxx>  
#include <Quantity_TypeOfColor.hxx>  
#include <SelectMgr_EntityOwner.hxx>  
#include <SelectMgr_SelectableObject.hxx>  
#include <SelectMgr_Selection.hxx>  
#include <SelectMgr_SelectionManager.hxx>  
#include <SelectMgr_ListOfFilter.hxx>  
#include <SelectMgr_Filter.hxx>  
#include <StdSelect_EdgeFilter.hxx>  
#include <StdSelect_ShapeTypeFilter.hxx>  
#include <Standard_Boolean.hxx>  
#include <Standard_CString.hxx>  
#include <Standard_ErrorHandler.hxx>  
#include <Standard_Integer.hxx>  
#include <Standard_IStream.hxx>  
#include <Standard_Macro.hxx>  
#include <Standard_NotImplemented.hxx>  
#include <Standard_OStream.hxx>  
#include <Standard_Real.hxx>  
#include <StdPrs_Curve.hxx>  
#include <StdPrs_Point.hxx>  
#include <StdPrs_PoleCurve.hxx>  
#include <TCollection_AsciiString.hxx>  
#include <TColgp_Array1OfPnt2d.hxx>  
#include <TColgp_HArray1OfPnt2d.hxx>  
#include <TCollection_AsciiString.hxx>  
#include <TColStd_HSequenceOfTransient.hxx>  
#include <TColStd_MapIteratorOfMapOfTransient.hxx>  
#include <TColStd_MapOfTransient.hxx>  
#include <TopExp_Explorer.hxx>  
#include <TopoDS.hxx>  
#include <TopoDS_Compound.hxx>  
#include <TopoDS_Shape.hxx>  
#include <TopoDS_Solid.hxx>  
#include <TopoDS_Vertex.hxx>  
#include <TopExp.hxx>  
#include <TopTools_HSequenceOfShape.hxx>  
#include <UnitsAPI.hxx>  
#include <V3d_View.hxx>  
#include <V3d_Viewer.hxx>  
#include <WNT_Window.hxx>   
#include <Prs3d_PointAspect.hxx>  
#include <AIS_Point.hxx>  
#include <BRep_Tool.hxx>  
#include <BRepAlgoAPI_Fuse.hxx>  
#include <BRepBuilderAPI_MakeEdge.hxx>  
#include <BRepBuilderAPI_MakeFace.hxx>  
#include <BRepBuilderAPI_MakeWire.hxx>  
#include <BRepBuilderAPI_MakeVertex.hxx>  
#include <BRepBuilderAPI_Transform.hxx>  
#include <BRepPrimAPI_MakeCone.hxx>  
#include <BRepPrimAPI_MakeRevol.hxx>  
#include <BRepFilletAPI_MakeFillet.hxx>  
#include <BRepBuilderAPI_Copy.hxx>  
#include <BRepBuilderAPI_MakePolygon.hxx>  
#include <BRepLib.hxx>  
#include <BRepOffsetAPI_MakeThickSolid.hxx>  
#include <BRepOffsetAPI_ThruSections.hxx>  
#include <BRepPrimAPI_MakeCylinder.hxx>  
#include <BRepPrimAPI_MakePrism.hxx>  
#include <BRepPrimAPI_MakeTorus.hxx>  
#include <BRepAlgoAPI_Section.hxx>  
#include <BRepPrimAPI_MakeSphere.hxx>  
#include <BRepFeat_SplitShape.hxx>  
#include <TColgp_HArray1OfPnt.hxx>  
#include <GeomAPI_Interpolate.hxx>  
#include <GC_MakeArcOfCircle.hxx>  
#include <GC_MakeSegment.hxx>  
#include <GC_MakeCircle.hxx>  
#include <GCE2d_MakeSegment.hxx>  
#include <gp.hxx>  
#include <gp_Ax1.hxx>  
#include <gp_Ax2.hxx>  
#include <gp_Ax2d.hxx>  
#include <gp_Dir.hxx>  
#include <gp_Dir2d.hxx>  
#include <gp_Pnt.hxx>  
#include <gp_Pnt2d.hxx>  
#include <gp_Trsf.hxx>  
#include <gp_Vec.hxx>  
#include <Geom_CylindricalSurface.hxx>  
#include <Geom_Plane.hxx>  
#include <Geom_Surface.hxx>  
#include <Geom_TrimmedCurve.hxx>  
#include <Geom2d_Ellipse.hxx>  
#include <Geom2d_TrimmedCurve.hxx>  
#include <TopExp_Explorer.hxx>  
#include <TopoDS.hxx>  
#include <TopoDS_Edge.hxx>  
#include <TopoDS_Face.hxx>  
#include <TopoDS_Wire.hxx>  
#include <TopoDS_Shape.hxx>  
#include <TopoDS_Compound.hxx>  
#include <GCPnts_AbscissaPoint.hxx>  
#include <BRepAdaptor_Curve.hxx>  
#include <GeomLib.hxx>  
#include <GeomConvert_CompCurveToBSplineCurve.hxx>  
#include <TopTools_ListOfShape.hxx>  
#include <TopTools_ListIteratorOfListOfShape.hxx>  
#include <TopTools_DataMapOfShapeInteger.hxx>  
#include <TopTools_DataMapOfShapeReal.hxx>  
#include <TopTools_IndexedDataMapOfShapeAddress.hxx>  
#include <V3d_PositionalLight.hxx>  
#include <V3d_DirectionalLight.hxx>  
#include <V3d_AmbientLight.hxx>  
#include <IGESControl_Controller.hxx>  
#include <IGESControl_Writer.hxx>  
#include <Interface_Static.hxx>  
#include <OpenGl_GraphicDriver.hxx>  
#include <Graphic3d_GraphicDriver.hxx>  
#include <Xw_Window.hxx>
#include <V3d_View.hxx>
#include <Graphic3d_GraphicDriver.hxx>
#include <Aspect_Handle.hxx>
#include <Aspect_DisplayConnection.hxx>
#include <OpenGl_GraphicDriver.hxx>
#include <WNT_Window.hxx>
#include <AIS_InteractiveContext.hxx>
#include <TopoDS_Shape.hxx>
#include <AIS_Shape.hxx>
#include <BRepAlgo.hxx>
#include <BRepAlgo_Common.hxx>
#include <BRepAlgoAPI_Common.hxx>
#include <BRepAlgoAPI_Algo.hxx>
#include <BRep_Tool.hxx>

#include <BRepAlgoAPI_Fuse.hxx>

#include <BRepBuilderAPI_MakeEdge.hxx>
#include <BRepBuilderAPI_MakeFace.hxx>
#include <BRepBuilderAPI_MakeWire.hxx>
#include <BRepBuilderAPI_Transform.hxx>

#include <BRepFilletAPI_MakeFillet.hxx>

#include <BRepLib.hxx>

#include <BRepOffsetAPI_MakeThickSolid.hxx>
#include <BRepOffsetAPI_ThruSections.hxx>

#include <BRepPrimAPI_MakeCylinder.hxx>
#include <BRepPrimAPI_MakePrism.hxx>

#include <GC_MakeArcOfCircle.hxx>
#include <GC_MakeSegment.hxx>

#include <GCE2d_MakeSegment.hxx>

#include <gp.hxx>
#include <gp_Ax1.hxx>
#include <gp_Ax2.hxx>
#include <gp_Ax2d.hxx>
#include <gp_Dir.hxx>
#include <gp_Dir2d.hxx>
#include <gp_Pnt.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Trsf.hxx>
#include <gp_Vec.hxx>

#include <Geom_CylindricalSurface.hxx>
#include <Geom_Plane.hxx>
#include <Geom_Surface.hxx>
#include <Geom_TrimmedCurve.hxx>

#include <Geom2d_Ellipse.hxx>
#include <Geom2d_TrimmedCurve.hxx>

#include <TopExp_Explorer.hxx>

#include <TopoDS.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Compound.hxx>

#include <TopTools_ListOfShape.hxx>
#include <ShapeAnalysis_Surface.hxx>
#include <BRepClass_FaceClassifier.hxx>
#include <V3d_Coordinate.hxx>


Handle(Aspect_DisplayConnection) aDisplayConnection;
Handle(OpenGl_GraphicDriver)     myGraphicDriver;
Handle_V3d_Viewer                mViewer;
Handle_V3d_View                  mView;
Handle_AIS_InteractiveContext     mContext;
Standard_Integer  myXmin;
Standard_Integer  myYmin;
Standard_Integer  myXmax;
Standard_Integer  myYmax;
Standard_Integer  myWidth;
Standard_Integer  myHeight;
bool view_initialized;
int scaleX;
int scaleY;
int scaleZ;


gp_Pnt PickPoint(Handle_V3d_View aView, TopoDS_Shape myShape, long x, long y)
{
	V3d_Coordinate xEye, yEye, zEye, xAt, yAt, zAt;
	gp_Pnt resultPoint;

	aView->Eye(xEye, yEye, zEye);
	aView->At(xAt, yAt, zAt);
	gp_Pnt EyePoint(xEye, yEye, zEye);
	gp_Pnt AtPoint(xAt, yAt, zAt);

	gp_Vec EyeVector(EyePoint, AtPoint);
	gp_Dir EyeDir(EyeVector);

	gp_Pln PlaneOfView = gp_Pln(AtPoint, EyeDir);

	Standard_Real theX, theY, theZ;
	aView->Convert(x, y, theX, theY, theZ);
	gp_Pnt ConvertedPoint(theX, theY, theZ);

	gp_Pnt2d ConvertedPointOnPlane = ProjLib::Project(PlaneOfView, ConvertedPoint);

	gp_Pnt shapePoint = ElSLib::Value(ConvertedPointOnPlane.X(), ConvertedPointOnPlane.Y(), PlaneOfView);
	resultPoint = shapePoint;

	GC_MakeLine line(EyePoint, shapePoint);
	TopExp_Explorer exp;
	TopAbs_State aState;


	int iii = 0;
	for (exp.Init(myShape, TopAbs_FACE); exp.More(); exp.Next())
	{
		TopoDS_Face face = TopoDS::Face(exp.Current());
		BRepAdaptor_Surface surface(face);
		const GeomAdaptor_Surface& geomAdapSurf = surface.Surface();
		const Handle(Geom_Surface)& geomSurf = geomAdapSurf.Surface();

		GeomAPI_IntCS inCS;
		inCS.Perform(line.Value(), geomSurf);
		if (inCS.IsDone())
		{
			if (inCS.NbPoints() != 0)
			{
				shapePoint = gp_Pnt(inCS.Point(1).XYZ());

				ShapeAnalysis_Surface shapeAnalysis(geomSurf);
				gp_Pnt2d shapePoint2D = shapeAnalysis.ValueOfUV(shapePoint, Precision::Confusion());
				BRepClass_FaceClassifier aClassifier(face, shapePoint2D, Precision::Confusion());
				aState = aClassifier.State();
				if ((aState == TopAbs_ON) || (aState == TopAbs_IN))
				{
					if (resultPoint.Distance(EyePoint) > shapePoint.Distance(shapePoint))
					{
						resultPoint = shapePoint;
					}
				}
			}
		}
	}
	return resultPoint;
}

TopoDS_Shape Make_IPE_Profile(double h, double b, double tf, double tw, gp_Pnt sPt, gp_Pnt ePt)
{
	gp_Pnt pt0(-b / 2, -h / 2, 0);
	gp_Pnt pt1(b / 2, -h / 2, 0);
	gp_Pnt pt2(b / 2, -h / 2 + tf, 0);
	gp_Pnt pt3(tw / 2, -h / 2 + tf, 0);
	gp_Pnt pt4(tw / 2, h / 2 - tf, 0);
	gp_Pnt pt5(b / 2, h / 2 - tf, 0);
	gp_Pnt pt6(b / 2, h / 2, 0);
	gp_Pnt pt7(-b / 2, h / 2, 0);
	gp_Pnt pt8(-b / 2, h / 2 - tf, 0);
	gp_Pnt pt9(-tw / 2, h / 2 - tf, 0);
	gp_Pnt pt10(-tw / 2, -h / 2 + tf, 0);
	gp_Pnt pt11(-b / 2, -h / 2 + tf, 0);
	//
	gp_Pnt pt12(0, 0, 0);
	gp_Pnt pt13(100, 100, 100);



	Handle(Geom_TrimmedCurve) aSegment1 = GC_MakeSegment(pt0, pt1);
	Handle(Geom_TrimmedCurve) aSegment2 = GC_MakeSegment(pt1, pt2);
	Handle(Geom_TrimmedCurve) aSegment3 = GC_MakeSegment(pt2, pt3);
	Handle(Geom_TrimmedCurve) aSegment4 = GC_MakeSegment(pt3, pt4);
	Handle(Geom_TrimmedCurve) aSegment5 = GC_MakeSegment(pt4, pt5);
	Handle(Geom_TrimmedCurve) aSegment6 = GC_MakeSegment(pt5, pt6);
	Handle(Geom_TrimmedCurve) aSegment7 = GC_MakeSegment(pt6, pt7);
	Handle(Geom_TrimmedCurve) aSegment8 = GC_MakeSegment(pt7, pt8);
	Handle(Geom_TrimmedCurve) aSegment9 = GC_MakeSegment(pt8, pt9);
	Handle(Geom_TrimmedCurve) aSegment10 = GC_MakeSegment(pt9, pt10);
	Handle(Geom_TrimmedCurve) aSegment11 = GC_MakeSegment(pt10, pt11);
	Handle(Geom_TrimmedCurve) aSegment12 = GC_MakeSegment(pt11, pt0);
	//
	Handle(Geom_TrimmedCurve) aSegment13 = GC_MakeSegment(pt12, pt13);

	TopoDS_Edge anEdge1 = BRepBuilderAPI_MakeEdge(aSegment1);
	TopoDS_Edge anEdge2 = BRepBuilderAPI_MakeEdge(aSegment2);
	TopoDS_Edge anEdge3 = BRepBuilderAPI_MakeEdge(aSegment3);
	TopoDS_Edge anEdge4 = BRepBuilderAPI_MakeEdge(aSegment4);
	TopoDS_Edge anEdge5 = BRepBuilderAPI_MakeEdge(aSegment5);
	TopoDS_Edge anEdge6 = BRepBuilderAPI_MakeEdge(aSegment6);
	TopoDS_Edge anEdge7 = BRepBuilderAPI_MakeEdge(aSegment7);
	TopoDS_Edge anEdge8 = BRepBuilderAPI_MakeEdge(aSegment8);
	TopoDS_Edge anEdge9 = BRepBuilderAPI_MakeEdge(aSegment9);
	TopoDS_Edge anEdge10 = BRepBuilderAPI_MakeEdge(aSegment10);
	TopoDS_Edge anEdge11 = BRepBuilderAPI_MakeEdge(aSegment11);
	TopoDS_Edge anEdge12 = BRepBuilderAPI_MakeEdge(aSegment12);
	//
	TopoDS_Edge anEdge13 = BRepBuilderAPI_MakeEdge(aSegment13);

	//
	TopoDS_Wire threadingWire1 = BRepBuilderAPI_MakeWire(anEdge1, anEdge2);
	TopoDS_Wire threadingWire2 = BRepBuilderAPI_MakeWire(anEdge2, anEdge3);
	TopoDS_Wire threadingWire3 = BRepBuilderAPI_MakeWire(anEdge3, anEdge4);
	TopoDS_Wire threadingWire4 = BRepBuilderAPI_MakeWire(anEdge4, anEdge5);
	TopoDS_Wire threadingWire5 = BRepBuilderAPI_MakeWire(anEdge5, anEdge6);
	TopoDS_Wire threadingWire6 = BRepBuilderAPI_MakeWire(anEdge6, anEdge7);
	TopoDS_Wire threadingWire7 = BRepBuilderAPI_MakeWire(anEdge7, anEdge8);
	TopoDS_Wire threadingWire8 = BRepBuilderAPI_MakeWire(anEdge8, anEdge9);
	TopoDS_Wire threadingWire9 = BRepBuilderAPI_MakeWire(anEdge9, anEdge10);
	TopoDS_Wire threadingWire10 = BRepBuilderAPI_MakeWire(anEdge10, anEdge11);
	TopoDS_Wire threadingWire11 = BRepBuilderAPI_MakeWire(anEdge11, anEdge12);
	TopoDS_Wire threadingWire12 = BRepBuilderAPI_MakeWire(anEdge12, anEdge1);
	//
	TopoDS_Wire threadingWire13 = BRepBuilderAPI_MakeWire(anEdge13);

	//
	BRepBuilderAPI_MakeWire mkWire;
	mkWire.Add(threadingWire1);
	mkWire.Add(threadingWire2);
	mkWire.Add(threadingWire3);
	mkWire.Add(threadingWire4);
	mkWire.Add(threadingWire5);
	mkWire.Add(threadingWire6);
	mkWire.Add(threadingWire7);
	mkWire.Add(threadingWire8);
	mkWire.Add(threadingWire9);
	mkWire.Add(threadingWire10);
	mkWire.Add(threadingWire11);
	mkWire.Add(threadingWire12);
	//
	TopoDS_Wire myWireProfile = mkWire.Wire();
	TopoDS_Face myFaceProfile = BRepBuilderAPI_MakeFace(myWireProfile);
	double Length = sPt.Distance(ePt);
	gp_Vec aPrismVec(gp_Pnt(0, 0, 0), gp_Pnt(0, 0, Length));
	TopoDS_Shape IPE_Profile = BRepPrimAPI_MakePrism(myFaceProfile, aPrismVec);
	//TopoDS_Shape Pipe = BRepOffsetAPI_MakePipe(threadingWire13, myFaceProfile);
	gp_Trsf Tr;
	gp_Ax3 oldAxis(gp_Pnt(0, 0, 0), gp_Dir(0, 0, 1));
	gp_Ax3 newAxis(sPt, gp_Dir(ePt.X(), ePt.Y(), ePt.Z()));

	Tr.SetDisplacement(oldAxis, newAxis);

	BRepBuilderAPI_Transform xform1(IPE_Profile, Tr);


	return xform1.Shape();
}