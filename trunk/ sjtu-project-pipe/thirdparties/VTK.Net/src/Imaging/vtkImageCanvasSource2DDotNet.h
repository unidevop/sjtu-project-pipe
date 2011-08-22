#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageCanvasSource2D : public vtkImageAlgorithm
{

public:
// Did not wrap:  static vtkImageCanvasSource2D *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageCanvasSource2D *NewInstance ();
  vtkImageCanvasSource2D^ NewInstance();


  // vtkImageCanvasSource2D *SafeDownCast (vtkObject* o);
  static vtkImageCanvasSource2D^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetDrawColor (double , double , double , double );
/// <summary>
/// <para>Set/Get DrawValue.  This is the value that is used when filling data or drawing lines.</para>
/// </summary>
  void SetDrawColor(double arg0, double arg1, double arg2, double arg3);


  // void SetDrawColor (double  a[4]);
/// <summary>
/// <para>Set/Get DrawValue.  This is the value that is used when filling data or drawing lines.</para>
/// </summary>
  void SetDrawColor(array<double>^ a);


  // double  *GetDrawColor ();
/// <summary>
/// <para>Set/Get DrawValue.  This is the value that is used when filling data or drawing lines.</para>
/// </summary>
  array<double>^ GetDrawColor();


  // void SetDrawColor (double a);this SetDrawColor a 
/// <summary>
/// <para>Set/Get DrawValue.  This is the value that is used when filling data or drawing lines.</para>
/// </summary>
  void SetDrawColor(double a);


  // void SetDrawColor (double a, double b);this SetDrawColor a b 
/// <summary>
/// <para>Set/Get DrawValue.  This is the value that is used when filling data or drawing lines.</para>
/// </summary>
  void SetDrawColor(double a, double b);


  // void SetDrawColor (double a, double b, double c);this SetDrawColor a b c 
  void SetDrawColor(double a, double b, double c);


  // void FillBox (int min0, int max0, int min1, int max1);
  void FillBox(int min0, int max0, int min1, int max1);


  // void FillTube (int x0, int y0, int x1, int y1, double radius);
  void FillTube(int x0, int y0, int x1, int y1, double radius);


  // void FillTriangle (int x0, int y0, int x1, int y1, int x2, int y2);
  void FillTriangle(int x0, int y0, int x1, int y1, int x2, int y2);


  // void DrawCircle (int c0, int c1, double radius);
  void DrawCircle(int c0, int c1, double radius);


  // void DrawPoint (int p0, int p1);
  void DrawPoint(int p0, int p1);


  // void DrawSegment (int x0, int y0, int x1, int y1);
  void DrawSegment(int x0, int y0, int x1, int y1);


  // void DrawSegment3D (double *p0, double *p1);
  void DrawSegment3D(array<double>^ p0, array<double>^ p1);


  // void DrawSegment3D (double x1, double y1, double z1, double x2, double y2, double z2);double p1 p2 p1 x1 p1 y1 p1 z1 p2 x2 p2 y2 p2 z2 this DrawSegment3D p1 p2 
/// <summary>
/// <para>Draw subimage of the input image in the canvas at position x0 and y0. The subimage is defined with sx, sy, width, and height.</para>
/// </summary>
  void DrawSegment3D(double x1, double y1, double z1, double x2, double y2, double z2);


  // void DrawImage (int x0, int y0, vtkImageData *i);this DrawImage x0 y0 i 
/// <summary>
/// <para>Draw subimage of the input image in the canvas at position x0 and y0. The subimage is defined with sx, sy, width, and height.</para>
/// </summary>
  void DrawImage(int x0, int y0, vtkImageData^ i);


  // void DrawImage (int x0, int y0, vtkImageData *, int sx, int sy, int width, int height);
/// <summary>
/// <para>Draw subimage of the input image in the canvas at position x0 and y0. The subimage is defined with sx, sy, width, and height.</para>
/// </summary>
  void DrawImage(int x0, int y0, vtkImageData^ arg2, int sx, int sy, int width, int height);


  // void FillPixel (int x, int y);
/// <summary>
/// <para>Fill a colored area with another color. (like connectivity) All pixels connected (and with the same value) to pixel (x, y)  get replaced by the current &quot;DrawColor&quot;.</para>
/// </summary>
  void FillPixel(int x, int y);


  // void SetExtent (int *extent);
/// <summary>
/// <para>These methods set the WholeExtent of the output It sets the size of the canvas. Extent is a min max 3D box.  Minimums and maximums are inclusive.</para>
/// </summary>
  void SetExtent(array<int>^ extent);


  // void SetExtent (int x1, int x2, int y1, int y2, int z1, int z2);
/// <summary>
/// <para>These methods set the WholeExtent of the output It sets the size of the canvas. Extent is a min max 3D box.  Minimums and maximums are inclusive.</para>
/// </summary>
  void SetExtent(int x1, int x2, int y1, int y2, int z1, int z2);


  // void SetDefaultZ (int );
/// <summary>
/// <para>The drawing operations can only draw into one 2D XY plane at a time. If the canvas is a 3D volume, then this z value is used as the default for 2D operations.</para>
/// </summary>
  void SetDefaultZ(int arg0);


  // int GetDefaultZ ();
/// <summary>
/// <para>The drawing operations can only draw into one 2D XY plane at a time. If the canvas is a 3D volume, then this z value is used as the default for 2D operations.</para>
/// </summary>
  int GetDefaultZ();


  // void SetRatio (double , double , double );
/// <summary>
/// <para>Set/Get Ratio. This is the value that is used to pre-multiply each (x, y, z) drawing coordinates (including DefaultZ).</para>
/// </summary>
  void SetRatio(double arg0, double arg1, double arg2);


  // void SetRatio (double  a[3]);
/// <summary>
/// <para>Set/Get Ratio. This is the value that is used to pre-multiply each (x, y, z) drawing coordinates (including DefaultZ).</para>
/// </summary>
  void SetRatio(array<double>^ a);


  // double  *GetRatio ();
/// <summary>
/// <para>Set/Get Ratio. This is the value that is used to pre-multiply each (x, y, z) drawing coordinates (including DefaultZ).</para>
/// </summary>
  array<double>^ GetRatio();


  // virtual void SetNumberOfScalarComponents (int i);
/// <summary>
/// <para>Set the number of scalar components</para>
/// </summary>
  void SetNumberOfScalarComponents(int i);


  // void SetScalarTypeToFloat ();this SetScalarType VTK_FLOAT 
/// <summary>
/// <para>Set/Get the data scalar type (i.e VTK_DOUBLE). Note that these methods are setting and getting the pipeline scalar type. i.e. they are setting the type that the image data will be once it has executed. Until the REQUEST_DATA pass the actual scalars may be of some other type. This is for backwards compatibility</para>
/// </summary>
  void SetScalarTypeToFloat();


  // void SetScalarTypeToDouble ();this SetScalarType VTK_DOUBLE 
/// <summary>
/// <para>Set/Get the data scalar type (i.e VTK_DOUBLE). Note that these methods are setting and getting the pipeline scalar type. i.e. they are setting the type that the image data will be once it has executed. Until the REQUEST_DATA pass the actual scalars may be of some other type. This is for backwards compatibility</para>
/// </summary>
  void SetScalarTypeToDouble();


  // void SetScalarTypeToInt ();this SetScalarType VTK_INT 
/// <summary>
/// <para>Set/Get the data scalar type (i.e VTK_DOUBLE). Note that these methods are setting and getting the pipeline scalar type. i.e. they are setting the type that the image data will be once it has executed. Until the REQUEST_DATA pass the actual scalars may be of some other type. This is for backwards compatibility</para>
/// </summary>
  void SetScalarTypeToInt();


  // void SetScalarTypeToUnsignedInt ();this SetScalarType VTK_UNSIGNED_INT 
/// <summary>
/// <para>Set/Get the data scalar type (i.e VTK_DOUBLE). Note that these methods are setting and getting the pipeline scalar type. i.e. they are setting the type that the image data will be once it has executed. Until the REQUEST_DATA pass the actual scalars may be of some other type. This is for backwards compatibility</para>
/// </summary>
  void SetScalarTypeToUnsignedInt();


  // void SetScalarTypeToLong ();this SetScalarType VTK_LONG 
/// <summary>
/// <para>Set/Get the data scalar type (i.e VTK_DOUBLE). Note that these methods are setting and getting the pipeline scalar type. i.e. they are setting the type that the image data will be once it has executed. Until the REQUEST_DATA pass the actual scalars may be of some other type. This is for backwards compatibility</para>
/// </summary>
  void SetScalarTypeToLong();


  // void SetScalarTypeToUnsignedLong ();this SetScalarType VTK_UNSIGNED_LONG 
/// <summary>
/// <para>Set/Get the data scalar type (i.e VTK_DOUBLE). Note that these methods are setting and getting the pipeline scalar type. i.e. they are setting the type that the image data will be once it has executed. Until the REQUEST_DATA pass the actual scalars may be of some other type. This is for backwards compatibility</para>
/// </summary>
  void SetScalarTypeToUnsignedLong();


  // void SetScalarTypeToShort ();this SetScalarType VTK_SHORT 
/// <summary>
/// <para>Set/Get the data scalar type (i.e VTK_DOUBLE). Note that these methods are setting and getting the pipeline scalar type. i.e. they are setting the type that the image data will be once it has executed. Until the REQUEST_DATA pass the actual scalars may be of some other type. This is for backwards compatibility</para>
/// </summary>
  void SetScalarTypeToShort();


  // void SetScalarTypeToUnsignedShort ();this SetScalarType VTK_UNSIGNED_SHORT 
/// <summary>
/// <para>Set/Get the data scalar type (i.e VTK_DOUBLE). Note that these methods are setting and getting the pipeline scalar type. i.e. they are setting the type that the image data will be once it has executed. Until the REQUEST_DATA pass the actual scalars may be of some other type. This is for backwards compatibility</para>
/// </summary>
  void SetScalarTypeToUnsignedShort();


  // void SetScalarTypeToUnsignedChar ();this SetScalarType VTK_UNSIGNED_CHAR 
/// <summary>
/// <para>Set/Get the data scalar type (i.e VTK_DOUBLE). Note that these methods are setting and getting the pipeline scalar type. i.e. they are setting the type that the image data will be once it has executed. Until the REQUEST_DATA pass the actual scalars may be of some other type. This is for backwards compatibility</para>
/// </summary>
  void SetScalarTypeToUnsignedChar();


  // void SetScalarTypeToChar ();this SetScalarType VTK_CHAR 
/// <summary>
/// <para>Set/Get the data scalar type (i.e VTK_DOUBLE). Note that these methods are setting and getting the pipeline scalar type. i.e. they are setting the type that the image data will be once it has executed. Until the REQUEST_DATA pass the actual scalars may be of some other type. This is for backwards compatibility</para>
/// </summary>
  void SetScalarTypeToChar();


  // void SetScalarType (int );
/// <summary>
/// <para>Set/Get the data scalar type (i.e VTK_DOUBLE). Note that these methods are setting and getting the pipeline scalar type. i.e. they are setting the type that the image data will be once it has executed. Until the REQUEST_DATA pass the actual scalars may be of some other type. This is for backwards compatibility</para>
/// </summary>
  void SetScalarType(int arg0);


// Did not wrap:  vtkImageCanvasSource2D ();


// Did not wrap:  ~vtkImageCanvasSource2D ();


// Did not wrap:  int ClipSegment (int &a0, int &a1, int &b0, int &b1);


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkImageCanvasSource2D (const vtkImageCanvasSource2D &);


// Did not wrap:  void vtkImageCanvasSource2D 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageCanvasSource2D(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageCanvasSource2D(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageCanvasSource2D();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageCanvasSource2D();


};

} // end vtkImaging
