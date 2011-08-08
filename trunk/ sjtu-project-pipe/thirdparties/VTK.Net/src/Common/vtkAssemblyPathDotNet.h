#pragma once

// managed includes
#include "vtkCollectionDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkAssemblyNode;
ref class vtkMatrix4x4;
ref class vtkObject;
ref class vtkProp;

public ref class vtkAssemblyPath : public vtkCollection
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkAssemblyPath *NewInstance ();
  vtkAssemblyPath^ NewInstance();


  // vtkAssemblyPath *SafeDownCast (vtkObject* o);
  static vtkAssemblyPath^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkAssemblyPath *New ();


  // void AddNode (vtkProp *p, vtkMatrix4x4 *m);
/// <summary>
/// <para>Convenience method adds a prop and matrix together, creating an assembly node transparently. The matrix pointer m may be NULL. Note: that matrix is the one, if any, associated with the prop. </para>
/// </summary>
  void AddNode(vtkProp^ p, vtkMatrix4x4^ m);


  // vtkAssemblyNode *GetNextNode ();
/// <summary>
/// <para>Get the next assembly node in the list. The node returned contains a pointer to a prop and a 4x4 matrix. The matrix is evaluated based on the preceding assembly hierarchy (i.e., the matrix is not necessarily as the same as the one that was added with AddNode() because of the  concatenation of matrices in the assembly hierarchy).</para>
/// </summary>
  vtkAssemblyNode^ GetNextNode();


  // vtkAssemblyNode *GetFirstNode ();
/// <summary>
/// <para>Get the first assembly node in the list. See the comments for GetNextNode() regarding the contents of the returned node. (Note: This node corresponds to the vtkProp associated with the vtkRenderer.</para>
/// </summary>
  vtkAssemblyNode^ GetFirstNode();


  // vtkAssemblyNode *GetLastNode ();
/// <summary>
/// <para>Get the last assembly node in the list. See the comments for GetNextNode() regarding the contents of the returned node.</para>
/// </summary>
  vtkAssemblyNode^ GetLastNode();


  // void DeleteLastNode ();
/// <summary>
/// <para>Delete the last assembly node in the list. This is like a stack pop.</para>
/// </summary>
  void DeleteLastNode();


  // void ShallowCopy (vtkAssemblyPath *path);
/// <summary>
/// <para>Perform a shallow copy (reference counted) on the incoming path.</para>
/// </summary>
  void ShallowCopy(vtkAssemblyPath^ path);


  // virtual unsigned long GetMTime ();
/// <summary>
/// <para>Override the standard GetMTime() to check for the modified times of the nodes in this path.</para>
/// </summary>
  unsigned long GetMTime();


// Did not wrap:  vtkAssemblyPath ();


// Did not wrap:  ~vtkAssemblyPath ();


// Did not wrap:  void AddNode (vtkAssemblyNode *n);


// Did not wrap:  void AddItem (vtkObject *o);this vtkCollection AddItem o 


// Did not wrap:  vtkAssemblyPath (const vtkAssemblyPath &);


// Did not wrap:  void vtkAssemblyPath 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkAssemblyPath(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkAssemblyPath(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkAssemblyPath();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkAssemblyPath();


};

} // end vtkCommon
