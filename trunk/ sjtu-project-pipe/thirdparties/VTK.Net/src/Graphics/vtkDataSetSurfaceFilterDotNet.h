#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkDataSetSurfaceFilter : public vtkPolyDataAlgorithm
{

public:
// Did not wrap:  static vtkDataSetSurfaceFilter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkDataSetSurfaceFilter *NewInstance ();
  vtkDataSetSurfaceFilter^ NewInstance();


  // vtkDataSetSurfaceFilter *SafeDownCast (vtkObject* o);
  static vtkDataSetSurfaceFilter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetUseStrips (int );
/// <summary>
/// <para>When input is structured data, this flag will generate faces with triangle strips.  This should render faster and use less memory, but no cell data is copied.  By default, UseStrips is Off.</para>
/// </summary>
  void SetUseStrips(int arg0);


  // int GetUseStrips ();
/// <summary>
/// <para>When input is structured data, this flag will generate faces with triangle strips.  This should render faster and use less memory, but no cell data is copied.  By default, UseStrips is Off.</para>
/// </summary>
  int GetUseStrips();


  // void UseStripsOn ();
/// <summary>
/// <para>When input is structured data, this flag will generate faces with triangle strips.  This should render faster and use less memory, but no cell data is copied.  By default, UseStrips is Off.</para>
/// </summary>
  void UseStripsOn();


  // void UseStripsOff ();
/// <summary>
/// <para>When input is structured data, this flag will generate faces with triangle strips.  This should render faster and use less memory, but no cell data is copied.  By default, UseStrips is Off.</para>
/// </summary>
  void UseStripsOff();


  // void SetPieceInvariant (int );
/// <summary>
/// <para>If PieceInvariant is true, vtkDataSetSurfaceFilter requests 1 ghost level from input in order to remove internal surface that are between processes. False by default.</para>
/// </summary>
  void SetPieceInvariant(int arg0);


  // int GetPieceInvariant ();
/// <summary>
/// <para>If PieceInvariant is true, vtkDataSetSurfaceFilter requests 1 ghost level from input in order to remove internal surface that are between processes. False by default.</para>
/// </summary>
  int GetPieceInvariant();


// Did not wrap:  vtkDataSetSurfaceFilter ();


// Did not wrap:  ~vtkDataSetSurfaceFilter ();


// Did not wrap:  virtual int RequestUpdateExtent (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  int StructuredExecute (vtkDataSet *input, vtkPolyData *output, int *ext, vtkInformation *inInfo);


// Did not wrap:  int UnstructuredGridExecute (vtkDataSet *input, vtkPolyData *output);


// Did not wrap:  int DataSetExecute (vtkDataSet *input, vtkPolyData *output);


// Did not wrap:  void ExecuteFaceStrips (vtkDataSet *input, vtkPolyData *output, int maxFlag, int *ext, int aAxis, int bAxis, int cAxis, vtkInformation *inInfo);


// Did not wrap:  void ExecuteFaceQuads (vtkDataSet *input, vtkPolyData *output, int maxFlag, int *ext, int aAxis, int bAxis, int cAxis, vtkInformation *inInfo);


// Did not wrap:  void InitializeQuadHash (vtkIdType numPoints);


// Did not wrap:  void DeleteQuadHash ();


// Did not wrap:  void InsertQuadInHash (vtkIdType a, vtkIdType b, vtkIdType c, vtkIdType d, vtkIdType sourceId);


// Did not wrap:  void InsertTriInHash (vtkIdType a, vtkIdType b, vtkIdType c, vtkIdType sourceId);


// Did not wrap:  void InsertPentaInHash (vtkIdType a, vtkIdType b, vtkIdType c, vtkIdType d, vtkIdType e, vtkIdType sourceId);


// Did not wrap:  void InsertHexInHash (vtkIdType a, vtkIdType b, vtkIdType c, vtkIdType d, vtkIdType e, vtkIdType f, vtkIdType sourceId);


// Did not wrap:  void InitQuadHashTraversal ();


// Did not wrap:  vtkFastGeomQuad *GetNextVisibleQuadFromHash ();


// Did not wrap:  vtkIdType GetOutputPointId (vtkIdType inPtId, vtkDataSet *input, vtkPoints *outPts, vtkPointData *outPD);


// Did not wrap:  void InitFastGeomQuadAllocation (int numberOfCells);


// Did not wrap:  vtkFastGeomQuad *NewFastGeomQuad ();


// Did not wrap:  void DeleteAllFastGeomQuads ();


// Did not wrap:  vtkDataSetSurfaceFilter (const vtkDataSetSurfaceFilter &);


// Did not wrap:  void vtkDataSetSurfaceFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkDataSetSurfaceFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkDataSetSurfaceFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkDataSetSurfaceFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkDataSetSurfaceFilter();


};

} // end vtkGraphics
