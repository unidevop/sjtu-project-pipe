#pragma once

// managed includes
#include "vtkObjectDotNet.h"
#include "vtkObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkExtentSplitter : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkExtentSplitter *NewInstance ();
  vtkExtentSplitter^ NewInstance();


  // vtkExtentSplitter *SafeDownCast (vtkObject* o);
  static vtkExtentSplitter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkExtentSplitter *New ();


  // void AddExtentSource (int id, int priority, int x0, int x1, int y0, int y1, int z0, int z1);
/// <summary>
/// <para>Add/Remove a source providing the given extent.  Sources with higher priority numbers are favored.  Source id numbers and priorities must be non-negative.</para>
/// </summary>
  void AddExtentSource(int id, int priority, int x0, int x1, int y0, int y1, int z0, int z1);


  // void AddExtentSource (int id, int priority, int *extent);
/// <summary>
/// <para>Add/Remove a source providing the given extent.  Sources with higher priority numbers are favored.  Source id numbers and priorities must be non-negative.</para>
/// </summary>
  void AddExtentSource(int id, int priority, array<int>^ extent);


  // void RemoveExtentSource (int id);
/// <summary>
/// <para>Add/Remove a source providing the given extent.  Sources with higher priority numbers are favored.  Source id numbers and priorities must be non-negative.</para>
/// </summary>
  void RemoveExtentSource(int id);


  // void RemoveAllExtentSources ();
/// <summary>
/// <para>Add/Remove a source providing the given extent.  Sources with higher priority numbers are favored.  Source id numbers and priorities must be non-negative.</para>
/// </summary>
  void RemoveAllExtentSources();


  // void AddExtent (int x0, int x1, int y0, int y1, int z0, int z1);
/// <summary>
/// <para>Add an extent to the queue of extents to be split among the available sources.</para>
/// </summary>
  void AddExtent(int x0, int x1, int y0, int y1, int z0, int z1);


  // void AddExtent (int *extent);
/// <summary>
/// <para>Add an extent to the queue of extents to be split among the available sources.</para>
/// </summary>
  void AddExtent(array<int>^ extent);


  // int ComputeSubExtents ();
/// <summary>
/// <para>Split the extents currently in the queue among the available sources.  The queue is empty when this returns.  Returns 1 if all extents could be read.  Returns 0 if any portion of any extent was not available through any source.</para>
/// </summary>
  int ComputeSubExtents();


  // int GetNumberOfSubExtents ();
/// <summary>
/// <para>Get the number of sub-extents into which the original set of extents have been split across the available sources.  Valid after a call to ComputeSubExtents.</para>
/// </summary>
  int GetNumberOfSubExtents();


  // int *GetSubExtent (int index);
/// <summary>
/// <para>Get the sub-extent associated with the given index.  Use GetSubExtentSource to get the id of the source from which this sub-extent should be read.  Valid after a call to ComputeSubExtents.</para>
/// </summary>
  array<int>^ GetSubExtent(int index);


  // void GetSubExtent (int index, int *extent);
/// <summary>
/// <para>Get the sub-extent associated with the given index.  Use GetSubExtentSource to get the id of the source from which this sub-extent should be read.  Valid after a call to ComputeSubExtents.</para>
/// </summary>
  void GetSubExtent(int index, array<int>^ extent);


  // int GetSubExtentSource (int index);
/// <summary>
/// <para>Get the id of the source from which the sub-extent associated with the given index should be read.  Returns -1 if no source provides the sub-extent.</para>
/// </summary>
  int GetSubExtentSource(int index);


  // int GetPointMode ();
/// <summary>
/// <para>Get/Set whether &quot;point mode&quot; is on.  In point mode, sub-extents are generated to ensure every point in the update request is read, but not necessarily every cell.  This can be used when point data are stored in a planar slice per piece with no cell data.  The default is OFF.</para>
/// </summary>
  int GetPointMode();


  // void SetPointMode (int );
/// <summary>
/// <para>Get/Set whether &quot;point mode&quot; is on.  In point mode, sub-extents are generated to ensure every point in the update request is read, but not necessarily every cell.  This can be used when point data are stored in a planar slice per piece with no cell data.  The default is OFF.</para>
/// </summary>
  void SetPointMode(int arg0);


  // void PointModeOn ();
/// <summary>
/// <para>Get/Set whether &quot;point mode&quot; is on.  In point mode, sub-extents are generated to ensure every point in the update request is read, but not necessarily every cell.  This can be used when point data are stored in a planar slice per piece with no cell data.  The default is OFF.</para>
/// </summary>
  void PointModeOn();


  // void PointModeOff ();
/// <summary>
/// <para>Get/Set whether &quot;point mode&quot; is on.  In point mode, sub-extents are generated to ensure every point in the update request is read, but not necessarily every cell.  This can be used when point data are stored in a planar slice per piece with no cell data.  The default is OFF.</para>
/// </summary>
  void PointModeOff();


// Did not wrap:  vtkExtentSplitter ();


// Did not wrap:  ~vtkExtentSplitter ();


// Did not wrap:  void SplitExtent (int *extent, int *subextent);


// Did not wrap:  int IntersectExtents (const int *extent1, const int *extent2, int *result);


// Did not wrap:  int Min (int a, int b);


// Did not wrap:  int Max (int a, int b);


// Did not wrap:  vtkExtentSplitter (const vtkExtentSplitter &);


// Did not wrap:  void vtkExtentSplitter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkExtentSplitter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkExtentSplitter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkExtentSplitter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkExtentSplitter();


};

} // end vtkCommon
