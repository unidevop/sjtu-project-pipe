#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkImageConnector;

public ref class vtkImageSeedConnectivity : public vtkImageAlgorithm
{

public:
// Did not wrap:  static vtkImageSeedConnectivity *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageSeedConnectivity *NewInstance ();
  vtkImageSeedConnectivity^ NewInstance();


  // vtkImageSeedConnectivity *SafeDownCast (vtkObject* o);
  static vtkImageSeedConnectivity^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void RemoveAllSeeds ();
/// <summary>
/// <para>Methods for manipulating the seed pixels.</para>
/// </summary>
  void RemoveAllSeeds();


  // void AddSeed (int num, int *index);
/// <summary>
/// <para>Methods for manipulating the seed pixels.</para>
/// </summary>
  void AddSeed(int num, array<int>^ index);


  // void AddSeed (int i0, int i1, int i2);
/// <summary>
/// <para>Methods for manipulating the seed pixels.</para>
/// </summary>
  void AddSeed(int i0, int i1, int i2);


  // void AddSeed (int i0, int i1);
/// <summary>
/// <para>Methods for manipulating the seed pixels.</para>
/// </summary>
  void AddSeed(int i0, int i1);


  // void SetInputConnectValue (int );
/// <summary>
/// <para>Set/Get what value is considered as connecting pixels.</para>
/// </summary>
  void SetInputConnectValue(int arg0);


  // int GetInputConnectValue ();
/// <summary>
/// <para>Set/Get what value is considered as connecting pixels.</para>
/// </summary>
  int GetInputConnectValue();


  // void SetOutputConnectedValue (int );
/// <summary>
/// <para>Set/Get the value to set connected pixels to.</para>
/// </summary>
  void SetOutputConnectedValue(int arg0);


  // int GetOutputConnectedValue ();
/// <summary>
/// <para>Set/Get the value to set connected pixels to.</para>
/// </summary>
  int GetOutputConnectedValue();


  // void SetOutputUnconnectedValue (int );
/// <summary>
/// <para>Set/Get the value to set unconnected pixels to.</para>
/// </summary>
  void SetOutputUnconnectedValue(int arg0);


  // int GetOutputUnconnectedValue ();
/// <summary>
/// <para>Set/Get the value to set unconnected pixels to.</para>
/// </summary>
  int GetOutputUnconnectedValue();


  // vtkImageConnector *GetConnector ();
/// <summary>
/// <para>Get the vtkImageCOnnector used by this filter.</para>
/// </summary>
  vtkImageConnector^ GetConnector();


  // void SetDimensionality (int );
/// <summary>
/// <para>Set the number of axes to use in connectivity.</para>
/// </summary>
  void SetDimensionality(int arg0);


  // int GetDimensionality ();
/// <summary>
/// <para>Set the number of axes to use in connectivity.</para>
/// </summary>
  int GetDimensionality();


// Did not wrap:  vtkImageSeedConnectivity ();


// Did not wrap:  ~vtkImageSeedConnectivity ();


// Did not wrap:  virtual int RequestUpdateExtent (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkImageSeedConnectivity (const vtkImageSeedConnectivity &);


// Did not wrap:  void vtkImageSeedConnectivity 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageSeedConnectivity(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageSeedConnectivity(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageSeedConnectivity();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageSeedConnectivity();


};

} // end vtkImaging
