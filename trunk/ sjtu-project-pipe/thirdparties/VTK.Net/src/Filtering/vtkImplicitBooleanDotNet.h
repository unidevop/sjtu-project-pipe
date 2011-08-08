#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImplicitBoolean : public vtkImplicitFunction
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImplicitBoolean *NewInstance ();
  vtkImplicitBoolean^ NewInstance();


  // vtkImplicitBoolean *SafeDownCast (vtkObject* o);
  static vtkImplicitBoolean^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkImplicitBoolean *New ();


  // double EvaluateFunction (double x[3]);
/// <summary>
/// <para>Evaluate boolean combinations of implicit function using current operator.</para>
/// </summary>
  double EvaluateFunction(array<double>^ x);


  // double EvaluateFunction (double x, double y, double z);return this vtkImplicitFunction EvaluateFunction x y z 
/// <summary>
/// <para>Evaluate boolean combinations of implicit function using current operator.</para>
/// </summary>
  double EvaluateFunction(double x, double y, double z);


  // void EvaluateGradient (double x[3], double g[3]);
/// <summary>
/// <para>Evaluate gradient of boolean combination.</para>
/// </summary>
  void EvaluateGradient(array<double>^ x, array<double>^ g);


  // unsigned long GetMTime ();
/// <summary>
/// <para>Override modified time retrieval because of object dependencies.</para>
/// </summary>
  unsigned long GetMTime();


  // void AddFunction (vtkImplicitFunction *in);
/// <summary>
/// <para>Add another implicit function to the list of functions.</para>
/// </summary>
  void AddFunction(vtkImplicitFunction^ in);


  // void RemoveFunction (vtkImplicitFunction *in);
/// <summary>
/// <para>Remove a function from the list of implicit functions to boolean.</para>
/// </summary>
  void RemoveFunction(vtkImplicitFunction^ in);


  // vtkImplicitFunctionCollection *GetFunction ();return this FunctionList 
/// <summary>
/// <para>Return the collection of implicit functions.</para>
/// </summary>
  vtkImplicitFunctionCollection^ GetFunction();


  // void SetOperationType (int );
/// <summary>
/// <para>Specify the type of boolean operation.</para>
/// </summary>
  void SetOperationType(int arg0);


  // int GetOperationTypeMinValue ();
/// <summary>
/// <para>Specify the type of boolean operation.</para>
/// </summary>
  int GetOperationTypeMinValue();


  // int GetOperationTypeMaxValue ();
/// <summary>
/// <para>Specify the type of boolean operation.</para>
/// </summary>
  int GetOperationTypeMaxValue();


  // int GetOperationType ();
/// <summary>
/// <para>Specify the type of boolean operation.</para>
/// </summary>
  int GetOperationType();


  // void SetOperationTypeToUnion ();this SetOperationType VTK_UNION 
/// <summary>
/// <para>Specify the type of boolean operation.</para>
/// </summary>
  void SetOperationTypeToUnion();


  // void SetOperationTypeToIntersection ();this SetOperationType VTK_INTERSECTION 
/// <summary>
/// <para>Specify the type of boolean operation.</para>
/// </summary>
  void SetOperationTypeToIntersection();


  // void SetOperationTypeToDifference ();this SetOperationType VTK_DIFFERENCE 
/// <summary>
/// <para>Specify the type of boolean operation.</para>
/// </summary>
  void SetOperationTypeToDifference();


  // void SetOperationTypeToUnionOfMagnitudes ();this SetOperationType VTK_UNION_OF_MAGNITUDES 
/// <summary>
/// <para>Specify the type of boolean operation.</para>
/// </summary>
  void SetOperationTypeToUnionOfMagnitudes();


  // const char *GetOperationTypeAsString ();
/// <summary>
/// <para>Specify the type of boolean operation.</para>
/// </summary>
  System::String^ GetOperationTypeAsString();


// Did not wrap:  vtkImplicitBoolean ();


// Did not wrap:  ~vtkImplicitBoolean ();


// Did not wrap:  vtkImplicitBoolean (const vtkImplicitBoolean &);


// Did not wrap:  void vtkImplicitBoolean 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImplicitBoolean(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImplicitBoolean(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImplicitBoolean();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImplicitBoolean();


};

} // end vtkFiltering
