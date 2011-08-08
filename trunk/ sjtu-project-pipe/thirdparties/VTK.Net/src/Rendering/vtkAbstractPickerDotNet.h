#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkRenderer;

public ref class vtkAbstractPicker : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkAbstractPicker *NewInstance ();
  vtkAbstractPicker^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // vtkRenderer *GetRenderer ();
/// <summary>
/// <para>Get the renderer in which pick event occurred.</para>
/// </summary>
  vtkRenderer^ GetRenderer();


  // double  *GetSelectionPoint ();
/// <summary>
/// <para>Get the selection point in screen (pixel) coordinates. The third value is related to z-buffer depth. (Normally should be =0.)</para>
/// </summary>
  array<double>^ GetSelectionPoint();


  // double  *GetPickPosition ();
/// <summary>
/// <para>Return position in global coordinates of pick point.</para>
/// </summary>
  array<double>^ GetPickPosition();


  // virtual int Pick (double selectionX, double selectionY, double selectionZ, vtkRenderer *renderer) = 0;
/// <summary>
/// <para>Perform pick operation with selection point provided. Normally the  first two values for the selection point are x-y pixel coordinate, and the third value is =0. Return non-zero if something was successfully  picked.</para>
/// </summary>
  int Pick(double selectionX, double selectionY, double selectionZ, vtkRenderer^ renderer);


  // int Pick (double selectionPt[3], vtkRenderer *ren);return this Pick selectionPt selectionPt selectionPt ren 
/// <summary>
/// <para>provided. Normally the first two values for the selection point are x-y pixel coordinate, and the third value is =0. Return non-zero if something was successfully picked.</para>
/// </summary>
  int Pick(array<double>^ selectionPt, vtkRenderer^ ren);


  // void SetPickFromList (int );
/// <summary>
/// <para>Use these methods to control whether to limit the picking to this list (rather than renderer's actors). Make sure that the pick list contains  actors that referred to by the picker's renderer.</para>
/// </summary>
  void SetPickFromList(int arg0);


  // int GetPickFromList ();
/// <summary>
/// <para>Use these methods to control whether to limit the picking to this list (rather than renderer's actors). Make sure that the pick list contains  actors that referred to by the picker's renderer.</para>
/// </summary>
  int GetPickFromList();


  // void PickFromListOn ();
/// <summary>
/// <para>Use these methods to control whether to limit the picking to this list (rather than renderer's actors). Make sure that the pick list contains  actors that referred to by the picker's renderer.</para>
/// </summary>
  void PickFromListOn();


  // void PickFromListOff ();
/// <summary>
/// <para>Use these methods to control whether to limit the picking to this list (rather than renderer's actors). Make sure that the pick list contains  actors that referred to by the picker's renderer.</para>
/// </summary>
  void PickFromListOff();


  // void InitializePickList ();
/// <summary>
/// <para>Initialize list of actors in pick list.</para>
/// </summary>
  void InitializePickList();


  // void AddPickList (vtkProp *);
/// <summary>
/// <para>Add an actor to the pick list.</para>
/// </summary>
  void AddPickList(vtkProp^ arg0);


  // void DeletePickList (vtkProp *);
/// <summary>
/// <para>Delete an actor from the pick list.</para>
/// </summary>
  void DeletePickList(vtkProp^ arg0);


  // vtkPropCollection *GetPickList ();return this PickList 
  vtkPropCollection^ GetPickList();


// Did not wrap:  vtkAbstractPicker ();


// Did not wrap:  ~vtkAbstractPicker ();


// Did not wrap:  virtual void Initialize ();


// Did not wrap:  vtkAbstractPicker (const vtkAbstractPicker &);


// Did not wrap:  void vtkAbstractPicker 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkAbstractPicker(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkAbstractPicker(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkAbstractPicker();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkAbstractPicker();


};

} // end vtkRendering
