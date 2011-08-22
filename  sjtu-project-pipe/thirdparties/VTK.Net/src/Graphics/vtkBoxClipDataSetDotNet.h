#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkBoxClipDataSet : public vtkUnstructuredGridAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkBoxClipDataSet *NewInstance ();
  vtkBoxClipDataSet^ NewInstance();


  // vtkBoxClipDataSet *SafeDownCast (vtkObject* o);
  static vtkBoxClipDataSet^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkBoxClipDataSet *New ();


  // void SetBoxClip (double xmin, double xmax, double ymin, double ymax, double zmin, double zmax);
  void SetBoxClip(double xmin, double xmax, double ymin, double ymax, double zmin, double zmax);


  // void SetBoxClip (const double *n0, const double *o0, const double *n1, const double *o1, const double *n2, const double *o2, const double *n3, const double *o3, const double *n4, const double *o4, const double *n5, const double *o5);
  void SetBoxClip(array<double>^ n0, array<double>^ o0, array<double>^ n1, array<double>^ o1, array<double>^ n2, array<double>^ o2, array<double>^ n3, array<double>^ o3, array<double>^ n4, array<double>^ o4, array<double>^ n5, array<double>^ o5);


  // void SetGenerateClipScalars (int );
/// <summary>
/// <para>If this flag is enabled, then the output scalar values will be  interpolated, and not the input scalar data.</para>
/// </summary>
  void SetGenerateClipScalars(int arg0);


  // int GetGenerateClipScalars ();
/// <summary>
/// <para>If this flag is enabled, then the output scalar values will be  interpolated, and not the input scalar data.</para>
/// </summary>
  int GetGenerateClipScalars();


  // void GenerateClipScalarsOn ();
/// <summary>
/// <para>If this flag is enabled, then the output scalar values will be  interpolated, and not the input scalar data.</para>
/// </summary>
  void GenerateClipScalarsOn();


  // void GenerateClipScalarsOff ();
/// <summary>
/// <para>If this flag is enabled, then the output scalar values will be  interpolated, and not the input scalar data.</para>
/// </summary>
  void GenerateClipScalarsOff();


  // void SetGenerateClippedOutput (int );
/// <summary>
/// <para>Control whether a second output is generated. The second output contains the polygonal data that's been clipped away.</para>
/// </summary>
  void SetGenerateClippedOutput(int arg0);


  // int GetGenerateClippedOutput ();
/// <summary>
/// <para>Control whether a second output is generated. The second output contains the polygonal data that's been clipped away.</para>
/// </summary>
  int GetGenerateClippedOutput();


  // void GenerateClippedOutputOn ();
/// <summary>
/// <para>Control whether a second output is generated. The second output contains the polygonal data that's been clipped away.</para>
/// </summary>
  void GenerateClippedOutputOn();


  // void GenerateClippedOutputOff ();
/// <summary>
/// <para>Control whether a second output is generated. The second output contains the polygonal data that's been clipped away.</para>
/// </summary>
  void GenerateClippedOutputOff();


  // vtkUnstructuredGrid *GetClippedOutput ();
/// <summary>
/// <para>Return the Clipped output.</para>
/// </summary>
  vtkUnstructuredGrid^ GetClippedOutput();


  // virtual int GetNumberOfOutputs ();
/// <summary>
/// <para>Return the Clipped output.</para>
/// </summary>
  int GetNumberOfOutputs();


  // void SetLocator (vtkPointLocator *locator);
/// <summary>
/// <para>Specify a spatial locator for merging points. By default, an instance of vtkMergePoints is used.</para>
/// </summary>
  void SetLocator(vtkPointLocator^ locator);


  // vtkPointLocator *GetLocator ();
/// <summary>
/// <para>Specify a spatial locator for merging points. By default, an instance of vtkMergePoints is used.</para>
/// </summary>
  vtkPointLocator^ GetLocator();


  // void CreateDefaultLocator ();
/// <summary>
/// <para>Create default locator. Used to create one when none is specified. The  locator is used to merge coincident points.</para>
/// </summary>
  void CreateDefaultLocator();


  // unsigned long GetMTime ();
/// <summary>
/// <para>Return the mtime also considering the locator.</para>
/// </summary>
  unsigned long GetMTime();


  // int unsigned GetOrientation ();
  unsigned int GetOrientation();


  // void SetOrientation (unsigned int );
  void SetOrientation(unsigned int arg0);


  // void MinEdgeF (const unsigned int *id_v, const vtkIdType *cellIds, unsigned int *edgF);
  void MinEdgeF(array<unsigned int>^ id_v, array<int>^ cellIds, array<unsigned int>^ arg2);


  // void PyramidToTetra (const vtkIdType *pyramId, const vtkIdType *cellIds, vtkCellArray *newCellArray);
  void PyramidToTetra(array<int>^ pyramId, array<int>^ cellIds, vtkCellArray^ newCellArray);


  // void WedgeToTetra (const vtkIdType *wedgeId, const vtkIdType *cellIds, vtkCellArray *newCellArray);
  void WedgeToTetra(array<int>^ wedgeId, array<int>^ cellIds, vtkCellArray^ newCellArray);


  // void CellGrid (vtkIdType typeobj, vtkIdType npts, const vtkIdType *cellIds, vtkCellArray *newCellArray);
  void CellGrid(int typeobj, int npts, array<int>^ cellIds, vtkCellArray^ newCellArray);


  // void CreateTetra (vtkIdType npts, const vtkIdType *cellIds, vtkCellArray *newCellArray);
  void CreateTetra(int npts, array<int>^ cellIds, vtkCellArray^ newCellArray);


  // void ClipBox (vtkPoints *newPoints, vtkGenericCell *cell, vtkPointLocator *locator, vtkCellArray *tets, vtkPointData *inPD, vtkPointData *outPD, vtkCellData *inCD, vtkIdType cellId, vtkCellData *outCD);
  void ClipBox(vtkPoints^ newPoints, vtkGenericCell^ cell, vtkPointLocator^ locator, vtkCellArray^ tets, vtkPointData^ inPD, vtkPointData^ outPD, vtkCellData^ inCD, int cellId, vtkCellData^ outCD);


  // void ClipHexahedron (vtkPoints *newPoints, vtkGenericCell *cell, vtkPointLocator *locator, vtkCellArray *tets, vtkPointData *inPD, vtkPointData *outPD, vtkCellData *inCD, vtkIdType cellId, vtkCellData *outCD);
  void ClipHexahedron(vtkPoints^ newPoints, vtkGenericCell^ cell, vtkPointLocator^ locator, vtkCellArray^ tets, vtkPointData^ inPD, vtkPointData^ outPD, vtkCellData^ inCD, int cellId, vtkCellData^ outCD);


// Did not wrap:  void ClipBoxInOut (vtkPoints *newPoints, vtkGenericCell *cell, vtkPointLocator *locator, vtkCellArray *tets, vtkPointData *inPD, vtkPointData *outPD, vtkCellData *inCD, vtkIdType cellId, vtkCellData *outCD);


// Did not wrap:  void ClipHexahedronInOut (vtkPoints *newPoints, vtkGenericCell *cell, vtkPointLocator *locator, vtkCellArray *tets, vtkPointData *inPD, vtkPointData *outPD, vtkCellData *inCD, vtkIdType cellId, vtkCellData *outCD);


  // void ClipBox2D (vtkPoints *newPoints, vtkGenericCell *cell, vtkPointLocator *locator, vtkCellArray *tets, vtkPointData *inPD, vtkPointData *outPD, vtkCellData *inCD, vtkIdType cellId, vtkCellData *outCD);
  void ClipBox2D(vtkPoints^ newPoints, vtkGenericCell^ cell, vtkPointLocator^ locator, vtkCellArray^ tets, vtkPointData^ inPD, vtkPointData^ outPD, vtkCellData^ inCD, int cellId, vtkCellData^ outCD);


// Did not wrap:  void ClipBoxInOut2D (vtkPoints *newPoints, vtkGenericCell *cell, vtkPointLocator *locator, vtkCellArray *tets, vtkPointData *inPD, vtkPointData *outPD, vtkCellData *inCD, vtkIdType cellId, vtkCellData *outCD);


  // void ClipHexahedron2D (vtkPoints *newPoints, vtkGenericCell *cell, vtkPointLocator *locator, vtkCellArray *tets, vtkPointData *inPD, vtkPointData *outPD, vtkCellData *inCD, vtkIdType cellId, vtkCellData *outCD);
  void ClipHexahedron2D(vtkPoints^ newPoints, vtkGenericCell^ cell, vtkPointLocator^ locator, vtkCellArray^ tets, vtkPointData^ inPD, vtkPointData^ outPD, vtkCellData^ inCD, int cellId, vtkCellData^ outCD);


// Did not wrap:  void ClipHexahedronInOut2D (vtkPoints *newPoints, vtkGenericCell *cell, vtkPointLocator *locator, vtkCellArray *tets, vtkPointData *inPD, vtkPointData *outPD, vtkCellData *inCD, vtkIdType cellId, vtkCellData *outCD);


  // void ClipBox1D (vtkPoints *newPoints, vtkGenericCell *cell, vtkPointLocator *locator, vtkCellArray *lines, vtkPointData *inPD, vtkPointData *outPD, vtkCellData *inCD, vtkIdType cellId, vtkCellData *outCD);
  void ClipBox1D(vtkPoints^ newPoints, vtkGenericCell^ cell, vtkPointLocator^ locator, vtkCellArray^ lines, vtkPointData^ inPD, vtkPointData^ outPD, vtkCellData^ inCD, int cellId, vtkCellData^ outCD);


// Did not wrap:  void ClipBoxInOut1D (vtkPoints *newPoints, vtkGenericCell *cell, vtkPointLocator *locator, vtkCellArray *lines, vtkPointData *inPD, vtkPointData *outPD, vtkCellData *inCD, vtkIdType cellId, vtkCellData *outCD);


  // void ClipHexahedron1D (vtkPoints *newPoints, vtkGenericCell *cell, vtkPointLocator *locator, vtkCellArray *lines, vtkPointData *inPD, vtkPointData *outPD, vtkCellData *inCD, vtkIdType cellId, vtkCellData *outCD);
  void ClipHexahedron1D(vtkPoints^ newPoints, vtkGenericCell^ cell, vtkPointLocator^ locator, vtkCellArray^ lines, vtkPointData^ inPD, vtkPointData^ outPD, vtkCellData^ inCD, int cellId, vtkCellData^ outCD);


// Did not wrap:  void ClipHexahedronInOut1D (vtkPoints *newPoints, vtkGenericCell *cell, vtkPointLocator *locator, vtkCellArray *lines, vtkPointData *inPD, vtkPointData *outPD, vtkCellData *inCD, vtkIdType cellId, vtkCellData *outCD);


  // void ClipBox0D (vtkGenericCell *cell, vtkPointLocator *locator, vtkCellArray *verts, vtkPointData *inPD, vtkPointData *outPD, vtkCellData *inCD, vtkIdType cellId, vtkCellData *outCD);
  void ClipBox0D(vtkGenericCell^ cell, vtkPointLocator^ locator, vtkCellArray^ verts, vtkPointData^ inPD, vtkPointData^ outPD, vtkCellData^ inCD, int cellId, vtkCellData^ outCD);


// Did not wrap:  void ClipBoxInOut0D (vtkGenericCell *cell, vtkPointLocator *locator, vtkCellArray *verts, vtkPointData *inPD, vtkPointData *outPD, vtkCellData *inCD, vtkIdType cellId, vtkCellData *outCD);


  // void ClipHexahedron0D (vtkGenericCell *cell, vtkPointLocator *locator, vtkCellArray *verts, vtkPointData *inPD, vtkPointData *outPD, vtkCellData *inCD, vtkIdType cellId, vtkCellData *outCD);
  void ClipHexahedron0D(vtkGenericCell^ cell, vtkPointLocator^ locator, vtkCellArray^ verts, vtkPointData^ inPD, vtkPointData^ outPD, vtkCellData^ inCD, int cellId, vtkCellData^ outCD);


// Did not wrap:  void ClipHexahedronInOut0D (vtkGenericCell *cell, vtkPointLocator *locator, vtkCellArray *verts, vtkPointData *inPD, vtkPointData *outPD, vtkCellData *inCD, vtkIdType cellId, vtkCellData *outCD);


// Did not wrap:  vtkBoxClipDataSet ();


// Did not wrap:  ~vtkBoxClipDataSet ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkBoxClipDataSet (const vtkBoxClipDataSet &);


// Did not wrap:  void vtkBoxClipDataSet 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkBoxClipDataSet(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkBoxClipDataSet(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkBoxClipDataSet();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkBoxClipDataSet();


};

} // end vtkGraphics
