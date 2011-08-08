#pragma once

// managed includes
#include "vtkProp3DDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkTextProperty;

public ref class vtkTextActor3D : public vtkProp3D
{

public:
// Did not wrap:  static vtkTextActor3D *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkTextActor3D *NewInstance ();
  vtkTextActor3D^ NewInstance();


  // vtkTextActor3D *SafeDownCast (vtkObject* o);
  static vtkTextActor3D^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetInput (char *);
/// <summary>
/// <para>Set the text string to be displayed.</para>
/// </summary>
  void SetInput(System::String^ arg0);


  // char *GetInput ();
/// <summary>
/// <para>Set the text string to be displayed.</para>
/// </summary>
  System::String^ GetInput();


  // virtual void SetTextProperty (vtkTextProperty *p);
/// <summary>
/// <para>Set/Get the text property.</para>
/// </summary>
  void SetTextProperty(vtkTextProperty^ p);


  // vtkTextProperty *GetTextProperty ();
/// <summary>
/// <para>Set/Get the text property.</para>
/// </summary>
  vtkTextProperty^ GetTextProperty();


  // void ShallowCopy (vtkProp *prop);
/// <summary>
/// <para>Shallow copy of this text actor. Overloads the virtual vtkProp method.</para>
/// </summary>
  void ShallowCopy(vtkProp^ prop);


// Did not wrap:  virtual double *GetBounds ();


// Did not wrap:  vtkTextActor3D ();


// Did not wrap:  ~vtkTextActor3D ();


// Did not wrap:  virtual int UpdateImageActor ();


// Did not wrap:  vtkTextActor3D (const vtkTextActor3D &);


// Did not wrap:  void vtkTextActor3D 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkTextActor3D(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkTextActor3D(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkTextActor3D();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkTextActor3D();


};

} // end vtkRendering
