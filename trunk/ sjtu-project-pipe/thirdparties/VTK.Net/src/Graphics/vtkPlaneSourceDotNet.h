#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkPlaneSource : public vtkPolyDataAlgorithm
{

public:
  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPlaneSource *NewInstance ();
  vtkPlaneSource^ NewInstance();


  // vtkPlaneSource *SafeDownCast (vtkObject* o);
  static vtkPlaneSource^ SafeDownCast(vtkObject^ o);


// Did not wrap:  static vtkPlaneSource *New ();


  // void SetXResolution (int );
/// <summary>
/// <para>Specify the resolution of the plane along the first axes.</para>
/// </summary>
  void SetXResolution(int arg0);


  // int GetXResolution ();
/// <summary>
/// <para>Specify the resolution of the plane along the first axes.</para>
/// </summary>
  int GetXResolution();


  // void SetYResolution (int );
/// <summary>
/// <para>Specify the resolution of the plane along the second axes.</para>
/// </summary>
  void SetYResolution(int arg0);


  // int GetYResolution ();
/// <summary>
/// <para>Specify the resolution of the plane along the second axes.</para>
/// </summary>
  int GetYResolution();


  // void SetResolution (const int xR, const int yR);
/// <summary>
/// <para>Set the number of x-y subdivisions in the plane.</para>
/// </summary>
  void SetResolution(int xR, int yR);


  // void GetResolution (int &xR, int &yR);xR this XResolution yR this YResolution 
/// <summary>
/// <para>Set the number of x-y subdivisions in the plane.</para>
/// </summary>
  void GetResolution(int% xR, int% yR);


  // void SetOrigin (double , double , double );
/// <summary>
/// <para>Specify a point defining the origin of the plane.</para>
/// </summary>
  void SetOrigin(double arg0, double arg1, double arg2);


  // void SetOrigin (double  a[3]);
/// <summary>
/// <para>Specify a point defining the origin of the plane.</para>
/// </summary>
  void SetOrigin(array<double>^ a);


  // double  *GetOrigin ();
/// <summary>
/// <para>Specify a point defining the origin of the plane.</para>
/// </summary>
  array<double>^ GetOrigin();


  // void SetPoint1 (double x, double y, double z);
/// <summary>
/// <para>Specify a point defining the first axis of the plane.</para>
/// </summary>
  void SetPoint1(double x, double y, double z);


  // void SetPoint1 (double pnt[3]);
/// <summary>
/// <para>Specify a point defining the first axis of the plane.</para>
/// </summary>
  void SetPoint1(array<double>^ pnt);


  // double  *GetPoint1 ();
/// <summary>
/// <para>Specify a point defining the first axis of the plane.</para>
/// </summary>
  array<double>^ GetPoint1();


  // void SetPoint2 (double x, double y, double z);
/// <summary>
/// <para>Specify a point defining the second axis of the plane.</para>
/// </summary>
  void SetPoint2(double x, double y, double z);


  // void SetPoint2 (double pnt[3]);
/// <summary>
/// <para>Specify a point defining the second axis of the plane.</para>
/// </summary>
  void SetPoint2(array<double>^ pnt);


  // double  *GetPoint2 ();
/// <summary>
/// <para>Specify a point defining the second axis of the plane.</para>
/// </summary>
  array<double>^ GetPoint2();


  // void SetCenter (double x, double y, double z);
/// <summary>
/// <para>Set/Get the center of the plane. Works in conjunction with the plane  normal to position the plane. Don't use this method to define the plane. Instead, use it to move the plane to a new center point.</para>
/// </summary>
  void SetCenter(double x, double y, double z);


  // void SetCenter (double center[3]);
/// <summary>
/// <para>Set/Get the center of the plane. Works in conjunction with the plane  normal to position the plane. Don't use this method to define the plane. Instead, use it to move the plane to a new center point.</para>
/// </summary>
  void SetCenter(array<double>^ center);


  // double  *GetCenter ();
/// <summary>
/// <para>Set/Get the center of the plane. Works in conjunction with the plane  normal to position the plane. Don't use this method to define the plane. Instead, use it to move the plane to a new center point.</para>
/// </summary>
  array<double>^ GetCenter();


  // void SetNormal (double nx, double ny, double nz);
/// <summary>
/// <para>Set/Get the plane normal. Works in conjunction with the plane center to orient the plane. Don't use this method to define the plane. Instead, use it to rotate the plane around the current center point.</para>
/// </summary>
  void SetNormal(double nx, double ny, double nz);


  // void SetNormal (double n[3]);
/// <summary>
/// <para>Set/Get the plane normal. Works in conjunction with the plane center to orient the plane. Don't use this method to define the plane. Instead, use it to rotate the plane around the current center point.</para>
/// </summary>
  void SetNormal(array<double>^ n);


  // double  *GetNormal ();
/// <summary>
/// <para>Set/Get the plane normal. Works in conjunction with the plane center to orient the plane. Don't use this method to define the plane. Instead, use it to rotate the plane around the current center point.</para>
/// </summary>
  array<double>^ GetNormal();


  // void Push (double distance);
/// <summary>
/// <para>Translate the plane in the direction of the normal by the distance specified.  Negative values move the plane in the opposite direction.</para>
/// </summary>
  void Push(double distance);


// Did not wrap:  vtkPlaneSource ();


// Did not wrap:  ~vtkPlaneSource ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  int UpdatePlane (double v1[3], double v2[3]);


// Did not wrap:  vtkPlaneSource (const vtkPlaneSource &);


// Did not wrap:  void vtkPlaneSource 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPlaneSource(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPlaneSource(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPlaneSource();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPlaneSource();


};

} // end vtkGraphics
