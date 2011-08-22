#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkExtractDataOverTime : public vtkPointSetAlgorithm
{

public:
// Did not wrap:  static vtkExtractDataOverTime *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkExtractDataOverTime *NewInstance ();
  vtkExtractDataOverTime^ NewInstance();


  // vtkExtractDataOverTime *SafeDownCast (vtkObject* o);
  static vtkExtractDataOverTime^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetPointIndex (int );
/// <summary>
/// <para>Index of point to extract at each time step</para>
/// </summary>
  void SetPointIndex(int arg0);


  // int GetPointIndex ();
/// <summary>
/// <para>Index of point to extract at each time step</para>
/// </summary>
  int GetPointIndex();


  // int GetNumberOfTimeSteps ();
/// <summary>
/// <para>Get the number of time steps</para>
/// </summary>
  int GetNumberOfTimeSteps();


// Did not wrap:  vtkExtractDataOverTime ();


// Did not wrap:  ~vtkExtractDataOverTime ();


// Did not wrap:  int RequestInformation (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  int ProcessRequest (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  int AllocateOutputData (vtkPointSet *input, vtkPointSet *output);


// Did not wrap:  vtkExtractDataOverTime (const vtkExtractDataOverTime &);


// Did not wrap:  void vtkExtractDataOverTime 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkExtractDataOverTime(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkExtractDataOverTime(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkExtractDataOverTime();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkExtractDataOverTime();


};

} // end vtkGraphics
