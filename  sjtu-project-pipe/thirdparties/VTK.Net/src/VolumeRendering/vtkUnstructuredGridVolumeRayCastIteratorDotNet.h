#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkUnstructuredGridVolumeRayCastIterator : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkUnstructuredGridVolumeRayCastIterator *NewInstance ();
  vtkUnstructuredGridVolumeRayCastIterator^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void Initialize (int x, int y) = 0;
/// <summary>
/// <para>Initializes the iteration to the start of the ray at the given screen coordinates.</para>
/// </summary>
  void Initialize(int x, int y);


  // virtual vtkIdType GetNextIntersections (vtkIdList *intersectedCells, vtkDoubleArray *intersectionLengths, vtkDataArray *scalars, vtkDataArray *nearIntersections, vtkDataArray *farIntersections) = 0;
/// <summary>
/// <para>Get the intersections of the next several cells.  The cell ids are stored in \c intersectedCells and the length of each ray segment within the cell is stored in \c intersectionLengths.  The point scalars \c scalars are interpolated and stored in \c nearIntersections and \c farIntersections.  \c intersectedCells, \c intersectionLengths, or \c scalars may be \c NULL to supress passing the associated information.  The number of intersections actually encountered is returned.  0 is returned if and only if no more intersections are to be found.</para>
/// </summary>
  int GetNextIntersections(vtkIdList^ intersectedCells, vtkDoubleArray^ intersectionLengths, vtkDataArray^ scalars, vtkDataArray^ nearIntersections, vtkDataArray^ farIntersections);


  // void SetBounds (double , double );
/// <summary>
/// <para>Set/get the bounds of the cast ray (in viewing coordinates).  By default the range is [0,1].</para>
/// </summary>
  void SetBounds(double arg0, double arg1);


  // void SetBounds (double  a[2]);
/// <summary>
/// <para>Set/get the bounds of the cast ray (in viewing coordinates).  By default the range is [0,1].</para>
/// </summary>
  void SetBounds(array<double>^ a);


  // double  *GetBounds ();
/// <summary>
/// <para>Set/get the bounds of the cast ray (in viewing coordinates).  By default the range is [0,1].</para>
/// </summary>
  array<double>^ GetBounds();


  // void SetMaxNumberOfIntersections (vtkIdType );
  void SetMaxNumberOfIntersections(int arg0);


  // vtkIdType GetMaxNumberOfIntersections ();
  int GetMaxNumberOfIntersections();


// Did not wrap:  vtkUnstructuredGridVolumeRayCastIterator ();


// Did not wrap:  ~vtkUnstructuredGridVolumeRayCastIterator ();


// Did not wrap:  vtkUnstructuredGridVolumeRayCastIterator (const vtkUnstructuredGridVolumeRayCastIterator &);


// Did not wrap:  void vtkUnstructuredGridVolumeRayCastIterator 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkUnstructuredGridVolumeRayCastIterator(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkUnstructuredGridVolumeRayCastIterator(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkUnstructuredGridVolumeRayCastIterator();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkUnstructuredGridVolumeRayCastIterator();


};

} // end vtkVolumeRendering
