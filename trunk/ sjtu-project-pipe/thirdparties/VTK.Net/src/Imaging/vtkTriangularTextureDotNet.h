#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkTriangularTexture : public vtkImageAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkTriangularTexture *NewInstance ();
  vtkTriangularTexture^ NewInstance();


  // vtkTriangularTexture *SafeDownCast (vtkObject* o);
  static vtkTriangularTexture^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkTriangularTexture *New ();


  // void SetScaleFactor (double );
/// <summary>
/// <para>Set a Scale Factor.</para>
/// </summary>
  void SetScaleFactor(double arg0);


  // double GetScaleFactor ();
/// <summary>
/// <para>Set a Scale Factor.</para>
/// </summary>
  double GetScaleFactor();


  // void SetXSize (int );
/// <summary>
/// <para>Set the X texture map dimension. Default is 64.</para>
/// </summary>
  void SetXSize(int arg0);


  // int GetXSize ();
/// <summary>
/// <para>Set the X texture map dimension. Default is 64.</para>
/// </summary>
  int GetXSize();


  // void SetYSize (int );
/// <summary>
/// <para>Set the Y texture map dimension. Default is 64.</para>
/// </summary>
  void SetYSize(int arg0);


  // int GetYSize ();
/// <summary>
/// <para>Set the Y texture map dimension. Default is 64.</para>
/// </summary>
  int GetYSize();


  // void SetTexturePattern (int );
/// <summary>
/// <para>Set the texture pattern.    1 = opaque at centroid (default)    2 = opaque at vertices    3 = opaque in rings around vertices</para>
/// </summary>
  void SetTexturePattern(int arg0);


  // int GetTexturePatternMinValue ();
/// <summary>
/// <para>Set the texture pattern.    1 = opaque at centroid (default)    2 = opaque at vertices    3 = opaque in rings around vertices</para>
/// </summary>
  int GetTexturePatternMinValue();


  // int GetTexturePatternMaxValue ();
/// <summary>
/// <para>Set the texture pattern.    1 = opaque at centroid (default)    2 = opaque at vertices    3 = opaque in rings around vertices</para>
/// </summary>
  int GetTexturePatternMaxValue();


  // int GetTexturePattern ();
/// <summary>
/// <para>Set the texture pattern.    1 = opaque at centroid (default)    2 = opaque at vertices    3 = opaque in rings around vertices</para>
/// </summary>
  int GetTexturePattern();


// Did not wrap:  vtkTriangularTexture ();


// Did not wrap:  ~vtkTriangularTexture ();


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual void ExecuteData (vtkDataObject *data);


// Did not wrap:  vtkTriangularTexture (const vtkTriangularTexture &);


// Did not wrap:  void vtkTriangularTexture 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkTriangularTexture(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkTriangularTexture(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkTriangularTexture();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkTriangularTexture();


};

} // end vtkImaging
