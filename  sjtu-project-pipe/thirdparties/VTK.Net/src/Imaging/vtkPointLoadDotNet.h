#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkPointLoad : public vtkImageAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPointLoad *NewInstance ();
  vtkPointLoad^ NewInstance();


  // vtkPointLoad *SafeDownCast (vtkObject* o);
  static vtkPointLoad^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkPointLoad *New ();


  // void SetLoadValue (double );
/// <summary>
/// <para>Set/Get value of applied load.</para>
/// </summary>
  void SetLoadValue(double arg0);


  // double GetLoadValue ();
/// <summary>
/// <para>Set/Get value of applied load.</para>
/// </summary>
  double GetLoadValue();


  // void SetSampleDimensions (int i, int j, int k);
/// <summary>
/// <para>Specify the dimensions of the volume. A stress tensor will be computed for each point in the volume.</para>
/// </summary>
  void SetSampleDimensions(int i, int j, int k);


  // void SetSampleDimensions (int dim[3]);
/// <summary>
/// <para>Specify the dimensions of the volume. A stress tensor will be computed for each point in the volume.</para>
/// </summary>
  void SetSampleDimensions(array<int>^ dim);


  // int  *GetSampleDimensions ();
/// <summary>
/// <para>Specify the dimensions of the volume. A stress tensor will be computed for each point in the volume.</para>
/// </summary>
  array<int>^ GetSampleDimensions();


  // void SetModelBounds (double , double , double , double , double , double );
/// <summary>
/// <para>Specify the region in space over which the tensors are computed. The point load is assumed to be applied at top center of the volume.</para>
/// </summary>
  void SetModelBounds(double arg0, double arg1, double arg2, double arg3, double arg4, double arg5);


  // void SetModelBounds (double  a[6]);
/// <summary>
/// <para>Specify the region in space over which the tensors are computed. The point load is assumed to be applied at top center of the volume.</para>
/// </summary>
  void SetModelBounds(array<double>^ a);


  // double  *GetModelBounds ();
/// <summary>
/// <para>Specify the region in space over which the tensors are computed. The point load is assumed to be applied at top center of the volume.</para>
/// </summary>
  array<double>^ GetModelBounds();


  // void SetPoissonsRatio (double );
/// <summary>
/// <para>Set/Get Poisson's ratio.</para>
/// </summary>
  void SetPoissonsRatio(double arg0);


  // double GetPoissonsRatio ();
/// <summary>
/// <para>Set/Get Poisson's ratio.</para>
/// </summary>
  double GetPoissonsRatio();


  // void SetComputeEffectiveStress (int );
/// <summary>
/// <para>Turn on/off computation of effective stress scalar. These methods do  nothing. The effective stress is always computed.</para>
/// </summary>
  void SetComputeEffectiveStress(int arg0);


  // int GetComputeEffectiveStress ();return 
/// <summary>
/// <para>Turn on/off computation of effective stress scalar. These methods do  nothing. The effective stress is always computed.</para>
/// </summary>
  int GetComputeEffectiveStress();


  // void ComputeEffectiveStressOn ();
/// <summary>
/// <para>Turn on/off computation of effective stress scalar. These methods do  nothing. The effective stress is always computed.</para>
/// </summary>
  void ComputeEffectiveStressOn();


  // void ComputeEffectiveStressOff ();
/// <summary>
/// <para>Turn on/off computation of effective stress scalar. These methods do  nothing. The effective stress is always computed.</para>
/// </summary>
  void ComputeEffectiveStressOff();


// Did not wrap:  vtkPointLoad ();


// Did not wrap:  ~vtkPointLoad ();


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual void ExecuteData (vtkDataObject *);


// Did not wrap:  vtkPointLoad (const vtkPointLoad &);


// Did not wrap:  void vtkPointLoad 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPointLoad(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPointLoad(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPointLoad();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPointLoad();


};

} // end vtkImaging
