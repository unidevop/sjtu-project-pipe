#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImagePadFilter : public vtkThreadedImageAlgorithm
{

public:
// Did not wrap:  static vtkImagePadFilter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImagePadFilter *NewInstance ();
  vtkImagePadFilter^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetOutputWholeExtent (int extent[6]);
/// <summary>
/// <para>The image extent of the output has to be set explicitly.</para>
/// </summary>
  void SetOutputWholeExtent(array<int>^ extent);


  // void SetOutputWholeExtent (int minX, int maxX, int minY, int maxY, int minZ, int maxZ);
/// <summary>
/// <para>The image extent of the output has to be set explicitly.</para>
/// </summary>
  void SetOutputWholeExtent(int minX, int maxX, int minY, int maxY, int minZ, int maxZ);


  // void GetOutputWholeExtent (int extent[6]);
/// <summary>
/// <para>The image extent of the output has to be set explicitly.</para>
/// </summary>
  void GetOutputWholeExtent(array<int>^ extent);


  // int *GetOutputWholeExtent ();return this OutputWholeExtent 
/// <summary>
/// <para>Set/Get the number of output scalar components.</para>
/// </summary>
  array<int>^ GetOutputWholeExtent();


  // void SetOutputNumberOfScalarComponents (int );
/// <summary>
/// <para>Set/Get the number of output scalar components.</para>
/// </summary>
  void SetOutputNumberOfScalarComponents(int arg0);


  // int GetOutputNumberOfScalarComponents ();
/// <summary>
/// <para>Set/Get the number of output scalar components.</para>
/// </summary>
  int GetOutputNumberOfScalarComponents();


// Did not wrap:  vtkImagePadFilter ();


// Did not wrap:  ~vtkImagePadFilter ();


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestUpdateExtent (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual void ComputeInputUpdateExtent (int inExt[6], int outExt[6], int wExt[6]);


// Did not wrap:  vtkImagePadFilter (const vtkImagePadFilter &);


// Did not wrap:  void vtkImagePadFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImagePadFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImagePadFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImagePadFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImagePadFilter();


};

} // end vtkImaging
