#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkCuller : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkCuller *NewInstance ();
  vtkCuller^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  virtual double Cull (vtkRenderer *ren, vtkProp *propList, int &listLength, int &initialized) = 0;


// Did not wrap:  vtkCuller ();


// Did not wrap:  ~vtkCuller ();


// Did not wrap:  vtkCuller (const vtkCuller &);


// Did not wrap:  void vtkCuller 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkCuller(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkCuller(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkCuller();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkCuller();


};

} // end vtkRendering
