#pragma once

// managed includes
#include "vtkHierarchicalDataSetDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkDataObject;
ref class vtkInformation;
ref class vtkInformationIdTypeKey;
ref class vtkInformationIntegerVectorKey;

public ref class vtkHierarchicalBoxDataSet : public vtkHierarchicalDataSet
{

public:
// Did not wrap:  static vtkHierarchicalBoxDataSet *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkHierarchicalBoxDataSet *NewInstance ();
  vtkHierarchicalBoxDataSet^ NewInstance();


  // vtkHierarchicalBoxDataSet *SafeDownCast (vtkObject* o);
  static vtkHierarchicalBoxDataSet^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual int GetDataObjectType ();return VTK_HIERARCHICAL_BOX_DATA_SET 
  int GetDataObjectType();


  // vtkDataObject *GetDataSet (unsigned int level, unsigned int id);return this Superclass GetDataSet level id 
  vtkDataObject^ GetDataSet(unsigned int level, unsigned int id);


  // vtkDataObject *GetDataSet (vtkInformation *index);return this Superclass GetDataSet index 
/// <summary>
/// <para>Sets the refinement of a given level.</para>
/// </summary>
  vtkDataObject^ GetDataSet(vtkInformation^ index);


  // void SetRefinementRatio (unsigned int level, int refRatio);
/// <summary>
/// <para>Sets the refinement of a given level.</para>
/// </summary>
  void SetRefinementRatio(unsigned int level, int refRatio);


  // int GetRefinementRatio (unsigned int level);
/// <summary>
/// <para>Returns the refinement of a given level.</para>
/// </summary>
  int GetRefinementRatio(unsigned int level);


  // void GenerateVisibilityArrays ();
/// <summary>
/// <para>Blank lower level cells if they are overlapped by higher level ones.</para>
/// </summary>
  void GenerateVisibilityArrays();


  // virtual void ShallowCopy (vtkDataObject *src);
/// <summary>
/// <para>Shallow and Deep copy.</para>
/// </summary>
  void ShallowCopy(vtkDataObject^ src);


  // virtual void DeepCopy (vtkDataObject *src);
/// <summary>
/// <para>Shallow and Deep copy.</para>
/// </summary>
  void DeepCopy(vtkDataObject^ src);


  // static vtkInformationIntegerVectorKey *BOX ();
  static vtkInformationIntegerVectorKey^ BOX();


  // static vtkInformationIdTypeKey *NUMBER_OF_BLANKED_POINTS ();
  static vtkInformationIdTypeKey^ NUMBER_OF_BLANKED_POINTS();


  // virtual vtkIdType GetNumberOfPoints ();
/// <summary>
/// <para>Returns the total number of points of all blocks. This will iterate over all blocks and call GetNumberOfPoints() so it might be expansive. Does not include the number of blanked points.</para>
/// </summary>
  int GetNumberOfPoints();


// Did not wrap:  vtkHierarchicalBoxDataSet ();


// Did not wrap:  ~vtkHierarchicalBoxDataSet ();


// Did not wrap:  vtkHierarchicalBoxDataSet (const vtkHierarchicalBoxDataSet &);


// Did not wrap:  void vtkHierarchicalBoxDataSet 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkHierarchicalBoxDataSet(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkHierarchicalBoxDataSet(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkHierarchicalBoxDataSet();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkHierarchicalBoxDataSet();


};

} // end vtkFiltering
