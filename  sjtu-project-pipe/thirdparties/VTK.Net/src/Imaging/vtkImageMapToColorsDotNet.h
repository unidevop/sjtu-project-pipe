#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageMapToColors : public vtkThreadedImageAlgorithm
{

public:
// Did not wrap:  static vtkImageMapToColors *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageMapToColors *NewInstance ();
  vtkImageMapToColors^ NewInstance();


  // vtkImageMapToColors *SafeDownCast (vtkObject* o);
  static vtkImageMapToColors^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void SetLookupTable (vtkScalarsToColors *);
/// <summary>
/// <para>Set the lookup table.</para>
/// </summary>
  void SetLookupTable(vtkScalarsToColors^ arg0);


  // vtkScalarsToColors *GetLookupTable ();
/// <summary>
/// <para>Set the lookup table.</para>
/// </summary>
  vtkScalarsToColors^ GetLookupTable();


  // void SetOutputFormat (int );
/// <summary>
/// <para>Set the output format, the default is RGBA.  </para>
/// </summary>
  void SetOutputFormat(int arg0);


  // int GetOutputFormat ();
/// <summary>
/// <para>Set the output format, the default is RGBA.  </para>
/// </summary>
  int GetOutputFormat();


  // void SetOutputFormatToRGBA ();this OutputFormat VTK_RGBA 
/// <summary>
/// <para>Set the output format, the default is RGBA.  </para>
/// </summary>
  void SetOutputFormatToRGBA();


  // void SetOutputFormatToRGB ();this OutputFormat VTK_RGB 
/// <summary>
/// <para>Set the output format, the default is RGBA.  </para>
/// </summary>
  void SetOutputFormatToRGB();


  // void SetOutputFormatToLuminanceAlpha ();this OutputFormat VTK_LUMINANCE_ALPHA 
/// <summary>
/// <para>Set the output format, the default is RGBA.  </para>
/// </summary>
  void SetOutputFormatToLuminanceAlpha();


  // void SetOutputFormatToLuminance ();this OutputFormat VTK_LUMINANCE 
/// <summary>
/// <para>Set the output format, the default is RGBA.  </para>
/// </summary>
  void SetOutputFormatToLuminance();


  // void SetActiveComponent (int );
/// <summary>
/// <para>Set the component to map for multi-component images (default: 0)</para>
/// </summary>
  void SetActiveComponent(int arg0);


  // int GetActiveComponent ();
/// <summary>
/// <para>Set the component to map for multi-component images (default: 0)</para>
/// </summary>
  int GetActiveComponent();


  // void SetPassAlphaToOutput (int );
/// <summary>
/// <para>Use the alpha component of the input when computing the alpha component of the output (useful when converting monochrome+alpha data to RGBA)</para>
/// </summary>
  void SetPassAlphaToOutput(int arg0);


  // void PassAlphaToOutputOn ();
/// <summary>
/// <para>Use the alpha component of the input when computing the alpha component of the output (useful when converting monochrome+alpha data to RGBA)</para>
/// </summary>
  void PassAlphaToOutputOn();


  // void PassAlphaToOutputOff ();
/// <summary>
/// <para>Use the alpha component of the input when computing the alpha component of the output (useful when converting monochrome+alpha data to RGBA)</para>
/// </summary>
  void PassAlphaToOutputOff();


  // int GetPassAlphaToOutput ();
/// <summary>
/// <para>Use the alpha component of the input when computing the alpha component of the output (useful when converting monochrome+alpha data to RGBA)</para>
/// </summary>
  int GetPassAlphaToOutput();


  // virtual unsigned long GetMTime ();
/// <summary>
/// <para>We need to check the modified time of the lookup table too.</para>
/// </summary>
  unsigned long GetMTime();


// Did not wrap:  vtkImageMapToColors ();


// Did not wrap:  ~vtkImageMapToColors ();


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  void ThreadedRequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector, vtkImageData *inData, vtkImageData *outData, int extent[6], int id);


// Did not wrap:  virtual int RequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  vtkImageMapToColors (const vtkImageMapToColors &);


// Did not wrap:  void vtkImageMapToColors 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageMapToColors(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageMapToColors(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageMapToColors();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageMapToColors();


};

} // end vtkImaging
