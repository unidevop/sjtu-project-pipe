#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageGridSource : public vtkImageAlgorithm
{

public:
// Did not wrap:  static vtkImageGridSource *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageGridSource *NewInstance ();
  vtkImageGridSource^ NewInstance();


  // vtkImageGridSource *SafeDownCast (vtkObject* o);
  static vtkImageGridSource^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetGridSpacing (int , int , int );
/// <summary>
/// <para>Set/Get the grid spacing in pixel units.  Default (10,10,0). A value of zero means no grid.</para>
/// </summary>
  void SetGridSpacing(int arg0, int arg1, int arg2);


  // void SetGridSpacing (int  a[3]);
/// <summary>
/// <para>Set/Get the grid spacing in pixel units.  Default (10,10,0). A value of zero means no grid.</para>
/// </summary>
  void SetGridSpacing(array<int>^ a);


  // int  *GetGridSpacing ();
/// <summary>
/// <para>Set/Get the grid spacing in pixel units.  Default (10,10,0). A value of zero means no grid.</para>
/// </summary>
  array<int>^ GetGridSpacing();


  // void SetGridOrigin (int , int , int );
/// <summary>
/// <para>Set/Get the grid origin, in ijk integer values.  Default (0,0,0).</para>
/// </summary>
  void SetGridOrigin(int arg0, int arg1, int arg2);


  // void SetGridOrigin (int  a[3]);
/// <summary>
/// <para>Set/Get the grid origin, in ijk integer values.  Default (0,0,0).</para>
/// </summary>
  void SetGridOrigin(array<int>^ a);


  // int  *GetGridOrigin ();
/// <summary>
/// <para>Set/Get the grid origin, in ijk integer values.  Default (0,0,0).</para>
/// </summary>
  array<int>^ GetGridOrigin();


  // void SetLineValue (double );
/// <summary>
/// <para>Set the grey level of the lines. Default 1.0.</para>
/// </summary>
  void SetLineValue(double arg0);


  // double GetLineValue ();
/// <summary>
/// <para>Set the grey level of the lines. Default 1.0.</para>
/// </summary>
  double GetLineValue();


  // void SetFillValue (double );
/// <summary>
/// <para>Set the grey level of the fill. Default 0.0.</para>
/// </summary>
  void SetFillValue(double arg0);


  // double GetFillValue ();
/// <summary>
/// <para>Set the grey level of the fill. Default 0.0.</para>
/// </summary>
  double GetFillValue();


  // void SetDataScalarType (int );
/// <summary>
/// <para>Set/Get the data type of pixels in the imported data. As a convenience, the OutputScalarType is set to the same value.</para>
/// </summary>
  void SetDataScalarType(int arg0);


  // void SetDataScalarTypeToDouble ();this SetDataScalarType VTK_DOUBLE 
/// <summary>
/// <para>Set/Get the data type of pixels in the imported data. As a convenience, the OutputScalarType is set to the same value.</para>
/// </summary>
  void SetDataScalarTypeToDouble();


  // void SetDataScalarTypeToInt ();this SetDataScalarType VTK_INT 
/// <summary>
/// <para>Set/Get the data type of pixels in the imported data. As a convenience, the OutputScalarType is set to the same value.</para>
/// </summary>
  void SetDataScalarTypeToInt();


  // void SetDataScalarTypeToShort ();this SetDataScalarType VTK_SHORT 
/// <summary>
/// <para>Set/Get the data type of pixels in the imported data. As a convenience, the OutputScalarType is set to the same value.</para>
/// </summary>
  void SetDataScalarTypeToShort();


  // void SetDataScalarTypeToUnsignedShort ();this SetDataScalarType VTK_UNSIGNED_SHORT 
/// <summary>
/// <para>Set/Get the data type of pixels in the imported data. As a convenience, the OutputScalarType is set to the same value.</para>
/// </summary>
  void SetDataScalarTypeToUnsignedShort();


  // void SetDataScalarTypeToUnsignedChar ();this SetDataScalarType VTK_UNSIGNED_CHAR 
/// <summary>
/// <para>Set/Get the data type of pixels in the imported data. As a convenience, the OutputScalarType is set to the same value.</para>
/// </summary>
  void SetDataScalarTypeToUnsignedChar();


  // int GetDataScalarType ();
/// <summary>
/// <para>Set/Get the data type of pixels in the imported data. As a convenience, the OutputScalarType is set to the same value.</para>
/// </summary>
  int GetDataScalarType();


  // const char *GetDataScalarTypeAsString ();return vtkImageScalarTypeNameMacro this DataScalarType 
/// <summary>
/// <para>Set/Get the extent of the whole output image, Default: (0,255,0,255,0,0)</para>
/// </summary>
  System::String^ GetDataScalarTypeAsString();


  // void SetDataExtent (int , int , int , int , int , int );
/// <summary>
/// <para>Set/Get the extent of the whole output image, Default: (0,255,0,255,0,0)</para>
/// </summary>
  void SetDataExtent(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5);


  // void SetDataExtent (int  a[6]);
/// <summary>
/// <para>Set/Get the extent of the whole output image, Default: (0,255,0,255,0,0)</para>
/// </summary>
  void SetDataExtent(array<int>^ a);


  // int  *GetDataExtent ();
/// <summary>
/// <para>Set/Get the extent of the whole output image, Default: (0,255,0,255,0,0)</para>
/// </summary>
  array<int>^ GetDataExtent();


  // void SetDataSpacing (double , double , double );
/// <summary>
/// <para>Set/Get the pixel spacing.</para>
/// </summary>
  void SetDataSpacing(double arg0, double arg1, double arg2);


  // void SetDataSpacing (double  a[3]);
/// <summary>
/// <para>Set/Get the pixel spacing.</para>
/// </summary>
  void SetDataSpacing(array<double>^ a);


  // double  *GetDataSpacing ();
/// <summary>
/// <para>Set/Get the pixel spacing.</para>
/// </summary>
  array<double>^ GetDataSpacing();


  // void SetDataOrigin (double , double , double );
/// <summary>
/// <para>Set/Get the origin of the data.</para>
/// </summary>
  void SetDataOrigin(double arg0, double arg1, double arg2);


  // void SetDataOrigin (double  a[3]);
/// <summary>
/// <para>Set/Get the origin of the data.</para>
/// </summary>
  void SetDataOrigin(array<double>^ a);


  // double  *GetDataOrigin ();
/// <summary>
/// <para>Set/Get the origin of the data.</para>
/// </summary>
  array<double>^ GetDataOrigin();


// Did not wrap:  vtkImageGridSource ();


// Did not wrap:  ~vtkImageGridSource ();


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual void ExecuteData (vtkDataObject *data);


// Did not wrap:  vtkImageGridSource (const vtkImageGridSource &);


// Did not wrap:  void vtkImageGridSource 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageGridSource(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageGridSource(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageGridSource();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageGridSource();


};

} // end vtkImaging
