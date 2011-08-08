#pragma once

// managed includes
#include "vtkStreamingDemandDrivenPipelineDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkCachedStreamingDemandDrivenPipeline : public vtkStreamingDemandDrivenPipeline
{

public:
// Did not wrap:  static vtkCachedStreamingDemandDrivenPipeline *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkCachedStreamingDemandDrivenPipeline *NewInstance ();
  vtkCachedStreamingDemandDrivenPipeline^ NewInstance();


  // vtkCachedStreamingDemandDrivenPipeline *SafeDownCast (vtkObject* o);
  static vtkCachedStreamingDemandDrivenPipeline^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual int Update ();
/// <summary>
/// <para>Bring the algorithm's outputs up-to-date.</para>
/// </summary>
  int Update();


  // virtual int Update (int port);
/// <summary>
/// <para>Bring the algorithm's outputs up-to-date.</para>
/// </summary>
  int Update(int port);


  // void SetCacheSize (int size);
/// <summary>
/// <para>This is the maximum number of images that can be retained in memory. it defaults to 10.</para>
/// </summary>
  void SetCacheSize(int size);


  // int GetCacheSize ();
/// <summary>
/// <para>This is the maximum number of images that can be retained in memory. it defaults to 10.</para>
/// </summary>
  int GetCacheSize();


// Did not wrap:  vtkCachedStreamingDemandDrivenPipeline ();


// Did not wrap:  ~vtkCachedStreamingDemandDrivenPipeline ();


// Did not wrap:  virtual int NeedToExecuteData (int outputPort, vtkInformationVector *inInfoVec, vtkInformationVector *outInfoVec);


// Did not wrap:  virtual int ExecuteData (vtkInformation *request, vtkInformationVector *inInfoVec, vtkInformationVector *outInfoVec);


// Did not wrap:  vtkCachedStreamingDemandDrivenPipeline (const vtkCachedStreamingDemandDrivenPipeline &);


// Did not wrap:  void vtkCachedStreamingDemandDrivenPipeline 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkCachedStreamingDemandDrivenPipeline(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkCachedStreamingDemandDrivenPipeline(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkCachedStreamingDemandDrivenPipeline();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkCachedStreamingDemandDrivenPipeline();


};

} // end vtkFiltering
