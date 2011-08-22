#pragma once

// managed includes
#include "vtkAlgorithmDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkDataSet;

public ref class vtkAbstractMapper : public vtkAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkAbstractMapper *NewInstance ();
  vtkAbstractMapper^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual unsigned long GetMTime ();
/// <summary>
/// <para>Override Modifiedtime as we have added Clipping planes</para>
/// </summary>
  unsigned long GetMTime();


  // virtual void ReleaseGraphicsResources (vtkWindow *);
/// <summary>
/// <para>Release any graphics resources that are being consumed by this mapper. The parameter window could be used to determine which graphic resources to release.</para>
/// </summary>
  void ReleaseGraphicsResources(vtkWindow^ arg0);


  // double GetTimeToDraw ();
/// <summary>
/// <para>Get the time required to draw the geometry last time it was rendered</para>
/// </summary>
  double GetTimeToDraw();


  // void AddClippingPlane (vtkPlane *plane);
/// <summary>
/// <para>Specify clipping planes to be applied when the data is mapped (at most 6 clipping planes can be specified).</para>
/// </summary>
  void AddClippingPlane(vtkPlane^ plane);


  // void RemoveClippingPlane (vtkPlane *plane);
/// <summary>
/// <para>Specify clipping planes to be applied when the data is mapped (at most 6 clipping planes can be specified).</para>
/// </summary>
  void RemoveClippingPlane(vtkPlane^ plane);


  // void RemoveAllClippingPlanes ();
/// <summary>
/// <para>Specify clipping planes to be applied when the data is mapped (at most 6 clipping planes can be specified).</para>
/// </summary>
  void RemoveAllClippingPlanes();


  // virtual void SetClippingPlanes (vtkPlaneCollection *);
/// <summary>
/// <para>Get/Set the vtkPlaneCollection which specifies the clipping planes.</para>
/// </summary>
  void SetClippingPlanes(vtkPlaneCollection^ arg0);


  // vtkPlaneCollection *GetClippingPlanes ();
/// <summary>
/// <para>Get/Set the vtkPlaneCollection which specifies the clipping planes.</para>
/// </summary>
  vtkPlaneCollection^ GetClippingPlanes();


  // void SetClippingPlanes (vtkPlanes *planes);
/// <summary>
/// <para>An alternative way to set clipping planes: use up to six planes found in the supplied instance of the implicit function vtkPlanes.</para>
/// </summary>
  void SetClippingPlanes(vtkPlanes^ planes);


  // void ShallowCopy (vtkAbstractMapper *m);
/// <summary>
/// <para>Make a shallow copy of this mapper.</para>
/// </summary>
  void ShallowCopy(vtkAbstractMapper^ m);


  // static vtkDataArray *GetScalars (vtkDataSet *input, int scalarMode, int arrayAccessMode, int arrayId, const char *arrayName, int &cellFlag);
/// <summary>
/// <para>Internal helper function for getting the active scalars. The scalar mode indicates where the scalars come from.  The cellFlag is a  return value that is set when the scalars actually are cell scalars. the arrayAccessMode is used to indicate how to retrieve the scalars from  field data (if the scalarMode indicates that). The component is used to  indicate which component in the data array to use as the scalars.</para>
/// </summary>
  static vtkDataArray^ GetScalars(vtkDataSet^ input, int scalarMode, int arrayAccessMode, int arrayId, System::String^ arrayName, int% cellFlag);


// Did not wrap:  vtkAbstractMapper ();


// Did not wrap:  ~vtkAbstractMapper ();


// Did not wrap:  vtkAbstractMapper (const vtkAbstractMapper &);


// Did not wrap:  void vtkAbstractMapper 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkAbstractMapper(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkAbstractMapper(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkAbstractMapper();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkAbstractMapper();


};

} // end vtkFiltering
