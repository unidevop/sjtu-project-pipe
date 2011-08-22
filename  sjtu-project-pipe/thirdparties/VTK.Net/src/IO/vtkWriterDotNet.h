#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkWriter : public vtkAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkWriter *NewInstance ();
  vtkWriter^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual int Write ();
/// <summary>
/// <para>Write data to output. Method executes subclasses WriteData() method, as  well as StartMethod() and EndMethod() methods. Returns 1 on success and 0 on failure.</para>
/// </summary>
  int Write();


  // void EncodeArrayName (char *resname, const char *name);
/// <summary>
/// <para>Encode the name so that the reader will not have problems. The resulting string is up to four time the size of the input  string.</para>
/// </summary>
  void EncodeArrayName(System::String^ resname, System::String^ name);


  // void SetInput (vtkDataObject *input);
/// <summary>
/// <para>Set/get the input to this writer.</para>
/// </summary>
  void SetInput(vtkDataObject^ input);


  // void SetInput (int index, vtkDataObject *input);
/// <summary>
/// <para>Set/get the input to this writer.</para>
/// </summary>
  void SetInput(int index, vtkDataObject^ input);


// Did not wrap:  vtkWriter ();


// Did not wrap:  ~vtkWriter ();


// Did not wrap:  virtual int ProcessRequest (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  virtual int RequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  virtual void WriteData () = 0;


// Did not wrap:  vtkWriter (const vtkWriter &);


// Did not wrap:  void vtkWriter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkWriter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkWriter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkWriter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkWriter();


};

} // end vtkIO
