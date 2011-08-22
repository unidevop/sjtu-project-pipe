#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkVoxelContoursToSurfaceFilter : public vtkPolyDataAlgorithm
{

public:
// Did not wrap:  static vtkVoxelContoursToSurfaceFilter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkVoxelContoursToSurfaceFilter *NewInstance ();
  vtkVoxelContoursToSurfaceFilter^ NewInstance();


  // vtkVoxelContoursToSurfaceFilter *SafeDownCast (vtkObject* o);
  static vtkVoxelContoursToSurfaceFilter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetMemoryLimitInBytes (int );
/// <summary>
/// <para>Set / Get the memory limit in bytes for this filter. This is the limit of the size of the structured points data set that is created for intermediate processing. The data will be streamed through this volume in as many pieces as necessary.</para>
/// </summary>
  void SetMemoryLimitInBytes(int arg0);


  // int GetMemoryLimitInBytes ();
/// <summary>
/// <para>Set / Get the memory limit in bytes for this filter. This is the limit of the size of the structured points data set that is created for intermediate processing. The data will be streamed through this volume in as many pieces as necessary.</para>
/// </summary>
  int GetMemoryLimitInBytes();


  // void SetSpacing (double , double , double );
  void SetSpacing(double arg0, double arg1, double arg2);


  // void SetSpacing (double  a[3]);
  void SetSpacing(array<double>^ a);


  // double  *GetSpacing ();
  array<double>^ GetSpacing();


// Did not wrap:  vtkVoxelContoursToSurfaceFilter ();


// Did not wrap:  ~vtkVoxelContoursToSurfaceFilter ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  void AddLineToLineList (double x1, double y1, double x2, double y2);


// Did not wrap:  void SortLineList ();


// Did not wrap:  void CastLines (float *slice, double gridOrigin[3], int gridSize[3], int type);


// Did not wrap:  void PushDistances (float *ptr, int gridSize[3], int chunkSize);


// Did not wrap:  vtkVoxelContoursToSurfaceFilter (const vtkVoxelContoursToSurfaceFilter &);


// Did not wrap:  void vtkVoxelContoursToSurfaceFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkVoxelContoursToSurfaceFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkVoxelContoursToSurfaceFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkVoxelContoursToSurfaceFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkVoxelContoursToSurfaceFilter();


};

} // end vtkGraphics
