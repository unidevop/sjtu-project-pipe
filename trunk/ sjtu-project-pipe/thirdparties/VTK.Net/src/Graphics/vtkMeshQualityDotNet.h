#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkMeshQuality : public vtkDataSetAlgorithm
{

public:
  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkMeshQuality *NewInstance ();
  vtkMeshQuality^ NewInstance();


  // vtkMeshQuality *SafeDownCast (vtkObject* o);
  static vtkMeshQuality^ SafeDownCast(vtkObject^ o);


// Did not wrap:  static vtkMeshQuality *New ();


  // void SetSaveCellQuality (int );
/// <summary>
/// <para>This variable controls whether or not cell quality is stored as cell data in the resulting mesh or discarded (leaving only the aggregate quality average of the entire mesh, recorded in the FieldData).</para>
/// </summary>
  void SetSaveCellQuality(int arg0);


  // int GetSaveCellQuality ();
/// <summary>
/// <para>This variable controls whether or not cell quality is stored as cell data in the resulting mesh or discarded (leaving only the aggregate quality average of the entire mesh, recorded in the FieldData).</para>
/// </summary>
  int GetSaveCellQuality();


  // void SaveCellQualityOn ();
/// <summary>
/// <para>This variable controls whether or not cell quality is stored as cell data in the resulting mesh or discarded (leaving only the aggregate quality average of the entire mesh, recorded in the FieldData).</para>
/// </summary>
  void SaveCellQualityOn();


  // void SaveCellQualityOff ();
/// <summary>
/// <para>This variable controls whether or not cell quality is stored as cell data in the resulting mesh or discarded (leaving only the aggregate quality average of the entire mesh, recorded in the FieldData).</para>
/// </summary>
  void SaveCellQualityOff();


  // void SetTriangleQualityMeasure (int );
/// <summary>
/// <para>Set/Get the particular estimator used to measure the quality of triangles. The default is VTK_QUALITY_RADIUS_RATIO and valid values also include VTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_FROBENIUS_NORM, and VTK_QUALITY_EDGE_RATIO.</para>
/// </summary>
  void SetTriangleQualityMeasure(int arg0);


  // int GetTriangleQualityMeasure ();
/// <summary>
/// <para>Set/Get the particular estimator used to measure the quality of triangles. The default is VTK_QUALITY_RADIUS_RATIO and valid values also include VTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_FROBENIUS_NORM, and VTK_QUALITY_EDGE_RATIO.</para>
/// </summary>
  int GetTriangleQualityMeasure();


  // void SetTriangleQualityMeasureToEdgeRatio ();this SetTriangleQualityMeasure VTK_QUALITY_EDGE_RATIO 
/// <summary>
/// <para>Set/Get the particular estimator used to measure the quality of triangles. The default is VTK_QUALITY_RADIUS_RATIO and valid values also include VTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_FROBENIUS_NORM, and VTK_QUALITY_EDGE_RATIO.</para>
/// </summary>
  void SetTriangleQualityMeasureToEdgeRatio();


  // void SetTriangleQualityMeasureToAspectRatio ();this SetTriangleQualityMeasure VTK_QUALITY_ASPECT_RATIO 
/// <summary>
/// <para>Set/Get the particular estimator used to measure the quality of triangles. The default is VTK_QUALITY_RADIUS_RATIO and valid values also include VTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_FROBENIUS_NORM, and VTK_QUALITY_EDGE_RATIO.</para>
/// </summary>
  void SetTriangleQualityMeasureToAspectRatio();


  // void SetTriangleQualityMeasureToRadiusRatio ();this SetTriangleQualityMeasure VTK_QUALITY_RADIUS_RATIO 
/// <summary>
/// <para>Set/Get the particular estimator used to measure the quality of triangles. The default is VTK_QUALITY_RADIUS_RATIO and valid values also include VTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_FROBENIUS_NORM, and VTK_QUALITY_EDGE_RATIO.</para>
/// </summary>
  void SetTriangleQualityMeasureToRadiusRatio();


  // void SetTriangleQualityMeasureToFrobeniusNorm ();this SetTriangleQualityMeasure VTK_QUALITY_FROBENIUS_NORM 
/// <summary>
/// <para>Set/Get the particular estimator used to measure the quality of triangles. The default is VTK_QUALITY_RADIUS_RATIO and valid values also include VTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_FROBENIUS_NORM, and VTK_QUALITY_EDGE_RATIO.</para>
/// </summary>
  void SetTriangleQualityMeasureToFrobeniusNorm();


  // void SetTriangleQualityMeasureToMinAngle ();this SetTriangleQualityMeasure VTK_QUALITY_MIN_ANGLE 
/// <summary>
/// <para>Set/Get the particular estimator used to measure the quality of quadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid values also include VTK_QUALITY_RADIUS_RATIO and VTK_QUALITY_ASPECT_RATIO. Scope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are intended for planar quadrilaterals only; use at your own risk if you really want to assess non-planar quadrilateral quality with those.</para>
/// </summary>
  void SetTriangleQualityMeasureToMinAngle();


  // void SetQuadQualityMeasure (int );
/// <summary>
/// <para>Set/Get the particular estimator used to measure the quality of quadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid values also include VTK_QUALITY_RADIUS_RATIO and VTK_QUALITY_ASPECT_RATIO. Scope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are intended for planar quadrilaterals only; use at your own risk if you really want to assess non-planar quadrilateral quality with those.</para>
/// </summary>
  void SetQuadQualityMeasure(int arg0);


  // int GetQuadQualityMeasure ();
/// <summary>
/// <para>Set/Get the particular estimator used to measure the quality of quadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid values also include VTK_QUALITY_RADIUS_RATIO and VTK_QUALITY_ASPECT_RATIO. Scope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are intended for planar quadrilaterals only; use at your own risk if you really want to assess non-planar quadrilateral quality with those.</para>
/// </summary>
  int GetQuadQualityMeasure();


  // void SetQuadQualityMeasureToEdgeRatio ();this SetQuadQualityMeasure VTK_QUALITY_EDGE_RATIO 
/// <summary>
/// <para>Set/Get the particular estimator used to measure the quality of quadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid values also include VTK_QUALITY_RADIUS_RATIO and VTK_QUALITY_ASPECT_RATIO. Scope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are intended for planar quadrilaterals only; use at your own risk if you really want to assess non-planar quadrilateral quality with those.</para>
/// </summary>
  void SetQuadQualityMeasureToEdgeRatio();


  // void SetQuadQualityMeasureToAspectRatio ();this SetQuadQualityMeasure VTK_QUALITY_ASPECT_RATIO 
/// <summary>
/// <para>Set/Get the particular estimator used to measure the quality of quadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid values also include VTK_QUALITY_RADIUS_RATIO and VTK_QUALITY_ASPECT_RATIO. Scope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are intended for planar quadrilaterals only; use at your own risk if you really want to assess non-planar quadrilateral quality with those.</para>
/// </summary>
  void SetQuadQualityMeasureToAspectRatio();


  // void SetQuadQualityMeasureToRadiusRatio ();this SetQuadQualityMeasure VTK_QUALITY_RADIUS_RATIO 
/// <summary>
/// <para>Set/Get the particular estimator used to measure the quality of quadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid values also include VTK_QUALITY_RADIUS_RATIO and VTK_QUALITY_ASPECT_RATIO. Scope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are intended for planar quadrilaterals only; use at your own risk if you really want to assess non-planar quadrilateral quality with those.</para>
/// </summary>
  void SetQuadQualityMeasureToRadiusRatio();


  // void SetQuadQualityMeasureToMedFrobeniusNorm ();this SetQuadQualityMeasure VTK_QUALITY_MED_FROBENIUS_NORM 
/// <summary>
/// <para>Set/Get the particular estimator used to measure the quality of quadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid values also include VTK_QUALITY_RADIUS_RATIO and VTK_QUALITY_ASPECT_RATIO. Scope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are intended for planar quadrilaterals only; use at your own risk if you really want to assess non-planar quadrilateral quality with those.</para>
/// </summary>
  void SetQuadQualityMeasureToMedFrobeniusNorm();


  // void SetQuadQualityMeasureToMaxFrobeniusNorm ();this SetQuadQualityMeasure VTK_QUALITY_MAX_FROBENIUS_NORM 
/// <summary>
/// <para>Set/Get the particular estimator used to measure the quality of quadrilaterals. The default is VTK_QUALITY_EDGE_RATIO and valid values also include VTK_QUALITY_RADIUS_RATIO and VTK_QUALITY_ASPECT_RATIO. Scope: Except for VTK_QUALITY_EDGE_RATIO, these estimators are intended for planar quadrilaterals only; use at your own risk if you really want to assess non-planar quadrilateral quality with those.</para>
/// </summary>
  void SetQuadQualityMeasureToMaxFrobeniusNorm();


  // void SetQuadQualityMeasureToMinAngle ();this SetQuadQualityMeasure VTK_QUALITY_MIN_ANGLE 
/// <summary>
/// <para>Set/Get the particular estimator used to measure the quality of tetrahedra. The default is VTK_QUALITY_RADIUS_RATIO and valid values also include VTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_FROBENIUS_NORM, and VTK_QUALITY_EDGE_RATIO.</para>
/// </summary>
  void SetQuadQualityMeasureToMinAngle();


  // void SetTetQualityMeasure (int );
/// <summary>
/// <para>Set/Get the particular estimator used to measure the quality of tetrahedra. The default is VTK_QUALITY_RADIUS_RATIO and valid values also include VTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_FROBENIUS_NORM, and VTK_QUALITY_EDGE_RATIO.</para>
/// </summary>
  void SetTetQualityMeasure(int arg0);


  // int GetTetQualityMeasure ();
/// <summary>
/// <para>Set/Get the particular estimator used to measure the quality of tetrahedra. The default is VTK_QUALITY_RADIUS_RATIO and valid values also include VTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_FROBENIUS_NORM, and VTK_QUALITY_EDGE_RATIO.</para>
/// </summary>
  int GetTetQualityMeasure();


  // void SetTetQualityMeasureToEdgeRatio ();this SetTetQualityMeasure VTK_QUALITY_EDGE_RATIO 
/// <summary>
/// <para>Set/Get the particular estimator used to measure the quality of tetrahedra. The default is VTK_QUALITY_RADIUS_RATIO and valid values also include VTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_FROBENIUS_NORM, and VTK_QUALITY_EDGE_RATIO.</para>
/// </summary>
  void SetTetQualityMeasureToEdgeRatio();


  // void SetTetQualityMeasureToAspectRatio ();this SetTetQualityMeasure VTK_QUALITY_ASPECT_RATIO 
/// <summary>
/// <para>Set/Get the particular estimator used to measure the quality of tetrahedra. The default is VTK_QUALITY_RADIUS_RATIO and valid values also include VTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_FROBENIUS_NORM, and VTK_QUALITY_EDGE_RATIO.</para>
/// </summary>
  void SetTetQualityMeasureToAspectRatio();


  // void SetTetQualityMeasureToRadiusRatio ();this SetTetQualityMeasure VTK_QUALITY_RADIUS_RATIO 
/// <summary>
/// <para>Set/Get the particular estimator used to measure the quality of tetrahedra. The default is VTK_QUALITY_RADIUS_RATIO and valid values also include VTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_FROBENIUS_NORM, and VTK_QUALITY_EDGE_RATIO.</para>
/// </summary>
  void SetTetQualityMeasureToRadiusRatio();


  // void SetTetQualityMeasureToFrobeniusNorm ();this SetTetQualityMeasure VTK_QUALITY_FROBENIUS_NORM 
/// <summary>
/// <para>Set/Get the particular estimator used to measure the quality of tetrahedra. The default is VTK_QUALITY_RADIUS_RATIO and valid values also include VTK_QUALITY_ASPECT_RATIO, VTK_QUALITY_FROBENIUS_NORM, and VTK_QUALITY_EDGE_RATIO.</para>
/// </summary>
  void SetTetQualityMeasureToFrobeniusNorm();


  // void SetTetQualityMeasureToMinAngle ();this SetTetQualityMeasure VTK_QUALITY_MIN_ANGLE 
/// <summary>
/// <para>Set/Get the particular estimator used to measure the quality of hexahedra. The default is VTK_QUALITY_RADIUS_RATIO and valid values also include VTK_QUALITY_ASPECT_RATIO.</para>
/// </summary>
  void SetTetQualityMeasureToMinAngle();


  // void SetHexQualityMeasure (int );
/// <summary>
/// <para>Set/Get the particular estimator used to measure the quality of hexahedra. The default is VTK_QUALITY_RADIUS_RATIO and valid values also include VTK_QUALITY_ASPECT_RATIO.</para>
/// </summary>
  void SetHexQualityMeasure(int arg0);


  // int GetHexQualityMeasure ();
/// <summary>
/// <para>Set/Get the particular estimator used to measure the quality of hexahedra. The default is VTK_QUALITY_RADIUS_RATIO and valid values also include VTK_QUALITY_ASPECT_RATIO.</para>
/// </summary>
  int GetHexQualityMeasure();


  // void SetHexQualityMeasureToEdgeRatio ();this SetHexQualityMeasure VTK_QUALITY_EDGE_RATIO 
/// <summary>
/// <para>This is a static function used to calculate the edge ratio of a triangle. It assumes that you pass the correct type of cell -- no type checking is performed because this method is called from the inner loop of the Execute() member function. The edge ratio of a triangle \f$t\f$ is:  \f$\frac{|t|_\infty}{|t|_0}\f$, where \f$|t|_\infty\f$ and \f$|t|_0\f$ respectively denote the greatest and the smallest edge lengths of \f$t\f$.</para>
/// </summary>
  void SetHexQualityMeasureToEdgeRatio();


  // static double TriangleEdgeRatio (vtkCell *cell);
/// <summary>
/// <para>This is a static function used to calculate the edge ratio of a triangle. It assumes that you pass the correct type of cell -- no type checking is performed because this method is called from the inner loop of the Execute() member function. The edge ratio of a triangle \f$t\f$ is:  \f$\frac{|t|_\infty}{|t|_0}\f$, where \f$|t|_\infty\f$ and \f$|t|_0\f$ respectively denote the greatest and the smallest edge lengths of \f$t\f$.</para>
/// </summary>
  static double TriangleEdgeRatio(vtkCell^ cell);


  // static double TriangleAspectRatio (vtkCell *cell);
/// <summary>
/// <para>This is a static function used to calculate the aspect ratio of a triangle. It assumes that you pass the correct type of cell -- no type checking is performed because this method is called from the inner loop of the Execute() member function. The aspect ratio of a triangle \f$t\f$ is:  \f$\frac{|t|_\infty}{2\sqrt{3}r}\f$, where \f$|t|_\infty\f$ and \f$r\f$ respectively denote the greatest edge  length and the inradius of \f$t\f$.</para>
/// </summary>
  static double TriangleAspectRatio(vtkCell^ cell);


  // static double TriangleRadiusRatio (vtkCell *cell);
/// <summary>
/// <para>This is a static function used to calculate the radius ratio of a triangle. It assumes that you pass the correct type of cell -- no type checking is performed because this method is called from the inner loop of the Execute() member function. The radius ratio of a triangle \f$t\f$ is:  \f$\frac{R}{2r}\f$, where \f$R\f$ and \f$r\f$ respectively denote the circumradius and  the inradius of \f$t\f$.</para>
/// </summary>
  static double TriangleRadiusRatio(vtkCell^ cell);


  // static double TriangleFrobeniusNorm (vtkCell *cell);
/// <summary>
/// <para>This is a static function used to calculate the Frobenius norm of a triangle when the reference element is equilateral. It assumes that you pass the correct type of cell -- no type checking is performed because this method is called from the inner loop of the Execute() member function. The Frobenius norm of a triangle \f$t\f$, when the reference element is  equilateral, is:  \f$\frac{|t|^2_2}{2\sqrt{3}{\cal A}}\f$, where \f$|t|^2_2\f$ and \f$\cal A\f$ respectively denote the sum of the  squared edge lengths and the area of \f$t\f$.</para>
/// </summary>
  static double TriangleFrobeniusNorm(vtkCell^ cell);


  // static double TriangleMinAngle (vtkCell *cell);
/// <summary>
/// <para>This is a static function used to calculate the minimal (nonoriented) angle of a triangle, expressed in degrees. It assumes that you pass the correct type of cell -- no type checking is performed because this method is called from the inner loop of the Execute() member function.</para>
/// </summary>
  static double TriangleMinAngle(vtkCell^ cell);


  // static double QuadEdgeRatio (vtkCell *cell);
/// <summary>
/// <para>This is a static function used to calculate the edge ratio of a quadrilateral. It assumes that you pass the correct type of cell -- no type checking is performed because this method is called from the inner loop of the Execute() member function. The edge ratio of a quadrilateral \f$q\f$ is:  \f$\frac{|q|_\infty}{|q|_0}\f$, where \f$|q|_\infty\f$ and \f$|q|_0\f$ respectively denote the greatest and the smallest edge lengths of \f$q\f$.</para>
/// </summary>
  static double QuadEdgeRatio(vtkCell^ cell);


  // static double QuadAspectRatio (vtkCell *cell);
/// <summary>
/// <para>This is a static function used to calculate the aspect ratio of a planar  quadrilateral. It assumes that you pass the correct type of cell -- no type checking is performed because this method is called from the inner loop of the Execute() member function. Use at your own risk with nonplanar quadrilaterals. The aspect ratio of a planar quadrilateral \f$q\f$ is:  \f$\frac{|q|_1|q|_\infty}{4{\cal A}}\f$, where \f$|q|_1\f$, $|q|_\infty\f$ and \f${\cal A}\f$ respectively denote the  perimeter, the greatest edge length and the area of \f$q\f$.</para>
/// </summary>
  static double QuadAspectRatio(vtkCell^ cell);


  // static double QuadRadiusRatio (vtkCell *cell);
/// <summary>
/// <para>This is a static function used to calculate the radius ratio of a planar  quadrilateral. The name is only used by analogy with the triangle radius  ratio, because in general a quadrilateral does not have a circumcircle nor an incircle.  It assumes that you pass the correct type of cell -- no type checking is performed because this method is called from the inner loop of the Execute() member function. Use at your own risk with nonplanar quadrilaterals. The radius ratio of a planar quadrilateral \f$q\f$ is:  \f$\frac{|q|_2h_{\max}}{\min_i{\cal A}_i}\f$, where \f$|q|_2\f$, \f$h_{\max}\f$ and \f$\min{\cal A}_i\f$ respectively denote  the sum of the squared edge lengths, the greatest amongst diagonal and edge  lengths and the smallest area of the 4 triangles extractable from \f$q\f$.</para>
/// </summary>
  static double QuadRadiusRatio(vtkCell^ cell);


  // static double QuadMedFrobeniusNorm (vtkCell *cell);
/// <summary>
/// <para>This is a static function used to calculate the average Frobenius norm of the 4 triangles extractable from a planar quadrilateral, when the reference  triangle elements are right isosceles at the quadrangle vertices. It assumes that you pass the correct type of cell -- no type checking is performed because this method is called from the inner loop of the Execute() member function. Use at your own risk with nonplanar quadrilaterals. The Frobenius norm of a triangle \f$t\f$, when the reference element is  right isosceles at vertex \f$V\f$, is:  \f$\frac{f^2+g^2}{4{\cal A}}\f$, where \f$f^2+g^2\f$ and \f$\cal A\f$ respectively denote the sum of the  squared lengths of the edges attached to \f$V\f$ and the area of \f$t\f$.</para>
/// </summary>
  static double QuadMedFrobeniusNorm(vtkCell^ cell);


  // static double QuadMaxFrobeniusNorm (vtkCell *cell);
/// <summary>
/// <para>This is a static function used to calculate the maximal Frobenius norm of the 4 triangles extractable from a planar quadrilateral, when the reference  triangle elements are right isosceles at the quadrangle vertices. It assumes that you pass the correct type of cell -- no type checking is performed because this method is called from the inner loop of the Execute() member function. Use at your own risk with nonplanar quadrilaterals. The Frobenius norm of a triangle \f$t\f$, when the reference element is  right isosceles at vertex \f$V\f$, is:  \f$\frac{f^2+g^2}{4{\cal A}}\f$, where \f$f^2+g^2\f$ and \f$\cal A\f$ respectively denote the sum of the  squared lengths of the edges attached to \f$V\f$ and the area of \f$t\f$.</para>
/// </summary>
  static double QuadMaxFrobeniusNorm(vtkCell^ cell);


  // static double QuadMinAngle (vtkCell *cell);
/// <summary>
/// <para>This is a static function used to calculate the minimal (nonoriented) angle of a quadrilateral, expressed in degrees. It assumes that you pass the correct type of cell -- no type checking is performed because this method is called from the inner loop of the Execute() member function.</para>
/// </summary>
  static double QuadMinAngle(vtkCell^ cell);


  // static double TetEdgeRatio (vtkCell *cell);
/// <summary>
/// <para>This is a static function used to calculate the edge ratio of a tetrahedron. It assumes that you pass the correct type of cell -- no type checking is performed because this method is called from the inner loop of the Execute() member function. The edge ratio of a tetrahedron \f$K\f$ is:  \f$\frac{|K|_\infty}{|K|_0}\f$, where \f$|K|_\infty\f$ and \f$|K|_0\f$ respectively denote the greatest and the smallest edge lengths of \f$K\f$.</para>
/// </summary>
  static double TetEdgeRatio(vtkCell^ cell);


  // static double TetAspectRatio (vtkCell *cell);
/// <summary>
/// <para>This is a static function used to calculate the aspect ratio of a tetrahedron. It assumes that you pass the correct type of cell -- no type checking is performed because this method is called from the inner loop of the Execute() member function. The aspect ratio of a tetrahedron \f$K\f$ is:  \f$\frac{|K|_\infty}{2\sqrt{6}r}\f$, where \f$|K|_\infty\f$ and \f$r\f$ respectively denote the greatest edge  length and the inradius of \f$K\f$.</para>
/// </summary>
  static double TetAspectRatio(vtkCell^ cell);


  // static double TetRadiusRatio (vtkCell *cell);
/// <summary>
/// <para>This is a static function used to calculate the radius ratio of a tetrahedron. It assumes that you pass the correct type of cell -- no type checking is performed because this method is called from the inner loop of the Execute() member function. The radius ratio of a tetrahedron \f$K\f$ is:  \f$\frac{R}{3r}\f$, where \f$R\f$ and \f$r\f$ respectively denote the circumradius and  the inradius of \f$K\f$.</para>
/// </summary>
  static double TetRadiusRatio(vtkCell^ cell);


  // static double TetFrobeniusNorm (vtkCell *cell);
/// <summary>
/// <para>This is a static function used to calculate the Frobenius norm of a tetrahedron when the reference element is regular. It assumes that you pass the correct type of cell -- no type checking is performed because this method is called from the inner loop of the Execute() member function. The Frobenius norm of a tetrahedron \f$K\f$, when the reference element is  regular, is:  \f$\frac{\frac{3}{2}(l_{11}+l_{22}+l_{33}) - (l_{12}+l_{13}+l_{23})} {3(\sqrt{2}\det{T})^\frac{2}{3}}\f$, where \f$T\f$ and \f$l_{ij}\f$ respectively denote the edge matrix of \f$K\f$ and the entries of \f$L=T^t\,T\f$.</para>
/// </summary>
  static double TetFrobeniusNorm(vtkCell^ cell);


  // static double TetMinAngle (vtkCell *cell);
/// <summary>
/// <para>This is a static function used to calculate the minimal (nonoriented) dihedral angle of a tetrahedron, expressed in degrees. It assumes that you pass the correct type of cell -- no type checking is performed because this method is called from the inner loop of the Execute() member function.</para>
/// </summary>
  static double TetMinAngle(vtkCell^ cell);


  // static double HexEdgeRatio (vtkCell *cell);
/// <summary>
/// <para>This is a static function used to calculate the edge ratio of a hexahedron. It assumes that you pass the correct type of cell -- no type checking is performed because this method is called from the inner loop of the Execute() member function. The edge ratio of a tetrahedron \f$H\f$ is:  \f$\frac{|H|_\infty}{|H|_0}\f$, where \f$|H|_\infty\f$ and \f$|H|_0\f$ respectively denote the greatest and the smallest edge lengths of \f$H\f$.</para>
/// </summary>
  static double HexEdgeRatio(vtkCell^ cell);


  // virtual void SetRatio (int r);this SetSaveCellQuality r 
/// <summary>
/// <para>These methods are deprecated. Use Get/SetSaveCellQuality() instead.</para>
/// <para>Formerly, SetRatio could be used to disable computation of the tetrahedral radius ratio so that volume alone could be computed. Now, cell quality is always computed, but you may decide not to store the result for each cell. This allows average cell quality of a mesh to be calculated without requiring per-cell storage.</para>
/// </summary>
  void SetRatio(int r);


  // int GetRatio ();return this GetSaveCellQuality 
/// <summary>
/// <para>These methods are deprecated. Use Get/SetSaveCellQuality() instead.</para>
/// <para>Formerly, SetRatio could be used to disable computation of the tetrahedral radius ratio so that volume alone could be computed. Now, cell quality is always computed, but you may decide not to store the result for each cell. This allows average cell quality of a mesh to be calculated without requiring per-cell storage.</para>
/// </summary>
  int GetRatio();


  // void RatioOn ();
/// <summary>
/// <para>These methods are deprecated. Use Get/SetSaveCellQuality() instead.</para>
/// <para>Formerly, SetRatio could be used to disable computation of the tetrahedral radius ratio so that volume alone could be computed. Now, cell quality is always computed, but you may decide not to store the result for each cell. This allows average cell quality of a mesh to be calculated without requiring per-cell storage.</para>
/// </summary>
  void RatioOn();


  // void RatioOff ();
/// <summary>
/// <para>These methods are deprecated. Use Get/SetSaveCellQuality() instead.</para>
/// <para>Formerly, SetRatio could be used to disable computation of the tetrahedral radius ratio so that volume alone could be computed. Now, cell quality is always computed, but you may decide not to store the result for each cell. This allows average cell quality of a mesh to be calculated without requiring per-cell storage.</para>
/// </summary>
  void RatioOff();


  // virtual void SetVolume (int cv);if cv this Volume return this Modified this Volume cv if this Volume this CompatibilityModeOn 
/// <summary>
/// <para>These methods are deprecated. The functionality of computing cell volume is being removed until it can be computed for any 3D cell. (The previous implementation only worked for tetrahedra.)</para>
/// <para>For now, turning on the volume computation will put this filter into &quot;compatibility mode,&quot; where tetrahedral cell volume is stored in first component of each output tuple and the radius ratio is stored in the second component. You may also use CompatibilityModeOn()/Off() to enter this mode. In this mode, cells other than tetrahedra will have report a volume of 0.0 (if volume computation is enabled).</para>
/// <para>By default, volume computation is disabled and compatibility mode is off, since it does not make a lot of sense for meshes with non-tetrahedral cells.</para>
/// </summary>
  void SetVolume(int cv);


  // int GetVolume ();return this Volume 
/// <summary>
/// <para>These methods are deprecated. The functionality of computing cell volume is being removed until it can be computed for any 3D cell. (The previous implementation only worked for tetrahedra.)</para>
/// <para>For now, turning on the volume computation will put this filter into &quot;compatibility mode,&quot; where tetrahedral cell volume is stored in first component of each output tuple and the radius ratio is stored in the second component. You may also use CompatibilityModeOn()/Off() to enter this mode. In this mode, cells other than tetrahedra will have report a volume of 0.0 (if volume computation is enabled).</para>
/// <para>By default, volume computation is disabled and compatibility mode is off, since it does not make a lot of sense for meshes with non-tetrahedral cells.</para>
/// </summary>
  int GetVolume();


  // void VolumeOn ();
/// <summary>
/// <para>These methods are deprecated. The functionality of computing cell volume is being removed until it can be computed for any 3D cell. (The previous implementation only worked for tetrahedra.)</para>
/// <para>For now, turning on the volume computation will put this filter into &quot;compatibility mode,&quot; where tetrahedral cell volume is stored in first component of each output tuple and the radius ratio is stored in the second component. You may also use CompatibilityModeOn()/Off() to enter this mode. In this mode, cells other than tetrahedra will have report a volume of 0.0 (if volume computation is enabled).</para>
/// <para>By default, volume computation is disabled and compatibility mode is off, since it does not make a lot of sense for meshes with non-tetrahedral cells.</para>
/// </summary>
  void VolumeOn();


  // void VolumeOff ();
/// <summary>
/// <para>These methods are deprecated. The functionality of computing cell volume is being removed until it can be computed for any 3D cell. (The previous implementation only worked for tetrahedra.)</para>
/// <para>For now, turning on the volume computation will put this filter into &quot;compatibility mode,&quot; where tetrahedral cell volume is stored in first component of each output tuple and the radius ratio is stored in the second component. You may also use CompatibilityModeOn()/Off() to enter this mode. In this mode, cells other than tetrahedra will have report a volume of 0.0 (if volume computation is enabled).</para>
/// <para>By default, volume computation is disabled and compatibility mode is off, since it does not make a lot of sense for meshes with non-tetrahedral cells.</para>
/// </summary>
  void VolumeOff();


  // virtual void SetCompatibilityMode (int cm);if cm this CompatibilityMode return this CompatibilityMode cm this Modified if this CompatibilityMode this Volume this TetQualityMeasure VTK_QUALITY_RADIUS_RATIO 
/// <summary>
/// <para>CompatibilityMode governs whether, when both a quality measure and cell volume are to be stored as cell data, the two values are stored in a single array. When compatibility mode is off (the default), two separate arrays are used -- one labeled &quot;Quality&quot; and the other labeled &quot;Volume&quot;. When compatibility mode is on, both values are stored in a single array, with volume as the first component and quality as the second component.</para>
/// <para>Enabling CompatibilityMode changes the default tetrahedral quality measure to VTK_QUALITY_RADIUS_RATIO and turns volume computation on. (This matches the default behavior of the initial implementation of vtkMeshQuality.) You may change quality measure and volume computation without leaving compatibility mode.</para>
/// <para>Disabling compatibility mode does not affect the current volume computation or tetrahedral quality measure settings. </para>
/// <para>The final caveat to CompatibilityMode is that regardless of its setting, the resulting array will be of type vtkDoubleArray rather than the original vtkFloatArray. This is a safety measure to keep the authors from diving off of the Combinatorial Coding Cliff into Certain Insanity.</para>
/// </summary>
  void SetCompatibilityMode(int cm);


  // int GetCompatibilityMode ();
/// <summary>
/// <para>CompatibilityMode governs whether, when both a quality measure and cell volume are to be stored as cell data, the two values are stored in a single array. When compatibility mode is off (the default), two separate arrays are used -- one labeled &quot;Quality&quot; and the other labeled &quot;Volume&quot;. When compatibility mode is on, both values are stored in a single array, with volume as the first component and quality as the second component.</para>
/// <para>Enabling CompatibilityMode changes the default tetrahedral quality measure to VTK_QUALITY_RADIUS_RATIO and turns volume computation on. (This matches the default behavior of the initial implementation of vtkMeshQuality.) You may change quality measure and volume computation without leaving compatibility mode.</para>
/// <para>Disabling compatibility mode does not affect the current volume computation or tetrahedral quality measure settings. </para>
/// <para>The final caveat to CompatibilityMode is that regardless of its setting, the resulting array will be of type vtkDoubleArray rather than the original vtkFloatArray. This is a safety measure to keep the authors from diving off of the Combinatorial Coding Cliff into Certain Insanity.</para>
/// </summary>
  int GetCompatibilityMode();


  // void CompatibilityModeOn ();
/// <summary>
/// <para>CompatibilityMode governs whether, when both a quality measure and cell volume are to be stored as cell data, the two values are stored in a single array. When compatibility mode is off (the default), two separate arrays are used -- one labeled &quot;Quality&quot; and the other labeled &quot;Volume&quot;. When compatibility mode is on, both values are stored in a single array, with volume as the first component and quality as the second component.</para>
/// <para>Enabling CompatibilityMode changes the default tetrahedral quality measure to VTK_QUALITY_RADIUS_RATIO and turns volume computation on. (This matches the default behavior of the initial implementation of vtkMeshQuality.) You may change quality measure and volume computation without leaving compatibility mode.</para>
/// <para>Disabling compatibility mode does not affect the current volume computation or tetrahedral quality measure settings. </para>
/// <para>The final caveat to CompatibilityMode is that regardless of its setting, the resulting array will be of type vtkDoubleArray rather than the original vtkFloatArray. This is a safety measure to keep the authors from diving off of the Combinatorial Coding Cliff into Certain Insanity.</para>
/// </summary>
  void CompatibilityModeOn();


  // void CompatibilityModeOff ();
/// <summary>
/// <para>CompatibilityMode governs whether, when both a quality measure and cell volume are to be stored as cell data, the two values are stored in a single array. When compatibility mode is off (the default), two separate arrays are used -- one labeled &quot;Quality&quot; and the other labeled &quot;Volume&quot;. When compatibility mode is on, both values are stored in a single array, with volume as the first component and quality as the second component.</para>
/// <para>Enabling CompatibilityMode changes the default tetrahedral quality measure to VTK_QUALITY_RADIUS_RATIO and turns volume computation on. (This matches the default behavior of the initial implementation of vtkMeshQuality.) You may change quality measure and volume computation without leaving compatibility mode.</para>
/// <para>Disabling compatibility mode does not affect the current volume computation or tetrahedral quality measure settings. </para>
/// <para>The final caveat to CompatibilityMode is that regardless of its setting, the resulting array will be of type vtkDoubleArray rather than the original vtkFloatArray. This is a safety measure to keep the authors from diving off of the Combinatorial Coding Cliff into Certain Insanity.</para>
/// </summary>
  void CompatibilityModeOff();


// Did not wrap:  vtkMeshQuality ();


// Did not wrap:  ~vtkMeshQuality ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkMeshQuality (const vtkMeshQuality &);


// Did not wrap:  void vtkMeshQuality 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkMeshQuality(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkMeshQuality(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkMeshQuality();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkMeshQuality();


};

} // end vtkGraphics
