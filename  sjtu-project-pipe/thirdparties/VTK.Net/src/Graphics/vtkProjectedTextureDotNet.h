#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkProjectedTexture : public vtkDataSetAlgorithm
{

public:
// Did not wrap:  static vtkProjectedTexture *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkProjectedTexture *NewInstance ();
  vtkProjectedTexture^ NewInstance();


  // vtkProjectedTexture *SafeDownCast (vtkObject* o);
  static vtkProjectedTexture^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetPosition (double , double , double );
/// <summary>
/// <para>Set/Get the position of the focus of the projector.</para>
/// </summary>
  void SetPosition(double arg0, double arg1, double arg2);


  // void SetPosition (double  a[3]);
/// <summary>
/// <para>Set/Get the position of the focus of the projector.</para>
/// </summary>
  void SetPosition(array<double>^ a);


  // double  *GetPosition ();
/// <summary>
/// <para>Set/Get the position of the focus of the projector.</para>
/// </summary>
  array<double>^ GetPosition();


  // void SetFocalPoint (double focalPoint[3]);
/// <summary>
/// <para>Set/Get the focal point of the projector (a point that lies along the center axis of the projector's frustum).</para>
/// </summary>
  void SetFocalPoint(array<double>^ focalPoint);


  // void SetFocalPoint (double x, double y, double z);
/// <summary>
/// <para>Set/Get the focal point of the projector (a point that lies along the center axis of the projector's frustum).</para>
/// </summary>
  void SetFocalPoint(double x, double y, double z);


  // double  *GetFocalPoint ();
/// <summary>
/// <para>Set/Get the focal point of the projector (a point that lies along the center axis of the projector's frustum).</para>
/// </summary>
  array<double>^ GetFocalPoint();


  // void SetCameraMode (int );
/// <summary>
/// <para>Set/Get the camera mode of the projection -- pinhole projection or two mirror projection.</para>
/// </summary>
  void SetCameraMode(int arg0);


  // int GetCameraMode ();
/// <summary>
/// <para>Set/Get the camera mode of the projection -- pinhole projection or two mirror projection.</para>
/// </summary>
  int GetCameraMode();


  // void SetCameraModeToPinhole ();this SetCameraMode VTK_PROJECTED_TEXTURE_USE_PINHOLE 
/// <summary>
/// <para>Set/Get the camera mode of the projection -- pinhole projection or two mirror projection.</para>
/// </summary>
  void SetCameraModeToPinhole();


  // void SetCameraModeToTwoMirror ();this SetCameraMode VTK_PROJECTED_TEXTURE_USE_TWO_MIRRORS 
/// <summary>
/// <para>Set/Get the mirror separation for the two mirror system.</para>
/// </summary>
  void SetCameraModeToTwoMirror();


  // void SetMirrorSeparation (double );
/// <summary>
/// <para>Set/Get the mirror separation for the two mirror system.</para>
/// </summary>
  void SetMirrorSeparation(double arg0);


  // double GetMirrorSeparation ();
/// <summary>
/// <para>Set/Get the mirror separation for the two mirror system.</para>
/// </summary>
  double GetMirrorSeparation();


  // double  *GetOrientation ();
/// <summary>
/// <para>Get the normalized orientation vector of the projector.</para>
/// </summary>
  array<double>^ GetOrientation();


  // void SetUp (double , double , double );
  void SetUp(double arg0, double arg1, double arg2);


  // void SetUp (double  a[3]);
  void SetUp(array<double>^ a);


  // double  *GetUp ();
  array<double>^ GetUp();


  // void SetAspectRatio (double , double , double );
  void SetAspectRatio(double arg0, double arg1, double arg2);


  // void SetAspectRatio (double  a[3]);
  void SetAspectRatio(array<double>^ a);


  // double  *GetAspectRatio ();
  array<double>^ GetAspectRatio();


  // void SetSRange (double , double );
/// <summary>
/// <para>Specify s-coordinate range for texture s-t coordinate pair.</para>
/// </summary>
  void SetSRange(double arg0, double arg1);


  // void SetSRange (double  a[2]);
/// <summary>
/// <para>Specify s-coordinate range for texture s-t coordinate pair.</para>
/// </summary>
  void SetSRange(array<double>^ a);


  // double  *GetSRange ();
/// <summary>
/// <para>Specify s-coordinate range for texture s-t coordinate pair.</para>
/// </summary>
  array<double>^ GetSRange();


  // void SetTRange (double , double );
/// <summary>
/// <para>Specify t-coordinate range for texture s-t coordinate pair.</para>
/// </summary>
  void SetTRange(double arg0, double arg1);


  // void SetTRange (double  a[2]);
/// <summary>
/// <para>Specify t-coordinate range for texture s-t coordinate pair.</para>
/// </summary>
  void SetTRange(array<double>^ a);


  // double  *GetTRange ();
/// <summary>
/// <para>Specify t-coordinate range for texture s-t coordinate pair.</para>
/// </summary>
  array<double>^ GetTRange();


// Did not wrap:  vtkProjectedTexture ();


// Did not wrap:  ~vtkProjectedTexture ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  void ComputeNormal ();


// Did not wrap:  vtkProjectedTexture (const vtkProjectedTexture &);


// Did not wrap:  void vtkProjectedTexture 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkProjectedTexture(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkProjectedTexture(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkProjectedTexture();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkProjectedTexture();


};

} // end vtkGraphics
