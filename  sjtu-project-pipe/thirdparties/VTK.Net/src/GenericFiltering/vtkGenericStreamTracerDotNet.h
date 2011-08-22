#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkGenericStreamTracer : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkGenericStreamTracer *NewInstance ();
  vtkGenericStreamTracer^ NewInstance();


  // vtkGenericStreamTracer *SafeDownCast (vtkObject* o);
  static vtkGenericStreamTracer^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkGenericStreamTracer *New ();


  // void SetStartPosition (double , double , double );
/// <summary>
/// <para>Specify the start of the streamline in the global coordinate system. Search must be performed to find initial cell to start integration from.</para>
/// </summary>
  void SetStartPosition(double arg0, double arg1, double arg2);


  // void SetStartPosition (double  a[3]);
/// <summary>
/// <para>Specify the start of the streamline in the global coordinate system. Search must be performed to find initial cell to start integration from.</para>
/// </summary>
  void SetStartPosition(array<double>^ a);


  // double  *GetStartPosition ();
/// <summary>
/// <para>Specify the start of the streamline in the global coordinate system. Search must be performed to find initial cell to start integration from.</para>
/// </summary>
  array<double>^ GetStartPosition();


  // void SetSource (vtkDataSet *source);
/// <summary>
/// <para>Specify the source object used to generate starting points.</para>
/// </summary>
  void SetSource(vtkDataSet^ source);


  // vtkDataSet *GetSource ();
/// <summary>
/// <para>Specify the source object used to generate starting points.</para>
/// </summary>
  vtkDataSet^ GetSource();


  // void SetIntegrator (vtkInitialValueProblemSolver *);
/// <summary>
/// <para>Set/get the integrator type to be used in the stream line calculation. The object passed is not actually used but is cloned with NewInstance in the process of integration  (prototype pattern). The default is 2nd order Runge Kutta. The integrator can also be changed using SetIntegratorType. The recognized solvers are: RUNGE_KUTTA2  = 0 RUNGE_KUTTA4  = 1 RUNGE_KUTTA45 = 2</para>
/// </summary>
  void SetIntegrator(vtkInitialValueProblemSolver^ arg0);


  // vtkInitialValueProblemSolver *GetIntegrator ();
/// <summary>
/// <para>Set/get the integrator type to be used in the stream line calculation. The object passed is not actually used but is cloned with NewInstance in the process of integration  (prototype pattern). The default is 2nd order Runge Kutta. The integrator can also be changed using SetIntegratorType. The recognized solvers are: RUNGE_KUTTA2  = 0 RUNGE_KUTTA4  = 1 RUNGE_KUTTA45 = 2</para>
/// </summary>
  vtkInitialValueProblemSolver^ GetIntegrator();


  // void SetIntegratorType (int type);
/// <summary>
/// <para>Set/get the integrator type to be used in the stream line calculation. The object passed is not actually used but is cloned with NewInstance in the process of integration  (prototype pattern). The default is 2nd order Runge Kutta. The integrator can also be changed using SetIntegratorType. The recognized solvers are: RUNGE_KUTTA2  = 0 RUNGE_KUTTA4  = 1 RUNGE_KUTTA45 = 2</para>
/// </summary>
  void SetIntegratorType(int type);


  // int GetIntegratorType ();
/// <summary>
/// <para>Set/get the integrator type to be used in the stream line calculation. The object passed is not actually used but is cloned with NewInstance in the process of integration  (prototype pattern). The default is 2nd order Runge Kutta. The integrator can also be changed using SetIntegratorType. The recognized solvers are: RUNGE_KUTTA2  = 0 RUNGE_KUTTA4  = 1 RUNGE_KUTTA45 = 2</para>
/// </summary>
  int GetIntegratorType();


  // void SetIntegratorTypeToRungeKutta2 ();this SetIntegratorType RUNGE_KUTTA2 
/// <summary>
/// <para>Set/get the integrator type to be used in the stream line calculation. The object passed is not actually used but is cloned with NewInstance in the process of integration  (prototype pattern). The default is 2nd order Runge Kutta. The integrator can also be changed using SetIntegratorType. The recognized solvers are: RUNGE_KUTTA2  = 0 RUNGE_KUTTA4  = 1 RUNGE_KUTTA45 = 2</para>
/// </summary>
  void SetIntegratorTypeToRungeKutta2();


  // void SetIntegratorTypeToRungeKutta4 ();this SetIntegratorType RUNGE_KUTTA4 
/// <summary>
/// <para>Set/get the integrator type to be used in the stream line calculation. The object passed is not actually used but is cloned with NewInstance in the process of integration  (prototype pattern). The default is 2nd order Runge Kutta. The integrator can also be changed using SetIntegratorType. The recognized solvers are: RUNGE_KUTTA2  = 0 RUNGE_KUTTA4  = 1 RUNGE_KUTTA45 = 2</para>
/// </summary>
  void SetIntegratorTypeToRungeKutta4();


  // void SetIntegratorTypeToRungeKutta45 ();this SetIntegratorType RUNGE_KUTTA45 
/// <summary>
/// <para>Set/get the integrator type to be used in the stream line calculation. The object passed is not actually used but is cloned with NewInstance in the process of integration  (prototype pattern). The default is 2nd order Runge Kutta. The integrator can also be changed using SetIntegratorType. The recognized solvers are: RUNGE_KUTTA2  = 0 RUNGE_KUTTA4  = 1 RUNGE_KUTTA45 = 2</para>
/// </summary>
  void SetIntegratorTypeToRungeKutta45();


  // void SetMaximumPropagation (int unit, double max);
/// <summary>
/// <para>Specify the maximum length of the streamlines expressed in  one of the:  TIME_UNIT        = 0 LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2</para>
/// </summary>
  void SetMaximumPropagation(int unit, double max);


  // void SetMaximumPropagation (double max);
/// <summary>
/// <para>Specify the maximum length of the streamlines expressed in  one of the:  TIME_UNIT        = 0 LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2</para>
/// </summary>
  void SetMaximumPropagation(double max);


  // void SetMaximumPropagationUnit (int unit);
/// <summary>
/// <para>Specify the maximum length of the streamlines expressed in  one of the:  TIME_UNIT        = 0 LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2</para>
/// </summary>
  void SetMaximumPropagationUnit(int unit);


  // int GetMaximumPropagationUnit ();
/// <summary>
/// <para>Specify the maximum length of the streamlines expressed in  one of the:  TIME_UNIT        = 0 LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2</para>
/// </summary>
  int GetMaximumPropagationUnit();


  // double GetMaximumPropagation ();
/// <summary>
/// <para>Specify the maximum length of the streamlines expressed in  one of the:  TIME_UNIT        = 0 LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2</para>
/// </summary>
  double GetMaximumPropagation();


  // void SetMaximumPropagationUnitToTimeUnit ();this SetMaximumPropagationUnit TIME_UNIT 
/// <summary>
/// <para>Specify the maximum length of the streamlines expressed in  one of the:  TIME_UNIT        = 0 LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2</para>
/// </summary>
  void SetMaximumPropagationUnitToTimeUnit();


  // void SetMaximumPropagationUnitToLengthUnit ();this SetMaximumPropagationUnit LENGTH_UNIT 
/// <summary>
/// <para>Specify the maximum length of the streamlines expressed in  one of the:  TIME_UNIT        = 0 LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2</para>
/// </summary>
  void SetMaximumPropagationUnitToLengthUnit();


  // void SetMaximumPropagationUnitToCellLengthUnit ();this SetMaximumPropagationUnit CELL_LENGTH_UNIT 
/// <summary>
/// <para>Specify the maximum length of the streamlines expressed in  one of the:  TIME_UNIT        = 0 LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2</para>
/// </summary>
  void SetMaximumPropagationUnitToCellLengthUnit();


  // void SetMinimumIntegrationStep (int unit, double step);
/// <summary>
/// <para>Specify the minimum step used in the integration expressed in  one of the:  TIME_UNIT        = 0 LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2 Only valid when using adaptive integrators.</para>
/// </summary>
  void SetMinimumIntegrationStep(int unit, double step);


  // void SetMinimumIntegrationStepUnit (int unit);
/// <summary>
/// <para>Specify the minimum step used in the integration expressed in  one of the:  TIME_UNIT        = 0 LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2 Only valid when using adaptive integrators.</para>
/// </summary>
  void SetMinimumIntegrationStepUnit(int unit);


  // void SetMinimumIntegrationStep (double step);
/// <summary>
/// <para>Specify the minimum step used in the integration expressed in  one of the:  TIME_UNIT        = 0 LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2 Only valid when using adaptive integrators.</para>
/// </summary>
  void SetMinimumIntegrationStep(double step);


  // int GetMinimumIntegrationStepUnit ();
/// <summary>
/// <para>Specify the minimum step used in the integration expressed in  one of the:  TIME_UNIT        = 0 LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2 Only valid when using adaptive integrators.</para>
/// </summary>
  int GetMinimumIntegrationStepUnit();


  // double GetMinimumIntegrationStep ();
/// <summary>
/// <para>Specify the minimum step used in the integration expressed in  one of the:  TIME_UNIT        = 0 LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2 Only valid when using adaptive integrators.</para>
/// </summary>
  double GetMinimumIntegrationStep();


  // void SetMinimumIntegrationStepUnitToTimeUnit ();this SetMinimumIntegrationStepUnit TIME_UNIT 
/// <summary>
/// <para>Specify the minimum step used in the integration expressed in  one of the:  TIME_UNIT        = 0 LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2 Only valid when using adaptive integrators.</para>
/// </summary>
  void SetMinimumIntegrationStepUnitToTimeUnit();


  // void SetMinimumIntegrationStepUnitToLengthUnit ();this SetMinimumIntegrationStepUnit LENGTH_UNIT 
/// <summary>
/// <para>Specify the minimum step used in the integration expressed in  one of the:  TIME_UNIT        = 0 LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2 Only valid when using adaptive integrators.</para>
/// </summary>
  void SetMinimumIntegrationStepUnitToLengthUnit();


  // void SetMinimumIntegrationStepUnitToCellLengthUnit ();this SetMinimumIntegrationStepUnit CELL_LENGTH_UNIT 
/// <summary>
/// <para>Specify the minimum step used in the integration expressed in  one of the:  TIME_UNIT        = 0 LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2 Only valid when using adaptive integrators.</para>
/// </summary>
  void SetMinimumIntegrationStepUnitToCellLengthUnit();


  // void SetMaximumIntegrationStep (int unit, double step);
/// <summary>
/// <para>Specify the maximum step used in the integration expressed in  one of the:  TIME_UNIT        = 0 LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2 Only valid when using adaptive integrators.</para>
/// </summary>
  void SetMaximumIntegrationStep(int unit, double step);


  // void SetMaximumIntegrationStepUnit (int unit);
/// <summary>
/// <para>Specify the maximum step used in the integration expressed in  one of the:  TIME_UNIT        = 0 LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2 Only valid when using adaptive integrators.</para>
/// </summary>
  void SetMaximumIntegrationStepUnit(int unit);


  // void SetMaximumIntegrationStep (double step);
/// <summary>
/// <para>Specify the maximum step used in the integration expressed in  one of the:  TIME_UNIT        = 0 LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2 Only valid when using adaptive integrators.</para>
/// </summary>
  void SetMaximumIntegrationStep(double step);


  // int GetMaximumIntegrationStepUnit ();
/// <summary>
/// <para>Specify the maximum step used in the integration expressed in  one of the:  TIME_UNIT        = 0 LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2 Only valid when using adaptive integrators.</para>
/// </summary>
  int GetMaximumIntegrationStepUnit();


  // double GetMaximumIntegrationStep ();
/// <summary>
/// <para>Specify the maximum step used in the integration expressed in  one of the:  TIME_UNIT        = 0 LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2 Only valid when using adaptive integrators.</para>
/// </summary>
  double GetMaximumIntegrationStep();


  // void SetMaximumIntegrationStepUnitToTimeUnit ();this SetMaximumIntegrationStepUnit TIME_UNIT 
/// <summary>
/// <para>Specify the maximum step used in the integration expressed in  one of the:  TIME_UNIT        = 0 LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2 Only valid when using adaptive integrators.</para>
/// </summary>
  void SetMaximumIntegrationStepUnitToTimeUnit();


  // void SetMaximumIntegrationStepUnitToLengthUnit ();this SetMaximumIntegrationStepUnit LENGTH_UNIT 
/// <summary>
/// <para>Specify the maximum step used in the integration expressed in  one of the:  TIME_UNIT        = 0 LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2 Only valid when using adaptive integrators.</para>
/// </summary>
  void SetMaximumIntegrationStepUnitToLengthUnit();


  // void SetMaximumIntegrationStepUnitToCellLengthUnit ();this SetMaximumIntegrationStepUnit CELL_LENGTH_UNIT 
/// <summary>
/// <para>Specify the maximum step used in the integration expressed in  one of the:  TIME_UNIT        = 0 LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2 Only valid when using adaptive integrators.</para>
/// </summary>
  void SetMaximumIntegrationStepUnitToCellLengthUnit();


  // void SetInitialIntegrationStep (int unit, double step);
/// <summary>
/// <para>Specify the initial step used in the integration expressed in  one of the:  TIME_UNIT        = 0 LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2 If the integrator is not adaptive, this is the actual step used.</para>
/// </summary>
  void SetInitialIntegrationStep(int unit, double step);


  // void SetInitialIntegrationStepUnit (int unit);
/// <summary>
/// <para>Specify the initial step used in the integration expressed in  one of the:  TIME_UNIT        = 0 LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2 If the integrator is not adaptive, this is the actual step used.</para>
/// </summary>
  void SetInitialIntegrationStepUnit(int unit);


  // void SetInitialIntegrationStep (double step);
/// <summary>
/// <para>Specify the initial step used in the integration expressed in  one of the:  TIME_UNIT        = 0 LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2 If the integrator is not adaptive, this is the actual step used.</para>
/// </summary>
  void SetInitialIntegrationStep(double step);


  // int GetInitialIntegrationStepUnit ();
/// <summary>
/// <para>Specify the initial step used in the integration expressed in  one of the:  TIME_UNIT        = 0 LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2 If the integrator is not adaptive, this is the actual step used.</para>
/// </summary>
  int GetInitialIntegrationStepUnit();


  // double GetInitialIntegrationStep ();
/// <summary>
/// <para>Specify the initial step used in the integration expressed in  one of the:  TIME_UNIT        = 0 LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2 If the integrator is not adaptive, this is the actual step used.</para>
/// </summary>
  double GetInitialIntegrationStep();


  // void SetInitialIntegrationStepUnitToTimeUnit ();this SetInitialIntegrationStepUnit TIME_UNIT 
/// <summary>
/// <para>Specify the initial step used in the integration expressed in  one of the:  TIME_UNIT        = 0 LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2 If the integrator is not adaptive, this is the actual step used.</para>
/// </summary>
  void SetInitialIntegrationStepUnitToTimeUnit();


  // void SetInitialIntegrationStepUnitToLengthUnit ();this SetInitialIntegrationStepUnit LENGTH_UNIT 
/// <summary>
/// <para>Specify the initial step used in the integration expressed in  one of the:  TIME_UNIT        = 0 LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2 If the integrator is not adaptive, this is the actual step used.</para>
/// </summary>
  void SetInitialIntegrationStepUnitToLengthUnit();


  // void SetInitialIntegrationStepUnitToCellLengthUnit ();this SetInitialIntegrationStepUnit CELL_LENGTH_UNIT 
/// <summary>
/// <para>Specify the initial step used in the integration expressed in  one of the:  TIME_UNIT        = 0 LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2 If the integrator is not adaptive, this is the actual step used.</para>
/// </summary>
  void SetInitialIntegrationStepUnitToCellLengthUnit();


  // void SetMaximumError (double );
  void SetMaximumError(double arg0);


  // double GetMaximumError ();
  double GetMaximumError();


  // void SetMaximumNumberOfSteps (vtkIdType );
  void SetMaximumNumberOfSteps(int arg0);


  // vtkIdType GetMaximumNumberOfSteps ();
  int GetMaximumNumberOfSteps();


  // void SetTerminalSpeed (double );
  void SetTerminalSpeed(double arg0);


  // double GetTerminalSpeed ();
  double GetTerminalSpeed();


  // void SetIntegrationDirection (int );
/// <summary>
/// <para>Specify whether the streamtrace will be generated in the upstream or downstream direction.</para>
/// </summary>
  void SetIntegrationDirection(int arg0);


  // int GetIntegrationDirectionMinValue ();
/// <summary>
/// <para>Specify whether the streamtrace will be generated in the upstream or downstream direction.</para>
/// </summary>
  int GetIntegrationDirectionMinValue();


  // int GetIntegrationDirectionMaxValue ();
/// <summary>
/// <para>Specify whether the streamtrace will be generated in the upstream or downstream direction.</para>
/// </summary>
  int GetIntegrationDirectionMaxValue();


  // int GetIntegrationDirection ();
/// <summary>
/// <para>Specify whether the streamtrace will be generated in the upstream or downstream direction.</para>
/// </summary>
  int GetIntegrationDirection();


  // void SetIntegrationDirectionToForward ();this SetIntegrationDirection FORWARD 
/// <summary>
/// <para>Specify whether the streamtrace will be generated in the upstream or downstream direction.</para>
/// </summary>
  void SetIntegrationDirectionToForward();


  // void SetIntegrationDirectionToBackward ();this SetIntegrationDirection BACKWARD 
/// <summary>
/// <para>Specify whether the streamtrace will be generated in the upstream or downstream direction.</para>
/// </summary>
  void SetIntegrationDirectionToBackward();


  // void SetIntegrationDirectionToBoth ();this SetIntegrationDirection BOTH 
/// <summary>
/// <para>Specify whether the streamtrace will be generated in the upstream or downstream direction.</para>
/// </summary>
  void SetIntegrationDirectionToBoth();


  // void SetComputeVorticity (int );
  void SetComputeVorticity(int arg0);


  // int GetComputeVorticity ();
  int GetComputeVorticity();


  // void ComputeVorticityOn ();
  void ComputeVorticityOn();


  // void ComputeVorticityOff ();
  void ComputeVorticityOff();


  // void SetRotationScale (double );
  void SetRotationScale(double arg0);


  // double GetRotationScale ();
  double GetRotationScale();


  // char *GetInputVectorsSelection ();
/// <summary>
/// <para>If you want to generate traces using an arbitrary vector array,  then set its name here. By default this in NULL and the filter will  use the active vector array.</para>
/// </summary>
  System::String^ GetInputVectorsSelection();


  // void SelectInputVectors (const char *fieldName);this SetInputVectorsSelection fieldName 
/// <summary>
/// <para>Add a dataset to the list inputs</para>
/// </summary>
  void SelectInputVectors(System::String^ fieldName);


  // void AddInput (vtkGenericDataSet *in);
/// <summary>
/// <para>Add a dataset to the list inputs</para>
/// </summary>
  void AddInput(vtkGenericDataSet^ in);


  // void SetInterpolatorPrototype (vtkGenericInterpolatedVelocityField *ivf);
/// <summary>
/// </summary>
  void SetInterpolatorPrototype(vtkGenericInterpolatedVelocityField^ ivf);


// Did not wrap:  vtkGenericStreamTracer ();


// Did not wrap:  ~vtkGenericStreamTracer ();


// Did not wrap:  void AddInput (vtkDataObject *);vtkErrorMacro 


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  void CalculateVorticity (vtkGenericAdaptorCell *cell, double pcoords[3], vtkGenericAttribute *attribute, double vorticity[3]);


// Did not wrap:  void Integrate (vtkGenericDataSet *input0, vtkPolyData *output, vtkDataArray *seedSource, vtkIdList *seedIds, vtkIntArray *integrationDirections, double lastPoint[3], vtkGenericInterpolatedVelocityField *func);


// Did not wrap:  void SimpleIntegrate (double seed[3], double lastPoint[3], double delt, vtkGenericInterpolatedVelocityField *func);


// Did not wrap:  int CheckInputs (vtkGenericInterpolatedVelocityField &func, vtkInformationVector *inputVector);


// Did not wrap:  void GenerateNormals (vtkPolyData *output, double *firstNormal);


// Did not wrap:  void SetInputVectorsSelection (char *);


// Did not wrap:  void InitializeSeeds (vtkDataArray &seeds, vtkIdList &seedIds, vtkIntArray &integrationDirections);


// Did not wrap:  vtkGenericStreamTracer (const vtkGenericStreamTracer &);


// Did not wrap:  void vtkGenericStreamTracer 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkGenericStreamTracer(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkGenericStreamTracer(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkGenericStreamTracer();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkGenericStreamTracer();


};

} // end vtkGenericFiltering
