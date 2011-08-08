#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImplicitModeller : public vtkImageAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImplicitModeller *NewInstance ();
  vtkImplicitModeller^ NewInstance();


  // vtkImplicitModeller *SafeDownCast (vtkObject* o);
  static vtkImplicitModeller^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkImplicitModeller *New ();


  // double ComputeModelBounds (vtkDataSet *inputNULL);
/// <summary>
/// <para>Compute ModelBounds from input geometry. If input is not specified, the input of the filter will be used.</para>
/// </summary>
  double ComputeModelBounds(vtkDataSet^ inputNULL);


  // int  *GetSampleDimensions ();
/// <summary>
/// <para>Set/Get the i-j-k dimensions on which to sample distance function.</para>
/// </summary>
  array<int>^ GetSampleDimensions();


  // void SetSampleDimensions (int i, int j, int k);
/// <summary>
/// <para>Set/Get the i-j-k dimensions on which to sample distance function.</para>
/// </summary>
  void SetSampleDimensions(int i, int j, int k);


  // void SetSampleDimensions (int dim[3]);
/// <summary>
/// <para>Set/Get the i-j-k dimensions on which to sample distance function.</para>
/// </summary>
  void SetSampleDimensions(array<int>^ dim);


  // void SetMaximumDistance (double );
/// <summary>
/// <para>Set / get the distance away from surface of input geometry to sample. Smaller values make large increases in performance.</para>
/// </summary>
  void SetMaximumDistance(double arg0);


  // double GetMaximumDistanceMinValue ();
/// <summary>
/// <para>Set / get the distance away from surface of input geometry to sample. Smaller values make large increases in performance.</para>
/// </summary>
  double GetMaximumDistanceMinValue();


  // double GetMaximumDistanceMaxValue ();
/// <summary>
/// <para>Set / get the distance away from surface of input geometry to sample. Smaller values make large increases in performance.</para>
/// </summary>
  double GetMaximumDistanceMaxValue();


  // double GetMaximumDistance ();
/// <summary>
/// <para>Set / get the distance away from surface of input geometry to sample. Smaller values make large increases in performance.</para>
/// </summary>
  double GetMaximumDistance();


  // void SetModelBounds (double , double , double , double , double , double );
/// <summary>
/// <para>Set / get the region in space in which to perform the sampling. If not specified, it will be computed automatically.</para>
/// </summary>
  void SetModelBounds(double arg0, double arg1, double arg2, double arg3, double arg4, double arg5);


  // void SetModelBounds (double  a[6]);
/// <summary>
/// <para>Set / get the region in space in which to perform the sampling. If not specified, it will be computed automatically.</para>
/// </summary>
  void SetModelBounds(array<double>^ a);


  // double  *GetModelBounds ();
/// <summary>
/// <para>Set / get the region in space in which to perform the sampling. If not specified, it will be computed automatically.</para>
/// </summary>
  array<double>^ GetModelBounds();


  // void SetAdjustBounds (int );
/// <summary>
/// <para>Control how the model bounds are computed. If the ivar AdjustBounds is set, then the bounds specified (or computed automatically) is modified by the fraction given by AdjustDistance. This means that the model bounds is expanded in each of the x-y-z directions.</para>
/// </summary>
  void SetAdjustBounds(int arg0);


  // int GetAdjustBounds ();
/// <summary>
/// <para>Control how the model bounds are computed. If the ivar AdjustBounds is set, then the bounds specified (or computed automatically) is modified by the fraction given by AdjustDistance. This means that the model bounds is expanded in each of the x-y-z directions.</para>
/// </summary>
  int GetAdjustBounds();


  // void AdjustBoundsOn ();
/// <summary>
/// <para>Control how the model bounds are computed. If the ivar AdjustBounds is set, then the bounds specified (or computed automatically) is modified by the fraction given by AdjustDistance. This means that the model bounds is expanded in each of the x-y-z directions.</para>
/// </summary>
  void AdjustBoundsOn();


  // void AdjustBoundsOff ();
/// <summary>
/// <para>Control how the model bounds are computed. If the ivar AdjustBounds is set, then the bounds specified (or computed automatically) is modified by the fraction given by AdjustDistance. This means that the model bounds is expanded in each of the x-y-z directions.</para>
/// </summary>
  void AdjustBoundsOff();


  // void SetAdjustDistance (double );
/// <summary>
/// <para>Specify the amount to grow the model bounds (if the ivar AdjustBounds is set). The value is a fraction of the maximum length of the sides of the box specified by the model bounds.</para>
/// </summary>
  void SetAdjustDistance(double arg0);


  // double GetAdjustDistanceMinValue ();
/// <summary>
/// <para>Specify the amount to grow the model bounds (if the ivar AdjustBounds is set). The value is a fraction of the maximum length of the sides of the box specified by the model bounds.</para>
/// </summary>
  double GetAdjustDistanceMinValue();


  // double GetAdjustDistanceMaxValue ();
/// <summary>
/// <para>Specify the amount to grow the model bounds (if the ivar AdjustBounds is set). The value is a fraction of the maximum length of the sides of the box specified by the model bounds.</para>
/// </summary>
  double GetAdjustDistanceMaxValue();


  // double GetAdjustDistance ();
/// <summary>
/// <para>Specify the amount to grow the model bounds (if the ivar AdjustBounds is set). The value is a fraction of the maximum length of the sides of the box specified by the model bounds.</para>
/// </summary>
  double GetAdjustDistance();


  // void SetCapping (int );
/// <summary>
/// <para>The outer boundary of the structured point set can be assigned a  particular value. This can be used to close or &quot;cap&quot; all surfaces.</para>
/// </summary>
  void SetCapping(int arg0);


  // int GetCapping ();
/// <summary>
/// <para>The outer boundary of the structured point set can be assigned a  particular value. This can be used to close or &quot;cap&quot; all surfaces.</para>
/// </summary>
  int GetCapping();


  // void CappingOn ();
/// <summary>
/// <para>The outer boundary of the structured point set can be assigned a  particular value. This can be used to close or &quot;cap&quot; all surfaces.</para>
/// </summary>
  void CappingOn();


  // void CappingOff ();
/// <summary>
/// <para>The outer boundary of the structured point set can be assigned a  particular value. This can be used to close or &quot;cap&quot; all surfaces.</para>
/// </summary>
  void CappingOff();


  // void SetCapValue (double value);
/// <summary>
/// <para>Specify the capping value to use. The CapValue is also used as an initial distance value at each point in the dataset.</para>
/// </summary>
  void SetCapValue(double value);


  // double GetCapValue ();
/// <summary>
/// <para>Specify the capping value to use. The CapValue is also used as an initial distance value at each point in the dataset.</para>
/// </summary>
  double GetCapValue();


  // void SetScaleToMaximumDistance (int );
/// <summary>
/// <para>If a non-floating output type is specified, the output distances can be scaled to use the entire positive scalar range of the output type  specified (up to the CapValue which is equal to the max for the type  unless modified by the user).  For example, if ScaleToMaximumDistance is On and the OutputScalarType is UnsignedChar the distances saved in the output would be linearly scaled between 0 (for distances &quot;very close&quot; to the surface) and 255 (at the specifed maximum distance)... assuming the  CapValue is not changed from 255.</para>
/// </summary>
  void SetScaleToMaximumDistance(int arg0);


  // int GetScaleToMaximumDistance ();
/// <summary>
/// <para>If a non-floating output type is specified, the output distances can be scaled to use the entire positive scalar range of the output type  specified (up to the CapValue which is equal to the max for the type  unless modified by the user).  For example, if ScaleToMaximumDistance is On and the OutputScalarType is UnsignedChar the distances saved in the output would be linearly scaled between 0 (for distances &quot;very close&quot; to the surface) and 255 (at the specifed maximum distance)... assuming the  CapValue is not changed from 255.</para>
/// </summary>
  int GetScaleToMaximumDistance();


  // void ScaleToMaximumDistanceOn ();
/// <summary>
/// <para>If a non-floating output type is specified, the output distances can be scaled to use the entire positive scalar range of the output type  specified (up to the CapValue which is equal to the max for the type  unless modified by the user).  For example, if ScaleToMaximumDistance is On and the OutputScalarType is UnsignedChar the distances saved in the output would be linearly scaled between 0 (for distances &quot;very close&quot; to the surface) and 255 (at the specifed maximum distance)... assuming the  CapValue is not changed from 255.</para>
/// </summary>
  void ScaleToMaximumDistanceOn();


  // void ScaleToMaximumDistanceOff ();
/// <summary>
/// <para>If a non-floating output type is specified, the output distances can be scaled to use the entire positive scalar range of the output type  specified (up to the CapValue which is equal to the max for the type  unless modified by the user).  For example, if ScaleToMaximumDistance is On and the OutputScalarType is UnsignedChar the distances saved in the output would be linearly scaled between 0 (for distances &quot;very close&quot; to the surface) and 255 (at the specifed maximum distance)... assuming the  CapValue is not changed from 255.</para>
/// </summary>
  void ScaleToMaximumDistanceOff();


  // void SetProcessMode (int );
/// <summary>
/// <para>Specify whether to visit each cell once per append or each voxel once per append.  Some tests have shown once per voxel to be faster when there are a lot of cells (at least a thousand?); relative performance improvement increases with addition cells.  Primitives should not be stripped for best performance of the voxel mode.  </para>
/// </summary>
  void SetProcessMode(int arg0);


  // int GetProcessModeMinValue ();
/// <summary>
/// <para>Specify whether to visit each cell once per append or each voxel once per append.  Some tests have shown once per voxel to be faster when there are a lot of cells (at least a thousand?); relative performance improvement increases with addition cells.  Primitives should not be stripped for best performance of the voxel mode.  </para>
/// </summary>
  int GetProcessModeMinValue();


  // int GetProcessModeMaxValue ();
/// <summary>
/// <para>Specify whether to visit each cell once per append or each voxel once per append.  Some tests have shown once per voxel to be faster when there are a lot of cells (at least a thousand?); relative performance improvement increases with addition cells.  Primitives should not be stripped for best performance of the voxel mode.  </para>
/// </summary>
  int GetProcessModeMaxValue();


  // int GetProcessMode ();
/// <summary>
/// <para>Specify whether to visit each cell once per append or each voxel once per append.  Some tests have shown once per voxel to be faster when there are a lot of cells (at least a thousand?); relative performance improvement increases with addition cells.  Primitives should not be stripped for best performance of the voxel mode.  </para>
/// </summary>
  int GetProcessMode();


  // void SetProcessModeToPerVoxel ();this SetProcessMode VTK_VOXEL_MODE 
/// <summary>
/// <para>Specify whether to visit each cell once per append or each voxel once per append.  Some tests have shown once per voxel to be faster when there are a lot of cells (at least a thousand?); relative performance improvement increases with addition cells.  Primitives should not be stripped for best performance of the voxel mode.  </para>
/// </summary>
  void SetProcessModeToPerVoxel();


  // void SetProcessModeToPerCell ();this SetProcessMode VTK_CELL_MODE 
/// <summary>
/// <para>Specify whether to visit each cell once per append or each voxel once per append.  Some tests have shown once per voxel to be faster when there are a lot of cells (at least a thousand?); relative performance improvement increases with addition cells.  Primitives should not be stripped for best performance of the voxel mode.  </para>
/// </summary>
  void SetProcessModeToPerCell();


  // const char *GetProcessModeAsString (void );
/// <summary>
/// <para>Specify whether to visit each cell once per append or each voxel once per append.  Some tests have shown once per voxel to be faster when there are a lot of cells (at least a thousand?); relative performance improvement increases with addition cells.  Primitives should not be stripped for best performance of the voxel mode.  </para>
/// </summary>
  System::String^ GetProcessModeAsString();


  // void SetLocatorMaxLevel (int );
/// <summary>
/// <para>Specify the level of the locator to use when using the per voxel process mode.</para>
/// </summary>
  void SetLocatorMaxLevel(int arg0);


  // int GetLocatorMaxLevel ();
/// <summary>
/// <para>Specify the level of the locator to use when using the per voxel process mode.</para>
/// </summary>
  int GetLocatorMaxLevel();


  // void SetNumberOfThreads (int );
/// <summary>
/// <para>Set / Get the number of threads used during Per-Voxel processing mode</para>
/// </summary>
  void SetNumberOfThreads(int arg0);


  // int GetNumberOfThreadsMinValue ();
/// <summary>
/// <para>Set / Get the number of threads used during Per-Voxel processing mode</para>
/// </summary>
  int GetNumberOfThreadsMinValue();


  // int GetNumberOfThreadsMaxValue ();
/// <summary>
/// <para>Set / Get the number of threads used during Per-Voxel processing mode</para>
/// </summary>
  int GetNumberOfThreadsMaxValue();


  // int GetNumberOfThreads ();
/// <summary>
/// <para>Set / Get the number of threads used during Per-Voxel processing mode</para>
/// </summary>
  int GetNumberOfThreads();


  // void SetOutputScalarType (int type);
/// <summary>
/// <para>Set the desired output scalar type.</para>
/// </summary>
  void SetOutputScalarType(int type);


  // int GetOutputScalarType ();
/// <summary>
/// <para>Set the desired output scalar type.</para>
/// </summary>
  int GetOutputScalarType();


  // void SetOutputScalarTypeToFloat ();this SetOutputScalarType VTK_FLOAT 
/// <summary>
/// <para>Set the desired output scalar type.</para>
/// </summary>
  void SetOutputScalarTypeToFloat();


  // void SetOutputScalarTypeToDouble ();this SetOutputScalarType VTK_DOUBLE 
/// <summary>
/// <para>Set the desired output scalar type.</para>
/// </summary>
  void SetOutputScalarTypeToDouble();


  // void SetOutputScalarTypeToInt ();this SetOutputScalarType VTK_INT 
/// <summary>
/// <para>Set the desired output scalar type.</para>
/// </summary>
  void SetOutputScalarTypeToInt();


  // void SetOutputScalarTypeToUnsignedInt ();this SetOutputScalarType VTK_UNSIGNED_INT 
/// <summary>
/// <para>Set the desired output scalar type.</para>
/// </summary>
  void SetOutputScalarTypeToUnsignedInt();


  // void SetOutputScalarTypeToLong ();this SetOutputScalarType VTK_LONG 
/// <summary>
/// <para>Set the desired output scalar type.</para>
/// </summary>
  void SetOutputScalarTypeToLong();


  // void SetOutputScalarTypeToUnsignedLong ();this SetOutputScalarType VTK_UNSIGNED_LONG 
/// <summary>
/// <para>Set the desired output scalar type.</para>
/// </summary>
  void SetOutputScalarTypeToUnsignedLong();


  // void SetOutputScalarTypeToShort ();this SetOutputScalarType VTK_SHORT 
/// <summary>
/// <para>Set the desired output scalar type.</para>
/// </summary>
  void SetOutputScalarTypeToShort();


  // void SetOutputScalarTypeToUnsignedShort ();this SetOutputScalarType VTK_UNSIGNED_SHORT 
/// <summary>
/// <para>Set the desired output scalar type.</para>
/// </summary>
  void SetOutputScalarTypeToUnsignedShort();


  // void SetOutputScalarTypeToUnsignedChar ();this SetOutputScalarType VTK_UNSIGNED_CHAR 
/// <summary>
/// <para>Set the desired output scalar type.</para>
/// </summary>
  void SetOutputScalarTypeToUnsignedChar();


  // void SetOutputScalarTypeToChar ();this SetOutputScalarType VTK_CHAR 
/// <summary>
/// <para>Set the desired output scalar type.</para>
/// </summary>
  void SetOutputScalarTypeToChar();


  // void StartAppend ();
/// <summary>
/// <para>Initialize the filter for appending data. You must invoke the StartAppend() method before doing successive Appends(). It's also a good idea to manually specify the model bounds; otherwise the input bounds for the data will be used.</para>
/// </summary>
  void StartAppend();


  // void Append (vtkDataSet *input);
/// <summary>
/// <para>Append a data set to the existing output. To use this function, you'll have to invoke the StartAppend() method before doing successive appends. It's also a good idea to specify the model bounds; otherwise the input model bounds is used. When you've finished appending, use the EndAppend() method.</para>
/// </summary>
  void Append(vtkDataSet^ input);


  // void EndAppend ();
/// <summary>
/// <para>Method completes the append process.</para>
/// </summary>
  void EndAppend();


// Did not wrap:  int ProcessRequest (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkImplicitModeller ();


// Did not wrap:  ~vtkImplicitModeller ();


// Did not wrap:  double GetScalarTypeMax (int type);


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  void StartAppend (int internal);


// Did not wrap:  void Cap (vtkDataArray *s);


// Did not wrap:  virtual int FillInputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkImplicitModeller (const vtkImplicitModeller &);


// Did not wrap:  void vtkImplicitModeller 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImplicitModeller(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImplicitModeller(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImplicitModeller();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImplicitModeller();


};

} // end vtkHybrid
