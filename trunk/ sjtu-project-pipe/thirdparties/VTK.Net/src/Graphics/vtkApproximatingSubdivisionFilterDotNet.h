#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkApproximatingSubdivisionFilter : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkApproximatingSubdivisionFilter *NewInstance ();
  vtkApproximatingSubdivisionFilter^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetNumberOfSubdivisions (int );
/// <summary>
/// <para>Set/get the number of subdivisions.</para>
/// </summary>
  void SetNumberOfSubdivisions(int arg0);


  // int GetNumberOfSubdivisions ();
/// <summary>
/// <para>Set/get the number of subdivisions.</para>
/// </summary>
  int GetNumberOfSubdivisions();


// Did not wrap:  vtkApproximatingSubdivisionFilter ();


// Did not wrap:  ~vtkApproximatingSubdivisionFilter ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual void GenerateSubdivisionPoints (vtkPolyData *inputDS, vtkIntArray *edgeData, vtkPoints *outputPts, vtkPointData *outputPD) = 0;


// Did not wrap:  void GenerateSubdivisionCells (vtkPolyData *inputDS, vtkIntArray *edgeData, vtkCellArray *outputPolys, vtkCellData *outputCD);


// Did not wrap:  int FindEdge (vtkPolyData *mesh, vtkIdType cellId, vtkIdType p1, vtkIdType p2, vtkIntArray *edgeData, vtkIdList *cellIds);


// Did not wrap:  vtkIdType InterpolatePosition (vtkPoints *inputPts, vtkPoints *outputPts, vtkIdList *stencil, double *weights);


// Did not wrap:  vtkApproximatingSubdivisionFilter (const vtkApproximatingSubdivisionFilter &);


// Did not wrap:  void vtkApproximatingSubdivisionFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkApproximatingSubdivisionFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkApproximatingSubdivisionFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkApproximatingSubdivisionFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkApproximatingSubdivisionFilter();


};

} // end vtkGraphics
