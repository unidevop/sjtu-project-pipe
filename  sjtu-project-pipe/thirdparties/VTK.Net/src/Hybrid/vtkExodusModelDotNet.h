#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkExodusModel : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkExodusModel *NewInstance ();
  vtkExodusModel^ NewInstance();


  // vtkExodusModel *SafeDownCast (vtkObject* o);
  static vtkExodusModel^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkExodusModel *New ();


  // int SetGlobalInformation (int fid, int compute_word_size);
  int SetGlobalInformation(int fid, int compute_word_size);


  // int AddUGridElementVariable (char *ugridVarName, char *origName, int numComponents);
  int AddUGridElementVariable(System::String^ ugridVarName, System::String^ origName, int numComponents);


  // int RemoveUGridElementVariable (char *ugridVarName);
  int RemoveUGridElementVariable(System::String^ ugridVarName);


  // int AddUGridNodeVariable (char *ugridVarName, char *origName, int numComponents);
  int AddUGridNodeVariable(System::String^ ugridVarName, System::String^ origName, int numComponents);


  // int RemoveUGridNodeVariable (char *ugridVarName);
  int RemoveUGridNodeVariable(System::String^ ugridVarName);


// Did not wrap:  void SetElementVariableInfo (int numOrigNames, char *origNames, int numNames, char *names, int *numComp, int *map);


// Did not wrap:  void SetNodeVariableInfo (int numOrigNames, char *origNames, int numNames, char *names, int *numComp, int *map);


  // int SetLocalInformation (vtkUnstructuredGrid *ugrid, int fid, int timeStep, int newGeometry, int compute_word_size);
  int SetLocalInformation(vtkUnstructuredGrid^ ugrid, int fid, int timeStep, int newGeometry, int compute_word_size);


  // static int HasMetadata (vtkUnstructuredGrid *grid);
  static int HasMetadata(vtkUnstructuredGrid^ grid);


  // vtkModelMetadata *GetModelMetadata ();
  vtkModelMetadata^ GetModelMetadata();


  // void SetModelMetadata (vtkModelMetadata *emData);
  void SetModelMetadata(vtkModelMetadata^ emData);


  // int UnpackExodusModel (vtkUnstructuredGrid *grid, int deleteIt);
  int UnpackExodusModel(vtkUnstructuredGrid^ grid, int deleteIt);


  // int MergeExodusModel (vtkExodusModel *em);
  int MergeExodusModel(vtkExodusModel^ em);


  // vtkExodusModel *ExtractExodusModel (vtkIntArray *globalCellIdList, vtkUnstructuredGrid *grid, const char *globalCellIdArrayName, const char *globalNodeIdArrayName);
  vtkExodusModel^ ExtractExodusModel(vtkIntArray^ globalCellIdList, vtkUnstructuredGrid^ grid, System::String^ globalCellIdArrayName, System::String^ globalNodeIdArrayName);


  // void PackExodusModel (vtkUnstructuredGrid *grid);
  void PackExodusModel(vtkUnstructuredGrid^ grid);


  // void Reset ();
  void Reset();


// Did not wrap:  vtkExodusModel ();


// Did not wrap:  ~vtkExodusModel ();


// Did not wrap:  vtkModelMetadata *CheckSetModelMetadata ();


// Did not wrap:  static void CopyDoubleToFloat (float *f, double *d, int len);


// Did not wrap:  int SetLocalBlockInformation (int fid, int use_floats, int *blockIds, int *cellIds, int ncells);


// Did not wrap:  int SetLocalNodeSetInformation (int fid, int use_floats, int *pointIds, int npoints);


// Did not wrap:  int SetLocalSideSetInformation (int fid, int use_floats, int *cellIds, int ncells);


// Did not wrap:  void RemoveBeginningAndTrailingSpaces (char *names, int len);


// Did not wrap:  vtkExodusModel (const vtkExodusModel &);


// Did not wrap:  void vtkExodusModel 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkExodusModel(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkExodusModel(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkExodusModel();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkExodusModel();


};

} // end vtkHybrid
