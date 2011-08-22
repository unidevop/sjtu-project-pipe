#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkRearrangeFields : public vtkDataSetAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkRearrangeFields *NewInstance ();
  vtkRearrangeFields^ NewInstance();


  // vtkRearrangeFields *SafeDownCast (vtkObject* o);
  static vtkRearrangeFields^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkRearrangeFields *New ();


  // int AddOperation (int operationType, int attributeType, int fromFieldLoc, int toFieldLoc);
/// <summary>
/// <para>Add an operation which copies an attribute's field (data array) from one field data to another. Returns an operation id which can later be used to remove the operation.</para>
/// </summary>
  int AddOperation(int operationType, int attributeType, int fromFieldLoc, int toFieldLoc);


  // int AddOperation (int operationType, const char *name, int fromFieldLoc, int toFieldLoc);
/// <summary>
/// <para>Add an operation which copies a field (data array) from one field  data to another. Returns an operation id which can later be used to remove the operation.</para>
/// </summary>
  int AddOperation(int operationType, System::String^ name, int fromFieldLoc, int toFieldLoc);


  // int AddOperation (const char *operationType, const char *attributeType, const char *fromFieldLoc, const char *toFieldLoc);
/// <summary>
/// <para>Helper method used by other language bindings. Allows the caller to specify arguments as strings instead of enums.Returns an operation id  which can later be used to remove the operation.</para>
/// </summary>
  int AddOperation(System::String^ operationType, System::String^ attributeType, System::String^ fromFieldLoc, System::String^ toFieldLoc);


  // int RemoveOperation (int operationId);
/// <summary>
/// <para>Remove an operation with the given id.</para>
/// </summary>
  int RemoveOperation(int operationId);


  // int RemoveOperation (int operationType, int attributeType, int fromFieldLoc, int toFieldLoc);
/// <summary>
/// <para>Remove an operation with the given signature. See AddOperation for details.</para>
/// </summary>
  int RemoveOperation(int operationType, int attributeType, int fromFieldLoc, int toFieldLoc);


  // int RemoveOperation (int operationType, const char *name, int fromFieldLoc, int toFieldLoc);
/// <summary>
/// <para>Remove an operation with the given signature. See AddOperation for details.</para>
/// </summary>
  int RemoveOperation(int operationType, System::String^ name, int fromFieldLoc, int toFieldLoc);


  // int RemoveOperation (const char *operationType, const char *attributeType, const char *fromFieldLoc, const char *toFieldLoc);
/// <summary>
/// <para>Remove an operation with the given signature. See AddOperation for details.</para>
/// </summary>
  int RemoveOperation(System::String^ operationType, System::String^ attributeType, System::String^ fromFieldLoc, System::String^ toFieldLoc);


  // void RemoveAllOperations ();this Modified this LastId this DeleteAllOperations 
  void RemoveAllOperations();


// Did not wrap:  vtkRearrangeFields ();


// Did not wrap:  virtual ~vtkRearrangeFields ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  Operation *GetNextOperation (Operation *op);return op Next 


// Did not wrap:  Operation *GetFirst ();return this Head 


// Did not wrap:  void AddOperation (Operation *op);


// Did not wrap:  void DeleteOperation (Operation *op, Operation *before);


// Did not wrap:  Operation *FindOperation (int id, Operation &before);


// Did not wrap:  Operation *FindOperation (const char *name, Operation &before);


// Did not wrap:  Operation *FindOperation (int operationType, const char *name, int fromFieldLoc, int toFieldLoc, Operation &before);


// Did not wrap:  Operation *FindOperation (int operationType, int attributeType, int fromFieldLoc, int toFieldLoc, Operation &before);


// Did not wrap:  int CompareOperationsByType (const Operation *op1, const Operation *op2);


// Did not wrap:  int CompareOperationsByName (const Operation *op1, const Operation *op2);


// Did not wrap:  void DeleteAllOperations ();


// Did not wrap:  void ApplyOperation (Operation *op, vtkDataSet *input, vtkDataSet *output);


// Did not wrap:  vtkFieldData *GetFieldDataFromLocation (vtkDataSet *ds, int fieldLoc);


// Did not wrap:  void PrintAllOperations (ostream &os, vtkIndent indent);


// Did not wrap:  void PrintOperation (Operation *op, ostream &os, vtkIndent indent);


// Did not wrap:  vtkRearrangeFields (const vtkRearrangeFields &);


// Did not wrap:  void vtkRearrangeFields 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkRearrangeFields(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkRearrangeFields(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkRearrangeFields();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkRearrangeFields();


};

} // end vtkGraphics
