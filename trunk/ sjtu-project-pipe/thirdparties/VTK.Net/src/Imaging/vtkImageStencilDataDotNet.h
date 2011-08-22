#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageStencilData : public vtkDataObject
{

public:
// Did not wrap:  static vtkImageStencilData *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageStencilData *NewInstance ();
  vtkImageStencilData^ NewInstance();


  // vtkImageStencilData *SafeDownCast (vtkObject* o);
  static vtkImageStencilData^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void Initialize ();
  void Initialize();


  // void DeepCopy (vtkDataObject *o);
  void DeepCopy(vtkDataObject^ o);


  // void ShallowCopy (vtkDataObject *f);
  void ShallowCopy(vtkDataObject^ f);


  // void InternalImageStencilDataCopy (vtkImageStencilData *s);
  void InternalImageStencilDataCopy(vtkImageStencilData^ s);


  // int GetDataObjectType ();return VTK_DATA_OBJECT 
/// <summary>
/// <para>The extent type is 3D, just like vtkImageData.</para>
/// </summary>
  int GetDataObjectType();


  // int GetExtentType ();return VTK_3D_EXTENT 
/// <summary>
/// <para>The extent type is 3D, just like vtkImageData.</para>
/// </summary>
  int GetExtentType();


  // int GetNextExtent (int &r1, int &r2, int xMin, int xMax, int yIdx, int zIdx, int &iter);
/// <summary>
/// <para>Given the total output x extent [xMin,xMax] and the current y, z indices, return each sub-extent [r1,r2] that lies within within the unclipped region in sequence.  A value of '0' is returned if no more sub-extents are available.  The variable 'iter' must be initialized to zero before the first call, unless you want the complementary sub-extents in which case you must initialize 'iter' to -1.  The variable 'iter' is used internally to keep track of which sub-extent should be returned next.</para>
/// </summary>
  int GetNextExtent(int% r1, int% r2, int xMin, int xMax, int yIdx, int zIdx, int% iter);


  // void InsertNextExtent (int r1, int r2, int yIdx, int zIdx);
/// <summary>
/// <para>This method is used by vtkImageStencilDataSource to add an x  sub extent [r1,r2] for the x row (yIdx,zIdx).  The specified sub extent must not intersect any other sub extents along the same x row. As well, r1 and r2 must both be within the total x extent [Extent[0],Extent[1]].</para>
/// </summary>
  void InsertNextExtent(int r1, int r2, int yIdx, int zIdx);


  // void SetSpacing (double , double , double );
/// <summary>
/// <para>Set the desired spacing for the stencil. This must be called before the stencil is Updated, ideally  in the ExecuteInformation method of the imaging filter that is using the stencil.</para>
/// </summary>
  void SetSpacing(double arg0, double arg1, double arg2);


  // void SetSpacing (double  a[3]);
/// <summary>
/// <para>Set the desired spacing for the stencil. This must be called before the stencil is Updated, ideally  in the ExecuteInformation method of the imaging filter that is using the stencil.</para>
/// </summary>
  void SetSpacing(array<double>^ a);


  // double  *GetSpacing ();
/// <summary>
/// <para>Set the desired spacing for the stencil. This must be called before the stencil is Updated, ideally  in the ExecuteInformation method of the imaging filter that is using the stencil.</para>
/// </summary>
  array<double>^ GetSpacing();


  // void SetOrigin (double , double , double );
/// <summary>
/// <para>Set the desired origin for the stencil. This must be called before the stencil is Updated, ideally  in the ExecuteInformation method of the imaging filter that is using the stencil.</para>
/// </summary>
  void SetOrigin(double arg0, double arg1, double arg2);


  // void SetOrigin (double  a[3]);
/// <summary>
/// <para>Set the desired origin for the stencil. This must be called before the stencil is Updated, ideally  in the ExecuteInformation method of the imaging filter that is using the stencil.</para>
/// </summary>
  void SetOrigin(array<double>^ a);


  // double  *GetOrigin ();
/// <summary>
/// <para>Set the desired origin for the stencil. This must be called before the stencil is Updated, ideally  in the ExecuteInformation method of the imaging filter that is using the stencil.</para>
/// </summary>
  array<double>^ GetOrigin();


  // void SetExtent (int extent[6]);
/// <summary>
/// <para>Set the extent of the data.  This is should be called only  by vtkImageStencilSource, as it is part of the basic pipeline functionality.</para>
/// </summary>
  void SetExtent(array<int>^ extent);


  // void SetExtent (int x1, int x2, int y1, int y2, int z1, int z2);
/// <summary>
/// <para>Set the extent of the data.  This is should be called only  by vtkImageStencilSource, as it is part of the basic pipeline functionality.</para>
/// </summary>
  void SetExtent(int x1, int x2, int y1, int y2, int z1, int z2);


  // int  *GetExtent ();
/// <summary>
/// <para>Set the extent of the data.  This is should be called only  by vtkImageStencilSource, as it is part of the basic pipeline functionality.</para>
/// </summary>
  array<int>^ GetExtent();


  // void SetOldSpacing (double , double , double );
/// <summary>
/// <para>Save the previous data spacing.  This should be called only by vtkImageStencilSource.</para>
/// </summary>
  void SetOldSpacing(double arg0, double arg1, double arg2);


  // void SetOldSpacing (double  a[3]);
/// <summary>
/// <para>Save the previous data spacing.  This should be called only by vtkImageStencilSource.</para>
/// </summary>
  void SetOldSpacing(array<double>^ a);


  // double  *GetOldSpacing ();
/// <summary>
/// <para>Save the previous data spacing.  This should be called only by vtkImageStencilSource.</para>
/// </summary>
  array<double>^ GetOldSpacing();


  // void SetOldOrigin (double , double , double );
/// <summary>
/// <para>Save the previous data origin.  This should be called only by vtkImageStencilSource.</para>
/// </summary>
  void SetOldOrigin(double arg0, double arg1, double arg2);


  // void SetOldOrigin (double  a[3]);
/// <summary>
/// <para>Save the previous data origin.  This should be called only by vtkImageStencilSource.</para>
/// </summary>
  void SetOldOrigin(array<double>^ a);


  // double  *GetOldOrigin ();
/// <summary>
/// <para>Save the previous data origin.  This should be called only by vtkImageStencilSource.</para>
/// </summary>
  array<double>^ GetOldOrigin();


  // void AllocateExtents ();
/// <summary>
/// <para>Allocate space for the sub-extents.  This is called by vtkImageStencilSource.</para>
/// </summary>
  void AllocateExtents();


  // void UpdateData ();
/// <summary>
/// <para>WARNING: INTERNAL METHOD - NOT FOR GENERAL USE.  THIS METHOD IS PART OF THE PIPELINE UPDATE FUNCTIONALITY. Propagate the update back up the pipeline, and perform the actual  work of updating on the way down. When the propagate arrives at a port, block and wait for the asynchronous update to finish on the other side. This propagation may early terminate based on the PipelineMTime.</para>
/// </summary>
  void UpdateData();


  // void PropagateUpdateExtent ();
/// <summary>
/// <para>WARNING: INTERNAL METHOD - NOT FOR GENERAL USE.  THIS METHOD IS PART OF THE PIPELINE UPDATE FUNCTIONALITY. The update extent for this object is propagated up the pipeline. This propagation may early terminate based on the PipelineMTime.</para>
/// </summary>
  void PropagateUpdateExtent();


  // void TriggerAsynchronousUpdate ();
/// <summary>
/// <para>WARNING: INTERNAL METHOD - NOT FOR GENERAL USE.  THIS METHOD IS PART OF THE PIPELINE UPDATE FUNCTIONALITY. Propagate back up the pipeline for ports and trigger the update on the other side of the port to allow for asynchronous parallel processing in the pipeline. This propagation may early terminate based on the PipelineMTime.</para>
/// </summary>
  void TriggerAsynchronousUpdate();


// Did not wrap:  vtkImageStencilData ();


// Did not wrap:  ~vtkImageStencilData ();


// Did not wrap:  int SpacingOrOriginHasChanged ();


// Did not wrap:  vtkImageStencilData (const vtkImageStencilData &);


// Did not wrap:  void vtkImageStencilData 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageStencilData(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageStencilData(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageStencilData();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageStencilData();


};

} // end vtkImaging
