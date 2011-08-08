#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkGenericAdaptorCell;
ref class vtkGenericDataSet;

public ref class vtkGenericInterpolatedVelocityField : public vtkFunctionSet
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkGenericInterpolatedVelocityField *NewInstance ();
  vtkGenericInterpolatedVelocityField^ NewInstance();


  // vtkGenericInterpolatedVelocityField *SafeDownCast (vtkObject* o);
  static vtkGenericInterpolatedVelocityField^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkGenericInterpolatedVelocityField *New ();


  // virtual int FunctionValues (double *x, double *f);
/// <summary>
/// <para>Evaluate the velocity field, f, at (x, y, z, t). For now, t is ignored.</para>
/// </summary>
  int FunctionValues(array<double>^ x, array<double>^ f);


  // virtual void AddDataSet (vtkGenericDataSet *dataset);
/// <summary>
/// <para>Add a dataset used for the implicit function evaluation. If more than one dataset is added, the evaluation point is searched in all until a match is found. THIS FUNCTION DOES NOT CHANGE THE REFERENCE COUNT OF dataset FOR THREAD SAFETY REASONS.</para>
/// </summary>
  void AddDataSet(vtkGenericDataSet^ dataset);


  // void ClearLastCell ();
/// <summary>
/// <para>Set the last cell id to -1 so that the next search does not start from the previous cell</para>
/// </summary>
  void ClearLastCell();


  // vtkGenericAdaptorCell *GetLastCell ();
/// <summary>
/// <para>Return the cell cached from last evaluation.</para>
/// </summary>
  vtkGenericAdaptorCell^ GetLastCell();


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


  // vtkGenericDataSet *GetLastDataSet ();
/// <summary>
/// <para>Returns the last dataset that was visited. Can be used as a first guess as to where the next point will be as well as to avoid searching through all datasets to get more information about the point.</para>
/// </summary>
  vtkGenericDataSet^ GetLastDataSet();


  // virtual void CopyParameters (vtkGenericInterpolatedVelocityField *from);
/// <summary>
/// <para>Copy the user set parameters from source. This copies the Caching parameters. Sub-classes can add more after chaining.</para>
/// </summary>
  void CopyParameters(vtkGenericInterpolatedVelocityField^ from);


// Did not wrap:  vtkGenericInterpolatedVelocityField ();


// Did not wrap:  ~vtkGenericInterpolatedVelocityField ();


// Did not wrap:  void SetVectorsSelection (char *);


// Did not wrap:  int FunctionValues (vtkGenericDataSet *ds, double *x, double *f);


// Did not wrap:  vtkGenericInterpolatedVelocityField (const vtkGenericInterpolatedVelocityField &);


// Did not wrap:  void vtkGenericInterpolatedVelocityField 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkGenericInterpolatedVelocityField(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkGenericInterpolatedVelocityField(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkGenericInterpolatedVelocityField();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkGenericInterpolatedVelocityField();


};

} // end vtkFiltering
