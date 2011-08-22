#pragma once

// managed includes
#include "vtkDicerDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkOBBDicer : public vtkDicer
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkOBBDicer *NewInstance ();
  vtkOBBDicer^ NewInstance();


  // vtkOBBDicer *SafeDownCast (vtkObject* o);
  static vtkOBBDicer^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkOBBDicer *New ();


// Did not wrap:  vtkOBBDicer ();


// Did not wrap:  ~vtkOBBDicer ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  void BuildTree (vtkIdList *ptIds, vtkOBBNode *OBBptr, vtkDataSet *input);


// Did not wrap:  void MarkPoints (vtkOBBNode *OBBptr, vtkShortArray *groupIds);


// Did not wrap:  void DeleteTree (vtkOBBNode *OBBptr);


// Did not wrap:  vtkOBBDicer (const vtkOBBDicer &);


// Did not wrap:  void vtkOBBDicer 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkOBBDicer(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkOBBDicer(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkOBBDicer();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkOBBDicer();


};

} // end vtkGraphics
