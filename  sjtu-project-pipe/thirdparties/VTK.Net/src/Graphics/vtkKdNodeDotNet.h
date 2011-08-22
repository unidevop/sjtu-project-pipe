#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkPlanesIntersection;

public ref class vtkKdNode : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkKdNode *NewInstance ();
  vtkKdNode^ NewInstance();


  // vtkKdNode *SafeDownCast (vtkObject* o);
  static vtkKdNode^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkKdNode *New ();


  // void SetDim (int );
  void SetDim(int arg0);


  // int GetDim ();
  int GetDim();


  // void SetNumberOfPoints (int );
  void SetNumberOfPoints(int arg0);


  // int GetNumberOfPoints ();
  int GetNumberOfPoints();


  // void SetBounds (double x1, double x2, double y1, double y2, double z1, double z2);
  void SetBounds(double x1, double x2, double y1, double y2, double z1, double z2);


  // void GetBounds (double *b) const;
  void GetBounds(array<double>^ b);


  // void SetDataBounds (double x1, double x2, double y1, double y2, double z1, double z2);
  void SetDataBounds(double x1, double x2, double y1, double y2, double z1, double z2);


  // void GetDataBounds (double *b) const;
  void GetDataBounds(array<double>^ b);


  // void SetDataBounds (float *v);
  void SetDataBounds(array<float>^ v);


// Did not wrap:  double *GetMinBounds ();return this Min 


// Did not wrap:  double *GetMaxBounds ();return this Max 


  // void SetMinBounds (double *mb);
  void SetMinBounds(array<double>^ mb);


  // void SetMaxBounds (double *mb);
  void SetMaxBounds(array<double>^ mb);


// Did not wrap:  double *GetMinDataBounds ();return this MinVal 


// Did not wrap:  double *GetMaxDataBounds ();return this MaxVal 


  // void SetMinDataBounds (double *mb);
  void SetMinDataBounds(array<double>^ mb);


  // void SetMaxDataBounds (double *mb);
  void SetMaxDataBounds(array<double>^ mb);


  // void SetID (int );
  void SetID(int arg0);


  // int GetID ();
  int GetID();


  // int GetMinID ();
  int GetMinID();


  // int GetMaxID ();
  int GetMaxID();


  // void SetMinID (int );
  void SetMinID(int arg0);


  // void SetMaxID (int );
  void SetMaxID(int arg0);


  // void AddChildNodes (vtkKdNode *left, vtkKdNode *right);
  void AddChildNodes(vtkKdNode^ left, vtkKdNode^ right);


  // void DeleteChildNodes ();
  void DeleteChildNodes();


  // vtkKdNode *GetLeft ();
  vtkKdNode^ GetLeft();


  // void SetLeft (vtkKdNode *left);
  void SetLeft(vtkKdNode^ left);


  // vtkKdNode *GetRight ();
  vtkKdNode^ GetRight();


  // void SetRight (vtkKdNode *right);
  void SetRight(vtkKdNode^ right);


  // vtkKdNode *GetUp ();
  vtkKdNode^ GetUp();


  // void SetUp (vtkKdNode *up);
  void SetUp(vtkKdNode^ up);


  // int IntersectsBox (double x1, double x2, double y1, double y2, double z1, double z2, int useDataBounds);
  int IntersectsBox(double x1, double x2, double y1, double y2, double z1, double z2, int useDataBounds);


  // int IntersectsSphere2 (double x, double y, double z, double rSquared, int useDataBounds);
  int IntersectsSphere2(double x, double y, double z, double rSquared, int useDataBounds);


  // int IntersectsRegion (vtkPlanesIntersection *pi, int useDataBounds);
  int IntersectsRegion(vtkPlanesIntersection^ pi, int useDataBounds);


  // int IntersectsCell (vtkCell *cell, int useDataBounds, int cellRegion, double *cellBoundsNULL);
  int IntersectsCell(vtkCell^ cell, int useDataBounds, int cellRegion, array<double>^ cellBoundsNULL);


  // int ContainsBox (double x1, double x2, double y1, double y2, double z1, double z2, int useDataBounds);
  int ContainsBox(double x1, double x2, double y1, double y2, double z1, double z2, int useDataBounds);


  // int ContainsPoint (double x, double y, double z, int useDataBounds);
  int ContainsPoint(double x, double y, double z, int useDataBounds);


  // double GetDistance2ToBoundary (double x, double y, double z, int useDataBounds);
  double GetDistance2ToBoundary(double x, double y, double z, int useDataBounds);


  // double GetDistance2ToBoundary (double x, double y, double z, double *boundaryPt, int useDataBounds);
  double GetDistance2ToBoundary(double x, double y, double z, array<double>^ boundaryPt, int useDataBounds);


  // double GetDistance2ToInnerBoundary (double x, double y, double z);
  double GetDistance2ToInnerBoundary(double x, double y, double z);


  // void PrintNode (int depth);
  void PrintNode(int depth);


  // void PrintVerboseNode (int depth);
  void PrintVerboseNode(int depth);


// Did not wrap:  vtkKdNode ();


// Did not wrap:  ~vtkKdNode ();


// Did not wrap:  double _GetDistance2ToBoundary (double x, double y, double z, double *boundaryPt, int innerBoundaryOnly, int useDataBounds);


// Did not wrap:  vtkKdNode (const vtkKdNode &);


// Did not wrap:  void vtkKdNode 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkKdNode(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkKdNode(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkKdNode();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkKdNode();


};

} // end vtkGraphics
