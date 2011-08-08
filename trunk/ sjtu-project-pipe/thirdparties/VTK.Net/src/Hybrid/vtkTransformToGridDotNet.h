#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkTransformToGrid : public vtkAlgorithm
{

public:
// Did not wrap:  static vtkTransformToGrid *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkTransformToGrid *NewInstance ();
  vtkTransformToGrid^ NewInstance();


  // vtkTransformToGrid *SafeDownCast (vtkObject* o);
  static vtkTransformToGrid^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void SetInput (vtkAbstractTransform *);
/// <summary>
/// <para>Set/Get the transform which will be converted into a grid.</para>
/// </summary>
  void SetInput(vtkAbstractTransform^ arg0);


  // vtkAbstractTransform *GetInput ();
/// <summary>
/// <para>Set/Get the transform which will be converted into a grid.</para>
/// </summary>
  vtkAbstractTransform^ GetInput();


  // void SetGridExtent (int , int , int , int , int , int );
/// <summary>
/// <para>Get/Set the extent of the grid.</para>
/// </summary>
  void SetGridExtent(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5);


  // void SetGridExtent (int  a[6]);
/// <summary>
/// <para>Get/Set the extent of the grid.</para>
/// </summary>
  void SetGridExtent(array<int>^ a);


  // int  *GetGridExtent ();
/// <summary>
/// <para>Get/Set the extent of the grid.</para>
/// </summary>
  array<int>^ GetGridExtent();


  // void SetGridOrigin (double , double , double );
/// <summary>
/// <para>Get/Set the origin of the grid.</para>
/// </summary>
  void SetGridOrigin(double arg0, double arg1, double arg2);


  // void SetGridOrigin (double  a[3]);
/// <summary>
/// <para>Get/Set the origin of the grid.</para>
/// </summary>
  void SetGridOrigin(array<double>^ a);


  // double  *GetGridOrigin ();
/// <summary>
/// <para>Get/Set the origin of the grid.</para>
/// </summary>
  array<double>^ GetGridOrigin();


  // void SetGridSpacing (double , double , double );
/// <summary>
/// <para>Get/Set the spacing between samples in the grid.</para>
/// </summary>
  void SetGridSpacing(double arg0, double arg1, double arg2);


  // void SetGridSpacing (double  a[3]);
/// <summary>
/// <para>Get/Set the spacing between samples in the grid.</para>
/// </summary>
  void SetGridSpacing(array<double>^ a);


  // double  *GetGridSpacing ();
/// <summary>
/// <para>Get/Set the spacing between samples in the grid.</para>
/// </summary>
  array<double>^ GetGridSpacing();


  // void SetGridScalarType (int );
/// <summary>
/// <para>Get/Set the scalar type of the grid.  The default is double.</para>
/// </summary>
  void SetGridScalarType(int arg0);


  // int GetGridScalarType ();
/// <summary>
/// <para>Get/Set the scalar type of the grid.  The default is double.</para>
/// </summary>
  int GetGridScalarType();


  // void SetGridScalarTypeToFloat ();this SetGridScalarType VTK_DOUBLE 
/// <summary>
/// <para>Get/Set the scalar type of the grid.  The default is double.</para>
/// </summary>
  void SetGridScalarTypeToFloat();


  // void SetGridScalarTypeToShort ();this SetGridScalarType VTK_SHORT 
/// <summary>
/// <para>Get/Set the scalar type of the grid.  The default is double.</para>
/// </summary>
  void SetGridScalarTypeToShort();


  // void SetGridScalarTypeToUnsignedShort ();this SetGridScalarType VTK_UNSIGNED_SHORT 
/// <summary>
/// <para>Get/Set the scalar type of the grid.  The default is double.</para>
/// </summary>
  void SetGridScalarTypeToUnsignedShort();


  // void SetGridScalarTypeToUnsignedChar ();this SetGridScalarType VTK_UNSIGNED_CHAR 
/// <summary>
/// <para>Get/Set the scalar type of the grid.  The default is double.</para>
/// </summary>
  void SetGridScalarTypeToUnsignedChar();


  // void SetGridScalarTypeToChar ();this SetGridScalarType VTK_CHAR 
/// <summary>
/// <para>Get/Set the scalar type of the grid.  The default is double.</para>
/// </summary>
  void SetGridScalarTypeToChar();


  // double GetDisplacementScale ();this UpdateShiftScale return this DisplacementScale 
/// <summary>
/// <para>Get the scale and shift to convert integer grid elements into real values:  dx = scale*di + shift.  If the grid is of double type, then scale = 1 and shift = 0.</para>
/// </summary>
  double GetDisplacementScale();


  // double GetDisplacementShift ();this UpdateShiftScale return this DisplacementShift 
/// <summary>
/// <para>Get the scale and shift to convert integer grid elements into real values:  dx = scale*di + shift.  If the grid is of double type, then scale = 1 and shift = 0.</para>
/// </summary>
  double GetDisplacementShift();


  // vtkImageData *GetOutput ();
/// <summary>
/// <para>Get the output data object for a port on this algorithm.</para>
/// </summary>
  vtkImageData^ GetOutput();


// Did not wrap:  virtual int ProcessRequest (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkTransformToGrid ();


// Did not wrap:  ~vtkTransformToGrid ();


// Did not wrap:  void RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  void RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  void UpdateShiftScale ();


// Did not wrap:  unsigned long GetMTime ();


// Did not wrap:  virtual int FillOutputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkTransformToGrid (const vtkTransformToGrid &);


// Did not wrap:  void vtkTransformToGrid 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkTransformToGrid(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkTransformToGrid(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkTransformToGrid();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkTransformToGrid();


};

} // end vtkHybrid
