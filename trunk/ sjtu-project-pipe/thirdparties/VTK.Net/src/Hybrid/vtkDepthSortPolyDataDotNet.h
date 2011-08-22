#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkDepthSortPolyData : public vtkPolyDataAlgorithm
{

public:
// Did not wrap:  static vtkDepthSortPolyData *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkDepthSortPolyData *NewInstance ();
  vtkDepthSortPolyData^ NewInstance();


  // vtkDepthSortPolyData *SafeDownCast (vtkObject* o);
  static vtkDepthSortPolyData^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetDirection (int );
/// <summary>
/// <para>Specify the sort method for the polygonal primitives. By default, the poly data is sorted from back to front.</para>
/// </summary>
  void SetDirection(int arg0);


  // int GetDirection ();
/// <summary>
/// <para>Specify the sort method for the polygonal primitives. By default, the poly data is sorted from back to front.</para>
/// </summary>
  int GetDirection();


  // void SetDirectionToFrontToBack ();this SetDirection VTK_DIRECTION_FRONT_TO_BACK 
/// <summary>
/// <para>Specify the sort method for the polygonal primitives. By default, the poly data is sorted from back to front.</para>
/// </summary>
  void SetDirectionToFrontToBack();


  // void SetDirectionToBackToFront ();this SetDirection VTK_DIRECTION_BACK_TO_FRONT 
/// <summary>
/// <para>Specify the sort method for the polygonal primitives. By default, the poly data is sorted from back to front.</para>
/// </summary>
  void SetDirectionToBackToFront();


  // void SetDirectionToSpecifiedVector ();this SetDirection VTK_DIRECTION_SPECIFIED_VECTOR 
/// <summary>
/// <para>Specify the point to use when sorting. The fastest is to just take the first cell point. Other options are to take the bounding box center or the parametric center of the cell. By default, the first cell point is used.</para>
/// </summary>
  void SetDirectionToSpecifiedVector();


  // void SetDepthSortMode (int );
/// <summary>
/// <para>Specify the point to use when sorting. The fastest is to just take the first cell point. Other options are to take the bounding box center or the parametric center of the cell. By default, the first cell point is used.</para>
/// </summary>
  void SetDepthSortMode(int arg0);


  // int GetDepthSortMode ();
/// <summary>
/// <para>Specify the point to use when sorting. The fastest is to just take the first cell point. Other options are to take the bounding box center or the parametric center of the cell. By default, the first cell point is used.</para>
/// </summary>
  int GetDepthSortMode();


  // void SetDepthSortModeToFirstPoint ();this SetDepthSortMode VTK_SORT_FIRST_POINT 
/// <summary>
/// <para>Specify the point to use when sorting. The fastest is to just take the first cell point. Other options are to take the bounding box center or the parametric center of the cell. By default, the first cell point is used.</para>
/// </summary>
  void SetDepthSortModeToFirstPoint();


  // void SetDepthSortModeToBoundsCenter ();this SetDepthSortMode VTK_SORT_BOUNDS_CENTER 
/// <summary>
/// <para>Specify the point to use when sorting. The fastest is to just take the first cell point. Other options are to take the bounding box center or the parametric center of the cell. By default, the first cell point is used.</para>
/// </summary>
  void SetDepthSortModeToBoundsCenter();


  // void SetDepthSortModeToParametricCenter ();this SetDepthSortMode VTK_SORT_PARAMETRIC_CENTER 
/// <summary>
/// <para>Specify a camera that is used to define a view direction along which the cells are sorted. This ivar only has effect if the direction is set to front-to-back or back-to-front, and a camera is specified.</para>
/// </summary>
  void SetDepthSortModeToParametricCenter();


  // virtual void SetCamera (vtkCamera *);
/// <summary>
/// <para>Specify a camera that is used to define a view direction along which the cells are sorted. This ivar only has effect if the direction is set to front-to-back or back-to-front, and a camera is specified.</para>
/// </summary>
  void SetCamera(vtkCamera^ arg0);


  // vtkCamera *GetCamera ();
/// <summary>
/// <para>Specify a camera that is used to define a view direction along which the cells are sorted. This ivar only has effect if the direction is set to front-to-back or back-to-front, and a camera is specified.</para>
/// </summary>
  vtkCamera^ GetCamera();


  // void SetProp3D (vtkProp3D *);
/// <summary>
/// <para>Specify a transformation matrix (via the vtkProp3D::GetMatrix() method) that is used to include the effects of transformation. This ivar only has effect if the direction is set to front-to-back or back-to-front, and a camera is specified. Specifying the vtkProp3D is optional.</para>
/// </summary>
  void SetProp3D(vtkProp3D^ arg0);


  // vtkProp3D *GetProp3D ();
/// <summary>
/// <para>Specify a transformation matrix (via the vtkProp3D::GetMatrix() method) that is used to include the effects of transformation. This ivar only has effect if the direction is set to front-to-back or back-to-front, and a camera is specified. Specifying the vtkProp3D is optional.</para>
/// </summary>
  vtkProp3D^ GetProp3D();


  // void SetVector (double , double , double );
/// <summary>
/// <para>Set/Get the sort direction. This ivar only has effect if the sort direction is set to SetDirectionToSpecifiedVector(). The sort occurs in the direction of the vector.</para>
/// </summary>
  void SetVector(double arg0, double arg1, double arg2);


  // void SetVector (double  a[3]);
/// <summary>
/// <para>Set/Get the sort direction. This ivar only has effect if the sort direction is set to SetDirectionToSpecifiedVector(). The sort occurs in the direction of the vector.</para>
/// </summary>
  void SetVector(array<double>^ a);


  // double  *GetVector ();
/// <summary>
/// <para>Set/Get the sort direction. This ivar only has effect if the sort direction is set to SetDirectionToSpecifiedVector(). The sort occurs in the direction of the vector.</para>
/// </summary>
  array<double>^ GetVector();


  // void SetOrigin (double , double , double );
/// <summary>
/// <para>Set/Get the sort origin. This ivar only has effect if the sort direction is set to SetDirectionToSpecifiedVector(). The sort occurs in the direction of the vector, with this point specifying the origin.</para>
/// </summary>
  void SetOrigin(double arg0, double arg1, double arg2);


  // void SetOrigin (double  a[3]);
/// <summary>
/// <para>Set/Get the sort origin. This ivar only has effect if the sort direction is set to SetDirectionToSpecifiedVector(). The sort occurs in the direction of the vector, with this point specifying the origin.</para>
/// </summary>
  void SetOrigin(array<double>^ a);


  // double  *GetOrigin ();
/// <summary>
/// <para>Set/Get the sort origin. This ivar only has effect if the sort direction is set to SetDirectionToSpecifiedVector(). The sort occurs in the direction of the vector, with this point specifying the origin.</para>
/// </summary>
  array<double>^ GetOrigin();


  // void SetSortScalars (int );
/// <summary>
/// <para>Set/Get a flag that controls the generation of scalar values corresponding to the sort order. If enabled, the output of this filter will include scalar values that range from 0 to (ncells-1), where 0 is closest to the sort direction.</para>
/// </summary>
  void SetSortScalars(int arg0);


  // int GetSortScalars ();
/// <summary>
/// <para>Set/Get a flag that controls the generation of scalar values corresponding to the sort order. If enabled, the output of this filter will include scalar values that range from 0 to (ncells-1), where 0 is closest to the sort direction.</para>
/// </summary>
  int GetSortScalars();


  // void SortScalarsOn ();
/// <summary>
/// <para>Set/Get a flag that controls the generation of scalar values corresponding to the sort order. If enabled, the output of this filter will include scalar values that range from 0 to (ncells-1), where 0 is closest to the sort direction.</para>
/// </summary>
  void SortScalarsOn();


  // void SortScalarsOff ();
/// <summary>
/// <para>Set/Get a flag that controls the generation of scalar values corresponding to the sort order. If enabled, the output of this filter will include scalar values that range from 0 to (ncells-1), where 0 is closest to the sort direction.</para>
/// </summary>
  void SortScalarsOff();


  // unsigned long GetMTime ();
/// <summary>
/// <para>Return MTime also considering the dependent objects: the camera and/or the prop3D.</para>
/// </summary>
  unsigned long GetMTime();


// Did not wrap:  vtkDepthSortPolyData ();


// Did not wrap:  ~vtkDepthSortPolyData ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  void ComputeProjectionVector (double vector[3], double origin[3]);


// Did not wrap:  vtkDepthSortPolyData (const vtkDepthSortPolyData &);


// Did not wrap:  void vtkDepthSortPolyData 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkDepthSortPolyData(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkDepthSortPolyData(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkDepthSortPolyData();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkDepthSortPolyData();


};

} // end vtkHybrid
