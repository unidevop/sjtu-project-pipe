#pragma once

// managed includes
#include "vtkButtonSourceDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkRectangularButtonSource : public vtkButtonSource
{

public:
  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkRectangularButtonSource *NewInstance ();
  vtkRectangularButtonSource^ NewInstance();


  // vtkRectangularButtonSource *SafeDownCast (vtkObject* o);
  static vtkRectangularButtonSource^ SafeDownCast(vtkObject^ o);


// Did not wrap:  static vtkRectangularButtonSource *New ();


  // void SetWidth (double );
/// <summary>
/// <para>Set/Get the width of the button.</para>
/// </summary>
  void SetWidth(double arg0);


  // double GetWidthMinValue ();
/// <summary>
/// <para>Set/Get the width of the button.</para>
/// </summary>
  double GetWidthMinValue();


  // double GetWidthMaxValue ();
/// <summary>
/// <para>Set/Get the width of the button.</para>
/// </summary>
  double GetWidthMaxValue();


  // double GetWidth ();
/// <summary>
/// <para>Set/Get the width of the button.</para>
/// </summary>
  double GetWidth();


  // void SetHeight (double );
/// <summary>
/// <para>Set/Get the height of the button.</para>
/// </summary>
  void SetHeight(double arg0);


  // double GetHeightMinValue ();
/// <summary>
/// <para>Set/Get the height of the button.</para>
/// </summary>
  double GetHeightMinValue();


  // double GetHeightMaxValue ();
/// <summary>
/// <para>Set/Get the height of the button.</para>
/// </summary>
  double GetHeightMaxValue();


  // double GetHeight ();
/// <summary>
/// <para>Set/Get the height of the button.</para>
/// </summary>
  double GetHeight();


  // void SetDepth (double );
/// <summary>
/// <para>Set/Get the depth of the button (the z-eliipsoid axis length).</para>
/// </summary>
  void SetDepth(double arg0);


  // double GetDepthMinValue ();
/// <summary>
/// <para>Set/Get the depth of the button (the z-eliipsoid axis length).</para>
/// </summary>
  double GetDepthMinValue();


  // double GetDepthMaxValue ();
/// <summary>
/// <para>Set/Get the depth of the button (the z-eliipsoid axis length).</para>
/// </summary>
  double GetDepthMaxValue();


  // double GetDepth ();
/// <summary>
/// <para>Set/Get the depth of the button (the z-eliipsoid axis length).</para>
/// </summary>
  double GetDepth();


  // void SetBoxRatio (double );
/// <summary>
/// <para>Set/Get the ratio of the bottom of the button with the shoulder region. Numbers greater than one produce buttons with a wider bottom than shoulder; ratios less than one produce buttons that have a wider shoulder than bottom.</para>
/// </summary>
  void SetBoxRatio(double arg0);


  // double GetBoxRatioMinValue ();
/// <summary>
/// <para>Set/Get the ratio of the bottom of the button with the shoulder region. Numbers greater than one produce buttons with a wider bottom than shoulder; ratios less than one produce buttons that have a wider shoulder than bottom.</para>
/// </summary>
  double GetBoxRatioMinValue();


  // double GetBoxRatioMaxValue ();
/// <summary>
/// <para>Set/Get the ratio of the bottom of the button with the shoulder region. Numbers greater than one produce buttons with a wider bottom than shoulder; ratios less than one produce buttons that have a wider shoulder than bottom.</para>
/// </summary>
  double GetBoxRatioMaxValue();


  // double GetBoxRatio ();
/// <summary>
/// <para>Set/Get the ratio of the bottom of the button with the shoulder region. Numbers greater than one produce buttons with a wider bottom than shoulder; ratios less than one produce buttons that have a wider shoulder than bottom.</para>
/// </summary>
  double GetBoxRatio();


  // void SetTextureRatio (double );
/// <summary>
/// <para>Set/Get the ratio of the texture region to the shoulder region. This number must be 0&lt;=tr&lt;=1. If the texture style is to fit the image, then satisfying the texture ratio may only be possible in one of the two directions (length or width) depending on the  dimensions of the texture.</para>
/// </summary>
  void SetTextureRatio(double arg0);


  // double GetTextureRatioMinValue ();
/// <summary>
/// <para>Set/Get the ratio of the texture region to the shoulder region. This number must be 0&lt;=tr&lt;=1. If the texture style is to fit the image, then satisfying the texture ratio may only be possible in one of the two directions (length or width) depending on the  dimensions of the texture.</para>
/// </summary>
  double GetTextureRatioMinValue();


  // double GetTextureRatioMaxValue ();
/// <summary>
/// <para>Set/Get the ratio of the texture region to the shoulder region. This number must be 0&lt;=tr&lt;=1. If the texture style is to fit the image, then satisfying the texture ratio may only be possible in one of the two directions (length or width) depending on the  dimensions of the texture.</para>
/// </summary>
  double GetTextureRatioMaxValue();


  // double GetTextureRatio ();
/// <summary>
/// <para>Set/Get the ratio of the texture region to the shoulder region. This number must be 0&lt;=tr&lt;=1. If the texture style is to fit the image, then satisfying the texture ratio may only be possible in one of the two directions (length or width) depending on the  dimensions of the texture.</para>
/// </summary>
  double GetTextureRatio();


  // void SetTextureHeightRatio (double );
/// <summary>
/// <para>Set/Get the ratio of the height of the texture region to the shoulder height. Values greater than 1.0 yield convex buttons with the texture region raised above the shoulder. Values less than 1.0 yield concave buttons with the texture region below the shoulder.</para>
/// </summary>
  void SetTextureHeightRatio(double arg0);


  // double GetTextureHeightRatioMinValue ();
/// <summary>
/// <para>Set/Get the ratio of the height of the texture region to the shoulder height. Values greater than 1.0 yield convex buttons with the texture region raised above the shoulder. Values less than 1.0 yield concave buttons with the texture region below the shoulder.</para>
/// </summary>
  double GetTextureHeightRatioMinValue();


  // double GetTextureHeightRatioMaxValue ();
/// <summary>
/// <para>Set/Get the ratio of the height of the texture region to the shoulder height. Values greater than 1.0 yield convex buttons with the texture region raised above the shoulder. Values less than 1.0 yield concave buttons with the texture region below the shoulder.</para>
/// </summary>
  double GetTextureHeightRatioMaxValue();


  // double GetTextureHeightRatio ();
/// <summary>
/// <para>Set/Get the ratio of the height of the texture region to the shoulder height. Values greater than 1.0 yield convex buttons with the texture region raised above the shoulder. Values less than 1.0 yield concave buttons with the texture region below the shoulder.</para>
/// </summary>
  double GetTextureHeightRatio();


// Did not wrap:  vtkRectangularButtonSource ();


// Did not wrap:  ~vtkRectangularButtonSource ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkRectangularButtonSource (const vtkRectangularButtonSource &);


// Did not wrap:  void vtkRectangularButtonSource 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkRectangularButtonSource(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkRectangularButtonSource(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkRectangularButtonSource();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkRectangularButtonSource();


};

} // end vtkGraphics
