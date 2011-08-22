#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkImageStencilData;

public ref class vtkImageAccumulate : public vtkImageAlgorithm
{

public:
// Did not wrap:  static vtkImageAccumulate *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageAccumulate *NewInstance ();
  vtkImageAccumulate^ NewInstance();


  // vtkImageAccumulate *SafeDownCast (vtkObject* o);
  static vtkImageAccumulate^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetComponentSpacing (double , double , double );
/// <summary>
/// <para>Set/Get - The component spacing is the dimension of each bin. This ends up being the spacing of the output &quot;image&quot;. If the number of input scalar components are less than three, then some of these spacing values are ignored. For a 1D histogram with 10 bins spanning the values 1000 to 2000, this spacing should be set to 100, 0, 0</para>
/// </summary>
  void SetComponentSpacing(double arg0, double arg1, double arg2);


  // void SetComponentSpacing (double  a[3]);
/// <summary>
/// <para>Set/Get - The component spacing is the dimension of each bin. This ends up being the spacing of the output &quot;image&quot;. If the number of input scalar components are less than three, then some of these spacing values are ignored. For a 1D histogram with 10 bins spanning the values 1000 to 2000, this spacing should be set to 100, 0, 0</para>
/// </summary>
  void SetComponentSpacing(array<double>^ a);


  // double  *GetComponentSpacing ();
/// <summary>
/// <para>Set/Get - The component spacing is the dimension of each bin. This ends up being the spacing of the output &quot;image&quot;. If the number of input scalar components are less than three, then some of these spacing values are ignored. For a 1D histogram with 10 bins spanning the values 1000 to 2000, this spacing should be set to 100, 0, 0</para>
/// </summary>
  array<double>^ GetComponentSpacing();


  // void SetComponentOrigin (double , double , double );
/// <summary>
/// <para>Set/Get - The component origin is the location of bin (0, 0, 0). Note that if the Component extent does not include the value (0,0,0), then this origin bin will not actually be in the output. The origin of the output ends up being the same as the componenet origin. For a 1D histogram with 10 bins spanning the values 1000 to 2000, this origin should be set to 1000, 0, 0</para>
/// </summary>
  void SetComponentOrigin(double arg0, double arg1, double arg2);


  // void SetComponentOrigin (double  a[3]);
/// <summary>
/// <para>Set/Get - The component origin is the location of bin (0, 0, 0). Note that if the Component extent does not include the value (0,0,0), then this origin bin will not actually be in the output. The origin of the output ends up being the same as the componenet origin. For a 1D histogram with 10 bins spanning the values 1000 to 2000, this origin should be set to 1000, 0, 0</para>
/// </summary>
  void SetComponentOrigin(array<double>^ a);


  // double  *GetComponentOrigin ();
/// <summary>
/// <para>Set/Get - The component origin is the location of bin (0, 0, 0). Note that if the Component extent does not include the value (0,0,0), then this origin bin will not actually be in the output. The origin of the output ends up being the same as the componenet origin. For a 1D histogram with 10 bins spanning the values 1000 to 2000, this origin should be set to 1000, 0, 0</para>
/// </summary>
  array<double>^ GetComponentOrigin();


  // void SetComponentExtent (int extent[6]);
/// <summary>
/// <para>Set/Get - The component extent sets the number/extent of the bins. For a 1D histogram with 10 bins spanning the values 1000 to 2000, this extent should be set to 0, 9, 0, 0, 0, 0. The extent specifies inclusive min/max values.   This implies the the top extent should be set to the number of bins - 1.</para>
/// </summary>
  void SetComponentExtent(array<int>^ extent);


  // void SetComponentExtent (int minX, int maxX, int minY, int maxY, int minZ, int maxZ);
/// <summary>
/// <para>Set/Get - The component extent sets the number/extent of the bins. For a 1D histogram with 10 bins spanning the values 1000 to 2000, this extent should be set to 0, 9, 0, 0, 0, 0. The extent specifies inclusive min/max values.   This implies the the top extent should be set to the number of bins - 1.</para>
/// </summary>
  void SetComponentExtent(int minX, int maxX, int minY, int maxY, int minZ, int maxZ);


  // void GetComponentExtent (int extent[6]);
/// <summary>
/// <para>Set/Get - The component extent sets the number/extent of the bins. For a 1D histogram with 10 bins spanning the values 1000 to 2000, this extent should be set to 0, 9, 0, 0, 0, 0. The extent specifies inclusive min/max values.   This implies the the top extent should be set to the number of bins - 1.</para>
/// </summary>
  void GetComponentExtent(array<int>^ extent);


  // int *GetComponentExtent ();return this ComponentExtent 
/// <summary>
/// <para>Use a stencil to specify which voxels to accumulate.</para>
/// </summary>
  array<int>^ GetComponentExtent();


  // void SetStencil (vtkImageStencilData *stencil);
/// <summary>
/// <para>Use a stencil to specify which voxels to accumulate.</para>
/// </summary>
  void SetStencil(vtkImageStencilData^ stencil);


  // vtkImageStencilData *GetStencil ();
/// <summary>
/// <para>Use a stencil to specify which voxels to accumulate.</para>
/// </summary>
  vtkImageStencilData^ GetStencil();


  // void SetReverseStencil (int );
/// <summary>
/// <para>Reverse the stencil.</para>
/// </summary>
  void SetReverseStencil(int arg0);


  // void ReverseStencilOn ();
/// <summary>
/// <para>Reverse the stencil.</para>
/// </summary>
  void ReverseStencilOn();


  // void ReverseStencilOff ();
/// <summary>
/// <para>Reverse the stencil.</para>
/// </summary>
  void ReverseStencilOff();


  // int GetReverseStencil ();
/// <summary>
/// <para>Reverse the stencil.</para>
/// </summary>
  int GetReverseStencil();


  // double  *GetMin ();
/// <summary>
/// <para>Get the statistics information for the data.</para>
/// </summary>
  array<double>^ GetMin();


  // double  *GetMax ();
/// <summary>
/// <para>Get the statistics information for the data.</para>
/// </summary>
  array<double>^ GetMax();


  // double  *GetMean ();
/// <summary>
/// <para>Get the statistics information for the data.</para>
/// </summary>
  array<double>^ GetMean();


  // double  *GetStandardDeviation ();
/// <summary>
/// <para>Get the statistics information for the data.</para>
/// </summary>
  array<double>^ GetStandardDeviation();


  // long GetVoxelCount ();
/// <summary>
/// <para>Get the statistics information for the data.</para>
/// </summary>
  long GetVoxelCount();


// Did not wrap:  vtkImageAccumulate ();


// Did not wrap:  ~vtkImageAccumulate ();


// Did not wrap:  virtual int RequestUpdateExtent (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkImageAccumulate (const vtkImageAccumulate &);


// Did not wrap:  void vtkImageAccumulate 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageAccumulate(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageAccumulate(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageAccumulate();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageAccumulate();


};

} // end vtkImaging
