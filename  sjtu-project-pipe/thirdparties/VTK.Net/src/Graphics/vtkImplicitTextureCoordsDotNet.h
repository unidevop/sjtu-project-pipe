#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImplicitTextureCoords : public vtkDataSetAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImplicitTextureCoords *NewInstance ();
  vtkImplicitTextureCoords^ NewInstance();


  // vtkImplicitTextureCoords *SafeDownCast (vtkObject* o);
  static vtkImplicitTextureCoords^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkImplicitTextureCoords *New ();


  // virtual void SetRFunction (vtkImplicitFunction *);
/// <summary>
/// <para>Specify an implicit function to compute the r texture coordinate.</para>
/// </summary>
  void SetRFunction(vtkImplicitFunction^ arg0);


  // vtkImplicitFunction *GetRFunction ();
/// <summary>
/// <para>Specify an implicit function to compute the r texture coordinate.</para>
/// </summary>
  vtkImplicitFunction^ GetRFunction();


  // virtual void SetSFunction (vtkImplicitFunction *);
/// <summary>
/// <para>Specify an implicit function to compute the s texture coordinate.</para>
/// </summary>
  void SetSFunction(vtkImplicitFunction^ arg0);


  // vtkImplicitFunction *GetSFunction ();
/// <summary>
/// <para>Specify an implicit function to compute the s texture coordinate.</para>
/// </summary>
  vtkImplicitFunction^ GetSFunction();


  // virtual void SetTFunction (vtkImplicitFunction *);
/// <summary>
/// <para>Specify an implicit function to compute the t texture coordinate.</para>
/// </summary>
  void SetTFunction(vtkImplicitFunction^ arg0);


  // vtkImplicitFunction *GetTFunction ();
/// <summary>
/// <para>Specify an implicit function to compute the t texture coordinate.</para>
/// </summary>
  vtkImplicitFunction^ GetTFunction();


  // void SetFlipTexture (int );
/// <summary>
/// <para>If enabled, this will flip the sense of inside and outside the implicit function (i.e., a rotation around the r-s-t=0.5 axis).</para>
/// </summary>
  void SetFlipTexture(int arg0);


  // int GetFlipTexture ();
/// <summary>
/// <para>If enabled, this will flip the sense of inside and outside the implicit function (i.e., a rotation around the r-s-t=0.5 axis).</para>
/// </summary>
  int GetFlipTexture();


  // void FlipTextureOn ();
/// <summary>
/// <para>If enabled, this will flip the sense of inside and outside the implicit function (i.e., a rotation around the r-s-t=0.5 axis).</para>
/// </summary>
  void FlipTextureOn();


  // void FlipTextureOff ();
/// <summary>
/// <para>If enabled, this will flip the sense of inside and outside the implicit function (i.e., a rotation around the r-s-t=0.5 axis).</para>
/// </summary>
  void FlipTextureOff();


// Did not wrap:  vtkImplicitTextureCoords ();


// Did not wrap:  ~vtkImplicitTextureCoords ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkImplicitTextureCoords (const vtkImplicitTextureCoords &);


// Did not wrap:  void vtkImplicitTextureCoords 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImplicitTextureCoords(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImplicitTextureCoords(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImplicitTextureCoords();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImplicitTextureCoords();


};

} // end vtkGraphics
