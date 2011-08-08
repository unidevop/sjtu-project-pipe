#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkKdNode;

public ref class vtkBSPCuts : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkBSPCuts *NewInstance ();
  vtkBSPCuts^ NewInstance();


  // vtkBSPCuts *SafeDownCast (vtkObject* o);
  static vtkBSPCuts^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkBSPCuts *New ();


  // void CreateCuts (double *bounds, int ncuts, int *dim, double *coord, int *lower, int *upper, double *lowerDataCoord, double *upperDataCoord, int *npoints);
  void CreateCuts(array<double>^ bounds, int ncuts, array<int>^ dim, array<double>^ coord, array<int>^ lower, array<int>^ upper, array<double>^ lowerDataCoord, array<double>^ upperDataCoord, array<int>^ npoints);


  // void CreateCuts (vtkKdNode *kd);
  void CreateCuts(vtkKdNode^ kd);


  // vtkKdNode *GetKdNodeTree ();return this Top 
  vtkKdNode^ GetKdNodeTree();


  // int GetNumberOfCuts ();
  int GetNumberOfCuts();


  // int GetArrays (int len, int *dim, double *coord, int *lower, int *upper, double *lowerDataCoord, double *upperDataCoord, int *npoints);
  int GetArrays(int len, array<int>^ dim, array<double>^ coord, array<int>^ lower, array<int>^ upper, array<double>^ lowerDataCoord, array<double>^ upperDataCoord, array<int>^ npoints);


  // void PrintTree ();
  void PrintTree();


  // void PrintArrays ();
  void PrintArrays();


// Did not wrap:  vtkBSPCuts ();


// Did not wrap:  ~vtkBSPCuts ();


// Did not wrap:  static void DeleteAllDescendants (vtkKdNode *kd);


// Did not wrap:  static int CountNodes (vtkKdNode *kd);


// Did not wrap:  static void SetMinMaxId (vtkKdNode *kd);


// Did not wrap:  static void _PrintTree (vtkKdNode *kd, int depth);


// Did not wrap:  void BuildTree (vtkKdNode *kd, int idx);


// Did not wrap:  int WriteArray (vtkKdNode *kd, int loc);


// Did not wrap:  void ResetArrays ();


// Did not wrap:  void AllocateArrays (int size);


// Did not wrap:  vtkBSPCuts (const vtkBSPCuts &);


// Did not wrap:  void vtkBSPCuts 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkBSPCuts(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkBSPCuts(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkBSPCuts();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkBSPCuts();


};

} // end vtkGraphics
