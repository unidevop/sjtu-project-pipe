#pragma once

// managed includes
#include "vtkImageIterateFilterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageDecomposeFilter : public vtkImageIterateFilter
{

public:
  // const char *GetClassName ();
/// <summary>
/// <para>Construct an instance of vtkImageDecomposeFilter filter with default dimensionality 3.</para>
/// </summary>
  System::String^ GetClassName();


  // int IsA (const char *name);
/// <summary>
/// <para>Construct an instance of vtkImageDecomposeFilter filter with default dimensionality 3.</para>
/// </summary>
  int IsA(System::String^ name);


  // vtkImageDecomposeFilter *NewInstance ();
/// <summary>
/// <para>Construct an instance of vtkImageDecomposeFilter filter with default dimensionality 3.</para>
/// </summary>
  vtkImageDecomposeFilter^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetDimensionality (int dim);
/// <summary>
/// <para>Dimensionality is the number of axes which are considered during execution. To process images dimensionality would be set to 2.</para>
/// </summary>
  void SetDimensionality(int dim);


  // int GetDimensionality ();
/// <summary>
/// <para>Dimensionality is the number of axes which are considered during execution. To process images dimensionality would be set to 2.</para>
/// </summary>
  int GetDimensionality();


  // void PermuteIncrements (vtkIdType *increments, vtkIdType &inc0, vtkIdType &inc1, vtkIdType &inc2);
/// <summary>
/// <para>Private methods kept public for template execute functions.</para>
/// </summary>
  void PermuteIncrements(array<int>^ arg0, int% inc0, int% inc1, int% inc2);


  // void PermuteExtent (int *extent, int &min0, int &max0, int &min1, int &max1, int &min2, int &max2);
/// <summary>
/// <para>Private methods kept public for template execute functions.</para>
/// </summary>
  void PermuteExtent(array<int>^ extent, int% min0, int% max0, int% min1, int% max1, int% min2, int% max2);


// Did not wrap:  vtkImageDecomposeFilter ();


// Did not wrap:  ~vtkImageDecomposeFilter ();


// Did not wrap:  vtkImageDecomposeFilter (const vtkImageDecomposeFilter &);


// Did not wrap:  void vtkImageDecomposeFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageDecomposeFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageDecomposeFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageDecomposeFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageDecomposeFilter();


};

} // end vtkImaging
