#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageEllipsoidSource : public vtkImageAlgorithm
{

public:
// Did not wrap:  static vtkImageEllipsoidSource *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageEllipsoidSource *NewInstance ();
  vtkImageEllipsoidSource^ NewInstance();


  // vtkImageEllipsoidSource *SafeDownCast (vtkObject* o);
  static vtkImageEllipsoidSource^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetWholeExtent (int extent[6]);
/// <summary>
/// <para>Set/Get the extent of the whole output image.</para>
/// </summary>
  void SetWholeExtent(array<int>^ extent);


  // void SetWholeExtent (int minX, int maxX, int minY, int maxY, int minZ, int maxZ);
/// <summary>
/// <para>Set/Get the extent of the whole output image.</para>
/// </summary>
  void SetWholeExtent(int minX, int maxX, int minY, int maxY, int minZ, int maxZ);


  // void GetWholeExtent (int extent[6]);
/// <summary>
/// <para>Set/Get the extent of the whole output image.</para>
/// </summary>
  void GetWholeExtent(array<int>^ extent);


  // int *GetWholeExtent ();return this WholeExtent 
/// <summary>
/// <para>Set/Get the center of the ellipsoid.</para>
/// </summary>
  array<int>^ GetWholeExtent();


  // void SetCenter (double , double , double );
/// <summary>
/// <para>Set/Get the center of the ellipsoid.</para>
/// </summary>
  void SetCenter(double arg0, double arg1, double arg2);


  // void SetCenter (double  a[3]);
/// <summary>
/// <para>Set/Get the center of the ellipsoid.</para>
/// </summary>
  void SetCenter(array<double>^ a);


  // double  *GetCenter ();
/// <summary>
/// <para>Set/Get the center of the ellipsoid.</para>
/// </summary>
  array<double>^ GetCenter();


  // void SetRadius (double , double , double );
/// <summary>
/// <para>Set/Get the radius of the ellipsoid.</para>
/// </summary>
  void SetRadius(double arg0, double arg1, double arg2);


  // void SetRadius (double  a[3]);
/// <summary>
/// <para>Set/Get the radius of the ellipsoid.</para>
/// </summary>
  void SetRadius(array<double>^ a);


  // double  *GetRadius ();
/// <summary>
/// <para>Set/Get the radius of the ellipsoid.</para>
/// </summary>
  array<double>^ GetRadius();


  // void SetInValue (double );
/// <summary>
/// <para>Set/Get the inside pixel values.</para>
/// </summary>
  void SetInValue(double arg0);


  // double GetInValue ();
/// <summary>
/// <para>Set/Get the inside pixel values.</para>
/// </summary>
  double GetInValue();


  // void SetOutValue (double );
/// <summary>
/// <para>Set/Get the outside pixel values.</para>
/// </summary>
  void SetOutValue(double arg0);


  // double GetOutValue ();
/// <summary>
/// <para>Set/Get the outside pixel values.</para>
/// </summary>
  double GetOutValue();


  // void SetOutputScalarType (int );
/// <summary>
/// <para>Set what type of scalar data this source should generate.</para>
/// </summary>
  void SetOutputScalarType(int arg0);


  // int GetOutputScalarType ();
/// <summary>
/// <para>Set what type of scalar data this source should generate.</para>
/// </summary>
  int GetOutputScalarType();


  // void SetOutputScalarTypeToFloat ();this SetOutputScalarType VTK_FLOAT 
/// <summary>
/// <para>Set what type of scalar data this source should generate.</para>
/// </summary>
  void SetOutputScalarTypeToFloat();


  // void SetOutputScalarTypeToDouble ();this SetOutputScalarType VTK_DOUBLE 
/// <summary>
/// <para>Set what type of scalar data this source should generate.</para>
/// </summary>
  void SetOutputScalarTypeToDouble();


  // void SetOutputScalarTypeToLong ();this SetOutputScalarType VTK_LONG 
/// <summary>
/// <para>Set what type of scalar data this source should generate.</para>
/// </summary>
  void SetOutputScalarTypeToLong();


  // void SetOutputScalarTypeToUnsignedLong ();this SetOutputScalarType VTK_UNSIGNED_LONG 
/// <summary>
/// <para>Set what type of scalar data this source should generate.</para>
/// </summary>
  void SetOutputScalarTypeToUnsignedLong();


  // void SetOutputScalarTypeToInt ();this SetOutputScalarType VTK_INT 
/// <summary>
/// <para>Set what type of scalar data this source should generate.</para>
/// </summary>
  void SetOutputScalarTypeToInt();


  // void SetOutputScalarTypeToUnsignedInt ();this SetOutputScalarType VTK_UNSIGNED_INT 
/// <summary>
/// <para>Set what type of scalar data this source should generate.</para>
/// </summary>
  void SetOutputScalarTypeToUnsignedInt();


  // void SetOutputScalarTypeToShort ();this SetOutputScalarType VTK_SHORT 
/// <summary>
/// <para>Set what type of scalar data this source should generate.</para>
/// </summary>
  void SetOutputScalarTypeToShort();


  // void SetOutputScalarTypeToUnsignedShort ();this SetOutputScalarType VTK_UNSIGNED_SHORT 
/// <summary>
/// <para>Set what type of scalar data this source should generate.</para>
/// </summary>
  void SetOutputScalarTypeToUnsignedShort();


  // void SetOutputScalarTypeToChar ();this SetOutputScalarType VTK_CHAR 
/// <summary>
/// <para>Set what type of scalar data this source should generate.</para>
/// </summary>
  void SetOutputScalarTypeToChar();


  // void SetOutputScalarTypeToUnsignedChar ();this SetOutputScalarType VTK_UNSIGNED_CHAR 
  void SetOutputScalarTypeToUnsignedChar();


// Did not wrap:  vtkImageEllipsoidSource ();


// Did not wrap:  ~vtkImageEllipsoidSource ();


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkImageEllipsoidSource (const vtkImageEllipsoidSource &);


// Did not wrap:  void vtkImageEllipsoidSource 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageEllipsoidSource(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageEllipsoidSource(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageEllipsoidSource();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageEllipsoidSource();


};

} // end vtkImaging
