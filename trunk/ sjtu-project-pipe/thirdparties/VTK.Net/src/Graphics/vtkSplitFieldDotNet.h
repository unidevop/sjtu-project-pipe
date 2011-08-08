#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkSplitField : public vtkDataSetAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkSplitField *NewInstance ();
  vtkSplitField^ NewInstance();


  // vtkSplitField *SafeDownCast (vtkObject* o);
  static vtkSplitField^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkSplitField *New ();


  // void SetInputField (int attributeType, int fieldLoc);
/// <summary>
/// <para>Use the  given attribute in the field data given by fieldLoc as input.</para>
/// </summary>
  void SetInputField(int attributeType, int fieldLoc);


  // void SetInputField (const char *name, int fieldLoc);
/// <summary>
/// <para>Use the array with given name in the field data given by fieldLoc as input.</para>
/// </summary>
  void SetInputField(System::String^ name, int fieldLoc);


  // void SetInputField (const char *name, const char *fieldLoc);
/// <summary>
/// <para>Helper method used by other language bindings. Allows the caller to specify arguments as strings instead of enums.</para>
/// </summary>
  void SetInputField(System::String^ name, System::String^ fieldLoc);


  // void Split (int component, const char *arrayName);
/// <summary>
/// <para>Create a new array with the given component.</para>
/// </summary>
  void Split(int component, System::String^ arrayName);


// Did not wrap:  vtkSplitField ();


// Did not wrap:  virtual ~vtkSplitField ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkDataArray *SplitArray (vtkDataArray *da, int component);


// Did not wrap:  Component *GetNextComponent (Component *op);return op Next 


// Did not wrap:  Component *GetFirst ();return this Head 


// Did not wrap:  void AddComponent (Component *op);


// Did not wrap:  Component *FindComponent (int index);


// Did not wrap:  void DeleteAllComponents ();


// Did not wrap:  void PrintComponent (Component *op, ostream &os, vtkIndent indent);


// Did not wrap:  void PrintAllComponents (ostream &os, vtkIndent indent);


// Did not wrap:  vtkSplitField (const vtkSplitField &);


// Did not wrap:  void vtkSplitField 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkSplitField(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkSplitField(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkSplitField();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkSplitField();


};

} // end vtkGraphics
