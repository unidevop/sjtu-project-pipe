#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageClip : public vtkImageAlgorithm
{

public:
// Did not wrap:  static vtkImageClip *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageClip *NewInstance ();
  vtkImageClip^ NewInstance();


  // vtkImageClip *SafeDownCast (vtkObject* o);
  static vtkImageClip^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetOutputWholeExtent (int extent[6], vtkInformation *outInfo);
/// <summary>
/// <para>The whole extent of the output has to be set explicitly.</para>
/// </summary>
  void SetOutputWholeExtent(array<int>^ extent, vtkInformation^ outInfo);


  // void SetOutputWholeExtent (int minX, int maxX, int minY, int maxY, int minZ, int maxZ);
/// <summary>
/// <para>The whole extent of the output has to be set explicitly.</para>
/// </summary>
  void SetOutputWholeExtent(int minX, int maxX, int minY, int maxY, int minZ, int maxZ);


  // void GetOutputWholeExtent (int extent[6]);
/// <summary>
/// <para>The whole extent of the output has to be set explicitly.</para>
/// </summary>
  void GetOutputWholeExtent(array<int>^ extent);


  // int *GetOutputWholeExtent ();return this OutputWholeExtent 
  array<int>^ GetOutputWholeExtent();


  // void ResetOutputWholeExtent ();
  void ResetOutputWholeExtent();


  // void SetClipData (int );
/// <summary>
/// <para>By default, ClipData is off, and only the WholeExtent is modified. the data's extent may actually be larger.  When this flag is on, the data extent will be no more than the OutputWholeExtent.</para>
/// </summary>
  void SetClipData(int arg0);


  // int GetClipData ();
/// <summary>
/// <para>By default, ClipData is off, and only the WholeExtent is modified. the data's extent may actually be larger.  When this flag is on, the data extent will be no more than the OutputWholeExtent.</para>
/// </summary>
  int GetClipData();


  // void ClipDataOn ();
/// <summary>
/// <para>By default, ClipData is off, and only the WholeExtent is modified. the data's extent may actually be larger.  When this flag is on, the data extent will be no more than the OutputWholeExtent.</para>
/// </summary>
  void ClipDataOn();


  // void ClipDataOff ();
/// <summary>
/// <para>By default, ClipData is off, and only the WholeExtent is modified. the data's extent may actually be larger.  When this flag is on, the data extent will be no more than the OutputWholeExtent.</para>
/// </summary>
  void ClipDataOff();


  // void SetOutputWholeExtent (int piece, int numPieces);
/// <summary>
/// <para>Hack set output by piece</para>
/// </summary>
  void SetOutputWholeExtent(int piece, int numPieces);


// Did not wrap:  vtkImageClip ();


// Did not wrap:  ~vtkImageClip ();


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  void CopyData (vtkImageData *inData, vtkImageData *outData, int *ext);


// Did not wrap:  int SplitExtentTmp (int piece, int numPieces, int *ext);


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkImageClip (const vtkImageClip &);


// Did not wrap:  void vtkImageClip 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageClip(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageClip(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageClip();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageClip();


};

} // end vtkImaging
