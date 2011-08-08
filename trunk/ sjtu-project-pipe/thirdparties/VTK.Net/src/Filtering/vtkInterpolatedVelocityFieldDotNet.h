#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkDataSet;

public ref class vtkInterpolatedVelocityField : public vtkFunctionSet
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkInterpolatedVelocityField *NewInstance ();
  vtkInterpolatedVelocityField^ NewInstance();


  // vtkInterpolatedVelocityField *SafeDownCast (vtkObject* o);
  static vtkInterpolatedVelocityField^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkInterpolatedVelocityField *New ();


  // virtual int FunctionValues (double *x, double *f);
/// <summary>
/// <para>Evaluate the velocity field, f, at (x, y, z, t). For now, t is ignored.</para>
/// </summary>
  int FunctionValues(array<double>^ x, array<double>^ f);


  // virtual void AddDataSet (vtkDataSet *dataset);
/// <summary>
/// <para>Add a dataset used for the implicit function evaluation. If more than one dataset is added, the evaluation point is searched in all until a match is found. THIS FUNCTION DOES NOT CHANGE THE REFERENCE COUNT OF dataset FOR THREAD SAFETY REASONS.</para>
/// </summary>
  void AddDataSet(vtkDataSet^ dataset);


  // vtkIdType GetLastCellId ();
/// <summary>
/// <para>Return the cell id cached from last evaluation.</para>
/// </summary>
  int GetLastCellId();


  // void SetLastCellId (vtkIdType );
/// <summary>
/// <para>Return the cell id cached from last evaluation.</para>
/// </summary>
  void SetLastCellId(int arg0);


  // void ClearLastCellId ();this LastCellId 
/// <summary>
/// <para>Returns the interpolation weights cached from last evaluation if the cached cell is valid (returns 1). Otherwise, it does not change w and returns 0.</para>
/// </summary>
  void ClearLastCellId();


  // int GetLastWeights (double *w);
/// <summary>
/// <para>Returns the interpolation weights cached from last evaluation if the cached cell is valid (returns 1). Otherwise, it does not change w and returns 0.</para>
/// </summary>
  int GetLastWeights(array<double>^ w);


  // int GetLastLocalCoordinates (double pcoords[3]);
/// <summary>
/// <para>Returns the interpolation weights cached from last evaluation if the cached cell is valid (returns 1). Otherwise, it does not change w and returns 0.</para>
/// </summary>
  int GetLastLocalCoordinates(array<double>^ pcoords);


  // int GetCaching ();
/// <summary>
/// <para>Turn caching on/off.</para>
/// </summary>
  int GetCaching();


  // void SetCaching (int );
/// <summary>
/// <para>Turn caching on/off.</para>
/// </summary>
  void SetCaching(int arg0);


  // void CachingOn ();
/// <summary>
/// <para>Turn caching on/off.</para>
/// </summary>
  void CachingOn();


  // void CachingOff ();
/// <summary>
/// <para>Turn caching on/off.</para>
/// </summary>
  void CachingOff();


  // int GetCacheHit ();
/// <summary>
/// <para>Caching statistics.</para>
/// </summary>
  int GetCacheHit();


  // int GetCacheMiss ();
/// <summary>
/// <para>Caching statistics.</para>
/// </summary>
  int GetCacheMiss();


  // char *GetVectorsSelection ();
/// <summary>
/// <para>If you want to work with an arbitrary vector array, then set its name  here. By default this in NULL and the filter will use the active vector  array.</para>
/// </summary>
  System::String^ GetVectorsSelection();


  // void SelectVectors (const char *fieldName);this SetVectorsSelection fieldName 
/// <summary>
/// <para>Returns the last dataset that was visited. Can be used as a first guess as to where the next point will be as well as to avoid searching through all datasets to get more information about the point.</para>
/// </summary>
  void SelectVectors(System::String^ fieldName);


  // vtkDataSet *GetLastDataSet ();
/// <summary>
/// <para>Returns the last dataset that was visited. Can be used as a first guess as to where the next point will be as well as to avoid searching through all datasets to get more information about the point.</para>
/// </summary>
  vtkDataSet^ GetLastDataSet();


  // virtual void CopyParameters (vtkInterpolatedVelocityField *from);
/// <summary>
/// <para>Copy the user set parameters from source. This copies the Caching parameters. Sub-classes can add more after chaining.</para>
/// </summary>
  void CopyParameters(vtkInterpolatedVelocityField^ from);


// Did not wrap:  vtkInterpolatedVelocityField ();


// Did not wrap:  ~vtkInterpolatedVelocityField ();


// Did not wrap:  void SetVectorsSelection (char *);


// Did not wrap:  int FunctionValues (vtkDataSet *ds, double *x, double *f);


// Did not wrap:  vtkInterpolatedVelocityField (const vtkInterpolatedVelocityField &);


// Did not wrap:  void vtkInterpolatedVelocityField 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkInterpolatedVelocityField(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkInterpolatedVelocityField(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkInterpolatedVelocityField();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkInterpolatedVelocityField();


};

} // end vtkFiltering
