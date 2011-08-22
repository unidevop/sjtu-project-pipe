#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkDataSet;

public ref class vtkScalarTree : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkScalarTree *NewInstance ();
  vtkScalarTree^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void SetDataSet (vtkDataSet *);
/// <summary>
/// <para>Build the tree from the points/cells defining this dataset.</para>
/// </summary>
  void SetDataSet(vtkDataSet^ arg0);


  // vtkDataSet *GetDataSet ();
/// <summary>
/// <para>Build the tree from the points/cells defining this dataset.</para>
/// </summary>
  vtkDataSet^ GetDataSet();


  // virtual void BuildTree () = 0;
/// <summary>
/// <para>Construct the scalar tree from the dataset provided. Checks build times and modified time from input and reconstructs the tree if necessary.</para>
/// </summary>
  void BuildTree();


  // virtual void Initialize () = 0;
/// <summary>
/// <para>Initialize locator. Frees memory and resets object as appropriate.</para>
/// </summary>
  void Initialize();


  // virtual void InitTraversal (double scalarValue) = 0;
/// <summary>
/// <para>Begin to traverse the cells based on a scalar value. Returned cells will have scalar values that span the scalar value specified.</para>
/// </summary>
  void InitTraversal(double scalarValue);


// Did not wrap:  virtual vtkCell *GetNextCell (vtkIdType &cellId, vtkIdList &ptIds, vtkDataArray *cellScalars) = 0;


// Did not wrap:  vtkScalarTree ();


// Did not wrap:  ~vtkScalarTree ();


// Did not wrap:  virtual void ReportReferences (vtkGarbageCollector *);


// Did not wrap:  vtkScalarTree (const vtkScalarTree &);


// Did not wrap:  void vtkScalarTree 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkScalarTree(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkScalarTree(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkScalarTree();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkScalarTree();


};

} // end vtkFiltering
