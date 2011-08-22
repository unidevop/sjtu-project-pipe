#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkPointsProjectedHull : public vtkPoints
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPointsProjectedHull *NewInstance ();
  vtkPointsProjectedHull^ NewInstance();


  // vtkPointsProjectedHull *SafeDownCast (vtkObject* o);
  static vtkPointsProjectedHull^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkPointsProjectedHull *New ();


  // int RectangleIntersectionX (vtkPoints *R);
  int RectangleIntersectionX(vtkPoints^ R);


  // int RectangleIntersectionX (float ymin, float ymax, float zmin, float zmax);
  int RectangleIntersectionX(float ymin, float ymax, float zmin, float zmax);


  // int RectangleIntersectionX (double ymin, double ymax, double zmin, double zmax);
  int RectangleIntersectionX(double ymin, double ymax, double zmin, double zmax);


  // int RectangleIntersectionY (vtkPoints *R);
  int RectangleIntersectionY(vtkPoints^ R);


  // int RectangleIntersectionY (float zmin, float zmax, float xmin, float xmax);
  int RectangleIntersectionY(float zmin, float zmax, float xmin, float xmax);


  // int RectangleIntersectionY (double zmin, double zmax, double xmin, double xmax);
  int RectangleIntersectionY(double zmin, double zmax, double xmin, double xmax);


  // int RectangleIntersectionZ (vtkPoints *R);
  int RectangleIntersectionZ(vtkPoints^ R);


  // int RectangleIntersectionZ (float xmin, float xmax, float ymin, float ymax);
  int RectangleIntersectionZ(float xmin, float xmax, float ymin, float ymax);


  // int RectangleIntersectionZ (double xmin, double xmax, double ymin, double ymax);
  int RectangleIntersectionZ(double xmin, double xmax, double ymin, double ymax);


  // int GetCCWHullX (float *pts, int len);
  int GetCCWHullX(array<float>^ pts, int len);


  // int GetCCWHullX (double *pts, int len);
  int GetCCWHullX(array<double>^ pts, int len);


  // int GetCCWHullY (float *pts, int len);
  int GetCCWHullY(array<float>^ pts, int len);


  // int GetCCWHullY (double *pts, int len);
  int GetCCWHullY(array<double>^ pts, int len);


  // int GetCCWHullZ (float *pts, int len);
  int GetCCWHullZ(array<float>^ pts, int len);


  // int GetCCWHullZ (double *pts, int len);
  int GetCCWHullZ(array<double>^ pts, int len);


  // int GetSizeCCWHullX ();
  int GetSizeCCWHullX();


  // int GetSizeCCWHullY ();
  int GetSizeCCWHullY();


  // int GetSizeCCWHullZ ();
  int GetSizeCCWHullZ();


  // void Initialize ();
  void Initialize();


  // void Reset ();this Initialize 
  void Reset();


  // void Update ();
  void Update();


// Did not wrap:  vtkPointsProjectedHull ();


// Did not wrap:  ~vtkPointsProjectedHull ();


// Did not wrap:  int RectangleIntersection (double hmin, double hmax, double vmin, double vmax, int direction);


// Did not wrap:  int GrahamScanAlgorithm (int direction);


// Did not wrap:  void GetPoints ();


// Did not wrap:  int RectangleBoundingBoxIntersection (double hmin, double hmax, double vmin, double vmax, int direction);


// Did not wrap:  int RectangleOutside (double hmin, double hmax, double vmin, double vmax, int direction);


// Did not wrap:  int RectangleOutside1DPolygon (double hmin, double hmax, double vmin, double vmax, int dir);


// Did not wrap:  void InitFlags ();


// Did not wrap:  void ClearAllocations ();


// Did not wrap:  static int RemoveExtras (double *pts, int n);


// Did not wrap:  static double Distance (double *p1, double *p2);


// Did not wrap:  static int PositionInHull (double *base, double *top, double *pt);


// Did not wrap:  static int OutsideLine (double hmin, double hmax, double vmin, double vmax, double *p0, double *p1, double *insidePt);


// Did not wrap:  static int OutsideHorizontalLine (double vmin, double vmax, double *p0, double *p1, double *insidePt);


// Did not wrap:  static int OutsideVerticalLine (double hmin, double hmax, double *p0, double *p1, double *insidePt);


// Did not wrap:  vtkPointsProjectedHull (const vtkPointsProjectedHull &);


// Did not wrap:  void vtkPointsProjectedHull 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPointsProjectedHull(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPointsProjectedHull(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPointsProjectedHull();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPointsProjectedHull();


};

} // end vtkGraphics
