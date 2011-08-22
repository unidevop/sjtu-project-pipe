#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkGenericAdaptorCell;
ref class vtkGenericCellIterator;
ref class vtkGenericPointIterator;

public ref class vtkGenericAttribute : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkGenericAttribute *NewInstance ();
  vtkGenericAttribute^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual const char *GetName () = 0;
/// <summary>
/// <para>Name of the attribute. (e.g. &quot;velocity&quot;) \post result_may_not_exist: result!=0 || result==0</para>
/// </summary>
  System::String^ GetName();


  // virtual int GetNumberOfComponents () = 0;
/// <summary>
/// <para>Dimension of the attribute. (1 for scalar, 3 for velocity) \post positive_result: result&gt;=0 \post GetType()==VTK_SCALARS implies result==1 \post (GetType()==VTK_VECTORS||(GetType()==VTK_NORMALS)||(GetType()==VTK_TCOORDS) implies result==3 \post GetType()==VTK_TENSORS implies result==6</para>
/// </summary>
  int GetNumberOfComponents();


  // virtual int GetCentering () = 0;
/// <summary>
/// <para>Is the attribute centered either on points, cells or boundaries? \post valid_result: (result==vtkPointCentered)||(result==vtkCellCentered)</para>
/// </summary>
  int GetCentering();


  // virtual int GetType () = 0;
/// <summary>
/// <para>Type of the attribute: scalar, vector, normal, texture coordinate, tensor \post valid_result: (result==vtkDataSetAttributes::SCALARS)                   ||(result==vtkDataSetAttributes::VECTORS)                   ||(result==vtkDataSetAttributes::NORMALS)                   ||(result==vtkDataSetAttributes::TCOORDS)                   ||(result==vtkDataSetAttributes::TENSORS)</para>
/// </summary>
  int GetType();


  // virtual int GetComponentType () = 0;
/// <summary>
/// <para>Type of the components of the attribute: int, float, double \post valid_result: (result==VTK_BIT)           ||(result==VTK_CHAR)                   ||(result==VTK_UNSIGNED_CHAR) ||(result==VTK_SHORT)                   ||(result==VTK_UNSIGNED_SHORT)||(result==VTK_INT)                   ||(result==VTK_UNSIGNED_INT)  ||(result==VTK_LONG)                   ||(result==VTK_UNSIGNED_LONG) ||(result==VTK_FLOAT)                   ||(result==VTK_DOUBLE)        ||(result==VTK_ID_TYPE)</para>
/// </summary>
  int GetComponentType();


  // virtual vtkIdType GetSize () = 0;
/// <summary>
/// <para>Number of tuples. \post valid_result: result&gt;=0</para>
/// </summary>
  int GetSize();


  // virtual unsigned long GetActualMemorySize () = 0;
/// <summary>
/// <para>Size in kilobytes taken by the attribute.</para>
/// </summary>
  unsigned long GetActualMemorySize();


// Did not wrap:  virtual double *GetRange (int component) = 0;


  // virtual void GetRange (int component, double range[2]) = 0;
/// <summary>
/// <para>Range of the attribute component `component'. If `component'==-1, it returns the range of the magnitude (euclidean norm). THREAD SAFE \pre valid_component: (component&gt;=-1)&amp;&amp;(component&lt;GetNumberOfComponents())</para>
/// </summary>
  void GetRange(int component, array<double>^ range);


  // virtual double GetMaxNorm () = 0;
/// <summary>
/// <para>Return the maximum euclidean norm for the tuples. \post positive_result: result&gt;=0</para>
/// </summary>
  double GetMaxNorm();


// Did not wrap:  virtual double *GetTuple (vtkGenericAdaptorCell *c) = 0;


  // virtual void GetTuple (vtkGenericAdaptorCell *c, double *tuple) = 0;
/// <summary>
/// <para>Put attribute at all points of cell `c' in `tuple'. \pre c_exists: c!=0 \pre c_valid: !c-&gt;IsAtEnd() \pre tuple_exists: tuple!=0 \pre valid_tuple: sizeof(tuple)&gt;=GetNumberOfComponents()*c-&gt;GetCell()-&gt;GetNumberOfPoints()</para>
/// </summary>
  void GetTuple(vtkGenericAdaptorCell^ c, array<double>^ tuple);


// Did not wrap:  virtual double *GetTuple (vtkGenericCellIterator *c) = 0;


  // virtual void GetTuple (vtkGenericCellIterator *c, double *tuple) = 0;
/// <summary>
/// <para>Put attribute at all points of cell `c' in `tuple'. \pre c_exists: c!=0 \pre c_valid: !c-&gt;IsAtEnd() \pre tuple_exists: tuple!=0 \pre valid_tuple: sizeof(tuple)&gt;=GetNumberOfComponents()*c-&gt;GetCell()-&gt;GetNumberOfPoints()</para>
/// </summary>
  void GetTuple(vtkGenericCellIterator^ c, array<double>^ tuple);


// Did not wrap:  virtual double *GetTuple (vtkGenericPointIterator *p) = 0;


  // virtual void GetTuple (vtkGenericPointIterator *p, double *tuple) = 0;
/// <summary>
/// <para>Put the value of the attribute at position `p' into `tuple'. \pre p_exists: p!=0 \pre p_valid: !p-&gt;IsAtEnd() \pre tuple_exists: tuple!=0 \pre valid_tuple_size: sizeof(tuple)&gt;=GetNumberOfComponents()</para>
/// </summary>
  void GetTuple(vtkGenericPointIterator^ p, array<double>^ tuple);


  // virtual void GetComponent (int i, vtkGenericCellIterator *c, double *values) = 0;
/// <summary>
/// <para>Put component `i' of the attribute at all points of cell `c' in `values'. \pre valid_component: (i&gt;=0) &amp;&amp; (i&lt;GetNumberOfComponents()) \pre c_exists: c!=0 \pre c_valid: !c-&gt;IsAtEnd() \pre values_exist: values!=0 \pre valid_values: sizeof(values)&gt;=c-&gt;GetCell()-&gt;GetNumberOfPoints()</para>
/// </summary>
  void GetComponent(int i, vtkGenericCellIterator^ c, array<double>^ values);


  // virtual double GetComponent (int i, vtkGenericPointIterator *p) = 0;
/// <summary>
/// <para>Value of the component `i' of the attribute at position `p'. \pre valid_component: (i&gt;=0) &amp;&amp; (i&lt;GetNumberOfComponents()) \pre p_exists: p!=0 \pre p_valid: !p-&gt;IsAtEnd()</para>
/// </summary>
  double GetComponent(int i, vtkGenericPointIterator^ p);


  // virtual void DeepCopy (vtkGenericAttribute *other) = 0;
/// <summary>
/// <para>Recursive duplication of `other' in `this'. \pre other_exists: other!=0 \pre not_self: other!=this</para>
/// </summary>
  void DeepCopy(vtkGenericAttribute^ other);


  // virtual void ShallowCopy (vtkGenericAttribute *other) = 0;
/// <summary>
/// <para>Update `this' using fields of `other'. \pre other_exists: other!=0 \pre not_self: other!=this</para>
/// </summary>
  void ShallowCopy(vtkGenericAttribute^ other);


// Did not wrap:  vtkGenericAttribute ();


// Did not wrap:  ~vtkGenericAttribute ();


// Did not wrap:  vtkGenericAttribute (const vtkGenericAttribute &);


// Did not wrap:  void vtkGenericAttribute 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkGenericAttribute(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkGenericAttribute(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkGenericAttribute();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkGenericAttribute();


};

} // end vtkFiltering
