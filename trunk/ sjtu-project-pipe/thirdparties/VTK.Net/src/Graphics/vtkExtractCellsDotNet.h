#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkExtractCells : public vtkUnstructuredGridAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkExtractCells *NewInstance ();
  vtkExtractCells^ NewInstance();


  // vtkExtractCells *SafeDownCast (vtkObject* o);
  static vtkExtractCells^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkExtractCells *New ();


  // void SetCellList (vtkIdList *l);
  void SetCellList(vtkIdList^ l);


  // void AddCellList (vtkIdList *l);
  void AddCellList(vtkIdList^ l);


  // void AddCellRange (vtkIdType from, vtkIdType to);
  void AddCellRange(int from, int to);


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkExtractCells ();


// Did not wrap:  ~vtkExtractCells ();


// Did not wrap:  void Copy (vtkDataSet *input, vtkUnstructuredGrid *output);


// Did not wrap:  static vtkIdType findInSortedList (vtkIdList *idList, vtkIdType id);


// Did not wrap:  vtkIdList *reMapPointIds (vtkDataSet *grid);


// Did not wrap:  vtkModelMetadata *ExtractMetadata (vtkDataSet *input);


// Did not wrap:  void CopyCellsDataSet (vtkIdList *ptMap, vtkDataSet *input, vtkUnstructuredGrid *output);


// Did not wrap:  void CopyCellsUnstructuredGrid (vtkIdList *ptMap, vtkDataSet *input, vtkUnstructuredGrid *output);


// Did not wrap:  vtkExtractCells (const vtkExtractCells &);


// Did not wrap:  void vtkExtractCells 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkExtractCells(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkExtractCells(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkExtractCells();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkExtractCells();


};

} // end vtkGraphics
