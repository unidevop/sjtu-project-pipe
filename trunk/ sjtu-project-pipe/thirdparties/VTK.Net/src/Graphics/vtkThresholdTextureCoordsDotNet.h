#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkThresholdTextureCoords : public vtkDataSetAlgorithm
{

public:
// Did not wrap:  static vtkThresholdTextureCoords *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkThresholdTextureCoords *NewInstance ();
  vtkThresholdTextureCoords^ NewInstance();


  // vtkThresholdTextureCoords *SafeDownCast (vtkObject* o);
  static vtkThresholdTextureCoords^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void ThresholdByLower (double lower);
/// <summary>
/// <para>Criterion is cells whose scalars are less than lower threshold.</para>
/// </summary>
  void ThresholdByLower(double lower);


  // void ThresholdByUpper (double upper);
/// <summary>
/// <para>Criterion is cells whose scalars are less than upper threshold.</para>
/// </summary>
  void ThresholdByUpper(double upper);


  // void ThresholdBetween (double lower, double upper);
/// <summary>
/// <para>Criterion is cells whose scalars are between lower and upper thresholds.</para>
/// </summary>
  void ThresholdBetween(double lower, double upper);


  // double GetUpperThreshold ();
/// <summary>
/// <para>Return the upper and lower thresholds.</para>
/// </summary>
  double GetUpperThreshold();


  // double GetLowerThreshold ();
/// <summary>
/// <para>Return the upper and lower thresholds.</para>
/// </summary>
  double GetLowerThreshold();


  // void SetTextureDimension (int );
/// <summary>
/// <para>Set the desired dimension of the texture map.</para>
/// </summary>
  void SetTextureDimension(int arg0);


  // int GetTextureDimensionMinValue ();
/// <summary>
/// <para>Set the desired dimension of the texture map.</para>
/// </summary>
  int GetTextureDimensionMinValue();


  // int GetTextureDimensionMaxValue ();
/// <summary>
/// <para>Set the desired dimension of the texture map.</para>
/// </summary>
  int GetTextureDimensionMaxValue();


  // int GetTextureDimension ();
/// <summary>
/// <para>Set the desired dimension of the texture map.</para>
/// </summary>
  int GetTextureDimension();


  // void SetInTextureCoord (double , double , double );
/// <summary>
/// <para>Set the texture coordinate value for point satisfying threshold criterion.</para>
/// </summary>
  void SetInTextureCoord(double arg0, double arg1, double arg2);


  // void SetInTextureCoord (double  a[3]);
/// <summary>
/// <para>Set the texture coordinate value for point satisfying threshold criterion.</para>
/// </summary>
  void SetInTextureCoord(array<double>^ a);


  // double  *GetInTextureCoord ();
/// <summary>
/// <para>Set the texture coordinate value for point satisfying threshold criterion.</para>
/// </summary>
  array<double>^ GetInTextureCoord();


  // void SetOutTextureCoord (double , double , double );
/// <summary>
/// <para>Set the texture coordinate value for point NOT satisfying threshold  criterion.</para>
/// </summary>
  void SetOutTextureCoord(double arg0, double arg1, double arg2);


  // void SetOutTextureCoord (double  a[3]);
/// <summary>
/// <para>Set the texture coordinate value for point NOT satisfying threshold  criterion.</para>
/// </summary>
  void SetOutTextureCoord(array<double>^ a);


  // double  *GetOutTextureCoord ();
/// <summary>
/// <para>Set the texture coordinate value for point NOT satisfying threshold  criterion.</para>
/// </summary>
  array<double>^ GetOutTextureCoord();


// Did not wrap:  vtkThresholdTextureCoords ();


// Did not wrap:  ~vtkThresholdTextureCoords ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  int Lower (double s);return s this LowerThreshold 


// Did not wrap:  int Upper (double s);return s this UpperThreshold 


// Did not wrap:  int Between (double s);return s this LowerThreshold s this UpperThreshold 


// Did not wrap:  vtkThresholdTextureCoords (const vtkThresholdTextureCoords &);


// Did not wrap:  void vtkThresholdTextureCoords 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkThresholdTextureCoords(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkThresholdTextureCoords(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkThresholdTextureCoords();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkThresholdTextureCoords();


};

} // end vtkGraphics
