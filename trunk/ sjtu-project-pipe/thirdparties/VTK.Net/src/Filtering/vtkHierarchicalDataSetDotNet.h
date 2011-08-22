#pragma once

// managed includes
#include "vtkCompositeDataSetDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkCompositeDataIterator;
ref class vtkDataObject;
ref class vtkHierarchicalDataInformation;
ref class vtkInformation;
ref class vtkInformationIntegerKey;

public ref class vtkHierarchicalDataSet : public vtkCompositeDataSet
{

public:
// Did not wrap:  static vtkHierarchicalDataSet *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkHierarchicalDataSet *NewInstance ();
  vtkHierarchicalDataSet^ NewInstance();


  // vtkHierarchicalDataSet *SafeDownCast (vtkObject* o);
  static vtkHierarchicalDataSet^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual vtkCompositeDataIterator *NewIterator ();
/// <summary>
/// <para>Return a new (forward) iterator  (the iterator has to be deleted by user)</para>
/// </summary>
  vtkCompositeDataIterator^ NewIterator();


  // virtual int GetDataObjectType ();return VTK_HIERARCHICAL_DATA_SET 
/// <summary>
/// <para>Restore data object to initial state,</para>
/// </summary>
  int GetDataObjectType();


  // virtual void Initialize ();
/// <summary>
/// <para>Restore data object to initial state,</para>
/// </summary>
  void Initialize();


  // void SetNumberOfLevels (unsigned int numLevels);
/// <summary>
/// <para>Set the number of refinement levels. This call might cause allocation if the new number of levels is larger than the current one.</para>
/// </summary>
  void SetNumberOfLevels(unsigned int numLevels);


  // unsigned int GetNumberOfLevels ();
/// <summary>
/// <para>Returns the number of levels.</para>
/// </summary>
  unsigned int GetNumberOfLevels();


  // void SetNumberOfDataSets (unsigned int level, unsigned int numDataSets);
/// <summary>
/// <para>Set the number of datasets in a given level. This call might cause allocation if the new number of datasets is larger than the current one.</para>
/// </summary>
  void SetNumberOfDataSets(unsigned int level, unsigned int numDataSets);


  // unsigned int GetNumberOfDataSets (unsigned int level);
/// <summary>
/// <para>Returns the number of datasets in a given level.</para>
/// </summary>
  unsigned int GetNumberOfDataSets(unsigned int level);


  // void InitializeNode (unsigned int level, unsigned int id);
/// <summary>
/// <para>Initialize the entry for a dataset node. This removes all parent/child links between the given node and others.</para>
/// </summary>
  void InitializeNode(unsigned int level, unsigned int id);


  // void SetDataSet (unsigned int level, unsigned int id, vtkDataObject *dataSet);
/// <summary>
/// <para>Set the dataset pointer for a given node. This method does not remove the existing parent/child links. It only replaces the dataset pointer.</para>
/// </summary>
  void SetDataSet(unsigned int level, unsigned int id, vtkDataObject^ dataSet);


  // virtual void AddDataSet (vtkInformation *index, vtkDataObject *dobj);
/// <summary>
/// <para>Uses keys LEVEL() and INDEX() to call SetDataSet(LEVEL, INDEX, dobj)</para>
/// </summary>
  void AddDataSet(vtkInformation^ index, vtkDataObject^ dobj);


  // vtkDataObject *GetDataSet (unsigned int level, unsigned int id);
/// <summary>
/// <para>Get a dataset give a level and an id.</para>
/// </summary>
  vtkDataObject^ GetDataSet(unsigned int level, unsigned int id);


  // virtual vtkDataObject *GetDataSet (vtkInformation *index);
/// <summary>
/// <para>Uses keys LEVEL() and INDEX() to call GetDataSet(LEVEL, INDEX)</para>
/// </summary>
  vtkDataObject^ GetDataSet(vtkInformation^ index);


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


  // vtkHierarchicalDataInformation *GetHierarchicalDataInformation ();
/// <summary>
/// <para>Returns the data structure containing information about the datasets.</para>
/// </summary>
  vtkHierarchicalDataInformation^ GetHierarchicalDataInformation();


  // void SetHierarchicalDataInformation (vtkHierarchicalDataInformation *info);
/// <summary>
/// <para>Set the information about the datasets.</para>
/// </summary>
  void SetHierarchicalDataInformation(vtkHierarchicalDataInformation^ info);


  // virtual vtkIdType GetNumberOfPoints ();
/// <summary>
/// <para>Returns the total number of points of all blocks. This will iterate over all blocks and call GetNumberOfPoints() so it might be expansive.</para>
/// </summary>
  int GetNumberOfPoints();


  // static vtkInformationIntegerKey *LEVEL ();
  static vtkInformationIntegerKey^ LEVEL();


// Did not wrap:  vtkHierarchicalDataSet ();


// Did not wrap:  ~vtkHierarchicalDataSet ();


// Did not wrap:  void InitializeDataSets ();


// Did not wrap:  virtual vtkHDSNode *NewNode ();


// Did not wrap:  vtkHierarchicalDataSet (const vtkHierarchicalDataSet &);


// Did not wrap:  void vtkHierarchicalDataSet 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkHierarchicalDataSet(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkHierarchicalDataSet(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkHierarchicalDataSet();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkHierarchicalDataSet();


};

} // end vtkFiltering
