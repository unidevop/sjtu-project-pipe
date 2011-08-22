#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkExtractRectilinearGrid : public vtkRectilinearGridAlgorithm
{

public:
// Did not wrap:  static vtkExtractRectilinearGrid *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkExtractRectilinearGrid *NewInstance ();
  vtkExtractRectilinearGrid^ NewInstance();


  // vtkExtractRectilinearGrid *SafeDownCast (vtkObject* o);
  static vtkExtractRectilinearGrid^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetVOI (int , int , int , int , int , int );
/// <summary>
/// <para>Specify i-j-k (min,max) pairs to extract. The resulting structured grid dataset can be of any topological dimension (i.e., point, line, plane, or 3D grid). </para>
/// </summary>
  void SetVOI(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5);


  // void SetVOI (int  a[6]);
/// <summary>
/// <para>Specify i-j-k (min,max) pairs to extract. The resulting structured grid dataset can be of any topological dimension (i.e., point, line, plane, or 3D grid). </para>
/// </summary>
  void SetVOI(array<int>^ a);


  // int  *GetVOI ();
/// <summary>
/// <para>Specify i-j-k (min,max) pairs to extract. The resulting structured grid dataset can be of any topological dimension (i.e., point, line, plane, or 3D grid). </para>
/// </summary>
  array<int>^ GetVOI();


  // void SetSampleRate (int , int , int );
/// <summary>
/// <para>Set the sampling rate in the i, j, and k directions. If the rate is &gt; 1, then the resulting VOI will be subsampled representation of the input. For example, if the SampleRate=(2,2,2), every other point will be selected, resulting in a volume 1/8th the original size.</para>
/// </summary>
  void SetSampleRate(int arg0, int arg1, int arg2);


  // void SetSampleRate (int  a[3]);
/// <summary>
/// <para>Set the sampling rate in the i, j, and k directions. If the rate is &gt; 1, then the resulting VOI will be subsampled representation of the input. For example, if the SampleRate=(2,2,2), every other point will be selected, resulting in a volume 1/8th the original size.</para>
/// </summary>
  void SetSampleRate(array<int>^ a);


  // int  *GetSampleRate ();
/// <summary>
/// <para>Set the sampling rate in the i, j, and k directions. If the rate is &gt; 1, then the resulting VOI will be subsampled representation of the input. For example, if the SampleRate=(2,2,2), every other point will be selected, resulting in a volume 1/8th the original size.</para>
/// </summary>
  array<int>^ GetSampleRate();


  // void SetIncludeBoundary (int );
/// <summary>
/// <para>Control whether to enforce that the &quot;boundary&quot; of the grid is output in the subsampling process. (This ivar only has effect when the SampleRate in any direction is not equal to 1.) When this ivar IncludeBoundary is on, the subsampling will always include the boundary of the grid even though the sample rate is not an even multiple of the grid dimensions. (By default IncludeBoundary is off.)</para>
/// </summary>
  void SetIncludeBoundary(int arg0);


  // int GetIncludeBoundary ();
/// <summary>
/// <para>Control whether to enforce that the &quot;boundary&quot; of the grid is output in the subsampling process. (This ivar only has effect when the SampleRate in any direction is not equal to 1.) When this ivar IncludeBoundary is on, the subsampling will always include the boundary of the grid even though the sample rate is not an even multiple of the grid dimensions. (By default IncludeBoundary is off.)</para>
/// </summary>
  int GetIncludeBoundary();


  // void IncludeBoundaryOn ();
/// <summary>
/// <para>Control whether to enforce that the &quot;boundary&quot; of the grid is output in the subsampling process. (This ivar only has effect when the SampleRate in any direction is not equal to 1.) When this ivar IncludeBoundary is on, the subsampling will always include the boundary of the grid even though the sample rate is not an even multiple of the grid dimensions. (By default IncludeBoundary is off.)</para>
/// </summary>
  void IncludeBoundaryOn();


  // void IncludeBoundaryOff ();
/// <summary>
/// <para>Control whether to enforce that the &quot;boundary&quot; of the grid is output in the subsampling process. (This ivar only has effect when the SampleRate in any direction is not equal to 1.) When this ivar IncludeBoundary is on, the subsampling will always include the boundary of the grid even though the sample rate is not an even multiple of the grid dimensions. (By default IncludeBoundary is off.)</para>
/// </summary>
  void IncludeBoundaryOff();


// Did not wrap:  vtkExtractRectilinearGrid ();


// Did not wrap:  ~vtkExtractRectilinearGrid ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestUpdateExtent (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkExtractRectilinearGrid (const vtkExtractRectilinearGrid &);


// Did not wrap:  void vtkExtractRectilinearGrid 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkExtractRectilinearGrid(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkExtractRectilinearGrid(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkExtractRectilinearGrid();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkExtractRectilinearGrid();


};

} // end vtkGraphics
