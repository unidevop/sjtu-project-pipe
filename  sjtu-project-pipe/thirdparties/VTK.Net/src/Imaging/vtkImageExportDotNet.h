#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageExport : public vtkImageAlgorithm
{

public:
// Did not wrap:  static vtkImageExport *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageExport *NewInstance ();
  vtkImageExport^ NewInstance();


  // vtkImageExport *SafeDownCast (vtkObject* o);
  static vtkImageExport^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // int GetDataMemorySize ();
/// <summary>
/// <para>Get the number of bytes required for the output C array.</para>
/// </summary>
  int GetDataMemorySize();


  // void GetDataDimensions (int *ptr);
/// <summary>
/// <para>Get the (x,y,z) index dimensions of the data.  Please note that C arrays are indexed in decreasing order, i.e. array[z][y][x]. </para>
/// </summary>
  void GetDataDimensions(array<int>^ ptr);


  // int *GetDataDimensions ();this GetDataDimensions this DataDimensions return this DataDimensions 
/// <summary>
/// <para>Get the number of scalar components of the data.  Please note that when you index into a C array, the scalar component index comes last, i.e. array[z][y][x][c].</para>
/// </summary>
  array<int>^ GetDataDimensions();


  // int GetDataNumberOfScalarComponents ();
/// <summary>
/// <para>Get the number of scalar components of the data.  Please note that when you index into a C array, the scalar component index comes last, i.e. array[z][y][x][c].</para>
/// </summary>
  int GetDataNumberOfScalarComponents();


  // int GetDataScalarType ();
/// <summary>
/// <para>Get the scalar type of the data.  The scalar type of the C array must match the scalar type of the data.</para>
/// </summary>
  int GetDataScalarType();


  // const char *GetDataScalarTypeAsString ();return vtkImageScalarTypeNameMacro this GetDataScalarType 
/// <summary>
/// <para>Get miscellaneous additional information about the data.</para>
/// </summary>
  System::String^ GetDataScalarTypeAsString();


  // int *GetDataExtent ();
/// <summary>
/// <para>Get miscellaneous additional information about the data.</para>
/// </summary>
  array<int>^ GetDataExtent();


  // void GetDataExtent (int *ptr);
/// <summary>
/// <para>Get miscellaneous additional information about the data.</para>
/// </summary>
  void GetDataExtent(array<int>^ ptr);


  // double *GetDataSpacing ();
/// <summary>
/// <para>Get miscellaneous additional information about the data.</para>
/// </summary>
  array<double>^ GetDataSpacing();


  // void GetDataSpacing (double *ptr);
/// <summary>
/// <para>Get miscellaneous additional information about the data.</para>
/// </summary>
  void GetDataSpacing(array<double>^ ptr);


  // double *GetDataOrigin ();
/// <summary>
/// <para>Get miscellaneous additional information about the data.</para>
/// </summary>
  array<double>^ GetDataOrigin();


  // void GetDataOrigin (double *ptr);
/// <summary>
/// <para>Get miscellaneous additional information about the data.</para>
/// </summary>
  void GetDataOrigin(array<double>^ ptr);


  // void ImageLowerLeftOn ();
/// <summary>
/// <para>Set/Get whether the data goes to the exported memory starting  in the lower left corner or upper left corner.  Default: On. When this flag is Off, the image will be flipped vertically before it is exported. WARNING: this flag is used only with the Export() method, it is ignored by GetPointerToData().</para>
/// </summary>
  void ImageLowerLeftOn();


  // void ImageLowerLeftOff ();
/// <summary>
/// <para>Set/Get whether the data goes to the exported memory starting  in the lower left corner or upper left corner.  Default: On. When this flag is Off, the image will be flipped vertically before it is exported. WARNING: this flag is used only with the Export() method, it is ignored by GetPointerToData().</para>
/// </summary>
  void ImageLowerLeftOff();


  // int GetImageLowerLeft ();
/// <summary>
/// <para>Set/Get whether the data goes to the exported memory starting  in the lower left corner or upper left corner.  Default: On. When this flag is Off, the image will be flipped vertically before it is exported. WARNING: this flag is used only with the Export() method, it is ignored by GetPointerToData().</para>
/// </summary>
  int GetImageLowerLeft();


  // void SetImageLowerLeft (int );
/// <summary>
/// <para>Set/Get whether the data goes to the exported memory starting  in the lower left corner or upper left corner.  Default: On. When this flag is Off, the image will be flipped vertically before it is exported. WARNING: this flag is used only with the Export() method, it is ignored by GetPointerToData().</para>
/// </summary>
  void SetImageLowerLeft(int arg0);


  // void SetExportVoidPointer (void *);
/// <summary>
/// <para>Set the void pointer of the C array to export the data to. From python, you can specify a pointer to a string that is large enough to hold the data.</para>
/// </summary>
  void SetExportVoidPointer(System::IntPtr arg0);


  // void *GetExportVoidPointer ();return this ExportVoidPointer 
/// <summary>
/// <para>Set the void pointer of the C array to export the data to. From python, you can specify a pointer to a string that is large enough to hold the data.</para>
/// </summary>
  System::IntPtr GetExportVoidPointer();


  // void Export ();this Export this ExportVoidPointer 
/// <summary>
/// <para>The main interface: update the pipeline and export the image to the memory pointed to by SetExportVoidPointer().  You can also specify a void pointer when you call Export().</para>
/// </summary>
  void Export();


  // virtual void Export (void *);
/// <summary>
/// <para>The main interface: update the pipeline and export the image to the memory pointed to by SetExportVoidPointer().  You can also specify a void pointer when you call Export().</para>
/// </summary>
  void Export(System::IntPtr arg0);


  // void *GetPointerToData ();
/// <summary>
/// <para>An alternative to Export(): Use with caution.   Update the pipeline and return a pointer to the image memory.  The pointer is only valid until the next time that the pipeline is updated. WARNING: This method ignores the ImageLowerLeft flag.</para>
/// </summary>
  System::IntPtr GetPointerToData();


  // void *GetCallbackUserData ();
/// <summary>
/// <para>Get the user data that should be passed to the callback functions.</para>
/// </summary>
  System::IntPtr GetCallbackUserData();


// Did not wrap:  vtkImageExport ();


// Did not wrap:  ~vtkImageExport ();


// Did not wrap:  virtual int RequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  virtual void UpdateInformationCallback ();


// Did not wrap:  virtual int PipelineModifiedCallback ();


// Did not wrap:  virtual void UpdateDataCallback ();


// Did not wrap:  virtual int *WholeExtentCallback ();


// Did not wrap:  virtual double *SpacingCallback ();


// Did not wrap:  virtual double *OriginCallback ();


// Did not wrap:  virtual const char *ScalarTypeCallback ();


// Did not wrap:  virtual int NumberOfComponentsCallback ();


// Did not wrap:  virtual void PropagateUpdateExtentCallback (int *);


// Did not wrap:  virtual int *DataExtentCallback ();


// Did not wrap:  virtual void *BufferPointerCallback ();


// Did not wrap:  vtkImageExport (const vtkImageExport &);


// Did not wrap:  void vtkImageExport 


// Did not wrap:  static void UpdateInformationCallbackFunction (void *);


// Did not wrap:  static int PipelineModifiedCallbackFunction (void *);


// Did not wrap:  static int *WholeExtentCallbackFunction (void *);


// Did not wrap:  static double *SpacingCallbackFunction (void *);


// Did not wrap:  static double *OriginCallbackFunction (void *);


// Did not wrap:  static const char *ScalarTypeCallbackFunction (void *);


// Did not wrap:  static int NumberOfComponentsCallbackFunction (void *);


// Did not wrap:  static void PropagateUpdateExtentCallbackFunction (void *, int *);


// Did not wrap:  static void UpdateDataCallbackFunction (void *);


// Did not wrap:  static int *DataExtentCallbackFunction (void *);


// Did not wrap:  static void *BufferPointerCallbackFunction (void *);


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageExport(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageExport(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageExport();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageExport();


};

} // end vtkImaging
