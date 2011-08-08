#pragma once

// managed includes
#include "vtkObjectDotNet.h"
#include "vtkObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkMatrix4x4;
ref class vtkProp;

public ref class vtkAssemblyNode : public vtkObject
{

public:
// Did not wrap:  static vtkAssemblyNode *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkAssemblyNode *NewInstance ();
  vtkAssemblyNode^ NewInstance();


  // vtkAssemblyNode *SafeDownCast (vtkObject* o);
  static vtkAssemblyNode^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void SetViewProp (vtkProp *prop);
/// <summary>
/// <para>Set/Get the prop that this assembly node refers to.</para>
/// </summary>
  void SetViewProp(vtkProp^ prop);


  // vtkProp *GetViewProp ();
/// <summary>
/// <para>Set/Get the prop that this assembly node refers to.</para>
/// </summary>
  vtkProp^ GetViewProp();


  // void SetMatrix (vtkMatrix4x4 *matrix);
/// <summary>
/// <para>Specify a transformation matrix associated with the prop. Note: if the prop is not a type of vtkProp3D, then the transformation matrix is ignored (and expected to be NULL). Also, internal to this object the matrix is copied because the matrix is used for computation by vtkAssemblyPath.</para>
/// </summary>
  void SetMatrix(vtkMatrix4x4^ matrix);


  // vtkMatrix4x4 *GetMatrix ();
/// <summary>
/// <para>Specify a transformation matrix associated with the prop. Note: if the prop is not a type of vtkProp3D, then the transformation matrix is ignored (and expected to be NULL). Also, internal to this object the matrix is copied because the matrix is used for computation by vtkAssemblyPath.</para>
/// </summary>
  vtkMatrix4x4^ GetMatrix();


  // virtual unsigned long GetMTime ();
/// <summary>
/// <para>Override the standard GetMTime() to check for the modified times of the prop and matrix.</para>
/// </summary>
  unsigned long GetMTime();


  // virtual void SetProp (vtkProp *prop);
/// <summary>
/// <para>@deprecated Replaced by vtkAssemblyNode::SetViewProp() as of VTK 5.0.</para>
/// </summary>
  [Obsolete("This method declared deprecated")]
  void SetProp(vtkProp^ prop);


  // virtual vtkProp *GetProp ();
/// <summary>
/// <para>@deprecated Replaced by vtkAssemblyNode::GetViewProp() as of VTK 5.0.</para>
/// </summary>
  [Obsolete("This method declared deprecated")]
  vtkProp^ GetProp();


// Did not wrap:  vtkAssemblyNode ();


// Did not wrap:  ~vtkAssemblyNode ();


// Did not wrap:  void vtkAssemblyNode 


// Did not wrap:  vtkAssemblyNode (const vtkAssemblyNode &);


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkAssemblyNode(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkAssemblyNode(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkAssemblyNode();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkAssemblyNode();


};

} // end vtkCommon
