#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkLandmarkTransform;

public ref class vtkProcrustesAlignmentFilter : public vtkPointSetAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkProcrustesAlignmentFilter *NewInstance ();
  vtkProcrustesAlignmentFilter^ NewInstance();


  // vtkProcrustesAlignmentFilter *SafeDownCast (vtkObject* o);
  static vtkProcrustesAlignmentFilter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkProcrustesAlignmentFilter *New ();


  // vtkLandmarkTransform *GetLandmarkTransform ();
/// <summary>
/// <para>Get the internal landmark transform. Use it to constrain the number of degrees of freedom of the alignment (i.e. rigid body, similarity, etc.). The default is a similarity alignment.</para>
/// </summary>
  vtkLandmarkTransform^ GetLandmarkTransform();


  // vtkPoints *GetMeanPoints ();
/// <summary>
/// <para>Get the estimated mean point cloud</para>
/// </summary>
  vtkPoints^ GetMeanPoints();


  // void SetNumberOfInputs (int n);
/// <summary>
/// <para>Specify how many pointsets are going to be given as input.</para>
/// </summary>
  void SetNumberOfInputs(int n);


  // void SetInput (int idx, vtkPointSet *p);
/// <summary>
/// <para>Specify the input pointset with index idx. Call SetNumberOfInputs before calling this function.</para>
/// </summary>
  void SetInput(int idx, vtkPointSet^ p);


  // vtkPointSet *GetInput (int idx);
/// <summary>
/// <para>Retrieve the input point set with index idx (usually only for pipeline tracing).</para>
/// </summary>
  vtkPointSet^ GetInput(int idx);


// Did not wrap:  vtkProcrustesAlignmentFilter ();


// Did not wrap:  ~vtkProcrustesAlignmentFilter ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkProcrustesAlignmentFilter (const vtkProcrustesAlignmentFilter &);


// Did not wrap:  void vtkProcrustesAlignmentFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkProcrustesAlignmentFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkProcrustesAlignmentFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkProcrustesAlignmentFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkProcrustesAlignmentFilter();


};

} // end vtkHybrid
