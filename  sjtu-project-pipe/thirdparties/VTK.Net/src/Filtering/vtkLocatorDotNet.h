#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkDataSet;
ref class vtkPolyData;

public ref class vtkLocator : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkLocator *NewInstance ();
  vtkLocator^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void SetDataSet (vtkDataSet *);
/// <summary>
/// <para>Build the locator from the points/cells defining this dataset.</para>
/// </summary>
  void SetDataSet(vtkDataSet^ arg0);


  // vtkDataSet *GetDataSet ();
/// <summary>
/// <para>Build the locator from the points/cells defining this dataset.</para>
/// </summary>
  vtkDataSet^ GetDataSet();


  // void SetMaxLevel (int );
/// <summary>
/// <para>Set the maximum allowable level for the tree. If the Automatic ivar is  off, this will be the target depth of the locator.</para>
/// </summary>
  void SetMaxLevel(int arg0);


  // int GetMaxLevelMinValue ();
/// <summary>
/// <para>Set the maximum allowable level for the tree. If the Automatic ivar is  off, this will be the target depth of the locator.</para>
/// </summary>
  int GetMaxLevelMinValue();


  // int GetMaxLevelMaxValue ();
/// <summary>
/// <para>Set the maximum allowable level for the tree. If the Automatic ivar is  off, this will be the target depth of the locator.</para>
/// </summary>
  int GetMaxLevelMaxValue();


  // int GetMaxLevel ();
/// <summary>
/// <para>Set the maximum allowable level for the tree. If the Automatic ivar is  off, this will be the target depth of the locator.</para>
/// </summary>
  int GetMaxLevel();


  // int GetLevel ();
/// <summary>
/// <para>Get the level of the locator (determined automatically if Automatic is  true). The value of this ivar may change each time the locator is built.</para>
/// </summary>
  int GetLevel();


  // void SetAutomatic (int );
/// <summary>
/// <para>Boolean controls whether locator depth/resolution of locator is computed automatically from average number of entities in bucket. If not set, there will be an explicit method to control the construction of the locator (found in the subclass).</para>
/// </summary>
  void SetAutomatic(int arg0);


  // int GetAutomatic ();
/// <summary>
/// <para>Boolean controls whether locator depth/resolution of locator is computed automatically from average number of entities in bucket. If not set, there will be an explicit method to control the construction of the locator (found in the subclass).</para>
/// </summary>
  int GetAutomatic();


  // void AutomaticOn ();
/// <summary>
/// <para>Boolean controls whether locator depth/resolution of locator is computed automatically from average number of entities in bucket. If not set, there will be an explicit method to control the construction of the locator (found in the subclass).</para>
/// </summary>
  void AutomaticOn();


  // void AutomaticOff ();
/// <summary>
/// <para>Boolean controls whether locator depth/resolution of locator is computed automatically from average number of entities in bucket. If not set, there will be an explicit method to control the construction of the locator (found in the subclass).</para>
/// </summary>
  void AutomaticOff();


  // void SetTolerance (double );
/// <summary>
/// <para>Specify absolute tolerance (in world coordinates) for performing geometric operations.</para>
/// </summary>
  void SetTolerance(double arg0);


  // double GetToleranceMinValue ();
/// <summary>
/// <para>Specify absolute tolerance (in world coordinates) for performing geometric operations.</para>
/// </summary>
  double GetToleranceMinValue();


  // double GetToleranceMaxValue ();
/// <summary>
/// <para>Specify absolute tolerance (in world coordinates) for performing geometric operations.</para>
/// </summary>
  double GetToleranceMaxValue();


  // double GetTolerance ();
/// <summary>
/// <para>Specify absolute tolerance (in world coordinates) for performing geometric operations.</para>
/// </summary>
  double GetTolerance();


  // void SetRetainCellLists (int );
/// <summary>
/// <para>Boolean controls whether to maintain list of entities in each bucket. Normally the lists are maintained, but if the locator is being used as a geometry simplification technique, there is no need to keep them.</para>
/// </summary>
  void SetRetainCellLists(int arg0);


  // int GetRetainCellLists ();
/// <summary>
/// <para>Boolean controls whether to maintain list of entities in each bucket. Normally the lists are maintained, but if the locator is being used as a geometry simplification technique, there is no need to keep them.</para>
/// </summary>
  int GetRetainCellLists();


  // void RetainCellListsOn ();
/// <summary>
/// <para>Boolean controls whether to maintain list of entities in each bucket. Normally the lists are maintained, but if the locator is being used as a geometry simplification technique, there is no need to keep them.</para>
/// </summary>
  void RetainCellListsOn();


  // void RetainCellListsOff ();
/// <summary>
/// <para>Boolean controls whether to maintain list of entities in each bucket. Normally the lists are maintained, but if the locator is being used as a geometry simplification technique, there is no need to keep them.</para>
/// </summary>
  void RetainCellListsOff();


  // virtual void Update ();
/// <summary>
/// <para>Cause the locator to rebuild itself if it or its input dataset has  changed.</para>
/// </summary>
  void Update();


  // virtual void Initialize ();
/// <summary>
/// <para>Initialize locator. Frees memory and resets object as appropriate.</para>
/// </summary>
  void Initialize();


  // virtual void BuildLocator () = 0;
/// <summary>
/// <para>Build the locator from the input dataset.</para>
/// </summary>
  void BuildLocator();


  // virtual void FreeSearchStructure () = 0;
/// <summary>
/// <para>Free the memory required for the spatial data structure.</para>
/// </summary>
  void FreeSearchStructure();


  // virtual void GenerateRepresentation (int level, vtkPolyData *pd) = 0;
/// <summary>
/// <para>Method to build a representation at a particular level. Note that the  method GetLevel() returns the maximum number of levels available for the tree. You must provide a vtkPolyData object into which to place the  data.</para>
/// </summary>
  void GenerateRepresentation(int level, vtkPolyData^ pd);


  // long unsigned GetBuildTime ();
/// <summary>
/// <para>Return the time of the last data structure build.</para>
/// </summary>
  unsigned long GetBuildTime();


  // virtual void Register (vtkObjectBase *o);
/// <summary>
/// <para>Handle the PointSet &lt;-&gt; Locator loop.</para>
/// </summary>
  void Register(vtkObjectBase^ o);


  // virtual void UnRegister (vtkObjectBase *o);
/// <summary>
/// <para>Handle the PointSet &lt;-&gt; Locator loop.</para>
/// </summary>
  void UnRegister(vtkObjectBase^ o);


// Did not wrap:  vtkLocator ();


// Did not wrap:  ~vtkLocator ();


// Did not wrap:  virtual void ReportReferences (vtkGarbageCollector *);


// Did not wrap:  vtkLocator (const vtkLocator &);


// Did not wrap:  void vtkLocator 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkLocator(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkLocator(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkLocator();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkLocator();


};

} // end vtkFiltering
