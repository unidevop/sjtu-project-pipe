#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkOutlineSource : public vtkPolyDataAlgorithm
{

public:
// Did not wrap:  static vtkOutlineSource *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkOutlineSource *NewInstance ();
  vtkOutlineSource^ NewInstance();


  // vtkOutlineSource *SafeDownCast (vtkObject* o);
  static vtkOutlineSource^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetBoxType (int );
/// <summary>
/// <para>Set box type to AxisAligned (default) or Oriented. Use the method SetBounds() with AxisAligned mode, and SetCorners()  with Oriented mode.</para>
/// </summary>
  void SetBoxType(int arg0);


  // int GetBoxType ();
/// <summary>
/// <para>Set box type to AxisAligned (default) or Oriented. Use the method SetBounds() with AxisAligned mode, and SetCorners()  with Oriented mode.</para>
/// </summary>
  int GetBoxType();


  // void SetBoxTypeToAxisAligned ();this SetBoxType VTK_BOX_TYPE_AXIS_ALIGNED 
/// <summary>
/// <para>Set box type to AxisAligned (default) or Oriented. Use the method SetBounds() with AxisAligned mode, and SetCorners()  with Oriented mode.</para>
/// </summary>
  void SetBoxTypeToAxisAligned();


  // void SetBoxTypeToOriented ();this SetBoxType VTK_BOX_TYPE_ORIENTED 
/// <summary>
/// <para>Specify the bounds of the box to be used in Axis Aligned mode.</para>
/// </summary>
  void SetBoxTypeToOriented();


  // void SetBounds (double , double , double , double , double , double );
/// <summary>
/// <para>Specify the bounds of the box to be used in Axis Aligned mode.</para>
/// </summary>
  void SetBounds(double arg0, double arg1, double arg2, double arg3, double arg4, double arg5);


  // void SetBounds (double  a[6]);
/// <summary>
/// <para>Specify the bounds of the box to be used in Axis Aligned mode.</para>
/// </summary>
  void SetBounds(array<double>^ a);


  // double  *GetBounds ();
/// <summary>
/// <para>Specify the bounds of the box to be used in Axis Aligned mode.</para>
/// </summary>
  array<double>^ GetBounds();


  // void SetCorners (double  [24]);
/// <summary>
/// <para>Specify the corners of the outline when in Oriented mode, the values are supplied as 8*3 double values The correct corner ordering is using {x,y,z} convention for the unit cube as follows: {0,0,0},{1,0,0},{0,1,0},{1,1,0},{0,0,1},{1,0,1},{0,1,1},{1,1,1}.</para>
/// </summary>
  void SetCorners(array<double>^ arg0);


  // double  *GetCorners ();
/// <summary>
/// <para>Specify the corners of the outline when in Oriented mode, the values are supplied as 8*3 double values The correct corner ordering is using {x,y,z} convention for the unit cube as follows: {0,0,0},{1,0,0},{0,1,0},{1,1,0},{0,0,1},{1,0,1},{0,1,1},{1,1,1}.</para>
/// </summary>
  array<double>^ GetCorners();


// Did not wrap:  vtkOutlineSource ();


// Did not wrap:  ~vtkOutlineSource ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkOutlineSource (const vtkOutlineSource &);


// Did not wrap:  void vtkOutlineSource 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkOutlineSource(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkOutlineSource(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkOutlineSource();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkOutlineSource();


};

} // end vtkGraphics
