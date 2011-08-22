#pragma once

// managed includes
#include "vtkAbstractPropPickerDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkAbstractMapper3D;
ref class vtkActorCollection;
ref class vtkProp3DCollection;
ref class vtkRenderer;

public ref class vtkPicker : public vtkAbstractPropPicker
{

public:
// Did not wrap:  static vtkPicker *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPicker *NewInstance ();
  vtkPicker^ NewInstance();


  // vtkPicker *SafeDownCast (vtkObject* o);
  static vtkPicker^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetTolerance (double );
/// <summary>
/// <para>Specify tolerance for performing pick operation. Tolerance is specified as fraction of rendering window size. (Rendering window size is measured across diagonal.)</para>
/// </summary>
  void SetTolerance(double arg0);


  // double GetTolerance ();
/// <summary>
/// <para>Specify tolerance for performing pick operation. Tolerance is specified as fraction of rendering window size. (Rendering window size is measured across diagonal.)</para>
/// </summary>
  double GetTolerance();


  // double  *GetMapperPosition ();
/// <summary>
/// <para>Return position in mapper (i.e., non-transformed) coordinates of  pick point.</para>
/// </summary>
  array<double>^ GetMapperPosition();


  // vtkAbstractMapper3D *GetMapper ();
/// <summary>
/// <para>Return mapper that was picked (if any).</para>
/// </summary>
  vtkAbstractMapper3D^ GetMapper();


  // vtkDataSet *GetDataSet ();
/// <summary>
/// <para>Get a pointer to the dataset that was picked (if any). If nothing  was picked then NULL is returned.</para>
/// </summary>
  vtkDataSet^ GetDataSet();


  // vtkProp3DCollection *GetProp3Ds ();return this Prop3Ds 
/// <summary>
/// <para>Return a collection of all the prop 3D's that were intersected by the pick ray. This collection is not sorted.</para>
/// </summary>
  vtkProp3DCollection^ GetProp3Ds();


  // vtkActorCollection *GetActors ();
/// <summary>
/// <para>Return a collection of all the actors that were intersected. This collection is not sorted. (This is a convenience method to maintain backward compatibility.)</para>
/// </summary>
  vtkActorCollection^ GetActors();


  // vtkPoints *GetPickedPositions ();return this PickedPositions 
/// <summary>
/// <para>Return a list of the points the the actors returned by GetActors were intersected at. The order of this list will match the order of GetActors.</para>
/// </summary>
  vtkPoints^ GetPickedPositions();


  // virtual int Pick (double selectionX, double selectionY, double selectionZ, vtkRenderer *renderer);
/// <summary>
/// <para>Perform pick operation with selection point provided. Normally the  first two values for the selection point are x-y pixel coordinate, and the third value is =0. Return non-zero if something was successfully  picked.</para>
/// </summary>
  int Pick(double selectionX, double selectionY, double selectionZ, vtkRenderer^ renderer);


  // int Pick (double selectionPt[3], vtkRenderer *ren);return this Pick selectionPt selectionPt selectionPt ren 
/// <summary>
/// <para>Perform pick operation with selection point provided. Normally the first two values for the selection point are x-y pixel coordinate, and the third value is =0. Return non-zero if something was successfully picked.</para>
/// </summary>
  int Pick(array<double>^ selectionPt, vtkRenderer^ ren);


// Did not wrap:  vtkPicker ();


// Did not wrap:  ~vtkPicker ();


// Did not wrap:  void MarkPicked (vtkAssemblyPath *path, vtkProp3D *p, vtkAbstractMapper3D *m, double tMin, double mapperPos[3]);


// Did not wrap:  virtual double IntersectWithLine (double p1[3], double p2[3], double tol, vtkAssemblyPath *path, vtkProp3D *p, vtkAbstractMapper3D *m);


// Did not wrap:  virtual void Initialize ();


// Did not wrap:  vtkPicker (const vtkPicker &);


// Did not wrap:  void vtkPicker 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPicker(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPicker(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPicker();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPicker();


};

} // end vtkRendering
