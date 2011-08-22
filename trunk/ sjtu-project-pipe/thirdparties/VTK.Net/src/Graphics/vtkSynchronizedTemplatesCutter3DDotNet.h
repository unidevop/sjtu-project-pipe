#pragma once

// managed includes
#include "vtkSynchronizedTemplates3DDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkSynchronizedTemplatesCutter3D : public vtkSynchronizedTemplates3D
{

public:
// Did not wrap:  static vtkSynchronizedTemplatesCutter3D *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkSynchronizedTemplatesCutter3D *NewInstance ();
  vtkSynchronizedTemplatesCutter3D^ NewInstance();


  // vtkSynchronizedTemplatesCutter3D *SafeDownCast (vtkObject* o);
  static vtkSynchronizedTemplatesCutter3D^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void ThreadedExecute (vtkImageData *data, vtkInformation *outInfo, int *exExt, int );
/// <summary>
/// <para>Needed by templated functions.</para>
/// </summary>
  void ThreadedExecute(vtkImageData^ data, vtkInformation^ outInfo, array<int>^ exExt, int arg3);


  // virtual void SetCutFunction (vtkImplicitFunction *);
  void SetCutFunction(vtkImplicitFunction^ arg0);


  // vtkImplicitFunction *GetCutFunction ();
  vtkImplicitFunction^ GetCutFunction();


// Did not wrap:  vtkSynchronizedTemplatesCutter3D ();


// Did not wrap:  ~vtkSynchronizedTemplatesCutter3D ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkSynchronizedTemplatesCutter3D (const vtkSynchronizedTemplatesCutter3D &);


// Did not wrap:  void vtkSynchronizedTemplatesCutter3D 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkSynchronizedTemplatesCutter3D(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkSynchronizedTemplatesCutter3D(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkSynchronizedTemplatesCutter3D();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkSynchronizedTemplatesCutter3D();


};

} // end vtkGraphics
