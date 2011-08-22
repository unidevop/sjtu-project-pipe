#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkShepardMethod : public vtkImageAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkShepardMethod *NewInstance ();
  vtkShepardMethod^ NewInstance();


  // vtkShepardMethod *SafeDownCast (vtkObject* o);
  static vtkShepardMethod^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkShepardMethod *New ();


  // double ComputeModelBounds (double origin[3], double ar[3]);
/// <summary>
/// <para>Compute ModelBounds from input geometry.</para>
/// </summary>
  double ComputeModelBounds(array<double>^ origin, array<double>^ ar);


  // int  *GetSampleDimensions ();
/// <summary>
/// <para>Specify i-j-k dimensions on which to sample input points.</para>
/// </summary>
  array<int>^ GetSampleDimensions();


  // void SetSampleDimensions (int i, int j, int k);
/// <summary>
/// <para>Set the i-j-k dimensions on which to sample the distance function.</para>
/// </summary>
  void SetSampleDimensions(int i, int j, int k);


  // void SetSampleDimensions (int dim[3]);
/// <summary>
/// <para>Set the i-j-k dimensions on which to sample the distance function.</para>
/// </summary>
  void SetSampleDimensions(array<int>^ dim);


  // void SetMaximumDistance (double );
/// <summary>
/// <para>Specify influence distance of each input point. This distance is a  fraction of the length of the diagonal of the sample space. Thus, values  of 1.0 will cause each input point to influence all points in the  structured point dataset. Values less than 1.0 can improve performance significantly.</para>
/// </summary>
  void SetMaximumDistance(double arg0);


  // double GetMaximumDistanceMinValue ();
/// <summary>
/// <para>Specify influence distance of each input point. This distance is a  fraction of the length of the diagonal of the sample space. Thus, values  of 1.0 will cause each input point to influence all points in the  structured point dataset. Values less than 1.0 can improve performance significantly.</para>
/// </summary>
  double GetMaximumDistanceMinValue();


  // double GetMaximumDistanceMaxValue ();
/// <summary>
/// <para>Specify influence distance of each input point. This distance is a  fraction of the length of the diagonal of the sample space. Thus, values  of 1.0 will cause each input point to influence all points in the  structured point dataset. Values less than 1.0 can improve performance significantly.</para>
/// </summary>
  double GetMaximumDistanceMaxValue();


  // double GetMaximumDistance ();
/// <summary>
/// <para>Specify influence distance of each input point. This distance is a  fraction of the length of the diagonal of the sample space. Thus, values  of 1.0 will cause each input point to influence all points in the  structured point dataset. Values less than 1.0 can improve performance significantly.</para>
/// </summary>
  double GetMaximumDistance();


  // void SetModelBounds (double , double , double , double , double , double );
/// <summary>
/// <para>Specify the position in space to perform the sampling.</para>
/// </summary>
  void SetModelBounds(double arg0, double arg1, double arg2, double arg3, double arg4, double arg5);


  // void SetModelBounds (double  a[6]);
/// <summary>
/// <para>Specify the position in space to perform the sampling.</para>
/// </summary>
  void SetModelBounds(array<double>^ a);


  // double  *GetModelBounds ();
/// <summary>
/// <para>Specify the position in space to perform the sampling.</para>
/// </summary>
  array<double>^ GetModelBounds();


  // void SetNullValue (double );
/// <summary>
/// <para>Set the Null value for output points not receiving a contribution from the input points.</para>
/// </summary>
  void SetNullValue(double arg0);


  // double GetNullValue ();
/// <summary>
/// <para>Set the Null value for output points not receiving a contribution from the input points.</para>
/// </summary>
  double GetNullValue();


// Did not wrap:  vtkShepardMethod ();


// Did not wrap:  ~vtkShepardMethod ();


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkShepardMethod (const vtkShepardMethod &);


// Did not wrap:  void vtkShepardMethod 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkShepardMethod(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkShepardMethod(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkShepardMethod();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkShepardMethod();


};

} // end vtkImaging
