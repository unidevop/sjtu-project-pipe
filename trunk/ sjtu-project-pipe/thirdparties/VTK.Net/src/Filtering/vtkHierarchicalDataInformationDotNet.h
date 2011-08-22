#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkInformation;

public ref class vtkHierarchicalDataInformation : public vtkObject
{

public:
// Did not wrap:  static vtkHierarchicalDataInformation *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkHierarchicalDataInformation *NewInstance ();
  vtkHierarchicalDataInformation^ NewInstance();


  // vtkHierarchicalDataInformation *SafeDownCast (vtkObject* o);
  static vtkHierarchicalDataInformation^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // unsigned int GetNumberOfLevels ();
/// <summary>
/// <para>Returns the number of hierarchy levels.</para>
/// </summary>
  unsigned int GetNumberOfLevels();


  // void SetNumberOfLevels (unsigned int numLevels);
/// <summary>
/// <para>Set the number of hierarchy levels.</para>
/// </summary>
  void SetNumberOfLevels(unsigned int numLevels);


  // unsigned int GetNumberOfDataSets (unsigned int level);
/// <summary>
/// <para>Given a level, returns the number of datasets.</para>
/// </summary>
  unsigned int GetNumberOfDataSets(unsigned int level);


  // void SetNumberOfDataSets (unsigned int level, unsigned int numDataSets);
/// <summary>
/// <para>Given a level, sets the number of datasets.</para>
/// </summary>
  void SetNumberOfDataSets(unsigned int level, unsigned int numDataSets);


  // vtkInformation *GetInformation (unsigned int level, unsigned int id);
/// <summary>
/// <para>Given a level and a dataset id, returns the corresponding information object. If the information does not exist, one is created. Use HasInformation() to check whether the information already exists.</para>
/// </summary>
  vtkInformation^ GetInformation(unsigned int level, unsigned int id);


  // int HasInformation (unsigned int level, unsigned int id);
/// <summary>
/// <para>Returns 1 if information exists, 0 otherwise.</para>
/// </summary>
  int HasInformation(unsigned int level, unsigned int id);


  // void DeepCopy (vtkHierarchicalDataInformation *from);
/// <summary>
/// <para>Creates a duplicate hierarchy and calls Copy() on each information object.</para>
/// </summary>
  void DeepCopy(vtkHierarchicalDataInformation^ from);


  // void Clear ();
/// <summary>
/// <para>Initializes the data structure to empty.</para>
/// </summary>
  void Clear();


// Did not wrap:  vtkHierarchicalDataInformation ();


// Did not wrap:  ~vtkHierarchicalDataInformation ();


// Did not wrap:  vtkHierarchicalDataInformation (const vtkHierarchicalDataInformation &);


// Did not wrap:  void vtkHierarchicalDataInformation 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkHierarchicalDataInformation(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkHierarchicalDataInformation(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkHierarchicalDataInformation();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkHierarchicalDataInformation();


};

} // end vtkFiltering
