#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkLandmarkTransform : public vtkLinearTransform
{

public:
// Did not wrap:  static vtkLandmarkTransform *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkLandmarkTransform *NewInstance ();
  vtkLandmarkTransform^ NewInstance();


  // vtkLandmarkTransform *SafeDownCast (vtkObject* o);
  static vtkLandmarkTransform^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetSourceLandmarks (vtkPoints *points);
/// <summary>
/// <para>Specify the source and target landmark sets. The two sets must have  the same number of points.  If you add or change points in these objects, you must call Modified() on them or the transformation might not update.</para>
/// </summary>
  void SetSourceLandmarks(vtkPoints^ points);


  // void SetTargetLandmarks (vtkPoints *points);
/// <summary>
/// <para>Specify the source and target landmark sets. The two sets must have  the same number of points.  If you add or change points in these objects, you must call Modified() on them or the transformation might not update.</para>
/// </summary>
  void SetTargetLandmarks(vtkPoints^ points);


  // vtkPoints *GetSourceLandmarks ();
/// <summary>
/// <para>Specify the source and target landmark sets. The two sets must have  the same number of points.  If you add or change points in these objects, you must call Modified() on them or the transformation might not update.</para>
/// </summary>
  vtkPoints^ GetSourceLandmarks();


  // vtkPoints *GetTargetLandmarks ();
/// <summary>
/// <para>Specify the source and target landmark sets. The two sets must have  the same number of points.  If you add or change points in these objects, you must call Modified() on them or the transformation might not update.</para>
/// </summary>
  vtkPoints^ GetTargetLandmarks();


  // void SetMode (int );
/// <summary>
/// <para>Set the number of degrees of freedom to constrain the solution to. Rigidbody: rotation and translation only.   Similarity: rotation, translation and isotropic scaling. The default is similarity.</para>
/// </summary>
  void SetMode(int arg0);


  // void SetModeToRigidBody ();this SetMode VTK_LANDMARK_RIGIDBODY 
/// <summary>
/// <para>Set the number of degrees of freedom to constrain the solution to. Rigidbody: rotation and translation only.   Similarity: rotation, translation and isotropic scaling. The default is similarity.</para>
/// </summary>
  void SetModeToRigidBody();


  // void SetModeToSimilarity ();this SetMode VTK_LANDMARK_SIMILARITY 
/// <summary>
/// <para>Set the number of degrees of freedom to constrain the solution to. Rigidbody: rotation and translation only.   Similarity: rotation, translation and isotropic scaling. The default is similarity.</para>
/// </summary>
  void SetModeToSimilarity();


  // void SetModeToAffine ();this SetMode VTK_LANDMARK_AFFINE 
/// <summary>
/// <para>Set the number of degrees of freedom to constrain the solution to. Rigidbody: rotation and translation only.   Similarity: rotation, translation and isotropic scaling. The default is similarity.</para>
/// </summary>
  void SetModeToAffine();


  // int GetMode ();
/// <summary>
/// <para>Set the number of degrees of freedom to constrain the solution to. Rigidbody: rotation and translation only.   Similarity: rotation, translation and isotropic scaling. The default is similarity.</para>
/// </summary>
  int GetMode();


  // const char *GetModeAsString ();
/// <summary>
/// <para>Set the number of degrees of freedom to constrain the solution to. Rigidbody: rotation and translation only.   Similarity: rotation, translation and isotropic scaling. The default is similarity.</para>
/// </summary>
  System::String^ GetModeAsString();


  // void Inverse ();
/// <summary>
/// <para>Invert the transformation.  This is done by switching the source and target landmarks.</para>
/// </summary>
  void Inverse();


  // unsigned long GetMTime ();
/// <summary>
/// <para>Get the MTime.</para>
/// </summary>
  unsigned long GetMTime();


  // vtkAbstractTransform *MakeTransform ();
/// <summary>
/// <para>Make another transform of the same type.</para>
/// </summary>
  vtkAbstractTransform^ MakeTransform();


// Did not wrap:  vtkLandmarkTransform ();


// Did not wrap:  ~vtkLandmarkTransform ();


// Did not wrap:  void InternalUpdate ();


// Did not wrap:  void InternalDeepCopy (vtkAbstractTransform *transform);


// Did not wrap:  vtkLandmarkTransform (const vtkLandmarkTransform &);


// Did not wrap:  void vtkLandmarkTransform 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkLandmarkTransform(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkLandmarkTransform(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkLandmarkTransform();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkLandmarkTransform();


};

} // end vtkHybrid
