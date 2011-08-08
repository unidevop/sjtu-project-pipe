#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkImageDilateErode3D;

public ref class vtkImageOpenClose3D : public vtkImageAlgorithm
{

public:
// Did not wrap:  static vtkImageOpenClose3D *New ();


  // const char *GetClassName ();
/// <summary>
/// <para>Default open value is 0, and default close value is 255.</para>
/// </summary>
  System::String^ GetClassName();


  // int IsA (const char *name);
/// <summary>
/// <para>Default open value is 0, and default close value is 255.</para>
/// </summary>
  int IsA(System::String^ name);


  // vtkImageOpenClose3D *NewInstance ();
/// <summary>
/// <para>Default open value is 0, and default close value is 255.</para>
/// </summary>
  vtkImageOpenClose3D^ NewInstance();


  // vtkImageOpenClose3D *SafeDownCast (vtkObject* o);
/// <summary>
/// <para>Default open value is 0, and default close value is 255.</para>
/// </summary>
  static vtkImageOpenClose3D^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // unsigned long GetMTime ();
/// <summary>
/// <para>This method considers the sub filters MTimes when computing this objects modified time.</para>
/// </summary>
  unsigned long GetMTime();


  // void DebugOn ();
/// <summary>
/// <para>Turn debugging output on. (in sub filters also)</para>
/// </summary>
  void DebugOn();


  // void DebugOff ();
/// <summary>
/// <para>Turn debugging output on. (in sub filters also)</para>
/// </summary>
  void DebugOff();


  // void Modified ();
/// <summary>
/// <para>Pass modified message to sub filters.</para>
/// </summary>
  void Modified();


  // void SetKernelSize (int size0, int size1, int size2);
/// <summary>
/// <para>Selects the size of gaps or objects removed.</para>
/// </summary>
  void SetKernelSize(int size0, int size1, int size2);


  // void SetOpenValue (double value);
/// <summary>
/// <para>Determines the value that will opened.   Open value is first eroded, and then dilated.</para>
/// </summary>
  void SetOpenValue(double value);


  // double GetOpenValue ();
/// <summary>
/// <para>Determines the value that will opened.   Open value is first eroded, and then dilated.</para>
/// </summary>
  double GetOpenValue();


  // void SetCloseValue (double value);
/// <summary>
/// <para>Determines the value that will closed. Close value is first dilated, and then eroded</para>
/// </summary>
  void SetCloseValue(double value);


  // double GetCloseValue ();
/// <summary>
/// <para>Determines the value that will closed. Close value is first dilated, and then eroded</para>
/// </summary>
  double GetCloseValue();


  // vtkImageDilateErode3D *GetFilter0 ();
/// <summary>
/// <para>Needed for Progress functions</para>
/// </summary>
  vtkImageDilateErode3D^ GetFilter0();


  // vtkImageDilateErode3D *GetFilter1 ();
/// <summary>
/// <para>Needed for Progress functions</para>
/// </summary>
  vtkImageDilateErode3D^ GetFilter1();


// Did not wrap:  virtual int ProcessRequest (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int ComputePipelineMTime (vtkInformation *request, vtkInformationVector *inInfoVec, vtkInformationVector *outInfoVec, int requestFromOutputPort, unsigned long *mtime);


// Did not wrap:  vtkImageOpenClose3D ();


// Did not wrap:  ~vtkImageOpenClose3D ();


// Did not wrap:  virtual void ReportReferences (vtkGarbageCollector *);


// Did not wrap:  vtkImageOpenClose3D (const vtkImageOpenClose3D &);


// Did not wrap:  void vtkImageOpenClose3D 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageOpenClose3D(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageOpenClose3D(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageOpenClose3D();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageOpenClose3D();


};

} // end vtkImaging
