#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkDSPFilterDefinition : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkDSPFilterDefinition *NewInstance ();
  vtkDSPFilterDefinition^ NewInstance();


  // vtkDSPFilterDefinition *SafeDownCast (vtkObject* o);
  static vtkDSPFilterDefinition^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkDSPFilterDefinition *New ();


// Did not wrap:  vtkDSPFilterDefinition ();


// Did not wrap:  vtkDSPFilterDefinition (vtkDSPFilterDefinition *other);


// Did not wrap:  ~vtkDSPFilterDefinition ();


  // void Copy (vtkDSPFilterDefinition *other);
  void Copy(vtkDSPFilterDefinition^ other);


  // void Clear ();
  void Clear();


// Did not wrap:  bool IsThisInputVariableInstanceNeeded (int a_timestep, int a_outputTimestep);


  // void PushBackNumeratorWeight (double a_value);
  void PushBackNumeratorWeight(double a_value);


  // void PushBackDenominatorWeight (double a_value);
  void PushBackDenominatorWeight(double a_value);


  // void PushBackForwardNumeratorWeight (double a_value);
  void PushBackForwardNumeratorWeight(double a_value);


  // void SetInputVariableName (char *a_value);
  void SetInputVariableName(System::String^ a_value);


  // void SetOutputVariableName (char *a_value);
  void SetOutputVariableName(System::String^ a_value);


  // const char *GetInputVariableName ();
  System::String^ GetInputVariableName();


  // const char *GetOutputVariableName ();
  System::String^ GetOutputVariableName();


  // int GetNumNumeratorWeights ();
  int GetNumNumeratorWeights();


  // int GetNumDenominatorWeights ();
  int GetNumDenominatorWeights();


  // int GetNumForwardNumeratorWeights ();
  int GetNumForwardNumeratorWeights();


  // double GetNumeratorWeight (int a_which);
  double GetNumeratorWeight(int a_which);


  // double GetDenominatorWeight (int a_which);
  double GetDenominatorWeight(int a_which);


  // double GetForwardNumeratorWeight (int a_which);
  double GetForwardNumeratorWeight(int a_which);


// Did not wrap:  vtkDSPFilterDefinition (const vtkDSPFilterDefinition &);


// Did not wrap:  void vtkDSPFilterDefinition 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkDSPFilterDefinition(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkDSPFilterDefinition(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkDSPFilterDefinition();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkDSPFilterDefinition();


};

} // end vtkHybrid
