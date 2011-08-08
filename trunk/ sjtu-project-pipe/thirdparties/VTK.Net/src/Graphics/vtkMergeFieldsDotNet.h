#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkMergeFields : public vtkDataSetAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkMergeFields *NewInstance ();
  vtkMergeFields^ NewInstance();


  // vtkMergeFields *SafeDownCast (vtkObject* o);
  static vtkMergeFields^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkMergeFields *New ();


  // void SetOutputField (const char *name, int fieldLoc);
/// <summary>
/// <para>The output field will have the given name and it will be in fieldLoc (the input fields also have to be in fieldLoc).</para>
/// </summary>
  void SetOutputField(System::String^ name, int fieldLoc);


  // void SetOutputField (const char *name, const char *fieldLoc);
/// <summary>
/// <para>Helper method used by the other language bindings. Allows the caller to specify arguments as strings instead of enums.Returns an operation id  which can later be used to remove the operation.</para>
/// </summary>
  void SetOutputField(System::String^ name, System::String^ fieldLoc);


  // void Merge (int component, const char *arrayName, int sourceComp);
/// <summary>
/// <para>Add a component (arrayName,sourceComp) to the output field.</para>
/// </summary>
  void Merge(int component, System::String^ arrayName, int sourceComp);


  // void SetNumberOfComponents (int );
/// <summary>
/// <para>Set the number of the components in the output field. This has to be set before execution. Default value is 0.</para>
/// </summary>
  void SetNumberOfComponents(int arg0);


// Did not wrap:  vtkMergeFields ();


// Did not wrap:  virtual ~vtkMergeFields ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  int MergeArray (vtkDataArray *in, vtkDataArray *out, int inComp, int outComp);


// Did not wrap:  Component *GetNextComponent (Component *op);return op Next 


// Did not wrap:  Component *GetFirst ();return this Head 


// Did not wrap:  void AddComponent (Component *op);


// Did not wrap:  Component *FindComponent (int index);


// Did not wrap:  void DeleteAllComponents ();


// Did not wrap:  void PrintComponent (Component *op, ostream &os, vtkIndent indent);


// Did not wrap:  void PrintAllComponents (ostream &os, vtkIndent indent);


// Did not wrap:  vtkMergeFields (const vtkMergeFields &);


// Did not wrap:  void vtkMergeFields 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkMergeFields(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkMergeFields(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkMergeFields();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkMergeFields();


};

} // end vtkGraphics
