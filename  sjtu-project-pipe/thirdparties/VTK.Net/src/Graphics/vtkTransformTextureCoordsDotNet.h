#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkTransformTextureCoords : public vtkDataSetAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkTransformTextureCoords *NewInstance ();
  vtkTransformTextureCoords^ NewInstance();


  // vtkTransformTextureCoords *SafeDownCast (vtkObject* o);
  static vtkTransformTextureCoords^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkTransformTextureCoords *New ();


  // void SetPosition (double , double , double );
/// <summary>
/// <para>Set/Get the position of the texture map. Setting the position translates the texture map by the amount specified. </para>
/// </summary>
  void SetPosition(double arg0, double arg1, double arg2);


  // void SetPosition (double  a[3]);
/// <summary>
/// <para>Set/Get the position of the texture map. Setting the position translates the texture map by the amount specified. </para>
/// </summary>
  void SetPosition(array<double>^ a);


  // double  *GetPosition ();
/// <summary>
/// <para>Set/Get the position of the texture map. Setting the position translates the texture map by the amount specified. </para>
/// </summary>
  array<double>^ GetPosition();


  // void AddPosition (double deltaR, double deltaS, double deltaT);
/// <summary>
/// <para>Incrementally change the position of the texture map (i.e., does a translate or shift of the texture coordinates).</para>
/// </summary>
  void AddPosition(double deltaR, double deltaS, double deltaT);


  // void AddPosition (double deltaPosition[3]);
/// <summary>
/// <para>Incrementally change the position of the texture map (i.e., does a translate or shift of the texture coordinates).</para>
/// </summary>
  void AddPosition(array<double>^ deltaPosition);


  // void SetScale (double , double , double );
/// <summary>
/// <para>Set/Get the scale of the texture map. Scaling in performed independently  on the r, s and t axes.</para>
/// </summary>
  void SetScale(double arg0, double arg1, double arg2);


  // void SetScale (double  a[3]);
/// <summary>
/// <para>Set/Get the scale of the texture map. Scaling in performed independently  on the r, s and t axes.</para>
/// </summary>
  void SetScale(array<double>^ a);


  // double  *GetScale ();
/// <summary>
/// <para>Set/Get the scale of the texture map. Scaling in performed independently  on the r, s and t axes.</para>
/// </summary>
  array<double>^ GetScale();


  // void SetOrigin (double , double , double );
/// <summary>
/// <para>Set/Get the origin of the texture map. This is the point about which the texture map is flipped (e.g., rotated). Since a typical texture map ranges from (0,1) in the r-s-t coordinates, the default origin is set at  (0.5,0.5,0.5).</para>
/// </summary>
  void SetOrigin(double arg0, double arg1, double arg2);


  // void SetOrigin (double  a[3]);
/// <summary>
/// <para>Set/Get the origin of the texture map. This is the point about which the texture map is flipped (e.g., rotated). Since a typical texture map ranges from (0,1) in the r-s-t coordinates, the default origin is set at  (0.5,0.5,0.5).</para>
/// </summary>
  void SetOrigin(array<double>^ a);


  // double  *GetOrigin ();
/// <summary>
/// <para>Set/Get the origin of the texture map. This is the point about which the texture map is flipped (e.g., rotated). Since a typical texture map ranges from (0,1) in the r-s-t coordinates, the default origin is set at  (0.5,0.5,0.5).</para>
/// </summary>
  array<double>^ GetOrigin();


  // void SetFlipR (int );
/// <summary>
/// <para>Boolean indicates whether the texture map should be flipped around the  s-axis. Note that the flips occur around the texture origin.</para>
/// </summary>
  void SetFlipR(int arg0);


  // int GetFlipR ();
/// <summary>
/// <para>Boolean indicates whether the texture map should be flipped around the  s-axis. Note that the flips occur around the texture origin.</para>
/// </summary>
  int GetFlipR();


  // void FlipROn ();
/// <summary>
/// <para>Boolean indicates whether the texture map should be flipped around the  s-axis. Note that the flips occur around the texture origin.</para>
/// </summary>
  void FlipROn();


  // void FlipROff ();
/// <summary>
/// <para>Boolean indicates whether the texture map should be flipped around the  s-axis. Note that the flips occur around the texture origin.</para>
/// </summary>
  void FlipROff();


  // void SetFlipS (int );
/// <summary>
/// <para>Boolean indicates whether the texture map should be flipped around the  s-axis. Note that the flips occur around the texture origin.</para>
/// </summary>
  void SetFlipS(int arg0);


  // int GetFlipS ();
/// <summary>
/// <para>Boolean indicates whether the texture map should be flipped around the  s-axis. Note that the flips occur around the texture origin.</para>
/// </summary>
  int GetFlipS();


  // void FlipSOn ();
/// <summary>
/// <para>Boolean indicates whether the texture map should be flipped around the  s-axis. Note that the flips occur around the texture origin.</para>
/// </summary>
  void FlipSOn();


  // void FlipSOff ();
/// <summary>
/// <para>Boolean indicates whether the texture map should be flipped around the  s-axis. Note that the flips occur around the texture origin.</para>
/// </summary>
  void FlipSOff();


  // void SetFlipT (int );
/// <summary>
/// <para>Boolean indicates whether the texture map should be flipped around the  t-axis. Note that the flips occur around the texture origin.</para>
/// </summary>
  void SetFlipT(int arg0);


  // int GetFlipT ();
/// <summary>
/// <para>Boolean indicates whether the texture map should be flipped around the  t-axis. Note that the flips occur around the texture origin.</para>
/// </summary>
  int GetFlipT();


  // void FlipTOn ();
/// <summary>
/// <para>Boolean indicates whether the texture map should be flipped around the  t-axis. Note that the flips occur around the texture origin.</para>
/// </summary>
  void FlipTOn();


  // void FlipTOff ();
/// <summary>
/// <para>Boolean indicates whether the texture map should be flipped around the  t-axis. Note that the flips occur around the texture origin.</para>
/// </summary>
  void FlipTOff();


// Did not wrap:  vtkTransformTextureCoords ();


// Did not wrap:  ~vtkTransformTextureCoords ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkTransformTextureCoords (const vtkTransformTextureCoords &);


// Did not wrap:  void vtkTransformTextureCoords 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkTransformTextureCoords(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkTransformTextureCoords(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkTransformTextureCoords();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkTransformTextureCoords();


};

} // end vtkGraphics
