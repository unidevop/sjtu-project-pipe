#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkAVSucdReader : public vtkUnstructuredGridAlgorithm
{

public:
// Did not wrap:  static vtkAVSucdReader *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkAVSucdReader *NewInstance ();
  vtkAVSucdReader^ NewInstance();


  // vtkAVSucdReader *SafeDownCast (vtkObject* o);
  static vtkAVSucdReader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetFileName (char *);
/// <summary>
/// <para>Specify file name of AVS UCD datafile to read</para>
/// </summary>
  void SetFileName(System::String^ arg0);


  // char *GetFileName ();
/// <summary>
/// <para>Specify file name of AVS UCD datafile to read</para>
/// </summary>
  System::String^ GetFileName();


  // void SetBinaryFile (int );
/// <summary>
/// <para>Is the file to be read written in binary format (as opposed to ascii).</para>
/// </summary>
  void SetBinaryFile(int arg0);


  // int GetBinaryFile ();
/// <summary>
/// <para>Is the file to be read written in binary format (as opposed to ascii).</para>
/// </summary>
  int GetBinaryFile();


  // void BinaryFileOn ();
/// <summary>
/// <para>Is the file to be read written in binary format (as opposed to ascii).</para>
/// </summary>
  void BinaryFileOn();


  // void BinaryFileOff ();
/// <summary>
/// <para>Is the file to be read written in binary format (as opposed to ascii).</para>
/// </summary>
  void BinaryFileOff();


  // int GetNumberOfCells ();
/// <summary>
/// <para>Get the total number of cells.</para>
/// </summary>
  int GetNumberOfCells();


  // int GetNumberOfNodes ();
/// <summary>
/// <para>Get the total number of nodes.</para>
/// </summary>
  int GetNumberOfNodes();


  // int GetNumberOfNodeFields ();
/// <summary>
/// <para>Get the number of data fields at the nodes.</para>
/// </summary>
  int GetNumberOfNodeFields();


  // int GetNumberOfCellFields ();
/// <summary>
/// <para>Get the number of data fields at the cell centers.</para>
/// </summary>
  int GetNumberOfCellFields();


  // int GetNumberOfFields ();
/// <summary>
/// <para>Get the number of data fields for the model. Unused because VTK has no methods for it.</para>
/// </summary>
  int GetNumberOfFields();


  // int GetNumberOfNodeComponents ();
/// <summary>
/// <para>Get the number of data components at the nodes and cells.</para>
/// </summary>
  int GetNumberOfNodeComponents();


  // int GetNumberOfCellComponents ();
/// <summary>
/// <para>Get the number of data components at the nodes and cells.</para>
/// </summary>
  int GetNumberOfCellComponents();


  // void SetByteOrderToBigEndian ();
/// <summary>
/// <para>Set/Get the endian-ness of the binary file.</para>
/// </summary>
  void SetByteOrderToBigEndian();


  // void SetByteOrderToLittleEndian ();
/// <summary>
/// <para>Set/Get the endian-ness of the binary file.</para>
/// </summary>
  void SetByteOrderToLittleEndian();


  // const char *GetByteOrderAsString ();
/// <summary>
/// <para>Set/Get the endian-ness of the binary file.</para>
/// </summary>
  System::String^ GetByteOrderAsString();


  // void SetByteOrder (int );
  void SetByteOrder(int arg0);


  // int GetByteOrder ();
  int GetByteOrder();


  // int GetNumberOfPointArrays ();
/// <summary>
/// <para>The following methods allow selective reading of solutions fields.  by default, ALL data fields are the nodes and cells are read, but this can be modified.</para>
/// </summary>
  int GetNumberOfPointArrays();


  // int GetNumberOfCellArrays ();
/// <summary>
/// <para>The following methods allow selective reading of solutions fields.  by default, ALL data fields are the nodes and cells are read, but this can be modified.</para>
/// </summary>
  int GetNumberOfCellArrays();


  // const char *GetPointArrayName (int index);
/// <summary>
/// <para>The following methods allow selective reading of solutions fields.  by default, ALL data fields are the nodes and cells are read, but this can be modified.</para>
/// </summary>
  System::String^ GetPointArrayName(int index);


  // const char *GetCellArrayName (int index);
/// <summary>
/// <para>The following methods allow selective reading of solutions fields.  by default, ALL data fields are the nodes and cells are read, but this can be modified.</para>
/// </summary>
  System::String^ GetCellArrayName(int index);


  // int GetPointArrayStatus (const char *name);
/// <summary>
/// <para>The following methods allow selective reading of solutions fields.  by default, ALL data fields are the nodes and cells are read, but this can be modified.</para>
/// </summary>
  int GetPointArrayStatus(System::String^ name);


  // int GetCellArrayStatus (const char *name);
/// <summary>
/// <para>The following methods allow selective reading of solutions fields.  by default, ALL data fields are the nodes and cells are read, but this can be modified.</para>
/// </summary>
  int GetCellArrayStatus(System::String^ name);


  // void SetPointArrayStatus (const char *name, int status);
/// <summary>
/// <para>The following methods allow selective reading of solutions fields.  by default, ALL data fields are the nodes and cells are read, but this can be modified.</para>
/// </summary>
  void SetPointArrayStatus(System::String^ name, int status);


  // void SetCellArrayStatus (const char *name, int status);
/// <summary>
/// <para>The following methods allow selective reading of solutions fields.  by default, ALL data fields are the nodes and cells are read, but this can be modified.</para>
/// </summary>
  void SetCellArrayStatus(System::String^ name, int status);


  // void DisableAllCellArrays ();
  void DisableAllCellArrays();


  // void EnableAllCellArrays ();
  void EnableAllCellArrays();


  // void DisableAllPointArrays ();
  void DisableAllPointArrays();


  // void EnableAllPointArrays ();
  void EnableAllPointArrays();


  // void GetCellDataRange (int cellComp, int index, float *min, float *max);
  void GetCellDataRange(int cellComp, int index, array<float>^ min, array<float>^ max);


  // void GetNodeDataRange (int nodeComp, int index, float *min, float *max);
  void GetNodeDataRange(int nodeComp, int index, array<float>^ min, array<float>^ max);


// Did not wrap:  vtkAVSucdReader ();


// Did not wrap:  ~vtkAVSucdReader ();


// Did not wrap:  int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  int GetLabel (char *string, int number, char *label);


// Did not wrap:  void ReadFile (vtkUnstructuredGrid *output);


// Did not wrap:  void ReadGeometry (vtkUnstructuredGrid *output);


// Did not wrap:  void ReadNodeData (vtkUnstructuredGrid *output);


// Did not wrap:  void ReadCellData (vtkUnstructuredGrid *output);


// Did not wrap:  int ReadFloatBlock (int n, float *block);


// Did not wrap:  int ReadIntBlock (int n, int *block);


// Did not wrap:  void ReadXYZCoords (vtkFloatArray *coords);


// Did not wrap:  void ReadBinaryCellTopology (vtkIntArray *material, int *types, vtkIdTypeArray *listcells);


// Did not wrap:  void ReadASCIICellTopology (vtkIntArray *material, vtkUnstructuredGrid *output);


// Did not wrap:  vtkAVSucdReader (const vtkAVSucdReader &);


// Did not wrap:  void vtkAVSucdReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkAVSucdReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkAVSucdReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkAVSucdReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkAVSucdReader();


};

} // end vtkIO
