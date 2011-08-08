#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkRegularPolygonSource : public vtkPolyDataAlgorithm
{

public:
// Did not wrap:  static vtkRegularPolygonSource *New ();


  // const char *GetClassName ();
/// <summary>
/// <para>Standard methods for instantiation, obtaining type and printing instance values.</para>
/// </summary>
  System::String^ GetClassName();


  // int IsA (const char *name);
/// <summary>
/// <para>Standard methods for instantiation, obtaining type and printing instance values.</para>
/// </summary>
  int IsA(System::String^ name);


  // vtkRegularPolygonSource *NewInstance ();
/// <summary>
/// <para>Standard methods for instantiation, obtaining type and printing instance values.</para>
/// </summary>
  vtkRegularPolygonSource^ NewInstance();


  // vtkRegularPolygonSource *SafeDownCast (vtkObject* o);
/// <summary>
/// <para>Standard methods for instantiation, obtaining type and printing instance values.</para>
/// </summary>
  static vtkRegularPolygonSource^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetNumberOfSides (int );
/// <summary>
/// <para>Set/Get the number of sides of the polygon. By default, the number of sides is set to six.</para>
/// </summary>
  void SetNumberOfSides(int arg0);


  // int GetNumberOfSidesMinValue ();
/// <summary>
/// <para>Set/Get the number of sides of the polygon. By default, the number of sides is set to six.</para>
/// </summary>
  int GetNumberOfSidesMinValue();


  // int GetNumberOfSidesMaxValue ();
/// <summary>
/// <para>Set/Get the number of sides of the polygon. By default, the number of sides is set to six.</para>
/// </summary>
  int GetNumberOfSidesMaxValue();


  // int GetNumberOfSides ();
/// <summary>
/// <para>Set/Get the number of sides of the polygon. By default, the number of sides is set to six.</para>
/// </summary>
  int GetNumberOfSides();


  // void SetCenter (double , double , double );
/// <summary>
/// <para>Set/Get the center of the polygon. By default, the center is set at the origin (0,0,0).</para>
/// </summary>
  void SetCenter(double arg0, double arg1, double arg2);


  // void SetCenter (double  a[3]);
/// <summary>
/// <para>Set/Get the center of the polygon. By default, the center is set at the origin (0,0,0).</para>
/// </summary>
  void SetCenter(array<double>^ a);


  // double  *GetCenter ();
/// <summary>
/// <para>Set/Get the center of the polygon. By default, the center is set at the origin (0,0,0).</para>
/// </summary>
  array<double>^ GetCenter();


  // void SetNormal (double , double , double );
/// <summary>
/// <para>Set/Get the normal to the polygon. The ordering of the polygon will be counter-clockwise around the normal (i.e., using the right-hand rule). By default, the normal is set to (0,0,1).</para>
/// </summary>
  void SetNormal(double arg0, double arg1, double arg2);


  // void SetNormal (double  a[3]);
/// <summary>
/// <para>Set/Get the normal to the polygon. The ordering of the polygon will be counter-clockwise around the normal (i.e., using the right-hand rule). By default, the normal is set to (0,0,1).</para>
/// </summary>
  void SetNormal(array<double>^ a);


  // double  *GetNormal ();
/// <summary>
/// <para>Set/Get the normal to the polygon. The ordering of the polygon will be counter-clockwise around the normal (i.e., using the right-hand rule). By default, the normal is set to (0,0,1).</para>
/// </summary>
  array<double>^ GetNormal();


  // void SetRadius (double );
/// <summary>
/// <para>Set/Get the radius of the polygon. By default, the radius is set to 0.5.</para>
/// </summary>
  void SetRadius(double arg0);


  // double GetRadius ();
/// <summary>
/// <para>Set/Get the radius of the polygon. By default, the radius is set to 0.5.</para>
/// </summary>
  double GetRadius();


  // void SetGeneratePolygon (int );
/// <summary>
/// <para>Control whether a polygon is produced. By default, GeneratePolygon is enabled.</para>
/// </summary>
  void SetGeneratePolygon(int arg0);


  // int GetGeneratePolygon ();
/// <summary>
/// <para>Control whether a polygon is produced. By default, GeneratePolygon is enabled.</para>
/// </summary>
  int GetGeneratePolygon();


  // void GeneratePolygonOn ();
/// <summary>
/// <para>Control whether a polygon is produced. By default, GeneratePolygon is enabled.</para>
/// </summary>
  void GeneratePolygonOn();


  // void GeneratePolygonOff ();
/// <summary>
/// <para>Control whether a polygon is produced. By default, GeneratePolygon is enabled.</para>
/// </summary>
  void GeneratePolygonOff();


  // void SetGeneratePolyline (int );
/// <summary>
/// <para>Control whether a polyline is produced. By default, GeneratePolyline is enabled.</para>
/// </summary>
  void SetGeneratePolyline(int arg0);


  // int GetGeneratePolyline ();
/// <summary>
/// <para>Control whether a polyline is produced. By default, GeneratePolyline is enabled.</para>
/// </summary>
  int GetGeneratePolyline();


  // void GeneratePolylineOn ();
/// <summary>
/// <para>Control whether a polyline is produced. By default, GeneratePolyline is enabled.</para>
/// </summary>
  void GeneratePolylineOn();


  // void GeneratePolylineOff ();
/// <summary>
/// <para>Control whether a polyline is produced. By default, GeneratePolyline is enabled.</para>
/// </summary>
  void GeneratePolylineOff();


// Did not wrap:  vtkRegularPolygonSource ();


// Did not wrap:  ~vtkRegularPolygonSource ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkRegularPolygonSource (const vtkRegularPolygonSource &);


// Did not wrap:  void vtkRegularPolygonSource 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkRegularPolygonSource(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkRegularPolygonSource(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkRegularPolygonSource();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkRegularPolygonSource();


};

} // end vtkGraphics
