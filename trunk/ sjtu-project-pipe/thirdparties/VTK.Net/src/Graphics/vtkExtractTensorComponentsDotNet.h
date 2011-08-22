#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkExtractTensorComponents : public vtkDataSetAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkExtractTensorComponents *NewInstance ();
  vtkExtractTensorComponents^ NewInstance();


  // vtkExtractTensorComponents *SafeDownCast (vtkObject* o);
  static vtkExtractTensorComponents^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkExtractTensorComponents *New ();


  // void SetPassTensorsToOutput (int );
/// <summary>
/// <para>Boolean controls whether tensor data is passed through to output.</para>
/// </summary>
  void SetPassTensorsToOutput(int arg0);


  // int GetPassTensorsToOutput ();
/// <summary>
/// <para>Boolean controls whether tensor data is passed through to output.</para>
/// </summary>
  int GetPassTensorsToOutput();


  // void PassTensorsToOutputOn ();
/// <summary>
/// <para>Boolean controls whether tensor data is passed through to output.</para>
/// </summary>
  void PassTensorsToOutputOn();


  // void PassTensorsToOutputOff ();
/// <summary>
/// <para>Boolean controls whether tensor data is passed through to output.</para>
/// </summary>
  void PassTensorsToOutputOff();


  // void SetExtractScalars (int );
/// <summary>
/// <para>Boolean controls whether scalar data is extracted from tensor.</para>
/// </summary>
  void SetExtractScalars(int arg0);


  // int GetExtractScalars ();
/// <summary>
/// <para>Boolean controls whether scalar data is extracted from tensor.</para>
/// </summary>
  int GetExtractScalars();


  // void ExtractScalarsOn ();
/// <summary>
/// <para>Boolean controls whether scalar data is extracted from tensor.</para>
/// </summary>
  void ExtractScalarsOn();


  // void ExtractScalarsOff ();
/// <summary>
/// <para>Boolean controls whether scalar data is extracted from tensor.</para>
/// </summary>
  void ExtractScalarsOff();


  // void SetScalarComponents (int , int );
/// <summary>
/// <para>Specify the (row,column) tensor component to extract as a scalar.</para>
/// </summary>
  void SetScalarComponents(int arg0, int arg1);


  // void SetScalarComponents (int  a[2]);
/// <summary>
/// <para>Specify the (row,column) tensor component to extract as a scalar.</para>
/// </summary>
  void SetScalarComponents(array<int>^ a);


  // int  *GetScalarComponents ();
/// <summary>
/// <para>Specify the (row,column) tensor component to extract as a scalar.</para>
/// </summary>
  array<int>^ GetScalarComponents();


  // void SetScalarMode (int );
/// <summary>
/// <para>Specify how to extract the scalar. You can extract it as one of the components of the tensor, as effective stress, or as the determinant of the tensor. If you extract a component make sure that you set the ScalarComponents ivar.</para>
/// </summary>
  void SetScalarMode(int arg0);


  // int GetScalarMode ();
/// <summary>
/// <para>Specify how to extract the scalar. You can extract it as one of the components of the tensor, as effective stress, or as the determinant of the tensor. If you extract a component make sure that you set the ScalarComponents ivar.</para>
/// </summary>
  int GetScalarMode();


  // void SetScalarModeToComponent ();this SetScalarMode VTK_EXTRACT_COMPONENT 
/// <summary>
/// <para>Specify how to extract the scalar. You can extract it as one of the components of the tensor, as effective stress, or as the determinant of the tensor. If you extract a component make sure that you set the ScalarComponents ivar.</para>
/// </summary>
  void SetScalarModeToComponent();


  // void SetScalarModeToEffectiveStress ();this SetScalarMode VTK_EXTRACT_EFFECTIVE_STRESS 
/// <summary>
/// <para>Specify how to extract the scalar. You can extract it as one of the components of the tensor, as effective stress, or as the determinant of the tensor. If you extract a component make sure that you set the ScalarComponents ivar.</para>
/// </summary>
  void SetScalarModeToEffectiveStress();


  // void SetScalarModeToDeterminant ();this SetScalarMode VTK_EXTRACT_DETERMINANT 
/// <summary>
/// <para>Specify how to extract the scalar. You can extract it as one of the components of the tensor, as effective stress, or as the determinant of the tensor. If you extract a component make sure that you set the ScalarComponents ivar.</para>
/// </summary>
  void SetScalarModeToDeterminant();


  // void ScalarIsComponent ();this SetScalarMode VTK_EXTRACT_COMPONENT 
/// <summary>
/// <para>Specify how to extract the scalar. You can extract it as one of the components of the tensor, as effective stress, or as the determinant of the tensor. If you extract a component make sure that you set the ScalarComponents ivar.</para>
/// </summary>
  void ScalarIsComponent();


  // void ScalarIsEffectiveStress ();this SetScalarMode VTK_EXTRACT_EFFECTIVE_STRESS 
/// <summary>
/// <para>Specify how to extract the scalar. You can extract it as one of the components of the tensor, as effective stress, or as the determinant of the tensor. If you extract a component make sure that you set the ScalarComponents ivar.</para>
/// </summary>
  void ScalarIsEffectiveStress();


  // void ScalarIsDeterminant ();this SetScalarMode VTK_EXTRACT_DETERMINANT 
/// <summary>
/// <para>Specify how to extract the scalar. You can extract it as one of the components of the tensor, as effective stress, or as the determinant of the tensor. If you extract a component make sure that you set the ScalarComponents ivar.</para>
/// </summary>
  void ScalarIsDeterminant();


  // void SetExtractVectors (int );
/// <summary>
/// <para>Boolean controls whether vector data is extracted from tensor.</para>
/// </summary>
  void SetExtractVectors(int arg0);


  // int GetExtractVectors ();
/// <summary>
/// <para>Boolean controls whether vector data is extracted from tensor.</para>
/// </summary>
  int GetExtractVectors();


  // void ExtractVectorsOn ();
/// <summary>
/// <para>Boolean controls whether vector data is extracted from tensor.</para>
/// </summary>
  void ExtractVectorsOn();


  // void ExtractVectorsOff ();
/// <summary>
/// <para>Boolean controls whether vector data is extracted from tensor.</para>
/// </summary>
  void ExtractVectorsOff();


  // void SetVectorComponents (int , int , int , int , int , int );
/// <summary>
/// <para>Specify the ((row,column)0,(row,column)1,(row,column)2) tensor components to extract as a vector.</para>
/// </summary>
  void SetVectorComponents(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5);


  // void SetVectorComponents (int  a[6]);
/// <summary>
/// <para>Specify the ((row,column)0,(row,column)1,(row,column)2) tensor components to extract as a vector.</para>
/// </summary>
  void SetVectorComponents(array<int>^ a);


  // int  *GetVectorComponents ();
/// <summary>
/// <para>Specify the ((row,column)0,(row,column)1,(row,column)2) tensor components to extract as a vector.</para>
/// </summary>
  array<int>^ GetVectorComponents();


  // void SetExtractNormals (int );
/// <summary>
/// <para>Boolean controls whether normal data is extracted from tensor.</para>
/// </summary>
  void SetExtractNormals(int arg0);


  // int GetExtractNormals ();
/// <summary>
/// <para>Boolean controls whether normal data is extracted from tensor.</para>
/// </summary>
  int GetExtractNormals();


  // void ExtractNormalsOn ();
/// <summary>
/// <para>Boolean controls whether normal data is extracted from tensor.</para>
/// </summary>
  void ExtractNormalsOn();


  // void ExtractNormalsOff ();
/// <summary>
/// <para>Boolean controls whether normal data is extracted from tensor.</para>
/// </summary>
  void ExtractNormalsOff();


  // void SetNormalizeNormals (int );
/// <summary>
/// <para>Boolean controls whether normal vector is converted to unit normal after extraction.</para>
/// </summary>
  void SetNormalizeNormals(int arg0);


  // int GetNormalizeNormals ();
/// <summary>
/// <para>Boolean controls whether normal vector is converted to unit normal after extraction.</para>
/// </summary>
  int GetNormalizeNormals();


  // void NormalizeNormalsOn ();
/// <summary>
/// <para>Boolean controls whether normal vector is converted to unit normal after extraction.</para>
/// </summary>
  void NormalizeNormalsOn();


  // void NormalizeNormalsOff ();
/// <summary>
/// <para>Boolean controls whether normal vector is converted to unit normal after extraction.</para>
/// </summary>
  void NormalizeNormalsOff();


  // void SetNormalComponents (int , int , int , int , int , int );
/// <summary>
/// <para>Specify the ((row,column)0,(row,column)1,(row,column)2) tensor components to extract as a vector.</para>
/// </summary>
  void SetNormalComponents(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5);


  // void SetNormalComponents (int  a[6]);
/// <summary>
/// <para>Specify the ((row,column)0,(row,column)1,(row,column)2) tensor components to extract as a vector.</para>
/// </summary>
  void SetNormalComponents(array<int>^ a);


  // int  *GetNormalComponents ();
/// <summary>
/// <para>Specify the ((row,column)0,(row,column)1,(row,column)2) tensor components to extract as a vector.</para>
/// </summary>
  array<int>^ GetNormalComponents();


  // void SetExtractTCoords (int );
/// <summary>
/// <para>Boolean controls whether texture coordinates are extracted from tensor.</para>
/// </summary>
  void SetExtractTCoords(int arg0);


  // int GetExtractTCoords ();
/// <summary>
/// <para>Boolean controls whether texture coordinates are extracted from tensor.</para>
/// </summary>
  int GetExtractTCoords();


  // void ExtractTCoordsOn ();
/// <summary>
/// <para>Boolean controls whether texture coordinates are extracted from tensor.</para>
/// </summary>
  void ExtractTCoordsOn();


  // void ExtractTCoordsOff ();
/// <summary>
/// <para>Boolean controls whether texture coordinates are extracted from tensor.</para>
/// </summary>
  void ExtractTCoordsOff();


  // void SetNumberOfTCoords (int );
/// <summary>
/// <para>Set the dimension of the texture coordinates to extract.</para>
/// </summary>
  void SetNumberOfTCoords(int arg0);


  // int GetNumberOfTCoordsMinValue ();
/// <summary>
/// <para>Set the dimension of the texture coordinates to extract.</para>
/// </summary>
  int GetNumberOfTCoordsMinValue();


  // int GetNumberOfTCoordsMaxValue ();
/// <summary>
/// <para>Set the dimension of the texture coordinates to extract.</para>
/// </summary>
  int GetNumberOfTCoordsMaxValue();


  // int GetNumberOfTCoords ();
/// <summary>
/// <para>Set the dimension of the texture coordinates to extract.</para>
/// </summary>
  int GetNumberOfTCoords();


  // void SetTCoordComponents (int , int , int , int , int , int );
/// <summary>
/// <para>Specify the ((row,column)0,(row,column)1,(row,column)2) tensor components to extract as a vector. Up to NumberOfTCoords components are extracted.</para>
/// </summary>
  void SetTCoordComponents(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5);


  // void SetTCoordComponents (int  a[6]);
/// <summary>
/// <para>Specify the ((row,column)0,(row,column)1,(row,column)2) tensor components to extract as a vector. Up to NumberOfTCoords components are extracted.</para>
/// </summary>
  void SetTCoordComponents(array<int>^ a);


  // int  *GetTCoordComponents ();
/// <summary>
/// <para>Specify the ((row,column)0,(row,column)1,(row,column)2) tensor components to extract as a vector. Up to NumberOfTCoords components are extracted.</para>
/// </summary>
  array<int>^ GetTCoordComponents();


// Did not wrap:  vtkExtractTensorComponents ();


// Did not wrap:  ~vtkExtractTensorComponents ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkExtractTensorComponents (const vtkExtractTensorComponents &);


// Did not wrap:  void vtkExtractTensorComponents 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkExtractTensorComponents(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkExtractTensorComponents(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkExtractTensorComponents();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkExtractTensorComponents();


};

} // end vtkGraphics
