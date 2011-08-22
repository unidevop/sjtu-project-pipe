#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkPlanesIntersection : public vtkPlanes
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPlanesIntersection *NewInstance ();
  vtkPlanesIntersection^ NewInstance();


  // vtkPlanesIntersection *SafeDownCast (vtkObject* o);
  static vtkPlanesIntersection^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkPlanesIntersection *New ();


  // void SetRegionVertices (vtkPoints *pts);
  void SetRegionVertices(vtkPoints^ pts);


  // void SetRegionVertices (double *v, int nvertices);
  void SetRegionVertices(array<double>^ v, int nvertices);


  // int GetNumRegionVertices ();
  int GetNumRegionVertices();


  // int GetRegionVertices (double *v, int nvertices);
  int GetRegionVertices(array<double>^ v, int nvertices);


  // int IntersectsRegion (vtkPoints *R);
  int IntersectsRegion(vtkPoints^ R);


  // static int PolygonIntersectsBBox (double bounds[6], vtkPoints *pts);
  static int PolygonIntersectsBBox(array<double>^ bounds, vtkPoints^ pts);


  // static vtkPlanesIntersection *Convert3DCell (vtkCell *cell);
  static vtkPlanesIntersection^ Convert3DCell(vtkCell^ cell);


// Did not wrap:  static void ComputeNormal (double *p1, double *p2, double *p3, double normal[3]);


// Did not wrap:  static double EvaluatePlaneEquation (double *x, double *p);


// Did not wrap:  static void PlaneEquation (double *n, double *x, double *p);


// Did not wrap:  static int GoodNormal (double *n);


// Did not wrap:  static int Invert3x3 (double M[3][3]);


// Did not wrap:  vtkPlanesIntersection ();


// Did not wrap:  ~vtkPlanesIntersection ();


// Did not wrap:  int IntersectsBoundingBox (vtkPoints *R);


// Did not wrap:  int EnclosesBoundingBox (vtkPoints *R);


// Did not wrap:  int EvaluateFacePlane (int plane, vtkPoints *R);


// Did not wrap:  int IntersectsProjection (vtkPoints *R, int direction);


// Did not wrap:  void SetPlaneEquations ();


// Did not wrap:  void ComputeRegionVertices ();


// Did not wrap:  void planesMatrix (int p1, int p2, int p3, double M[3][3]) const;


// Did not wrap:  int duplicate (double testv[3]) const;


// Did not wrap:  void planesRHS (int p1, int p2, int p3, double r[3]) const;


// Did not wrap:  int outsideRegion (double v[3]);


// Did not wrap:  vtkPlanesIntersection (const vtkPlanesIntersection &);


// Did not wrap:  void vtkPlanesIntersection 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPlanesIntersection(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPlanesIntersection(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPlanesIntersection();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPlanesIntersection();


};

} // end vtkGraphics
