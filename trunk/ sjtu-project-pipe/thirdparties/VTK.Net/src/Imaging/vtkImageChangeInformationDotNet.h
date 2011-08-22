#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageChangeInformation : public vtkImageAlgorithm
{

public:
// Did not wrap:  static vtkImageChangeInformation *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageChangeInformation *NewInstance ();
  vtkImageChangeInformation^ NewInstance();


  // vtkImageChangeInformation *SafeDownCast (vtkObject* o);
  static vtkImageChangeInformation^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void SetInformationInput (vtkImageData *);
/// <summary>
/// <para>Copy the information from another data set.  By default, the information is copied from the input.</para>
/// </summary>
  void SetInformationInput(vtkImageData^ arg0);


  // virtual vtkImageData *GetInformationInput ();
/// <summary>
/// <para>Copy the information from another data set.  By default, the information is copied from the input.</para>
/// </summary>
  vtkImageData^ GetInformationInput();


  // void SetOutputExtentStart (int , int , int );
/// <summary>
/// <para>Specify new starting values for the extent explicitly. These values are used as WholeExtent[0], WholeExtent[2] and WholeExtent[4] of the output.  The default is to the use the extent start of the Input, or of the InformationInput if InformationInput is set.</para>
/// </summary>
  void SetOutputExtentStart(int arg0, int arg1, int arg2);


  // void SetOutputExtentStart (int  a[3]);
/// <summary>
/// <para>Specify new starting values for the extent explicitly. These values are used as WholeExtent[0], WholeExtent[2] and WholeExtent[4] of the output.  The default is to the use the extent start of the Input, or of the InformationInput if InformationInput is set.</para>
/// </summary>
  void SetOutputExtentStart(array<int>^ a);


  // int  *GetOutputExtentStart ();
/// <summary>
/// <para>Specify new starting values for the extent explicitly. These values are used as WholeExtent[0], WholeExtent[2] and WholeExtent[4] of the output.  The default is to the use the extent start of the Input, or of the InformationInput if InformationInput is set.</para>
/// </summary>
  array<int>^ GetOutputExtentStart();


  // void SetOutputSpacing (double , double , double );
/// <summary>
/// <para>Specify a new data spacing explicitly.  The default is to use the spacing of the Input, or of the InformationInput if InformationInput is set.</para>
/// </summary>
  void SetOutputSpacing(double arg0, double arg1, double arg2);


  // void SetOutputSpacing (double  a[3]);
/// <summary>
/// <para>Specify a new data spacing explicitly.  The default is to use the spacing of the Input, or of the InformationInput if InformationInput is set.</para>
/// </summary>
  void SetOutputSpacing(array<double>^ a);


  // double  *GetOutputSpacing ();
/// <summary>
/// <para>Specify a new data spacing explicitly.  The default is to use the spacing of the Input, or of the InformationInput if InformationInput is set.</para>
/// </summary>
  array<double>^ GetOutputSpacing();


  // void SetOutputOrigin (double , double , double );
/// <summary>
/// <para>Specify a new data origin explicitly.  The default is to use the origin of the Input, or of the InformationInput if InformationInput is set.</para>
/// </summary>
  void SetOutputOrigin(double arg0, double arg1, double arg2);


  // void SetOutputOrigin (double  a[3]);
/// <summary>
/// <para>Specify a new data origin explicitly.  The default is to use the origin of the Input, or of the InformationInput if InformationInput is set.</para>
/// </summary>
  void SetOutputOrigin(array<double>^ a);


  // double  *GetOutputOrigin ();
/// <summary>
/// <para>Specify a new data origin explicitly.  The default is to use the origin of the Input, or of the InformationInput if InformationInput is set.</para>
/// </summary>
  array<double>^ GetOutputOrigin();


  // void SetCenterImage (int );
/// <summary>
/// <para>Set the Origin of the output so that image coordinate (0,0,0) lies at the Center of the data set.  This will override  SetOutputOrigin.  This is often a useful operation to apply  before using vtkImageReslice to apply a transformation to an image. </para>
/// </summary>
  void SetCenterImage(int arg0);


  // void CenterImageOn ();
/// <summary>
/// <para>Set the Origin of the output so that image coordinate (0,0,0) lies at the Center of the data set.  This will override  SetOutputOrigin.  This is often a useful operation to apply  before using vtkImageReslice to apply a transformation to an image. </para>
/// </summary>
  void CenterImageOn();


  // void CenterImageOff ();
/// <summary>
/// <para>Set the Origin of the output so that image coordinate (0,0,0) lies at the Center of the data set.  This will override  SetOutputOrigin.  This is often a useful operation to apply  before using vtkImageReslice to apply a transformation to an image. </para>
/// </summary>
  void CenterImageOff();


  // int GetCenterImage ();
/// <summary>
/// <para>Set the Origin of the output so that image coordinate (0,0,0) lies at the Center of the data set.  This will override  SetOutputOrigin.  This is often a useful operation to apply  before using vtkImageReslice to apply a transformation to an image. </para>
/// </summary>
  int GetCenterImage();


  // void SetExtentTranslation (int , int , int );
/// <summary>
/// <para>Apply a translation to the extent.</para>
/// </summary>
  void SetExtentTranslation(int arg0, int arg1, int arg2);


  // void SetExtentTranslation (int  a[3]);
/// <summary>
/// <para>Apply a translation to the extent.</para>
/// </summary>
  void SetExtentTranslation(array<int>^ a);


  // int  *GetExtentTranslation ();
/// <summary>
/// <para>Apply a translation to the extent.</para>
/// </summary>
  array<int>^ GetExtentTranslation();


  // void SetSpacingScale (double , double , double );
/// <summary>
/// <para>Apply a scale factor to the spacing. </para>
/// </summary>
  void SetSpacingScale(double arg0, double arg1, double arg2);


  // void SetSpacingScale (double  a[3]);
/// <summary>
/// <para>Apply a scale factor to the spacing. </para>
/// </summary>
  void SetSpacingScale(array<double>^ a);


  // double  *GetSpacingScale ();
/// <summary>
/// <para>Apply a scale factor to the spacing. </para>
/// </summary>
  array<double>^ GetSpacingScale();


  // void SetOriginTranslation (double , double , double );
/// <summary>
/// <para>Apply a translation to the origin.</para>
/// </summary>
  void SetOriginTranslation(double arg0, double arg1, double arg2);


  // void SetOriginTranslation (double  a[3]);
/// <summary>
/// <para>Apply a translation to the origin.</para>
/// </summary>
  void SetOriginTranslation(array<double>^ a);


  // double  *GetOriginTranslation ();
/// <summary>
/// <para>Apply a translation to the origin.</para>
/// </summary>
  array<double>^ GetOriginTranslation();


  // void SetOriginScale (double , double , double );
/// <summary>
/// <para>Apply a scale to the origin.  The scale is applied before the translation.</para>
/// </summary>
  void SetOriginScale(double arg0, double arg1, double arg2);


  // void SetOriginScale (double  a[3]);
/// <summary>
/// <para>Apply a scale to the origin.  The scale is applied before the translation.</para>
/// </summary>
  void SetOriginScale(array<double>^ a);


  // double  *GetOriginScale ();
/// <summary>
/// <para>Apply a scale to the origin.  The scale is applied before the translation.</para>
/// </summary>
  array<double>^ GetOriginScale();


// Did not wrap:  vtkImageChangeInformation ();


// Did not wrap:  ~vtkImageChangeInformation ();


// Did not wrap:  virtual int RequestUpdateExtent (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkImageChangeInformation (const vtkImageChangeInformation &);


// Did not wrap:  void vtkImageChangeInformation 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageChangeInformation(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageChangeInformation(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageChangeInformation();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageChangeInformation();


};

} // end vtkImaging
