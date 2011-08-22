#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkStructuredGridGeometryFilter : public vtkPolyDataAlgorithm
{

public:
// Did not wrap:  static vtkStructuredGridGeometryFilter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkStructuredGridGeometryFilter *NewInstance ();
  vtkStructuredGridGeometryFilter^ NewInstance();


  // vtkStructuredGridGeometryFilter *SafeDownCast (vtkObject* o);
  static vtkStructuredGridGeometryFilter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // int  *GetExtent ();
/// <summary>
/// <para>Get the extent in topological coordinate range (imin,imax, jmin,jmax, kmin,kmax).</para>
/// </summary>
  array<int>^ GetExtent();


  // void SetExtent (int iMin, int iMax, int jMin, int jMax, int kMin, int kMax);
/// <summary>
/// <para>Specify (imin,imax, jmin,jmax, kmin,kmax) indices.</para>
/// </summary>
  void SetExtent(int iMin, int iMax, int jMin, int jMax, int kMin, int kMax);


  // void SetExtent (int extent[6]);
/// <summary>
/// <para>Specify (imin,imax, jmin,jmax, kmin,kmax) indices in array form.</para>
/// </summary>
  void SetExtent(array<int>^ extent);


// Did not wrap:  vtkStructuredGridGeometryFilter ();


// Did not wrap:  ~vtkStructuredGridGeometryFilter ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestUpdateExtent (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkStructuredGridGeometryFilter (const vtkStructuredGridGeometryFilter &);


// Did not wrap:  void vtkStructuredGridGeometryFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkStructuredGridGeometryFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkStructuredGridGeometryFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkStructuredGridGeometryFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkStructuredGridGeometryFilter();


};

} // end vtkGraphics
