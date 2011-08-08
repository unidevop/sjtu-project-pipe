#pragma once

// managed includes
#include "vtkObjectDotNet.h"
#include "vtkObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkMultiThreader : public vtkObject
{

public:
// Did not wrap:  static vtkMultiThreader *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkMultiThreader *NewInstance ();
  vtkMultiThreader^ NewInstance();


  // vtkMultiThreader *SafeDownCast (vtkObject* o);
  static vtkMultiThreader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetNumberOfThreads (int );
/// <summary>
/// <para>Get/Set the number of threads to create. It will be clamped to the range 1 - VTK_MAX_THREADS, so the caller of this method should check that the requested number of threads was accepted.</para>
/// </summary>
  void SetNumberOfThreads(int arg0);


  // int GetNumberOfThreadsMinValue ();
/// <summary>
/// <para>Get/Set the number of threads to create. It will be clamped to the range 1 - VTK_MAX_THREADS, so the caller of this method should check that the requested number of threads was accepted.</para>
/// </summary>
  int GetNumberOfThreadsMinValue();


  // int GetNumberOfThreadsMaxValue ();
/// <summary>
/// <para>Get/Set the number of threads to create. It will be clamped to the range 1 - VTK_MAX_THREADS, so the caller of this method should check that the requested number of threads was accepted.</para>
/// </summary>
  int GetNumberOfThreadsMaxValue();


  // virtual int GetNumberOfThreads ();
/// <summary>
/// <para>Get/Set the number of threads to create. It will be clamped to the range 1 - VTK_MAX_THREADS, so the caller of this method should check that the requested number of threads was accepted.</para>
/// </summary>
  int GetNumberOfThreads();


  // static void SetGlobalMaximumNumberOfThreads (int val);
/// <summary>
/// <para>Set/Get the maximum number of threads to use when multithreading. This limits and overrides any other settings for multithreading. A value of zero indicates no limit.</para>
/// </summary>
  static void SetGlobalMaximumNumberOfThreads(int val);


  // static int GetGlobalMaximumNumberOfThreads ();
/// <summary>
/// <para>Set/Get the maximum number of threads to use when multithreading. This limits and overrides any other settings for multithreading. A value of zero indicates no limit.</para>
/// </summary>
  static int GetGlobalMaximumNumberOfThreads();


  // static void SetGlobalDefaultNumberOfThreads (int val);
/// <summary>
/// <para>Set/Get the value which is used to initialize the NumberOfThreads in the constructor.  Initially this default is set to the number of  processors or VTK_MAX_THREADS (which ever is less).</para>
/// </summary>
  static void SetGlobalDefaultNumberOfThreads(int val);


  // static int GetGlobalDefaultNumberOfThreads ();
/// <summary>
/// <para>Set/Get the value which is used to initialize the NumberOfThreads in the constructor.  Initially this default is set to the number of  processors or VTK_MAX_THREADS (which ever is less).</para>
/// </summary>
  static int GetGlobalDefaultNumberOfThreads();


// Did not wrap:  vtkMultiThreader (const vtkMultiThreader &);


// Did not wrap:  void vtkMultiThreader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkMultiThreader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkMultiThreader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkMultiThreader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkMultiThreader();


};

} // end vtkCommon
