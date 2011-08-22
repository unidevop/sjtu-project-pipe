#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkExtractVOI : public vtkImageAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkExtractVOI *NewInstance ();
  vtkExtractVOI^ NewInstance();


  // vtkExtractVOI *SafeDownCast (vtkObject* o);
  static vtkExtractVOI^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkExtractVOI *New ();


  // void SetVOI (int , int , int , int , int , int );
/// <summary>
/// <para>Specify i-j-k (min,max) pairs to extract. The resulting structured points dataset can be of any topological dimension (i.e., point, line, image,  or volume). </para>
/// </summary>
  void SetVOI(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5);


  // void SetVOI (int  a[6]);
/// <summary>
/// <para>Specify i-j-k (min,max) pairs to extract. The resulting structured points dataset can be of any topological dimension (i.e., point, line, image,  or volume). </para>
/// </summary>
  void SetVOI(array<int>^ a);


  // int  *GetVOI ();
/// <summary>
/// <para>Specify i-j-k (min,max) pairs to extract. The resulting structured points dataset can be of any topological dimension (i.e., point, line, image,  or volume). </para>
/// </summary>
  array<int>^ GetVOI();


  // void SetSampleRate (int , int , int );
/// <summary>
/// <para>Set the sampling rate in the i, j, and k directions. If the rate is &gt; 1, then the resulting VOI will be subsampled representation of the input.  For example, if the SampleRate=(2,2,2), every other point will be selected, resulting in a volume 1/8th the original size.</para>
/// </summary>
  void SetSampleRate(int arg0, int arg1, int arg2);


  // void SetSampleRate (int  a[3]);
/// <summary>
/// <para>Set the sampling rate in the i, j, and k directions. If the rate is &gt; 1, then the resulting VOI will be subsampled representation of the input.  For example, if the SampleRate=(2,2,2), every other point will be selected, resulting in a volume 1/8th the original size.</para>
/// </summary>
  void SetSampleRate(array<int>^ a);


  // int  *GetSampleRate ();
/// <summary>
/// <para>Set the sampling rate in the i, j, and k directions. If the rate is &gt; 1, then the resulting VOI will be subsampled representation of the input.  For example, if the SampleRate=(2,2,2), every other point will be selected, resulting in a volume 1/8th the original size.</para>
/// </summary>
  array<int>^ GetSampleRate();


// Did not wrap:  vtkExtractVOI ();


// Did not wrap:  ~vtkExtractVOI ();


// Did not wrap:  virtual int RequestUpdateExtent (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  vtkExtractVOI (const vtkExtractVOI &);


// Did not wrap:  void vtkExtractVOI 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkExtractVOI(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkExtractVOI(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkExtractVOI();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkExtractVOI();


};

} // end vtkImaging
