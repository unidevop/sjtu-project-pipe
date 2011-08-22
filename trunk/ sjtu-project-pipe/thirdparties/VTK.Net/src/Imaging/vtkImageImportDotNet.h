#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageImport : public vtkImageAlgorithm
{

public:
// Did not wrap:  static vtkImageImport *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageImport *NewInstance ();
  vtkImageImport^ NewInstance();


  // vtkImageImport *SafeDownCast (vtkObject* o);
  static vtkImageImport^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void CopyImportVoidPointer (void *ptr, int size);
/// <summary>
/// <para>Import data and make an internal copy of it.  If you do not want VTK to copy the data, then use SetImportVoidPointer instead (do not use both).  Give the size of the data array in bytes.</para>
/// </summary>
  void CopyImportVoidPointer(System::IntPtr ptr, int size);


  // void SetImportVoidPointer (void *ptr);
/// <summary>
/// <para>Set the pointer from which the image data is imported.  VTK will not make its own copy of the data, it will access the data directly from the supplied array.  VTK will not attempt to delete the data nor modify the data.</para>
/// </summary>
  void SetImportVoidPointer(System::IntPtr ptr);


  // void *GetImportVoidPointer ();return this ImportVoidPointer 
/// <summary>
/// <para>Set the pointer from which the image data is imported.  VTK will not make its own copy of the data, it will access the data directly from the supplied array.  VTK will not attempt to delete the data nor modify the data.</para>
/// </summary>
  System::IntPtr GetImportVoidPointer();


  // void SetImportVoidPointer (void *ptr, int save);
/// <summary>
/// <para>Set the pointer from which the image data is imported.  Set save to 1  (the default) unless you want VTK to delete the array via C++ delete when the vtkImageImport object is deallocated.  VTK will not make its own copy of the data, it will access the data directly from the supplied array.</para>
/// </summary>
  void SetImportVoidPointer(System::IntPtr ptr, int save);


  // void SetDataScalarType (int );
/// <summary>
/// <para>Set/Get the data type of pixels in the imported data.  This is used as the scalar type of the Output.  Default: Short.</para>
/// </summary>
  void SetDataScalarType(int arg0);


  // void SetDataScalarTypeToDouble ();this SetDataScalarType VTK_DOUBLE 
/// <summary>
/// <para>Set/Get the data type of pixels in the imported data.  This is used as the scalar type of the Output.  Default: Short.</para>
/// </summary>
  void SetDataScalarTypeToDouble();


  // void SetDataScalarTypeToFloat ();this SetDataScalarType VTK_FLOAT 
/// <summary>
/// <para>Set/Get the data type of pixels in the imported data.  This is used as the scalar type of the Output.  Default: Short.</para>
/// </summary>
  void SetDataScalarTypeToFloat();


  // void SetDataScalarTypeToInt ();this SetDataScalarType VTK_INT 
/// <summary>
/// <para>Set/Get the data type of pixels in the imported data.  This is used as the scalar type of the Output.  Default: Short.</para>
/// </summary>
  void SetDataScalarTypeToInt();


  // void SetDataScalarTypeToShort ();this SetDataScalarType VTK_SHORT 
/// <summary>
/// <para>Set/Get the data type of pixels in the imported data.  This is used as the scalar type of the Output.  Default: Short.</para>
/// </summary>
  void SetDataScalarTypeToShort();


  // void SetDataScalarTypeToUnsignedShort ();this SetDataScalarType VTK_UNSIGNED_SHORT 
/// <summary>
/// <para>Set/Get the data type of pixels in the imported data.  This is used as the scalar type of the Output.  Default: Short.</para>
/// </summary>
  void SetDataScalarTypeToUnsignedShort();


  // void SetDataScalarTypeToUnsignedChar ();this SetDataScalarType VTK_UNSIGNED_CHAR 
/// <summary>
/// <para>Set/Get the data type of pixels in the imported data.  This is used as the scalar type of the Output.  Default: Short.</para>
/// </summary>
  void SetDataScalarTypeToUnsignedChar();


  // int GetDataScalarType ();
/// <summary>
/// <para>Set/Get the data type of pixels in the imported data.  This is used as the scalar type of the Output.  Default: Short.</para>
/// </summary>
  int GetDataScalarType();


  // const char *GetDataScalarTypeAsString ();return vtkImageScalarTypeNameMacro this DataScalarType 
/// <summary>
/// <para>Set/Get the number of scalar components, for RGB images this must be 3. Default: 1.</para>
/// </summary>
  System::String^ GetDataScalarTypeAsString();


  // void SetNumberOfScalarComponents (int );
/// <summary>
/// <para>Set/Get the number of scalar components, for RGB images this must be 3. Default: 1.</para>
/// </summary>
  void SetNumberOfScalarComponents(int arg0);


  // int GetNumberOfScalarComponents ();
/// <summary>
/// <para>Set/Get the number of scalar components, for RGB images this must be 3. Default: 1.</para>
/// </summary>
  int GetNumberOfScalarComponents();


  // void SetDataExtent (int , int , int , int , int , int );
/// <summary>
/// <para>Get/Set the extent of the data buffer.  The dimensions of your data must be equal to (extent[1]-extent[0]+1) * (extent[3]-extent[2]+1) *  (extent[5]-DataExtent[4]+1).  For example, for a 2D image use (0,width-1, 0,height-1, 0,0).</para>
/// </summary>
  void SetDataExtent(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5);


  // void SetDataExtent (int  a[6]);
/// <summary>
/// <para>Get/Set the extent of the data buffer.  The dimensions of your data must be equal to (extent[1]-extent[0]+1) * (extent[3]-extent[2]+1) *  (extent[5]-DataExtent[4]+1).  For example, for a 2D image use (0,width-1, 0,height-1, 0,0).</para>
/// </summary>
  void SetDataExtent(array<int>^ a);


  // int  *GetDataExtent ();
/// <summary>
/// <para>Get/Set the extent of the data buffer.  The dimensions of your data must be equal to (extent[1]-extent[0]+1) * (extent[3]-extent[2]+1) *  (extent[5]-DataExtent[4]+1).  For example, for a 2D image use (0,width-1, 0,height-1, 0,0).</para>
/// </summary>
  array<int>^ GetDataExtent();


  // void SetDataExtentToWholeExtent ();this SetDataExtent this GetWholeExtent 
/// <summary>
/// <para>Set/Get the spacing (typically in mm) between image voxels. Default: (1.0, 1.0, 1.0).</para>
/// </summary>
  void SetDataExtentToWholeExtent();


  // void SetDataSpacing (double , double , double );
/// <summary>
/// <para>Set/Get the spacing (typically in mm) between image voxels. Default: (1.0, 1.0, 1.0).</para>
/// </summary>
  void SetDataSpacing(double arg0, double arg1, double arg2);


  // void SetDataSpacing (double  a[3]);
/// <summary>
/// <para>Set/Get the spacing (typically in mm) between image voxels. Default: (1.0, 1.0, 1.0).</para>
/// </summary>
  void SetDataSpacing(array<double>^ a);


  // double  *GetDataSpacing ();
/// <summary>
/// <para>Set/Get the spacing (typically in mm) between image voxels. Default: (1.0, 1.0, 1.0).</para>
/// </summary>
  array<double>^ GetDataSpacing();


  // void SetDataOrigin (double , double , double );
/// <summary>
/// <para>Set/Get the origin of the data, i.e. the coordinates (usually in mm) of voxel (0,0,0).  Default: (0.0, 0.0, 0.0). </para>
/// </summary>
  void SetDataOrigin(double arg0, double arg1, double arg2);


  // void SetDataOrigin (double  a[3]);
/// <summary>
/// <para>Set/Get the origin of the data, i.e. the coordinates (usually in mm) of voxel (0,0,0).  Default: (0.0, 0.0, 0.0). </para>
/// </summary>
  void SetDataOrigin(array<double>^ a);


  // double  *GetDataOrigin ();
/// <summary>
/// <para>Set/Get the origin of the data, i.e. the coordinates (usually in mm) of voxel (0,0,0).  Default: (0.0, 0.0, 0.0). </para>
/// </summary>
  array<double>^ GetDataOrigin();


  // void SetWholeExtent (int , int , int , int , int , int );
/// <summary>
/// <para>Get/Set the whole extent of the image.  This is the largest possible extent.  Set the DataExtent to the extent of the image in the buffer pointed to by the ImportVoidPointer.</para>
/// </summary>
  void SetWholeExtent(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5);


  // void SetWholeExtent (int  a[6]);
/// <summary>
/// <para>Get/Set the whole extent of the image.  This is the largest possible extent.  Set the DataExtent to the extent of the image in the buffer pointed to by the ImportVoidPointer.</para>
/// </summary>
  void SetWholeExtent(array<int>^ a);


  // int  *GetWholeExtent ();
/// <summary>
/// <para>Get/Set the whole extent of the image.  This is the largest possible extent.  Set the DataExtent to the extent of the image in the buffer pointed to by the ImportVoidPointer.</para>
/// </summary>
  array<int>^ GetWholeExtent();


// Did not wrap:  virtual int RequestUpdateExtent (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


  // int InvokePipelineModifiedCallbacks ();
/// <summary>
/// <para>Invoke the appropriate callbacks</para>
/// </summary>
  int InvokePipelineModifiedCallbacks();


  // void InvokeUpdateInformationCallbacks ();
/// <summary>
/// <para>Invoke the appropriate callbacks</para>
/// </summary>
  void InvokeUpdateInformationCallbacks();


  // void InvokeExecuteInformationCallbacks ();
/// <summary>
/// <para>Invoke the appropriate callbacks</para>
/// </summary>
  void InvokeExecuteInformationCallbacks();


  // void InvokeExecuteDataCallbacks ();
/// <summary>
/// <para>Invoke the appropriate callbacks</para>
/// </summary>
  void InvokeExecuteDataCallbacks();


  // void LegacyCheckWholeExtent ();
/// <summary>
/// <para>Invoke the appropriate callbacks</para>
/// </summary>
  void LegacyCheckWholeExtent();


// Did not wrap:  vtkImageImport ();


// Did not wrap:  ~vtkImageImport ();


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual void ExecuteData (vtkDataObject *d);


// Did not wrap:  vtkImageImport (const vtkImageImport &);


// Did not wrap:  void vtkImageImport 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageImport(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageImport(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageImport();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageImport();


};

} // end vtkImaging
