#pragma once

// managed includes
#include "vtk3DWidgetDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkBoxWidget : public vtk3DWidget
{

public:
// Did not wrap:  static vtkBoxWidget *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkBoxWidget *NewInstance ();
  vtkBoxWidget^ NewInstance();


  // vtkBoxWidget *SafeDownCast (vtkObject* o);
  static vtkBoxWidget^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void SetEnabled (int );
/// <summary>
/// <para>Methods that satisfy the superclass' API.</para>
/// </summary>
  void SetEnabled(int arg0);


  // virtual void PlaceWidget (double bounds[6]);
/// <summary>
/// <para>Methods that satisfy the superclass' API.</para>
/// </summary>
  void PlaceWidget(array<double>^ bounds);


  // void PlaceWidget ();this Superclass PlaceWidget 
/// <summary>
/// <para>Methods that satisfy the superclass' API.</para>
/// </summary>
  void PlaceWidget();


  // void PlaceWidget (double xmin, double xmax, double ymin, double ymax, double zmin, double zmax);this Superclass PlaceWidget xmin xmax ymin ymax zmin zmax 
/// <summary>
/// <para>Get the planes describing the implicit function defined by the box widget. The user must provide the instance of the class vtkPlanes. Note that vtkPlanes is a subclass of vtkImplicitFunction, meaning that it can be used by a variety of filters to perform clipping, cutting, and selection of data.  (The direction of the normals of the planes can be reversed enabling the InsideOut flag.)</para>
/// </summary>
  void PlaceWidget(double xmin, double xmax, double ymin, double ymax, double zmin, double zmax);


  // void GetPlanes (vtkPlanes *planes);
/// <summary>
/// <para>Get the planes describing the implicit function defined by the box widget. The user must provide the instance of the class vtkPlanes. Note that vtkPlanes is a subclass of vtkImplicitFunction, meaning that it can be used by a variety of filters to perform clipping, cutting, and selection of data.  (The direction of the normals of the planes can be reversed enabling the InsideOut flag.)</para>
/// </summary>
  void GetPlanes(vtkPlanes^ planes);


  // void SetInsideOut (int );
/// <summary>
/// <para>Set/Get the InsideOut flag. When off, the normals point out of the box. When on, the normals point into the hexahedron.  InsideOut is off by default.</para>
/// </summary>
  void SetInsideOut(int arg0);


  // int GetInsideOut ();
/// <summary>
/// <para>Set/Get the InsideOut flag. When off, the normals point out of the box. When on, the normals point into the hexahedron.  InsideOut is off by default.</para>
/// </summary>
  int GetInsideOut();


  // void InsideOutOn ();
/// <summary>
/// <para>Set/Get the InsideOut flag. When off, the normals point out of the box. When on, the normals point into the hexahedron.  InsideOut is off by default.</para>
/// </summary>
  void InsideOutOn();


  // void InsideOutOff ();
/// <summary>
/// <para>Set/Get the InsideOut flag. When off, the normals point out of the box. When on, the normals point into the hexahedron.  InsideOut is off by default.</para>
/// </summary>
  void InsideOutOff();


  // virtual void GetTransform (vtkTransform *t);
/// <summary>
/// <para>Retrieve a linear transform characterizing the transformation of the box. Note that the transformation is relative to where PlaceWidget was initially called. This method modifies the transform provided. The transform can be used to control the position of vtkProp3D's, as well as other transformation operations (e.g., vtkTranformPolyData).</para>
/// </summary>
  void GetTransform(vtkTransform^ t);


  // virtual void SetTransform (vtkTransform *t);
/// <summary>
/// <para>Set the position, scale and orientation of the box widget using the transform specified. Note that the transformation is relative to  where PlaceWidget was initially called (i.e., the original bounding box). </para>
/// </summary>
  void SetTransform(vtkTransform^ t);


  // void GetPolyData (vtkPolyData *pd);
/// <summary>
/// <para>Grab the polydata (including points) that define the box widget. The polydata consists of 6 quadrilateral faces and 15 points. The first eight points define the eight corner vertices; the next six define the -x,+x, -y,+y, -z,+z face points; and the final point (the 15th out of 15 points) defines the center of the hexahedron. These point values are guaranteed to be up-to-date when either the InteractionEvent or EndInteractionEvent events are invoked. The user provides the vtkPolyData and the points and cells are added to it.</para>
/// </summary>
  void GetPolyData(vtkPolyData^ pd);


  // vtkProperty *GetHandleProperty ();
/// <summary>
/// <para>Get the handle properties (the little balls are the handles). The  properties of the handles when selected and normal can be  set.</para>
/// </summary>
  vtkProperty^ GetHandleProperty();


  // vtkProperty *GetSelectedHandleProperty ();
/// <summary>
/// <para>Get the handle properties (the little balls are the handles). The  properties of the handles when selected and normal can be  set.</para>
/// </summary>
  vtkProperty^ GetSelectedHandleProperty();


  // void HandlesOn ();
/// <summary>
/// <para>Switches handles (the spheres) on or off by manipulating the actor visibility.</para>
/// </summary>
  void HandlesOn();


  // void HandlesOff ();
/// <summary>
/// <para>Switches handles (the spheres) on or off by manipulating the actor visibility.</para>
/// </summary>
  void HandlesOff();


  // vtkProperty *GetFaceProperty ();
/// <summary>
/// <para>Get the face properties (the faces of the box). The  properties of the face when selected and normal can be  set.</para>
/// </summary>
  vtkProperty^ GetFaceProperty();


  // vtkProperty *GetSelectedFaceProperty ();
/// <summary>
/// <para>Get the face properties (the faces of the box). The  properties of the face when selected and normal can be  set.</para>
/// </summary>
  vtkProperty^ GetSelectedFaceProperty();


  // vtkProperty *GetOutlineProperty ();
/// <summary>
/// <para>Get the outline properties (the outline of the box). The  properties of the outline when selected and normal can be  set.</para>
/// </summary>
  vtkProperty^ GetOutlineProperty();


  // vtkProperty *GetSelectedOutlineProperty ();
/// <summary>
/// <para>Get the outline properties (the outline of the box). The  properties of the outline when selected and normal can be  set.</para>
/// </summary>
  vtkProperty^ GetSelectedOutlineProperty();


  // void SetOutlineFaceWires (int );
/// <summary>
/// <para>Control the representation of the outline. This flag enables face wires. By default face wires are off.</para>
/// </summary>
  void SetOutlineFaceWires(int arg0);


  // int GetOutlineFaceWires ();
/// <summary>
/// <para>Control the representation of the outline. This flag enables face wires. By default face wires are off.</para>
/// </summary>
  int GetOutlineFaceWires();


  // void OutlineFaceWiresOn ();this SetOutlineFaceWires 
/// <summary>
/// <para>Control the representation of the outline. This flag enables face wires. By default face wires are off.</para>
/// </summary>
  void OutlineFaceWiresOn();


  // void OutlineFaceWiresOff ();this SetOutlineFaceWires 
/// <summary>
/// <para>Control the representation of the outline. This flag enables the cursor lines running between the handles. By default cursor wires are on.</para>
/// </summary>
  void OutlineFaceWiresOff();


  // void SetOutlineCursorWires (int );
/// <summary>
/// <para>Control the representation of the outline. This flag enables the cursor lines running between the handles. By default cursor wires are on.</para>
/// </summary>
  void SetOutlineCursorWires(int arg0);


  // int GetOutlineCursorWires ();
/// <summary>
/// <para>Control the representation of the outline. This flag enables the cursor lines running between the handles. By default cursor wires are on.</para>
/// </summary>
  int GetOutlineCursorWires();


  // void OutlineCursorWiresOn ();this SetOutlineCursorWires 
/// <summary>
/// <para>Control the representation of the outline. This flag enables the cursor lines running between the handles. By default cursor wires are on.</para>
/// </summary>
  void OutlineCursorWiresOn();


  // void OutlineCursorWiresOff ();this SetOutlineCursorWires 
/// <summary>
/// <para>Control the behavior of the widget. Translation, rotation, and scaling can all be enabled and disabled.</para>
/// </summary>
  void OutlineCursorWiresOff();


  // void SetTranslationEnabled (int );
/// <summary>
/// <para>Control the behavior of the widget. Translation, rotation, and scaling can all be enabled and disabled.</para>
/// </summary>
  void SetTranslationEnabled(int arg0);


  // int GetTranslationEnabled ();
/// <summary>
/// <para>Control the behavior of the widget. Translation, rotation, and scaling can all be enabled and disabled.</para>
/// </summary>
  int GetTranslationEnabled();


  // void TranslationEnabledOn ();
/// <summary>
/// <para>Control the behavior of the widget. Translation, rotation, and scaling can all be enabled and disabled.</para>
/// </summary>
  void TranslationEnabledOn();


  // void TranslationEnabledOff ();
/// <summary>
/// <para>Control the behavior of the widget. Translation, rotation, and scaling can all be enabled and disabled.</para>
/// </summary>
  void TranslationEnabledOff();


  // void SetScalingEnabled (int );
/// <summary>
/// <para>Control the behavior of the widget. Translation, rotation, and scaling can all be enabled and disabled.</para>
/// </summary>
  void SetScalingEnabled(int arg0);


  // int GetScalingEnabled ();
/// <summary>
/// <para>Control the behavior of the widget. Translation, rotation, and scaling can all be enabled and disabled.</para>
/// </summary>
  int GetScalingEnabled();


  // void ScalingEnabledOn ();
/// <summary>
/// <para>Control the behavior of the widget. Translation, rotation, and scaling can all be enabled and disabled.</para>
/// </summary>
  void ScalingEnabledOn();


  // void ScalingEnabledOff ();
/// <summary>
/// <para>Control the behavior of the widget. Translation, rotation, and scaling can all be enabled and disabled.</para>
/// </summary>
  void ScalingEnabledOff();


  // void SetRotationEnabled (int );
/// <summary>
/// <para>Control the behavior of the widget. Translation, rotation, and scaling can all be enabled and disabled.</para>
/// </summary>
  void SetRotationEnabled(int arg0);


  // int GetRotationEnabled ();
/// <summary>
/// <para>Control the behavior of the widget. Translation, rotation, and scaling can all be enabled and disabled.</para>
/// </summary>
  int GetRotationEnabled();


  // void RotationEnabledOn ();
/// <summary>
/// <para>Control the behavior of the widget. Translation, rotation, and scaling can all be enabled and disabled.</para>
/// </summary>
  void RotationEnabledOn();


  // void RotationEnabledOff ();
/// <summary>
/// <para>Control the behavior of the widget. Translation, rotation, and scaling can all be enabled and disabled.</para>
/// </summary>
  void RotationEnabledOff();


// Did not wrap:  vtkBoxWidget ();


// Did not wrap:  ~vtkBoxWidget ();


// Did not wrap:  static void ProcessEvents (vtkObject *object, unsigned long event, void *clientdata, void *calldata);


// Did not wrap:  virtual void OnMouseMove ();


// Did not wrap:  virtual void OnLeftButtonDown ();


// Did not wrap:  virtual void OnLeftButtonUp ();


// Did not wrap:  virtual void OnMiddleButtonDown ();


// Did not wrap:  virtual void OnMiddleButtonUp ();


// Did not wrap:  virtual void OnRightButtonDown ();


// Did not wrap:  virtual void OnRightButtonUp ();


// Did not wrap:  virtual void PositionHandles ();


// Did not wrap:  int HighlightHandle (vtkProp *prop);


// Did not wrap:  void HighlightFace (int cellId);


// Did not wrap:  void HighlightOutline (int highlight);


// Did not wrap:  void ComputeNormals ();


// Did not wrap:  virtual void SizeHandles ();


// Did not wrap:  virtual void Translate (double *p1, double *p2);


// Did not wrap:  virtual void Scale (double *p1, double *p2, int X, int Y);


// Did not wrap:  virtual void Rotate (int X, int Y, double *p1, double *p2, double *vpn);


// Did not wrap:  void MovePlusXFace (double *p1, double *p2);


// Did not wrap:  void MoveMinusXFace (double *p1, double *p2);


// Did not wrap:  void MovePlusYFace (double *p1, double *p2);


// Did not wrap:  void MoveMinusYFace (double *p1, double *p2);


// Did not wrap:  void MovePlusZFace (double *p1, double *p2);


// Did not wrap:  void MoveMinusZFace (double *p1, double *p2);


// Did not wrap:  void MoveFace (double *p1, double *p2, double *dir, double *x1, double *x2, double *x3, double *x4, double *x5);


// Did not wrap:  void GetDirection (const double Nx[3], const double Ny[3], const double Nz[3], double dir[3]);


// Did not wrap:  void CreateDefaultProperties ();


// Did not wrap:  void GenerateOutline ();


// Did not wrap:  vtkBoxWidget (const vtkBoxWidget &);


// Did not wrap:  void vtkBoxWidget 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkBoxWidget(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkBoxWidget(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkBoxWidget();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkBoxWidget();


};

} // end vtkWidgets
