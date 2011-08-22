#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkHierarchicalDataExtractDataSets : public vtkHierarchicalDataSetAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkHierarchicalDataExtractDataSets *NewInstance ();
  vtkHierarchicalDataExtractDataSets^ NewInstance();


  // vtkHierarchicalDataExtractDataSets *SafeDownCast (vtkObject* o);
  static vtkHierarchicalDataExtractDataSets^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkHierarchicalDataExtractDataSets *New ();


  // void AddDataSet (unsigned int level, unsigned int idx);
/// <summary>
/// <para>Add a dataset to be extracted.</para>
/// </summary>
  void AddDataSet(unsigned int level, unsigned int idx);


  // void ClearDataSetList ();
/// <summary>
/// <para>Remove all entries from the list of datasets to be extracted.</para>
/// </summary>
  void ClearDataSetList();


// Did not wrap:  vtkHierarchicalDataExtractDataSets ();


// Did not wrap:  ~vtkHierarchicalDataExtractDataSets ();


// Did not wrap:  virtual int RequestDataObject (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  unsigned int ComputeOutputLevels (unsigned int inputNumLevels);


// Did not wrap:  vtkHierarchicalDataExtractDataSets (const vtkHierarchicalDataExtractDataSets &);


// Did not wrap:  void vtkHierarchicalDataExtractDataSets 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkHierarchicalDataExtractDataSets(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkHierarchicalDataExtractDataSets(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkHierarchicalDataExtractDataSets();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkHierarchicalDataExtractDataSets();


};

} // end vtkGraphics
