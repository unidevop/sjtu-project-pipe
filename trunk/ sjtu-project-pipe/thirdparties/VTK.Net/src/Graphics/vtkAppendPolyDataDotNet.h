#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkAppendPolyData : public vtkPolyDataAlgorithm
{

public:
// Did not wrap:  static vtkAppendPolyData *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkAppendPolyData *NewInstance ();
  vtkAppendPolyData^ NewInstance();


  // vtkAppendPolyData *SafeDownCast (vtkObject* o);
  static vtkAppendPolyData^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetUserManagedInputs (int );
/// <summary>
/// <para>UserManagedInputs allows the user to set inputs by number instead of using the AddInput/RemoveInput functions. Calls to SetNumberOfInputs/SetInputByNumber should not be mixed with calls to AddInput/RemoveInput. By default, UserManagedInputs is false.</para>
/// </summary>
  void SetUserManagedInputs(int arg0);


  // int GetUserManagedInputs ();
/// <summary>
/// <para>UserManagedInputs allows the user to set inputs by number instead of using the AddInput/RemoveInput functions. Calls to SetNumberOfInputs/SetInputByNumber should not be mixed with calls to AddInput/RemoveInput. By default, UserManagedInputs is false.</para>
/// </summary>
  int GetUserManagedInputs();


  // void UserManagedInputsOn ();
/// <summary>
/// <para>UserManagedInputs allows the user to set inputs by number instead of using the AddInput/RemoveInput functions. Calls to SetNumberOfInputs/SetInputByNumber should not be mixed with calls to AddInput/RemoveInput. By default, UserManagedInputs is false.</para>
/// </summary>
  void UserManagedInputsOn();


  // void UserManagedInputsOff ();
/// <summary>
/// <para>UserManagedInputs allows the user to set inputs by number instead of using the AddInput/RemoveInput functions. Calls to SetNumberOfInputs/SetInputByNumber should not be mixed with calls to AddInput/RemoveInput. By default, UserManagedInputs is false.</para>
/// </summary>
  void UserManagedInputsOff();


  // void AddInput (vtkPolyData *);
/// <summary>
/// <para>Add a dataset to the list of data to append. Should not be used when UserManagedInputs is true, use SetInputByNumber instead.</para>
/// </summary>
  void AddInput(vtkPolyData^ arg0);


  // void RemoveInput (vtkPolyData *);
/// <summary>
/// <para>Remove a dataset from the list of data to append. Should not be used when UserManagedInputs is true, use SetInputByNumber (NULL) instead.</para>
/// </summary>
  void RemoveInput(vtkPolyData^ arg0);


  // void SetNumberOfInputs (int num);
/// <summary>
/// <para>Directly set(allocate) number of inputs, should only be used when UserManagedInputs is true.</para>
/// </summary>
  void SetNumberOfInputs(int num);


  // void SetInputByNumber (int num, vtkPolyData *input);
  void SetInputByNumber(int num, vtkPolyData^ input);


  // void SetParallelStreaming (int );
/// <summary>
/// <para>ParallelStreaming is for a particular application. It causes this filter to ask for a different piece from each of its inputs.  If all the inputs are the same, then the output of this append filter is the whole dataset pieced back together.  Duplicate points are create  along the seams.  The purpose of this feature is to get  data parallelism at a course scale.  Each of the inputs can be generated in a different process at the same time.</para>
/// </summary>
  void SetParallelStreaming(int arg0);


  // int GetParallelStreaming ();
/// <summary>
/// <para>ParallelStreaming is for a particular application. It causes this filter to ask for a different piece from each of its inputs.  If all the inputs are the same, then the output of this append filter is the whole dataset pieced back together.  Duplicate points are create  along the seams.  The purpose of this feature is to get  data parallelism at a course scale.  Each of the inputs can be generated in a different process at the same time.</para>
/// </summary>
  int GetParallelStreaming();


  // void ParallelStreamingOn ();
/// <summary>
/// <para>ParallelStreaming is for a particular application. It causes this filter to ask for a different piece from each of its inputs.  If all the inputs are the same, then the output of this append filter is the whole dataset pieced back together.  Duplicate points are create  along the seams.  The purpose of this feature is to get  data parallelism at a course scale.  Each of the inputs can be generated in a different process at the same time.</para>
/// </summary>
  void ParallelStreamingOn();


  // void ParallelStreamingOff ();
/// <summary>
/// <para>ParallelStreaming is for a particular application. It causes this filter to ask for a different piece from each of its inputs.  If all the inputs are the same, then the output of this append filter is the whole dataset pieced back together.  Duplicate points are create  along the seams.  The purpose of this feature is to get  data parallelism at a course scale.  Each of the inputs can be generated in a different process at the same time.</para>
/// </summary>
  void ParallelStreamingOff();


// Did not wrap:  vtkAppendPolyData ();


// Did not wrap:  ~vtkAppendPolyData ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestUpdateExtent (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillInputPortInformation (int , vtkInformation *);


// Did not wrap:  void AppendData (vtkDataArray *dest, vtkDataArray *src, vtkIdType offset);


// Did not wrap:  void AppendDifferentPoints (vtkDataArray *dest, vtkDataArray *src, vtkIdType offset);


// Did not wrap:  vtkIdType *AppendCells (vtkIdType *pDest, vtkCellArray *src, vtkIdType offset);


// Did not wrap:  void AddInput (vtkDataObject *);vtkErrorMacro 


// Did not wrap:  vtkAppendPolyData (const vtkAppendPolyData &);


// Did not wrap:  void vtkAppendPolyData 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkAppendPolyData(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkAppendPolyData(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkAppendPolyData();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkAppendPolyData();


};

} // end vtkGraphics
