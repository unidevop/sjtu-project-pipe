#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageCacheFilter : public vtkImageAlgorithm
{

public:
// Did not wrap:  static vtkImageCacheFilter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageCacheFilter *NewInstance ();
  vtkImageCacheFilter^ NewInstance();


  // vtkImageCacheFilter *SafeDownCast (vtkObject* o);
  static vtkImageCacheFilter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetCacheSize (int size);
/// <summary>
/// <para>This is the maximum number of images that can be retained in memory. it defaults to 10.</para>
/// </summary>
  void SetCacheSize(int size);


  // int GetCacheSize ();
/// <summary>
/// <para>This is the maximum number of images that can be retained in memory. it defaults to 10.</para>
/// </summary>
  int GetCacheSize();


// Did not wrap:  vtkImageCacheFilter ();


// Did not wrap:  ~vtkImageCacheFilter ();


// Did not wrap:  virtual vtkExecutive *CreateDefaultExecutive ();


// Did not wrap:  virtual void ExecuteData (vtkDataObject *);


// Did not wrap:  vtkImageCacheFilter (const vtkImageCacheFilter &);


// Did not wrap:  void vtkImageCacheFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageCacheFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageCacheFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageCacheFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageCacheFilter();


};

} // end vtkImaging
