#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkGenericAttribute;

public ref class vtkGenericAttributeCollection : public vtkObject
{

public:
// Did not wrap:  static vtkGenericAttributeCollection *New ();


  // const char *GetClassName ();
/// <summary>
/// <para>Standard type definition and print methods for a VTK class.</para>
/// </summary>
  System::String^ GetClassName();


  // int IsA (const char *name);
/// <summary>
/// <para>Standard type definition and print methods for a VTK class.</para>
/// </summary>
  int IsA(System::String^ name);


  // vtkGenericAttributeCollection *NewInstance ();
/// <summary>
/// <para>Standard type definition and print methods for a VTK class.</para>
/// </summary>
  vtkGenericAttributeCollection^ NewInstance();


  // vtkGenericAttributeCollection *SafeDownCast (vtkObject* o);
/// <summary>
/// <para>Standard type definition and print methods for a VTK class.</para>
/// </summary>
  static vtkGenericAttributeCollection^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // int GetNumberOfAttributes ();
/// <summary>
/// <para>Return the number of attributes (e.g., instances of vtkGenericAttribute)  in the collection. \post positive_result: result&gt;=0</para>
/// </summary>
  int GetNumberOfAttributes();


  // int GetNumberOfComponents ();
/// <summary>
/// <para>Return the number of components. This is the sum of all components found in all attributes. \post positive_result: result&gt;=0</para>
/// </summary>
  int GetNumberOfComponents();


  // int GetNumberOfPointCenteredComponents ();
/// <summary>
/// <para>Return the number of components. This is the sum of all components found in all point centered attributes. \post positive_result: result&gt;=0</para>
/// </summary>
  int GetNumberOfPointCenteredComponents();


  // int GetMaxNumberOfComponents ();
/// <summary>
/// <para>Maximum number of components encountered among all attributes. \post positive_result: result&gt;=0 \post valid_result: result&lt;=GetNumberOfComponents()</para>
/// </summary>
  int GetMaxNumberOfComponents();


  // unsigned long GetActualMemorySize ();
/// <summary>
/// <para>Actual size of the data in kilobytes; only valid after the pipeline has updated. It is guaranteed to be greater than or equal to the memory required to represent the data.</para>
/// </summary>
  unsigned long GetActualMemorySize();


  // int IsEmpty ();
/// <summary>
/// <para>Indicate whether the collection contains any attributes. \post definition: result==(GetNumberOfAttributes()==0)</para>
/// </summary>
  int IsEmpty();


  // vtkGenericAttribute *GetAttribute (int i);
/// <summary>
/// <para>Return a pointer to the ith instance of vtkGenericAttribute. \pre not_empty: !IsEmpty() \pre valid_i: i&gt;=0 &amp;&amp; i&lt;GetNumberOfAttributes() \post result_exists: result!=0</para>
/// </summary>
  vtkGenericAttribute^ GetAttribute(int i);


  // int FindAttribute (const char *name);
/// <summary>
/// <para>Return the index of the attribute named `name'. Return the non-negative index if found. Return -1 otherwise. \pre name_exists: name!=0 \post valid_result: (result==-1) || (result&gt;=0) &amp;&amp; (result&lt;=GetNumberOfAttributes())</para>
/// </summary>
  int FindAttribute(System::String^ name);


  // int GetAttributeIndex (int i);
/// <summary>
/// <para>Return the index of the first component of attribute `i' in an array of format attrib0comp0 attrib0comp1 ... attrib4comp0 ... \pre valid_i: i&gt;=0 &amp;&amp; i&lt;GetNumberOfAttributes() \pre is_point_centered: GetAttribute(i)-&gt;GetCentering()==vtkPointCentered</para>
/// </summary>
  int GetAttributeIndex(int i);


  // void InsertNextAttribute (vtkGenericAttribute *a);
/// <summary>
/// <para>Add the attribute `a' to the end of the collection. \pre a_exists: a!=0 \post more_items: GetNumberOfAttributes()==old GetNumberOfAttributes()+1 \post a_is_set: GetAttribute(GetNumberOfAttributes()-1)==a</para>
/// </summary>
  void InsertNextAttribute(vtkGenericAttribute^ a);


  // void InsertAttribute (int i, vtkGenericAttribute *a);
/// <summary>
/// <para>Replace the attribute at index `i' by `a'. \pre not_empty: !IsEmpty() \pre a_exists: a!=0 \pre valid_i: i&gt;=0 &amp;&amp; i&lt;GetNumberOfAttributes() \post same_size: GetNumberOfAttributes()==old GetNumberOfAttributes() \post item_is_set: GetAttribute(i)==a</para>
/// </summary>
  void InsertAttribute(int i, vtkGenericAttribute^ a);


  // void RemoveAttribute (int i);
/// <summary>
/// <para>Remove the attribute at `i'. \pre not_empty: !IsEmpty() \pre valid_i: i&gt;=0 &amp;&amp; i&lt;GetNumberOfAttributes() \post fewer_items: GetNumberOfAttributes()==old GetNumberOfAttributes()-1</para>
/// </summary>
  void RemoveAttribute(int i);


  // void Reset ();
/// <summary>
/// <para>Remove all attributes. \post is_empty: GetNumberOfAttributes()==0</para>
/// </summary>
  void Reset();


  // void DeepCopy (vtkGenericAttributeCollection *other);
/// <summary>
/// <para>Copy, without reference counting, the other attribute array. \pre other_exists: other!=0 \pre not_self: other!=this \post same_size: GetNumberOfAttributes()==other-&gt;GetNumberOfAttributes()</para>
/// </summary>
  void DeepCopy(vtkGenericAttributeCollection^ other);


  // void ShallowCopy (vtkGenericAttributeCollection *other);
/// <summary>
/// <para>Copy, via reference counting, the other attribute array. \pre other_exists: other!=0 \pre not_self: other!=this \post same_size: GetNumberOfAttributes()==other-&gt;GetNumberOfAttributes()</para>
/// </summary>
  void ShallowCopy(vtkGenericAttributeCollection^ other);


  // virtual unsigned long GetMTime ();
/// <summary>
/// <para>vtkAttributeCollection is a composite object and needs to check each member of its collection for modified time.</para>
/// </summary>
  unsigned long GetMTime();


  // int GetActiveAttribute ();
/// <summary>
/// <para>Index of the attribute to be processed (not necessarily scalar). \pre not_empty: !IsEmpty() \post valid_result: result&gt;=0 &amp;&amp; result&lt;GetNumberOfAttributes()</para>
/// </summary>
  int GetActiveAttribute();


  // int GetActiveComponent ();
/// <summary>
/// <para>Component of the active attribute to be processed. -1 means module. \pre not_empty: GetNumberOfAttributes()&gt;0 \post valid_result: result&gt;=-1 &amp;&amp;       result&lt;GetAttribute(GetActiveAttribute())-&gt;GetNumberOfComponents()</para>
/// </summary>
  int GetActiveComponent();


  // void SetActiveAttribute (int attribute, int component);
/// <summary>
/// <para>Set the scalar attribute to be processed. -1 means module. \pre not_empty: !IsEmpty() \pre valid_attribute: attribute&gt;=0 &amp;&amp; attribute&lt;GetNumberOfAttributes() \pre valid_component: component&gt;=-1 &amp;&amp;              component&lt;GetAttribute(attribute)-&gt;GetNumberOfComponents() \post is_set: GetActiveAttribute()==attribute &amp;&amp;               GetActiveComponent()==component</para>
/// </summary>
  void SetActiveAttribute(int attribute, int component);


  // int GetNumberOfAttributesToInterpolate ();
/// <summary>
/// <para>Number of attributes to interpolate. \pre not_empty: !IsEmpty() \post positive_result: result&gt;=0</para>
/// </summary>
  int GetNumberOfAttributesToInterpolate();


  // int HasAttribute (int size, int *attributes, int attribute);
  int HasAttribute(int size, array<int>^ attributes, int attribute);


  // void SetAttributesToInterpolate (int size, int *attributes);
/// <summary>
/// <para>Set the attributes to interpolate. \pre not_empty: !IsEmpty() \pre positive_size: size&gt;=0 \pre valid_attributes: size&gt;0 implies attributes!=0 \pre valid_attributes_contents: attributes!=0 implies                     !HasAttributes(size,attributes,GetActiveAttribute()) \post is_set: (GetNumberOfAttributesToInterpolate()==size)&amp;&amp;               (GetAttributesToInterpolate()==attributes)</para>
/// </summary>
  void SetAttributesToInterpolate(int size, array<int>^ attributes);


  // void SetAttributesToInterpolateToAll ();
/// <summary>
/// <para>Set the attributes to interpolate. \pre not_empty: !IsEmpty() \pre positive_size: size&gt;=0 \pre valid_attributes: size&gt;0 implies attributes!=0 \pre valid_attributes_contents: attributes!=0 implies                     !HasAttributes(size,attributes,GetActiveAttribute()) \post is_set: (GetNumberOfAttributesToInterpolate()==size)&amp;&amp;               (GetAttributesToInterpolate()==attributes)</para>
/// </summary>
  void SetAttributesToInterpolateToAll();


// Did not wrap:  vtkGenericAttributeCollection ();


// Did not wrap:  virtual ~vtkGenericAttributeCollection ();


// Did not wrap:  void ComputeNumbers ();


// Did not wrap:  vtkGenericAttributeCollection (const vtkGenericAttributeCollection &);


// Did not wrap:  void vtkGenericAttributeCollection 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkGenericAttributeCollection(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkGenericAttributeCollection(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkGenericAttributeCollection();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkGenericAttributeCollection();


};

} // end vtkFiltering
