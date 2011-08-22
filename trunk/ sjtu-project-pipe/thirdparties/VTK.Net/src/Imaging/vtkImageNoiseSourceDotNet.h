#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageNoiseSource : public vtkImageAlgorithm
{

public:
// Did not wrap:  static vtkImageNoiseSource *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageNoiseSource *NewInstance ();
  vtkImageNoiseSource^ NewInstance();


  // vtkImageNoiseSource *SafeDownCast (vtkObject* o);
  static vtkImageNoiseSource^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetMinimum (double );
/// <summary>
/// <para>Set/Get the minimum and maximum values for the generated noise.</para>
/// </summary>
  void SetMinimum(double arg0);


  // double GetMinimum ();
/// <summary>
/// <para>Set/Get the minimum and maximum values for the generated noise.</para>
/// </summary>
  double GetMinimum();


  // void SetMaximum (double );
/// <summary>
/// <para>Set/Get the minimum and maximum values for the generated noise.</para>
/// </summary>
  void SetMaximum(double arg0);


  // double GetMaximum ();
/// <summary>
/// <para>Set/Get the minimum and maximum values for the generated noise.</para>
/// </summary>
  double GetMaximum();


  // void SetWholeExtent (int xMinx, int xMax, int yMin, int yMax, int zMin, int zMax);
/// <summary>
/// <para>Set how large of an image to generate.</para>
/// </summary>
  void SetWholeExtent(int xMinx, int xMax, int yMin, int yMax, int zMin, int zMax);


// Did not wrap:  vtkImageNoiseSource ();


// Did not wrap:  ~vtkImageNoiseSource ();


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual void ExecuteData (vtkDataObject *data);


// Did not wrap:  vtkImageNoiseSource (const vtkImageNoiseSource &);


// Did not wrap:  void vtkImageNoiseSource 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageNoiseSource(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageNoiseSource(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageNoiseSource();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageNoiseSource();


};

} // end vtkImaging
