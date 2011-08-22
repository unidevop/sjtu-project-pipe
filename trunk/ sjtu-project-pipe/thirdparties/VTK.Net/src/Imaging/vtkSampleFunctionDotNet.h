#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkSampleFunction : public vtkImageAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkSampleFunction *NewInstance ();
  vtkSampleFunction^ NewInstance();


  // vtkSampleFunction *SafeDownCast (vtkObject* o);
  static vtkSampleFunction^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkSampleFunction *New ();


  // virtual void SetImplicitFunction (vtkImplicitFunction *);
/// <summary>
/// <para>Specify the implicit function to use to generate data.</para>
/// </summary>
  void SetImplicitFunction(vtkImplicitFunction^ arg0);


  // vtkImplicitFunction *GetImplicitFunction ();
/// <summary>
/// <para>Specify the implicit function to use to generate data.</para>
/// </summary>
  vtkImplicitFunction^ GetImplicitFunction();


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


  // void SetOutputScalarTypeToDouble ();this SetOutputScalarType VTK_DOUBLE 
/// <summary>
/// <para>Set what type of scalar data this source should generate.</para>
/// </summary>
  void SetOutputScalarTypeToDouble();


  // void SetOutputScalarTypeToFloat ();this SetOutputScalarType VTK_FLOAT 
/// <summary>
/// <para>Set what type of scalar data this source should generate.</para>
/// </summary>
  void SetOutputScalarTypeToFloat();


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
/// <summary>
/// <para>Control the type of the scalars object by explicitly providing a scalar object.  THIS IS DEPRECATED, although it still works!!! Please use SetOutputScalarType instead.</para>
/// </summary>
  void SetOutputScalarTypeToUnsignedChar();


  // virtual void SetScalars (vtkDataArray *da);
/// <summary>
/// <para>Control the type of the scalars object by explicitly providing a scalar object.  THIS IS DEPRECATED, although it still works!!! Please use SetOutputScalarType instead.</para>
/// </summary>
  void SetScalars(vtkDataArray^ da);


  // void SetSampleDimensions (int i, int j, int k);
/// <summary>
/// <para>Specify the dimensions of the data on which to sample.</para>
/// </summary>
  void SetSampleDimensions(int i, int j, int k);


  // void SetSampleDimensions (int dim[3]);
/// <summary>
/// <para>Specify the dimensions of the data on which to sample.</para>
/// </summary>
  void SetSampleDimensions(array<int>^ dim);


  // int  *GetSampleDimensions ();
/// <summary>
/// <para>Specify the dimensions of the data on which to sample.</para>
/// </summary>
  array<int>^ GetSampleDimensions();


  // void SetModelBounds (double , double , double , double , double , double );
/// <summary>
/// <para>Specify the region in space over which the sampling occurs. The bounds is specified as (xMin,xMax, yMin,yMax, zMin,zMax).</para>
/// </summary>
  void SetModelBounds(double arg0, double arg1, double arg2, double arg3, double arg4, double arg5);


  // void SetModelBounds (double  a[6]);
/// <summary>
/// <para>Specify the region in space over which the sampling occurs. The bounds is specified as (xMin,xMax, yMin,yMax, zMin,zMax).</para>
/// </summary>
  void SetModelBounds(array<double>^ a);


  // double  *GetModelBounds ();
/// <summary>
/// <para>Specify the region in space over which the sampling occurs. The bounds is specified as (xMin,xMax, yMin,yMax, zMin,zMax).</para>
/// </summary>
  array<double>^ GetModelBounds();


  // void SetCapping (int );
/// <summary>
/// <para>Turn on/off capping. If capping is on, then the outer boundaries of the structured point set are set to cap value. This can be used to insure surfaces are closed.</para>
/// </summary>
  void SetCapping(int arg0);


  // int GetCapping ();
/// <summary>
/// <para>Turn on/off capping. If capping is on, then the outer boundaries of the structured point set are set to cap value. This can be used to insure surfaces are closed.</para>
/// </summary>
  int GetCapping();


  // void CappingOn ();
/// <summary>
/// <para>Turn on/off capping. If capping is on, then the outer boundaries of the structured point set are set to cap value. This can be used to insure surfaces are closed.</para>
/// </summary>
  void CappingOn();


  // void CappingOff ();
/// <summary>
/// <para>Turn on/off capping. If capping is on, then the outer boundaries of the structured point set are set to cap value. This can be used to insure surfaces are closed.</para>
/// </summary>
  void CappingOff();


  // void SetCapValue (double );
/// <summary>
/// <para>Set the cap value.</para>
/// </summary>
  void SetCapValue(double arg0);


  // double GetCapValue ();
/// <summary>
/// <para>Set the cap value.</para>
/// </summary>
  double GetCapValue();


  // void SetComputeNormals (int );
/// <summary>
/// <para>Turn on/off the computation of normals.</para>
/// </summary>
  void SetComputeNormals(int arg0);


  // int GetComputeNormals ();
/// <summary>
/// <para>Turn on/off the computation of normals.</para>
/// </summary>
  int GetComputeNormals();


  // void ComputeNormalsOn ();
/// <summary>
/// <para>Turn on/off the computation of normals.</para>
/// </summary>
  void ComputeNormalsOn();


  // void ComputeNormalsOff ();
/// <summary>
/// <para>Turn on/off the computation of normals.</para>
/// </summary>
  void ComputeNormalsOff();


  // unsigned long GetMTime ();
/// <summary>
/// <para>Return the MTime also considering the implicit function.</para>
/// </summary>
  unsigned long GetMTime();


// Did not wrap:  vtkSampleFunction ();


// Did not wrap:  ~vtkSampleFunction ();


// Did not wrap:  virtual void ReportReferences (vtkGarbageCollector *);


// Did not wrap:  void ExecuteData (vtkDataObject *);


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  void Cap (vtkDataArray *s);


// Did not wrap:  vtkSampleFunction (const vtkSampleFunction &);


// Did not wrap:  void vtkSampleFunction 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkSampleFunction(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkSampleFunction(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkSampleFunction();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkSampleFunction();


};

} // end vtkImaging
