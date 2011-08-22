#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkSplineFilter : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkSplineFilter *NewInstance ();
  vtkSplineFilter^ NewInstance();


  // vtkSplineFilter *SafeDownCast (vtkObject* o);
  static vtkSplineFilter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkSplineFilter *New ();


  // void SetMaximumNumberOfSubdivisions (int );
/// <summary>
/// <para>Set the maximum number of subdivisions that are created for each polyline.</para>
/// </summary>
  void SetMaximumNumberOfSubdivisions(int arg0);


  // int GetMaximumNumberOfSubdivisionsMinValue ();
/// <summary>
/// <para>Set the maximum number of subdivisions that are created for each polyline.</para>
/// </summary>
  int GetMaximumNumberOfSubdivisionsMinValue();


  // int GetMaximumNumberOfSubdivisionsMaxValue ();
/// <summary>
/// <para>Set the maximum number of subdivisions that are created for each polyline.</para>
/// </summary>
  int GetMaximumNumberOfSubdivisionsMaxValue();


  // int GetMaximumNumberOfSubdivisions ();
/// <summary>
/// <para>Set the maximum number of subdivisions that are created for each polyline.</para>
/// </summary>
  int GetMaximumNumberOfSubdivisions();


  // void SetSubdivide (int );
/// <summary>
/// <para>Specify how the number of subdivisions is determined.</para>
/// </summary>
  void SetSubdivide(int arg0);


  // int GetSubdivideMinValue ();
/// <summary>
/// <para>Specify how the number of subdivisions is determined.</para>
/// </summary>
  int GetSubdivideMinValue();


  // int GetSubdivideMaxValue ();
/// <summary>
/// <para>Specify how the number of subdivisions is determined.</para>
/// </summary>
  int GetSubdivideMaxValue();


  // int GetSubdivide ();
/// <summary>
/// <para>Specify how the number of subdivisions is determined.</para>
/// </summary>
  int GetSubdivide();


  // void SetSubdivideToSpecified ();this SetSubdivide VTK_SUBDIVIDE_SPECIFIED 
/// <summary>
/// <para>Specify how the number of subdivisions is determined.</para>
/// </summary>
  void SetSubdivideToSpecified();


  // void SetSubdivideToLength ();this SetSubdivide VTK_SUBDIVIDE_LENGTH 
/// <summary>
/// <para>Specify how the number of subdivisions is determined.</para>
/// </summary>
  void SetSubdivideToLength();


  // const char *GetSubdivideAsString ();
/// <summary>
/// <para>Specify how the number of subdivisions is determined.</para>
/// </summary>
  System::String^ GetSubdivideAsString();


  // void SetNumberOfSubdivisions (int );
/// <summary>
/// <para>Set the number of subdivisions that are created for the polyline. This method only has effect if Subdivisions is set to SetSubdivisionsToSpecify().</para>
/// </summary>
  void SetNumberOfSubdivisions(int arg0);


  // int GetNumberOfSubdivisionsMinValue ();
/// <summary>
/// <para>Set the number of subdivisions that are created for the polyline. This method only has effect if Subdivisions is set to SetSubdivisionsToSpecify().</para>
/// </summary>
  int GetNumberOfSubdivisionsMinValue();


  // int GetNumberOfSubdivisionsMaxValue ();
/// <summary>
/// <para>Set the number of subdivisions that are created for the polyline. This method only has effect if Subdivisions is set to SetSubdivisionsToSpecify().</para>
/// </summary>
  int GetNumberOfSubdivisionsMaxValue();


  // int GetNumberOfSubdivisions ();
/// <summary>
/// <para>Set the number of subdivisions that are created for the polyline. This method only has effect if Subdivisions is set to SetSubdivisionsToSpecify().</para>
/// </summary>
  int GetNumberOfSubdivisions();


  // void SetLength (double );
/// <summary>
/// <para>Control the number of subdivisions that are created for the polyline based on an absolute length. The length of the spline is divided by this length to determine the number of subdivisions.</para>
/// </summary>
  void SetLength(double arg0);


  // double GetLengthMinValue ();
/// <summary>
/// <para>Control the number of subdivisions that are created for the polyline based on an absolute length. The length of the spline is divided by this length to determine the number of subdivisions.</para>
/// </summary>
  double GetLengthMinValue();


  // double GetLengthMaxValue ();
/// <summary>
/// <para>Control the number of subdivisions that are created for the polyline based on an absolute length. The length of the spline is divided by this length to determine the number of subdivisions.</para>
/// </summary>
  double GetLengthMaxValue();


  // double GetLength ();
/// <summary>
/// <para>Control the number of subdivisions that are created for the polyline based on an absolute length. The length of the spline is divided by this length to determine the number of subdivisions.</para>
/// </summary>
  double GetLength();


  // virtual void SetSpline (vtkSpline *);
/// <summary>
/// <para>Specify an instance of vtkSpline to use to perform the interpolation.</para>
/// </summary>
  void SetSpline(vtkSpline^ arg0);


  // vtkSpline *GetSpline ();
/// <summary>
/// <para>Specify an instance of vtkSpline to use to perform the interpolation.</para>
/// </summary>
  vtkSpline^ GetSpline();


  // void SetGenerateTCoords (int );
/// <summary>
/// <para>Control whether and how texture coordinates are produced. This is useful for striping the output polyline. The texture coordinates can be generated in three ways: a normalized (0,1) generation; based on the length (divided by the texture length); and by using the input scalar values.</para>
/// </summary>
  void SetGenerateTCoords(int arg0);


  // int GetGenerateTCoordsMinValue ();
/// <summary>
/// <para>Control whether and how texture coordinates are produced. This is useful for striping the output polyline. The texture coordinates can be generated in three ways: a normalized (0,1) generation; based on the length (divided by the texture length); and by using the input scalar values.</para>
/// </summary>
  int GetGenerateTCoordsMinValue();


  // int GetGenerateTCoordsMaxValue ();
/// <summary>
/// <para>Control whether and how texture coordinates are produced. This is useful for striping the output polyline. The texture coordinates can be generated in three ways: a normalized (0,1) generation; based on the length (divided by the texture length); and by using the input scalar values.</para>
/// </summary>
  int GetGenerateTCoordsMaxValue();


  // int GetGenerateTCoords ();
/// <summary>
/// <para>Control whether and how texture coordinates are produced. This is useful for striping the output polyline. The texture coordinates can be generated in three ways: a normalized (0,1) generation; based on the length (divided by the texture length); and by using the input scalar values.</para>
/// </summary>
  int GetGenerateTCoords();


  // void SetGenerateTCoordsToOff ();this SetGenerateTCoords VTK_TCOORDS_OFF 
/// <summary>
/// <para>Control whether and how texture coordinates are produced. This is useful for striping the output polyline. The texture coordinates can be generated in three ways: a normalized (0,1) generation; based on the length (divided by the texture length); and by using the input scalar values.</para>
/// </summary>
  void SetGenerateTCoordsToOff();


  // void SetGenerateTCoordsToNormalizedLength ();this SetGenerateTCoords VTK_TCOORDS_FROM_NORMALIZED_LENGTH 
/// <summary>
/// <para>Control whether and how texture coordinates are produced. This is useful for striping the output polyline. The texture coordinates can be generated in three ways: a normalized (0,1) generation; based on the length (divided by the texture length); and by using the input scalar values.</para>
/// </summary>
  void SetGenerateTCoordsToNormalizedLength();


  // void SetGenerateTCoordsToUseLength ();this SetGenerateTCoords VTK_TCOORDS_FROM_LENGTH 
/// <summary>
/// <para>Control whether and how texture coordinates are produced. This is useful for striping the output polyline. The texture coordinates can be generated in three ways: a normalized (0,1) generation; based on the length (divided by the texture length); and by using the input scalar values.</para>
/// </summary>
  void SetGenerateTCoordsToUseLength();


  // void SetGenerateTCoordsToUseScalars ();this SetGenerateTCoords VTK_TCOORDS_FROM_SCALARS 
/// <summary>
/// <para>Control whether and how texture coordinates are produced. This is useful for striping the output polyline. The texture coordinates can be generated in three ways: a normalized (0,1) generation; based on the length (divided by the texture length); and by using the input scalar values.</para>
/// </summary>
  void SetGenerateTCoordsToUseScalars();


  // const char *GetGenerateTCoordsAsString ();
/// <summary>
/// <para>Control whether and how texture coordinates are produced. This is useful for striping the output polyline. The texture coordinates can be generated in three ways: a normalized (0,1) generation; based on the length (divided by the texture length); and by using the input scalar values.</para>
/// </summary>
  System::String^ GetGenerateTCoordsAsString();


  // void SetTextureLength (double );
/// <summary>
/// <para>Control the conversion of units during the texture coordinates calculation. The TextureLength indicates what length (whether  calculated from scalars or length) is mapped to the [0,1) texture space.</para>
/// </summary>
  void SetTextureLength(double arg0);


  // double GetTextureLengthMinValue ();
/// <summary>
/// <para>Control the conversion of units during the texture coordinates calculation. The TextureLength indicates what length (whether  calculated from scalars or length) is mapped to the [0,1) texture space.</para>
/// </summary>
  double GetTextureLengthMinValue();


  // double GetTextureLengthMaxValue ();
/// <summary>
/// <para>Control the conversion of units during the texture coordinates calculation. The TextureLength indicates what length (whether  calculated from scalars or length) is mapped to the [0,1) texture space.</para>
/// </summary>
  double GetTextureLengthMaxValue();


  // double GetTextureLength ();
/// <summary>
/// <para>Control the conversion of units during the texture coordinates calculation. The TextureLength indicates what length (whether  calculated from scalars or length) is mapped to the [0,1) texture space.</para>
/// </summary>
  double GetTextureLength();


// Did not wrap:  vtkSplineFilter ();


// Did not wrap:  ~vtkSplineFilter ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  int GeneratePoints (vtkIdType offset, vtkIdType npts, vtkIdType *pts, vtkPoints *inPts, vtkPoints *newPts, vtkPointData *pd, vtkPointData *outPD, int genTCoords, vtkFloatArray *newTCoords);


// Did not wrap:  void GenerateLine (vtkIdType offset, vtkIdType numGenPts, vtkIdType inCellId, vtkCellData *cd, vtkCellData *outCD, vtkCellArray *newLines);


// Did not wrap:  vtkSplineFilter (const vtkSplineFilter &);


// Did not wrap:  void vtkSplineFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkSplineFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkSplineFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkSplineFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkSplineFilter();


};

} // end vtkGraphics
