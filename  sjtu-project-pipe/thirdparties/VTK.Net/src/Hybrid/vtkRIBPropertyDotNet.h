#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkRIBProperty : public vtkProperty
{

public:
// Did not wrap:  static vtkRIBProperty *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkRIBProperty *NewInstance ();
  vtkRIBProperty^ NewInstance();


  // vtkRIBProperty *SafeDownCast (vtkObject* o);
  static vtkRIBProperty^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetSurfaceShader (char *);
/// <summary>
/// <para>Specify the name of a surface shader.</para>
/// </summary>
  void SetSurfaceShader(System::String^ arg0);


  // char *GetSurfaceShader ();
/// <summary>
/// <para>Specify the name of a surface shader.</para>
/// </summary>
  System::String^ GetSurfaceShader();


  // void SetDisplacementShader (char *);
/// <summary>
/// <para>Specify the name of a displacement shader.</para>
/// </summary>
  void SetDisplacementShader(System::String^ arg0);


  // char *GetDisplacementShader ();
/// <summary>
/// <para>Specify the name of a displacement shader.</para>
/// </summary>
  System::String^ GetDisplacementShader();


  // void SetVariable (char *variable, char *declaration);
/// <summary>
/// <para>Specify declarations for variables..</para>
/// </summary>
  void SetVariable(System::String^ variable, System::String^ declaration);


  // void AddVariable (char *variable, char *declaration);
/// <summary>
/// <para>Specify declarations for variables..</para>
/// </summary>
  void AddVariable(System::String^ variable, System::String^ declaration);


  // char *GetDeclarations ();
/// <summary>
/// <para>Get variable declarations</para>
/// </summary>
  System::String^ GetDeclarations();


  // void SetParameter (char *parameter, char *value);
/// <summary>
/// <para>Specify parameter values for variables.</para>
/// </summary>
  void SetParameter(System::String^ parameter, System::String^ value);


  // void AddParameter (char *parameter, char *value);
/// <summary>
/// <para>Specify parameter values for variables.</para>
/// </summary>
  void AddParameter(System::String^ parameter, System::String^ value);


  // char *GetParameters ();
/// <summary>
/// <para>Get parameters.</para>
/// </summary>
  System::String^ GetParameters();


// Did not wrap:  vtkRIBProperty ();


// Did not wrap:  ~vtkRIBProperty ();


// Did not wrap:  void Render (vtkActor *a, vtkRenderer *ren);


// Did not wrap:  vtkRIBProperty (const vtkRIBProperty &);


// Did not wrap:  void vtkRIBProperty 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkRIBProperty(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkRIBProperty(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkRIBProperty();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkRIBProperty();


};

} // end vtkHybrid
