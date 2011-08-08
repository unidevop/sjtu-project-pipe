#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkWeightedTransformFilter : public vtkPointSetAlgorithm
{

public:
// Did not wrap:  static vtkWeightedTransformFilter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkWeightedTransformFilter *NewInstance ();
  vtkWeightedTransformFilter^ NewInstance();


  // vtkWeightedTransformFilter *SafeDownCast (vtkObject* o);
  static vtkWeightedTransformFilter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // unsigned long GetMTime ();
/// <summary>
/// <para>Return the MTime also considering the filter's transforms.</para>
/// </summary>
  unsigned long GetMTime();


  // void SetWeightArray (char *);
/// <summary>
/// <para>WeightArray is the string name of the DataArray in the input's FieldData that holds the weighting coefficients for each point. The filter will first look for the array in the input's PointData FieldData.  If the array isn't there, the filter looks in the input's FieldData.  The WeightArray can have tuples of any length, but must have a tuple for every point in the input data set. This array transforms points, normals, and vectors.</para>
/// </summary>
  void SetWeightArray(System::String^ arg0);


  // char *GetWeightArray ();
/// <summary>
/// <para>WeightArray is the string name of the DataArray in the input's FieldData that holds the weighting coefficients for each point. The filter will first look for the array in the input's PointData FieldData.  If the array isn't there, the filter looks in the input's FieldData.  The WeightArray can have tuples of any length, but must have a tuple for every point in the input data set. This array transforms points, normals, and vectors.</para>
/// </summary>
  System::String^ GetWeightArray();


  // void SetTransformIndexArray (char *);
/// <summary>
/// <para>TransformIndexArray is the string name of the DataArray in the input's FieldData that holds the indices for the transforms for each point. These indices are used to select which transforms each weight of the DataArray refers.  If the TransformIndexArray is not specified, the weights of each point are assumed to map directly to a transform. This DataArray must be of type UnsignedShort, which effectively limits the number of transforms to 65536 if a transform index  array is used.</para>
/// <para>The filter will first look for the array in the input's PointData FieldData.  If the array isn't there, the filter looks in the input's FieldData.  The TransformIndexArray can have tuples of any  length, but must have a tuple for every point in the input data set. This array transforms points, normals, and vectors.</para>
/// </summary>
  void SetTransformIndexArray(System::String^ arg0);


  // char *GetTransformIndexArray ();
/// <summary>
/// <para>TransformIndexArray is the string name of the DataArray in the input's FieldData that holds the indices for the transforms for each point. These indices are used to select which transforms each weight of the DataArray refers.  If the TransformIndexArray is not specified, the weights of each point are assumed to map directly to a transform. This DataArray must be of type UnsignedShort, which effectively limits the number of transforms to 65536 if a transform index  array is used.</para>
/// <para>The filter will first look for the array in the input's PointData FieldData.  If the array isn't there, the filter looks in the input's FieldData.  The TransformIndexArray can have tuples of any  length, but must have a tuple for every point in the input data set. This array transforms points, normals, and vectors.</para>
/// </summary>
  System::String^ GetTransformIndexArray();


  // void SetCellDataWeightArray (char *);
/// <summary>
/// <para>The CellDataWeightArray is analogous to the WeightArray, except for CellData.  The array is searched for first in the CellData  FieldData, then in the input's FieldData.  The data array must have a tuple for each cell.  This array is used to transform only normals and vectors.</para>
/// </summary>
  void SetCellDataWeightArray(System::String^ arg0);


  // char *GetCellDataWeightArray ();
/// <summary>
/// <para>The CellDataWeightArray is analogous to the WeightArray, except for CellData.  The array is searched for first in the CellData  FieldData, then in the input's FieldData.  The data array must have a tuple for each cell.  This array is used to transform only normals and vectors.</para>
/// </summary>
  System::String^ GetCellDataWeightArray();


  // void SetCellDataTransformIndexArray (char *);
  void SetCellDataTransformIndexArray(System::String^ arg0);


  // char *GetCellDataTransformIndexArray ();
  System::String^ GetCellDataTransformIndexArray();


  // virtual void SetTransform (vtkAbstractTransform *transform, int num);
/// <summary>
/// <para>Set or Get one of the filter's transforms. The transform number must be less than the number of transforms allocated for the object.  Setting a transform slot to NULL is equivalent to assigning an overriding weight of zero to that filter slot.</para>
/// </summary>
  void SetTransform(vtkAbstractTransform^ transform, int num);


  // virtual vtkAbstractTransform *GetTransform (int num);
/// <summary>
/// <para>Set or Get one of the filter's transforms. The transform number must be less than the number of transforms allocated for the object.  Setting a transform slot to NULL is equivalent to assigning an overriding weight of zero to that filter slot.</para>
/// </summary>
  vtkAbstractTransform^ GetTransform(int num);


  // virtual void SetNumberOfTransforms (int num);
/// <summary>
/// <para>Set the number of transforms for the filter.  References to non-existent filter numbers in the data array is equivalent to a weight of zero (i.e., no contribution of that filter or weight).  The maximum number of  transforms is limited to 65536 if transform index arrays are used.</para>
/// </summary>
  void SetNumberOfTransforms(int num);


  // int GetNumberOfTransforms ();
/// <summary>
/// <para>Set the number of transforms for the filter.  References to non-existent filter numbers in the data array is equivalent to a weight of zero (i.e., no contribution of that filter or weight).  The maximum number of  transforms is limited to 65536 if transform index arrays are used.</para>
/// </summary>
  int GetNumberOfTransforms();


  // void AddInputValuesOn ();
/// <summary>
/// <para>If AddInputValues is true, the output values of this filter will be offset from the input values.  The effect is exactly equivalent to having an identity transform of weight 1 added into each output point.</para>
/// </summary>
  void AddInputValuesOn();


  // void AddInputValuesOff ();
/// <summary>
/// <para>If AddInputValues is true, the output values of this filter will be offset from the input values.  The effect is exactly equivalent to having an identity transform of weight 1 added into each output point.</para>
/// </summary>
  void AddInputValuesOff();


  // void SetAddInputValues (int );
/// <summary>
/// <para>If AddInputValues is true, the output values of this filter will be offset from the input values.  The effect is exactly equivalent to having an identity transform of weight 1 added into each output point.</para>
/// </summary>
  void SetAddInputValues(int arg0);


  // int GetAddInputValues ();
/// <summary>
/// <para>If AddInputValues is true, the output values of this filter will be offset from the input values.  The effect is exactly equivalent to having an identity transform of weight 1 added into each output point.</para>
/// </summary>
  int GetAddInputValues();


// Did not wrap:  vtkWeightedTransformFilter ();


// Did not wrap:  ~vtkWeightedTransformFilter ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkWeightedTransformFilter (const vtkWeightedTransformFilter &);


// Did not wrap:  void vtkWeightedTransformFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkWeightedTransformFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkWeightedTransformFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkWeightedTransformFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkWeightedTransformFilter();


};

} // end vtkHybrid
