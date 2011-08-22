#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkGAMBITReader : public vtkUnstructuredGridAlgorithm
{

public:
// Did not wrap:  static vtkGAMBITReader *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkGAMBITReader *NewInstance ();
  vtkGAMBITReader^ NewInstance();


  // vtkGAMBITReader *SafeDownCast (vtkObject* o);
  static vtkGAMBITReader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetFileName (char *);
/// <summary>
/// <para>Specify the file name of the GAMBIT data file to read.</para>
/// </summary>
  void SetFileName(System::String^ arg0);


  // char *GetFileName ();
/// <summary>
/// <para>Specify the file name of the GAMBIT data file to read.</para>
/// </summary>
  System::String^ GetFileName();


  // int GetNumberOfCells ();
/// <summary>
/// <para>Get the total number of cells. The number of cells is only valid after a successful read of the data file is performed.</para>
/// </summary>
  int GetNumberOfCells();


  // int GetNumberOfNodes ();
/// <summary>
/// <para>Get the total number of nodes. The number of nodes is only valid after a successful read of the data file is performed.</para>
/// </summary>
  int GetNumberOfNodes();


  // int GetNumberOfNodeFields ();
/// <summary>
/// <para>Get the number of data components at the nodes and cells.</para>
/// </summary>
  int GetNumberOfNodeFields();


  // int GetNumberOfCellFields ();
/// <summary>
/// <para>Get the number of data components at the nodes and cells.</para>
/// </summary>
  int GetNumberOfCellFields();


// Did not wrap:  vtkGAMBITReader ();


// Did not wrap:  ~vtkGAMBITReader ();


// Did not wrap:  int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  void ReadFile (vtkUnstructuredGrid *output);


// Did not wrap:  void ReadGeometry (vtkUnstructuredGrid *output);


// Did not wrap:  void ReadNodeData (vtkUnstructuredGrid *output);


// Did not wrap:  void ReadCellData (vtkUnstructuredGrid *output);


// Did not wrap:  void ReadXYZCoords (vtkDoubleArray *coords);


// Did not wrap:  void ReadCellConnectivity (vtkUnstructuredGrid *output);


// Did not wrap:  void ReadMaterialTypes (vtkUnstructuredGrid *output);


// Did not wrap:  void ReadBoundaryConditionSets (vtkUnstructuredGrid *output);


// Did not wrap:  vtkGAMBITReader (const vtkGAMBITReader &);


// Did not wrap:  void vtkGAMBITReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkGAMBITReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkGAMBITReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkGAMBITReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkGAMBITReader();


};

} // end vtkIO
