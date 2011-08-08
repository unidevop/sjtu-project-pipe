#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkStreamer : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkStreamer *NewInstance ();
  vtkStreamer^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetStartLocation (vtkIdType cellId, int subId, double pcoords[3]);
/// <summary>
/// <para>Specify the start of the streamline in the cell coordinate system. That is, cellId and subId (if composite cell), and parametric coordinates.</para>
/// </summary>
  void SetStartLocation(int cellId, int subId, array<double>^ pcoords);


  // void SetStartLocation (vtkIdType cellId, int subId, double r, double s, double t);
/// <summary>
/// <para>Specify the start of the streamline in the cell coordinate system. That is, cellId and subId (if composite cell), and parametric coordinates.</para>
/// </summary>
  void SetStartLocation(int cellId, int subId, double r, double s, double t);


  // vtkIdType GetStartLocation (int &subId, double pcoords[3]);
/// <summary>
/// <para>Get the starting location of the streamline in the cell coordinate system.</para>
/// </summary>
  int GetStartLocation(int% subId, array<double>^ pcoords);


  // void SetStartPosition (double x[3]);
/// <summary>
/// <para>Specify the start of the streamline in the global coordinate system. Search must be performed to find initial cell to start integration from.</para>
/// </summary>
  void SetStartPosition(array<double>^ x);


  // void SetStartPosition (double x, double y, double z);
/// <summary>
/// <para>Specify the start of the streamline in the global coordinate system. Search must be performed to find initial cell to start integration from.</para>
/// </summary>
  void SetStartPosition(double x, double y, double z);


  // double *GetStartPosition ();
/// <summary>
/// <para>Get the start position in global x-y-z coordinates.</para>
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


  // void SetMaximumPropagationTime (double );
/// <summary>
/// <para>Specify the maximum length of the Streamer expressed in elapsed time.</para>
/// </summary>
  void SetMaximumPropagationTime(double arg0);


  // double GetMaximumPropagationTimeMinValue ();
/// <summary>
/// <para>Specify the maximum length of the Streamer expressed in elapsed time.</para>
/// </summary>
  double GetMaximumPropagationTimeMinValue();


  // double GetMaximumPropagationTimeMaxValue ();
/// <summary>
/// <para>Specify the maximum length of the Streamer expressed in elapsed time.</para>
/// </summary>
  double GetMaximumPropagationTimeMaxValue();


  // double GetMaximumPropagationTime ();
/// <summary>
/// <para>Specify the maximum length of the Streamer expressed in elapsed time.</para>
/// </summary>
  double GetMaximumPropagationTime();


  // void SetIntegrationDirection (int );
/// <summary>
/// <para>Specify the direction in which to integrate the Streamer.</para>
/// </summary>
  void SetIntegrationDirection(int arg0);


  // int GetIntegrationDirectionMinValue ();
/// <summary>
/// <para>Specify the direction in which to integrate the Streamer.</para>
/// </summary>
  int GetIntegrationDirectionMinValue();


  // int GetIntegrationDirectionMaxValue ();
/// <summary>
/// <para>Specify the direction in which to integrate the Streamer.</para>
/// </summary>
  int GetIntegrationDirectionMaxValue();


  // int GetIntegrationDirection ();
/// <summary>
/// <para>Specify the direction in which to integrate the Streamer.</para>
/// </summary>
  int GetIntegrationDirection();


  // void SetIntegrationDirectionToForward ();this SetIntegrationDirection VTK_INTEGRATE_FORWARD 
/// <summary>
/// <para>Specify the direction in which to integrate the Streamer.</para>
/// </summary>
  void SetIntegrationDirectionToForward();


  // void SetIntegrationDirectionToBackward ();this SetIntegrationDirection VTK_INTEGRATE_BACKWARD 
/// <summary>
/// <para>Specify the direction in which to integrate the Streamer.</para>
/// </summary>
  void SetIntegrationDirectionToBackward();


  // void SetIntegrationDirectionToIntegrateBothDirections ();this SetIntegrationDirection VTK_INTEGRATE_BOTH_DIRECTIONS 
/// <summary>
/// <para>Specify the direction in which to integrate the Streamer.</para>
/// </summary>
  void SetIntegrationDirectionToIntegrateBothDirections();


  // const char *GetIntegrationDirectionAsString ();
/// <summary>
/// <para>Specify the direction in which to integrate the Streamer.</para>
/// </summary>
  System::String^ GetIntegrationDirectionAsString();


  // void SetIntegrationStepLength (double );
/// <summary>
/// <para>Specify a nominal integration step size (expressed as a fraction of the size of each cell). This value can be larger than 1.</para>
/// </summary>
  void SetIntegrationStepLength(double arg0);


  // double GetIntegrationStepLengthMinValue ();
/// <summary>
/// <para>Specify a nominal integration step size (expressed as a fraction of the size of each cell). This value can be larger than 1.</para>
/// </summary>
  double GetIntegrationStepLengthMinValue();


  // double GetIntegrationStepLengthMaxValue ();
/// <summary>
/// <para>Specify a nominal integration step size (expressed as a fraction of the size of each cell). This value can be larger than 1.</para>
/// </summary>
  double GetIntegrationStepLengthMaxValue();


  // double GetIntegrationStepLength ();
/// <summary>
/// <para>Specify a nominal integration step size (expressed as a fraction of the size of each cell). This value can be larger than 1.</para>
/// </summary>
  double GetIntegrationStepLength();


  // void SetSpeedScalars (int );
/// <summary>
/// <para>Turn on/off the creation of scalar data from velocity magnitude. If off, and input dataset has scalars, input dataset scalars are used.</para>
/// </summary>
  void SetSpeedScalars(int arg0);


  // int GetSpeedScalars ();
/// <summary>
/// <para>Turn on/off the creation of scalar data from velocity magnitude. If off, and input dataset has scalars, input dataset scalars are used.</para>
/// </summary>
  int GetSpeedScalars();


  // void SpeedScalarsOn ();
/// <summary>
/// <para>Turn on/off the creation of scalar data from velocity magnitude. If off, and input dataset has scalars, input dataset scalars are used.</para>
/// </summary>
  void SpeedScalarsOn();


  // void SpeedScalarsOff ();
/// <summary>
/// <para>Turn on/off the creation of scalar data from velocity magnitude. If off, and input dataset has scalars, input dataset scalars are used.</para>
/// </summary>
  void SpeedScalarsOff();


  // void SetOrientationScalars (int );
/// <summary>
/// <para>Turn on/off the creation of scalar data from vorticity information.  The scalar information is currently the orientation value &quot;theta&quot; used in rotating stream tubes. If off, and input dataset has scalars, then input dataset scalars are used, unless SpeedScalars is also on. SpeedScalars takes precedence over OrientationScalars.</para>
/// </summary>
  void SetOrientationScalars(int arg0);


  // int GetOrientationScalars ();
/// <summary>
/// <para>Turn on/off the creation of scalar data from vorticity information.  The scalar information is currently the orientation value &quot;theta&quot; used in rotating stream tubes. If off, and input dataset has scalars, then input dataset scalars are used, unless SpeedScalars is also on. SpeedScalars takes precedence over OrientationScalars.</para>
/// </summary>
  int GetOrientationScalars();


  // void OrientationScalarsOn ();
/// <summary>
/// <para>Turn on/off the creation of scalar data from vorticity information.  The scalar information is currently the orientation value &quot;theta&quot; used in rotating stream tubes. If off, and input dataset has scalars, then input dataset scalars are used, unless SpeedScalars is also on. SpeedScalars takes precedence over OrientationScalars.</para>
/// </summary>
  void OrientationScalarsOn();


  // void OrientationScalarsOff ();
/// <summary>
/// <para>Turn on/off the creation of scalar data from vorticity information.  The scalar information is currently the orientation value &quot;theta&quot; used in rotating stream tubes. If off, and input dataset has scalars, then input dataset scalars are used, unless SpeedScalars is also on. SpeedScalars takes precedence over OrientationScalars.</para>
/// </summary>
  void OrientationScalarsOff();


  // void SetTerminalSpeed (double );
/// <summary>
/// <para>Set/get terminal speed (i.e., speed is velocity magnitude).  Terminal  speed is speed at which streamer will terminate propagation.</para>
/// </summary>
  void SetTerminalSpeed(double arg0);


  // double GetTerminalSpeedMinValue ();
/// <summary>
/// <para>Set/get terminal speed (i.e., speed is velocity magnitude).  Terminal  speed is speed at which streamer will terminate propagation.</para>
/// </summary>
  double GetTerminalSpeedMinValue();


  // double GetTerminalSpeedMaxValue ();
/// <summary>
/// <para>Set/get terminal speed (i.e., speed is velocity magnitude).  Terminal  speed is speed at which streamer will terminate propagation.</para>
/// </summary>
  double GetTerminalSpeedMaxValue();


  // double GetTerminalSpeed ();
/// <summary>
/// <para>Set/get terminal speed (i.e., speed is velocity magnitude).  Terminal  speed is speed at which streamer will terminate propagation.</para>
/// </summary>
  double GetTerminalSpeed();


  // void SetVorticity (int );
/// <summary>
/// <para>Turn on/off the computation of vorticity. Vorticity is an indication of the rotation of the flow. In combination with vtkStreamLine and  vtkTubeFilter can be used to create rotated tubes.  If vorticity is turned on, in the output, the velocity vectors  are replaced by vorticity vectors.</para>
/// </summary>
  void SetVorticity(int arg0);


  // int GetVorticity ();
/// <summary>
/// <para>Turn on/off the computation of vorticity. Vorticity is an indication of the rotation of the flow. In combination with vtkStreamLine and  vtkTubeFilter can be used to create rotated tubes.  If vorticity is turned on, in the output, the velocity vectors  are replaced by vorticity vectors.</para>
/// </summary>
  int GetVorticity();


  // void VorticityOn ();
/// <summary>
/// <para>Turn on/off the computation of vorticity. Vorticity is an indication of the rotation of the flow. In combination with vtkStreamLine and  vtkTubeFilter can be used to create rotated tubes.  If vorticity is turned on, in the output, the velocity vectors  are replaced by vorticity vectors.</para>
/// </summary>
  void VorticityOn();


  // void VorticityOff ();
/// <summary>
/// <para>Turn on/off the computation of vorticity. Vorticity is an indication of the rotation of the flow. In combination with vtkStreamLine and  vtkTubeFilter can be used to create rotated tubes.  If vorticity is turned on, in the output, the velocity vectors  are replaced by vorticity vectors.</para>
/// </summary>
  void VorticityOff();


  // void SetNumberOfThreads (int );
  void SetNumberOfThreads(int arg0);


  // int GetNumberOfThreads ();
  int GetNumberOfThreads();


  // void SetSavePointInterval (double );
  void SetSavePointInterval(double arg0);


  // double GetSavePointInterval ();
  double GetSavePointInterval();


  // void SetIntegrator (vtkInitialValueProblemSolver *);
/// <summary>
/// <para>Set/get the integrator type to be used in the stream line calculation. The object passed is not actually used but is cloned with NewInstance by each thread/process in the process of integration (prototype pattern). The default is  2nd order Runge Kutta.</para>
/// </summary>
  void SetIntegrator(vtkInitialValueProblemSolver^ arg0);


  // vtkInitialValueProblemSolver *GetIntegrator ();
/// <summary>
/// <para>Set/get the integrator type to be used in the stream line calculation. The object passed is not actually used but is cloned with NewInstance by each thread/process in the process of integration (prototype pattern). The default is  2nd order Runge Kutta.</para>
/// </summary>
  vtkInitialValueProblemSolver^ GetIntegrator();


// Did not wrap:  vtkStreamer ();


// Did not wrap:  ~vtkStreamer ();


// Did not wrap:  void Integrate (vtkDataSet *input, vtkDataSet *source);


// Did not wrap:  static VTK_THREAD_RETURN_TYPE ThreadedIntegrate (void *arg);


// Did not wrap:  int GetNumberOfStreamers ();


// Did not wrap:  StreamArray *GetStreamers ();return this Streamers 


// Did not wrap:  void InitializeThreadedIntegrate ();


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkStreamer (const vtkStreamer &);


// Did not wrap:  void vtkStreamer 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkStreamer(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkStreamer(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkStreamer();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkStreamer();


};

} // end vtkGraphics
