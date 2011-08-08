#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkDSPFilterDefinition;

public ref class vtkDSPFilterGroup : public vtkObject
{

public:
// Did not wrap:  static vtkDSPFilterGroup *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkDSPFilterGroup *NewInstance ();
  vtkDSPFilterGroup^ NewInstance();


  // vtkDSPFilterGroup *SafeDownCast (vtkObject* o);
  static vtkDSPFilterGroup^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void AddFilter (vtkDSPFilterDefinition *filter);
  void AddFilter(vtkDSPFilterDefinition^ filter);


  // void RemoveFilter (char *a_outputVariableName);
  void RemoveFilter(System::String^ a_outputVariableName);


// Did not wrap:  bool IsThisInputVariableInstanceNeeded (const char *a_name, int a_timestep, int a_outputTimestep);


// Did not wrap:  bool IsThisInputVariableInstanceCached (const char *a_name, int a_timestep);


  // void AddInputVariableInstance (const char *a_name, int a_timestep, vtkFloatArray *a_data);
  void AddInputVariableInstance(System::String^ a_name, int a_timestep, vtkFloatArray^ a_data);


  // vtkFloatArray *GetOutput (int a_whichFilter, int a_whichTimestep, int &a_instancesCalculated);
  vtkFloatArray^ GetOutput(int a_whichFilter, int a_whichTimestep, int% a_instancesCalculated);


  // vtkFloatArray *GetCachedInput (int a_whichFilter, int a_whichTimestep);
  vtkFloatArray^ GetCachedInput(int a_whichFilter, int a_whichTimestep);


  // vtkFloatArray *GetCachedOutput (int a_whichFilter, int a_whichTimestep);
  vtkFloatArray^ GetCachedOutput(int a_whichFilter, int a_whichTimestep);


  // const char *GetInputVariableName (int a_whichFilter);
  System::String^ GetInputVariableName(int a_whichFilter);


  // int GetNumFilters ();
  int GetNumFilters();


  // void Copy (vtkDSPFilterGroup *other);
  void Copy(vtkDSPFilterGroup^ other);


  // vtkDSPFilterDefinition *GetFilter (int a_whichFilter);
  vtkDSPFilterDefinition^ GetFilter(int a_whichFilter);


// Did not wrap:  vtkDSPFilterGroup ();


// Did not wrap:  ~vtkDSPFilterGroup ();


// Did not wrap:  vtkDSPFilterGroup (const vtkDSPFilterGroup &);


// Did not wrap:  void vtkDSPFilterGroup 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkDSPFilterGroup(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkDSPFilterGroup(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkDSPFilterGroup();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkDSPFilterGroup();


};

} // end vtkHybrid
