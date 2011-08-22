#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkSpherePuzzle;

public ref class vtkSpherePuzzleArrows : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkSpherePuzzleArrows *NewInstance ();
  vtkSpherePuzzleArrows^ NewInstance();


  // vtkSpherePuzzleArrows *SafeDownCast (vtkObject* o);
  static vtkSpherePuzzleArrows^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkSpherePuzzleArrows *New ();


  // void SetPermutation (int  [32]);
/// <summary>
/// </summary>
  void SetPermutation(array<int>^ arg0);


  // int  *GetPermutation ();
/// <summary>
/// </summary>
  array<int>^ GetPermutation();


  // void SetPermutationComponent (int comp, int val);
/// <summary>
/// </summary>
  void SetPermutationComponent(int comp, int val);


  // void SetPermutation (vtkSpherePuzzle *puz);
/// <summary>
/// </summary>
  void SetPermutation(vtkSpherePuzzle^ puz);


// Did not wrap:  vtkSpherePuzzleArrows ();


// Did not wrap:  ~vtkSpherePuzzleArrows ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  void AppendArrow (int id0, int id1, vtkPoints *pts, vtkCellArray *polys);


// Did not wrap:  vtkSpherePuzzleArrows (const vtkSpherePuzzleArrows &);


// Did not wrap:  void vtkSpherePuzzleArrows 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkSpherePuzzleArrows(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkSpherePuzzleArrows(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkSpherePuzzleArrows();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkSpherePuzzleArrows();


};

} // end vtkGraphics
