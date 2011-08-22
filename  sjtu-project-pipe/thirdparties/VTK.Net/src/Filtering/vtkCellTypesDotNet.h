#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkCellTypes : public vtkObject
{

public:
// Did not wrap:  static vtkCellTypes *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkCellTypes *NewInstance ();
  vtkCellTypes^ NewInstance();


  // vtkCellTypes *SafeDownCast (vtkObject* o);
  static vtkCellTypes^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // int Allocate (int sz, int ext);
/// <summary>
/// <para>Allocate memory for this array. Delete old storage only if necessary.</para>
/// </summary>
  int Allocate(int sz, int ext);


  // void InsertCell (int id, unsigned char type, int loc);
/// <summary>
/// <para>Add a cell at specified id.</para>
/// </summary>
  void InsertCell(int id, unsigned char type, int loc);


  // int InsertNextCell (unsigned char type, int loc);
/// <summary>
/// <para>Add a cell to the object in the next available slot.</para>
/// </summary>
  int InsertNextCell(unsigned char type, int loc);


  // void SetCellTypes (int ncells, vtkUnsignedCharArray *cellTypes, vtkIntArray *cellLocations);
/// <summary>
/// <para>Specify a group of cell types.</para>
/// </summary>
  void SetCellTypes(int ncells, vtkUnsignedCharArray^ cellTypes, vtkIntArray^ cellLocations);


  // int GetCellLocation (int cellId);return this LocationArray GetValue cellId 
/// <summary>
/// <para>Return the location of the cell in the associated vtkCellArray.</para>
/// </summary>
  int GetCellLocation(int cellId);


  // void DeleteCell (int cellId);this TypeArray SetValue cellId VTK_EMPTY_CELL 
/// <summary>
/// <para>Delete cell by setting to NULL cell type.</para>
/// </summary>
  void DeleteCell(int cellId);


  // int GetNumberOfTypes ();return this MaxId 
/// <summary>
/// <para>Return the number of types in the list.</para>
/// </summary>
  int GetNumberOfTypes();


  // int IsType (unsigned char type);
/// <summary>
/// <para>Return 1 if type specified is contained in list; 0 otherwise.</para>
/// </summary>
  int IsType(unsigned char type);


  // int InsertNextType (unsigned char type);return this InsertNextCell type 
/// <summary>
/// <para>Add the type specified to the end of the list. Range checking is performed.</para>
/// </summary>
  int InsertNextType(unsigned char type);


  // unsigned char GetCellType (int cellId);return this TypeArray GetValue cellId 
/// <summary>
/// <para>Return the type of cell.</para>
/// </summary>
  unsigned char GetCellType(int cellId);


  // void Squeeze ();
/// <summary>
/// <para>Reclaim any extra memory.</para>
/// </summary>
  void Squeeze();


  // void Reset ();
/// <summary>
/// <para>Initialize object without releasing memory.</para>
/// </summary>
  void Reset();


  // unsigned long GetActualMemorySize ();
/// <summary>
/// <para>Return the memory in kilobytes consumed by this cell type array.  Used to support streaming and reading/writing data. The value  returned is guaranteed to be greater than or equal to the memory  required to actually represent the data represented by this object.  The information returned is valid only after the pipeline has  been updated.</para>
/// </summary>
  unsigned long GetActualMemorySize();


  // void DeepCopy (vtkCellTypes *src);
/// <summary>
/// <para>Standard DeepCopy method.  Since this object contains no reference to other objects, there is no ShallowCopy.</para>
/// </summary>
  void DeepCopy(vtkCellTypes^ src);


// Did not wrap:  vtkCellTypes ();


// Did not wrap:  ~vtkCellTypes ();


// Did not wrap:  vtkCellTypes (const vtkCellTypes &);


// Did not wrap:  void vtkCellTypes 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkCellTypes(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkCellTypes(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkCellTypes();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkCellTypes();


};

} // end vtkFiltering
