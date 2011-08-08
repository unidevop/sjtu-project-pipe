#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkExtractVectorComponents : public vtkDataSetAlgorithm
{

public:
// Did not wrap:  static vtkExtractVectorComponents *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkExtractVectorComponents *NewInstance ();
  vtkExtractVectorComponents^ NewInstance();


  // vtkExtractVectorComponents *SafeDownCast (vtkObject* o);
  static vtkExtractVectorComponents^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void SetInput (vtkDataSet *input);
/// <summary>
/// <para>Specify the input data or filter.</para>
/// </summary>
  void SetInput(vtkDataSet^ input);


  // vtkDataSet *GetVxComponent ();
/// <summary>
/// <para>Get the output dataset representing velocity x-component. If output is NULL then input hasn't been set, which is necessary for abstract objects. (Note: this method returns the same information as the GetOutput() method with an index of 0.)</para>
/// </summary>
  vtkDataSet^ GetVxComponent();


  // vtkDataSet *GetVyComponent ();
/// <summary>
/// <para>Get the output dataset representing velocity y-component. If output is NULL then input hasn't been set, which is necessary for abstract objects. (Note: this method returns the same information as the GetOutput() method with an index of 1.) Note that if ExtractToFieldData is true, this output will be empty.</para>
/// </summary>
  vtkDataSet^ GetVyComponent();


  // vtkDataSet *GetVzComponent ();
/// <summary>
/// <para>Get the output dataset representing velocity z-component. If output is NULL then input hasn't been set, which is necessary for abstract objects. (Note: this method returns the same information as the GetOutput() method with an index of 2.) Note that if ExtractToFieldData is true, this output will be empty.</para>
/// </summary>
  vtkDataSet^ GetVzComponent();


  // void SetExtractToFieldData (int );
/// <summary>
/// <para>Determines whether the vector components will be put in separate outputs or in the first output's field data</para>
/// </summary>
  void SetExtractToFieldData(int arg0);


  // int GetExtractToFieldData ();
/// <summary>
/// <para>Determines whether the vector components will be put in separate outputs or in the first output's field data</para>
/// </summary>
  int GetExtractToFieldData();


  // void ExtractToFieldDataOn ();
/// <summary>
/// <para>Determines whether the vector components will be put in separate outputs or in the first output's field data</para>
/// </summary>
  void ExtractToFieldDataOn();


  // void ExtractToFieldDataOff ();
/// <summary>
/// <para>Determines whether the vector components will be put in separate outputs or in the first output's field data</para>
/// </summary>
  void ExtractToFieldDataOff();


// Did not wrap:  vtkExtractVectorComponents ();


// Did not wrap:  ~vtkExtractVectorComponents ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkExtractVectorComponents (const vtkExtractVectorComponents &);


// Did not wrap:  void vtkExtractVectorComponents 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkExtractVectorComponents(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkExtractVectorComponents(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkExtractVectorComponents();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkExtractVectorComponents();


};

} // end vtkGraphics
