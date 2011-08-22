#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkCellArray;
ref class vtkDataSet;

public ref class vtkCellLinks : public vtkObject
{

public:
// Did not wrap:  static vtkCellLinks *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkCellLinks *NewInstance ();
  vtkCellLinks^ NewInstance();


  // vtkCellLinks *SafeDownCast (vtkObject* o);
  static vtkCellLinks^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void Allocate (vtkIdType numLinks, vtkIdType ext);
/// <summary>
/// <para>Allocate the specified number of links (i.e., number of points) that will be built.</para>
/// </summary>
  void Allocate(int numLinks, int ext);


// Did not wrap:  Link &GetLink (vtkIdType ptId);return this Array ptId 


  // unsigned short GetNcells (vtkIdType ptId);return this Array ptId ncells 
/// <summary>
/// <para>Get the number of cells using the point specified by ptId.</para>
/// </summary>
  unsigned short GetNcells(int ptId);


  // void BuildLinks (vtkDataSet *data);
/// <summary>
/// <para>Build the link list array.</para>
/// </summary>
  void BuildLinks(vtkDataSet^ data);


  // void BuildLinks (vtkDataSet *data, vtkCellArray *Connectivity);
/// <summary>
/// <para>Build the link list array.</para>
/// </summary>
  void BuildLinks(vtkDataSet^ data, vtkCellArray^ Connectivity);


// Did not wrap:  vtkIdType *GetCells (vtkIdType ptId);return this Array ptId cells 


  // vtkIdType InsertNextPoint (int numLinks);
/// <summary>
/// <para>Insert a new point into the cell-links data structure. The size parameter is the initial size of the list.</para>
/// </summary>
  int InsertNextPoint(int numLinks);


  // void InsertNextCellReference (vtkIdType ptId, vtkIdType cellId);
/// <summary>
/// <para>Insert a cell id into the list of cells (at the end) using the cell id  provided. (Make sure to extend the link list (if necessary) using the method ResizeCellList().)</para>
/// </summary>
  void InsertNextCellReference(int ptId, int cellId);


  // void DeletePoint (vtkIdType ptId);
/// <summary>
/// <para>Delete point (and storage) by destroying links to using cells.</para>
/// </summary>
  void DeletePoint(int ptId);


  // void RemoveCellReference (vtkIdType cellId, vtkIdType ptId);
/// <summary>
/// <para>Delete the reference to the cell (cellId) from the point (ptId). This removes the reference to the cellId from the cell list, but does not resize the list (recover memory with ResizeCellList(), if necessary).</para>
/// </summary>
  void RemoveCellReference(int cellId, int ptId);


  // void AddCellReference (vtkIdType cellId, vtkIdType ptId);
/// <summary>
/// <para>Add the reference to the cell (cellId) from the point (ptId). This adds a reference to the cellId from the cell list, but does not resize the list (extend memory with ResizeCellList(), if necessary).</para>
/// </summary>
  void AddCellReference(int cellId, int ptId);


  // void ResizeCellList (vtkIdType ptId, int size);
/// <summary>
/// <para>Change the length of a point's link list (i.e., list of cells using a point) by the size specified.</para>
/// </summary>
  void ResizeCellList(int ptId, int size);


  // void Squeeze ();
/// <summary>
/// <para>Reclaim any unused memory.</para>
/// </summary>
  void Squeeze();


  // void Reset ();
/// <summary>
/// <para>Reset to a state of no entries without freeing the memory.</para>
/// </summary>
  void Reset();


  // unsigned long GetActualMemorySize ();
/// <summary>
/// <para>Return the memory in kilobytes consumed by this cell links array.  Used to support streaming and reading/writing data. The value  returned is guaranteed to be greater than or equal to the memory  required to actually represent the data represented by this object.  The information returned is valid only after the pipeline has  been updated.</para>
/// </summary>
  unsigned long GetActualMemorySize();


  // void DeepCopy (vtkCellLinks *src);
/// <summary>
/// <para>Standard DeepCopy method.  Since this object contains no reference to other objects, there is no ShallowCopy.</para>
/// </summary>
  void DeepCopy(vtkCellLinks^ src);


// Did not wrap:  vtkCellLinks ();Array NULL Size MaxId Extend 


// Did not wrap:  ~vtkCellLinks ();


// Did not wrap:  void IncrementLinkCount (vtkIdType ptId);this Array ptId ncells 


// Did not wrap:  void AllocateLinks (vtkIdType n);


// Did not wrap:  void InsertCellReference (vtkIdType ptId, unsigned short pos, vtkIdType cellId);


// Did not wrap:  Link *Resize (vtkIdType sz);


// Did not wrap:  vtkCellLinks (const vtkCellLinks &);


// Did not wrap:  void vtkCellLinks 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkCellLinks(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkCellLinks(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkCellLinks();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkCellLinks();


};

} // end vtkFiltering
