#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkHyperStreamline : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkHyperStreamline *NewInstance ();
  vtkHyperStreamline^ NewInstance();


  // vtkHyperStreamline *SafeDownCast (vtkObject* o);
  static vtkHyperStreamline^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkHyperStreamline *New ();


  // void SetStartLocation (vtkIdType cellId, int subId, double pcoords[3]);
/// <summary>
/// <para>Specify the start of the hyperstreamline in the cell coordinate system.  That is, cellId and subId (if composite cell), and parametric coordinates.</para>
/// </summary>
  void SetStartLocation(int cellId, int subId, array<double>^ pcoords);


  // void SetStartLocation (vtkIdType cellId, int subId, double r, double s, double t);
/// <summary>
/// <para>Specify the start of the hyperstreamline in the cell coordinate system.  That is, cellId and subId (if composite cell), and parametric coordinates.</para>
/// </summary>
  void SetStartLocation(int cellId, int subId, double r, double s, double t);


  // vtkIdType GetStartLocation (int &subId, double pcoords[3]);
/// <summary>
/// <para>Get the starting location of the hyperstreamline in the cell coordinate system. Returns the cell that the starting point is in.</para>
/// </summary>
  int GetStartLocation(int% subId, array<double>^ pcoords);


  // void SetStartPosition (double x[3]);
/// <summary>
/// <para>Specify the start of the hyperstreamline in the global coordinate system.  Starting from position implies that a search must be performed to find  initial cell to start integration from.</para>
/// </summary>
  void SetStartPosition(array<double>^ x);


  // void SetStartPosition (double x, double y, double z);
/// <summary>
/// <para>Specify the start of the hyperstreamline in the global coordinate system.  Starting from position implies that a search must be performed to find  initial cell to start integration from.</para>
/// </summary>
  void SetStartPosition(double x, double y, double z);


  // double *GetStartPosition ();
/// <summary>
/// <para>Get the start position of the hyperstreamline in global x-y-z coordinates.</para>
/// </summary>
  array<double>^ GetStartPosition();


  // void SetMaximumPropagationDistance (double );
/// <summary>
/// <para>Set / get the maximum length of the hyperstreamline expressed as absolute distance (i.e., arc length) value.</para>
/// </summary>
  void SetMaximumPropagationDistance(double arg0);


  // double GetMaximumPropagationDistanceMinValue ();
/// <summary>
/// <para>Set / get the maximum length of the hyperstreamline expressed as absolute distance (i.e., arc length) value.</para>
/// </summary>
  double GetMaximumPropagationDistanceMinValue();


  // double GetMaximumPropagationDistanceMaxValue ();
/// <summary>
/// <para>Set / get the maximum length of the hyperstreamline expressed as absolute distance (i.e., arc length) value.</para>
/// </summary>
  double GetMaximumPropagationDistanceMaxValue();


  // double GetMaximumPropagationDistance ();
/// <summary>
/// <para>Set / get the maximum length of the hyperstreamline expressed as absolute distance (i.e., arc length) value.</para>
/// </summary>
  double GetMaximumPropagationDistance();


  // void SetIntegrationEigenvector (int );
/// <summary>
/// <para>Set / get the eigenvector field through which to ingrate. It is possible to integrate using the major, medium or minor eigenvector field.  The major eigenvector is the eigenvector whose corresponding eigenvalue is closest to positive infinity. The minor eigenvector is the eigenvector whose corresponding eigenvalue is closest to negative infinity.  The medium eigenvector is the eigenvector whose corresponding eigenvalue is between the major and minor eigenvalues.</para>
/// </summary>
  void SetIntegrationEigenvector(int arg0);


  // int GetIntegrationEigenvectorMinValue ();
/// <summary>
/// <para>Set / get the eigenvector field through which to ingrate. It is possible to integrate using the major, medium or minor eigenvector field.  The major eigenvector is the eigenvector whose corresponding eigenvalue is closest to positive infinity. The minor eigenvector is the eigenvector whose corresponding eigenvalue is closest to negative infinity.  The medium eigenvector is the eigenvector whose corresponding eigenvalue is between the major and minor eigenvalues.</para>
/// </summary>
  int GetIntegrationEigenvectorMinValue();


  // int GetIntegrationEigenvectorMaxValue ();
/// <summary>
/// <para>Set / get the eigenvector field through which to ingrate. It is possible to integrate using the major, medium or minor eigenvector field.  The major eigenvector is the eigenvector whose corresponding eigenvalue is closest to positive infinity. The minor eigenvector is the eigenvector whose corresponding eigenvalue is closest to negative infinity.  The medium eigenvector is the eigenvector whose corresponding eigenvalue is between the major and minor eigenvalues.</para>
/// </summary>
  int GetIntegrationEigenvectorMaxValue();


  // int GetIntegrationEigenvector ();
/// <summary>
/// <para>Set / get the eigenvector field through which to ingrate. It is possible to integrate using the major, medium or minor eigenvector field.  The major eigenvector is the eigenvector whose corresponding eigenvalue is closest to positive infinity. The minor eigenvector is the eigenvector whose corresponding eigenvalue is closest to negative infinity.  The medium eigenvector is the eigenvector whose corresponding eigenvalue is between the major and minor eigenvalues.</para>
/// </summary>
  int GetIntegrationEigenvector();


  // void SetIntegrationEigenvectorToMajor ();this SetIntegrationEigenvector VTK_INTEGRATE_MAJOR_EIGENVECTOR 
/// <summary>
/// <para>Set / get the eigenvector field through which to ingrate. It is possible to integrate using the major, medium or minor eigenvector field.  The major eigenvector is the eigenvector whose corresponding eigenvalue is closest to positive infinity. The minor eigenvector is the eigenvector whose corresponding eigenvalue is closest to negative infinity.  The medium eigenvector is the eigenvector whose corresponding eigenvalue is between the major and minor eigenvalues.</para>
/// </summary>
  void SetIntegrationEigenvectorToMajor();


  // void SetIntegrationEigenvectorToMedium ();this SetIntegrationEigenvector VTK_INTEGRATE_MEDIUM_EIGENVECTOR 
/// <summary>
/// <para>Set / get the eigenvector field through which to ingrate. It is possible to integrate using the major, medium or minor eigenvector field.  The major eigenvector is the eigenvector whose corresponding eigenvalue is closest to positive infinity. The minor eigenvector is the eigenvector whose corresponding eigenvalue is closest to negative infinity.  The medium eigenvector is the eigenvector whose corresponding eigenvalue is between the major and minor eigenvalues.</para>
/// </summary>
  void SetIntegrationEigenvectorToMedium();


  // void SetIntegrationEigenvectorToMinor ();this SetIntegrationEigenvector VTK_INTEGRATE_MINOR_EIGENVECTOR 
/// <summary>
/// <para>Set / get the eigenvector field through which to ingrate. It is possible to integrate using the major, medium or minor eigenvector field.  The major eigenvector is the eigenvector whose corresponding eigenvalue is closest to positive infinity. The minor eigenvector is the eigenvector whose corresponding eigenvalue is closest to negative infinity.  The medium eigenvector is the eigenvector whose corresponding eigenvalue is between the major and minor eigenvalues.</para>
/// </summary>
  void SetIntegrationEigenvectorToMinor();


  // void IntegrateMajorEigenvector ();this SetIntegrationEigenvectorToMajor 
/// <summary>
/// <para>Use the major eigenvector field as the vector field through which to integrate.  The major eigenvector is the eigenvector whose corresponding eigenvalue is closest to positive infinity.  </para>
/// </summary>
  void IntegrateMajorEigenvector();


  // void IntegrateMediumEigenvector ();this SetIntegrationEigenvectorToMedium 
/// <summary>
/// <para>Use the medium eigenvector field as the vector field through which to integrate. The medium eigenvector is the eigenvector whose corresponding eigenvalue is between the major and minor eigenvalues.</para>
/// </summary>
  void IntegrateMediumEigenvector();


  // void IntegrateMinorEigenvector ();this SetIntegrationEigenvectorToMinor 
/// <summary>
/// <para>Use the minor eigenvector field as the vector field through which to integrate. The minor eigenvector is the eigenvector whose corresponding eigenvalue is closest to negative infinity.</para>
/// </summary>
  void IntegrateMinorEigenvector();


  // void SetIntegrationStepLength (double );
/// <summary>
/// <para>Set / get a nominal integration step size (expressed as a fraction of the size of each cell).</para>
/// </summary>
  void SetIntegrationStepLength(double arg0);


  // double GetIntegrationStepLengthMinValue ();
/// <summary>
/// <para>Set / get a nominal integration step size (expressed as a fraction of the size of each cell).</para>
/// </summary>
  double GetIntegrationStepLengthMinValue();


  // double GetIntegrationStepLengthMaxValue ();
/// <summary>
/// <para>Set / get a nominal integration step size (expressed as a fraction of the size of each cell).</para>
/// </summary>
  double GetIntegrationStepLengthMaxValue();


  // double GetIntegrationStepLength ();
/// <summary>
/// <para>Set / get a nominal integration step size (expressed as a fraction of the size of each cell).</para>
/// </summary>
  double GetIntegrationStepLength();


  // void SetStepLength (double );
/// <summary>
/// <para>Set / get the length of a tube segment composing the hyperstreamline. The length is specified as a fraction of the diagonal length of the input bounding box.</para>
/// </summary>
  void SetStepLength(double arg0);


  // double GetStepLengthMinValue ();
/// <summary>
/// <para>Set / get the length of a tube segment composing the hyperstreamline. The length is specified as a fraction of the diagonal length of the input bounding box.</para>
/// </summary>
  double GetStepLengthMinValue();


  // double GetStepLengthMaxValue ();
/// <summary>
/// <para>Set / get the length of a tube segment composing the hyperstreamline. The length is specified as a fraction of the diagonal length of the input bounding box.</para>
/// </summary>
  double GetStepLengthMaxValue();


  // double GetStepLength ();
/// <summary>
/// <para>Set / get the length of a tube segment composing the hyperstreamline. The length is specified as a fraction of the diagonal length of the input bounding box.</para>
/// </summary>
  double GetStepLength();


  // void SetIntegrationDirection (int );
/// <summary>
/// <para>Specify the direction in which to integrate the hyperstreamline.</para>
/// </summary>
  void SetIntegrationDirection(int arg0);


  // int GetIntegrationDirectionMinValue ();
/// <summary>
/// <para>Specify the direction in which to integrate the hyperstreamline.</para>
/// </summary>
  int GetIntegrationDirectionMinValue();


  // int GetIntegrationDirectionMaxValue ();
/// <summary>
/// <para>Specify the direction in which to integrate the hyperstreamline.</para>
/// </summary>
  int GetIntegrationDirectionMaxValue();


  // int GetIntegrationDirection ();
/// <summary>
/// <para>Specify the direction in which to integrate the hyperstreamline.</para>
/// </summary>
  int GetIntegrationDirection();


  // void SetIntegrationDirectionToForward ();this SetIntegrationDirection VTK_INTEGRATE_FORWARD 
/// <summary>
/// <para>Specify the direction in which to integrate the hyperstreamline.</para>
/// </summary>
  void SetIntegrationDirectionToForward();


  // void SetIntegrationDirectionToBackward ();this SetIntegrationDirection VTK_INTEGRATE_BACKWARD 
/// <summary>
/// <para>Specify the direction in which to integrate the hyperstreamline.</para>
/// </summary>
  void SetIntegrationDirectionToBackward();


  // void SetIntegrationDirectionToIntegrateBothDirections ();this SetIntegrationDirection VTK_INTEGRATE_BOTH_DIRECTIONS 
/// <summary>
/// <para>Specify the direction in which to integrate the hyperstreamline.</para>
/// </summary>
  void SetIntegrationDirectionToIntegrateBothDirections();


  // void SetTerminalEigenvalue (double );
/// <summary>
/// <para>Set/get terminal eigenvalue.  If major eigenvalue falls below this value, hyperstreamline terminates propagation.</para>
/// </summary>
  void SetTerminalEigenvalue(double arg0);


  // double GetTerminalEigenvalueMinValue ();
/// <summary>
/// <para>Set/get terminal eigenvalue.  If major eigenvalue falls below this value, hyperstreamline terminates propagation.</para>
/// </summary>
  double GetTerminalEigenvalueMinValue();


  // double GetTerminalEigenvalueMaxValue ();
/// <summary>
/// <para>Set/get terminal eigenvalue.  If major eigenvalue falls below this value, hyperstreamline terminates propagation.</para>
/// </summary>
  double GetTerminalEigenvalueMaxValue();


  // double GetTerminalEigenvalue ();
/// <summary>
/// <para>Set/get terminal eigenvalue.  If major eigenvalue falls below this value, hyperstreamline terminates propagation.</para>
/// </summary>
  double GetTerminalEigenvalue();


  // void SetNumberOfSides (int );
/// <summary>
/// <para>Set / get the number of sides for the hyperstreamlines. At a minimum, number of sides is 3.</para>
/// </summary>
  void SetNumberOfSides(int arg0);


  // int GetNumberOfSidesMinValue ();
/// <summary>
/// <para>Set / get the number of sides for the hyperstreamlines. At a minimum, number of sides is 3.</para>
/// </summary>
  int GetNumberOfSidesMinValue();


  // int GetNumberOfSidesMaxValue ();
/// <summary>
/// <para>Set / get the number of sides for the hyperstreamlines. At a minimum, number of sides is 3.</para>
/// </summary>
  int GetNumberOfSidesMaxValue();


  // int GetNumberOfSides ();
/// <summary>
/// <para>Set / get the number of sides for the hyperstreamlines. At a minimum, number of sides is 3.</para>
/// </summary>
  int GetNumberOfSides();


  // void SetRadius (double );
/// <summary>
/// <para>Set / get the initial tube radius. This is the maximum &quot;elliptical&quot; radius at the beginning of the tube. Radius varies based on ratio of eigenvalues.  Note that tube section is actually elliptical and may become a point or line in cross section in some cases.</para>
/// </summary>
  void SetRadius(double arg0);


  // double GetRadiusMinValue ();
/// <summary>
/// <para>Set / get the initial tube radius. This is the maximum &quot;elliptical&quot; radius at the beginning of the tube. Radius varies based on ratio of eigenvalues.  Note that tube section is actually elliptical and may become a point or line in cross section in some cases.</para>
/// </summary>
  double GetRadiusMinValue();


  // double GetRadiusMaxValue ();
/// <summary>
/// <para>Set / get the initial tube radius. This is the maximum &quot;elliptical&quot; radius at the beginning of the tube. Radius varies based on ratio of eigenvalues.  Note that tube section is actually elliptical and may become a point or line in cross section in some cases.</para>
/// </summary>
  double GetRadiusMaxValue();


  // double GetRadius ();
/// <summary>
/// <para>Set / get the initial tube radius. This is the maximum &quot;elliptical&quot; radius at the beginning of the tube. Radius varies based on ratio of eigenvalues.  Note that tube section is actually elliptical and may become a point or line in cross section in some cases.</para>
/// </summary>
  double GetRadius();


  // void SetLogScaling (int );
/// <summary>
/// <para>Turn on/off logarithmic scaling. If scaling is on, the log base 10 of the computed eigenvalues are used to scale the cross section radii.</para>
/// </summary>
  void SetLogScaling(int arg0);


  // int GetLogScaling ();
/// <summary>
/// <para>Turn on/off logarithmic scaling. If scaling is on, the log base 10 of the computed eigenvalues are used to scale the cross section radii.</para>
/// </summary>
  int GetLogScaling();


  // void LogScalingOn ();
/// <summary>
/// <para>Turn on/off logarithmic scaling. If scaling is on, the log base 10 of the computed eigenvalues are used to scale the cross section radii.</para>
/// </summary>
  void LogScalingOn();


  // void LogScalingOff ();
/// <summary>
/// <para>Turn on/off logarithmic scaling. If scaling is on, the log base 10 of the computed eigenvalues are used to scale the cross section radii.</para>
/// </summary>
  void LogScalingOff();


// Did not wrap:  vtkHyperStreamline ();


// Did not wrap:  ~vtkHyperStreamline ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  int BuildTube (vtkDataSet *input, vtkPolyData *output);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkHyperStreamline (const vtkHyperStreamline &);


// Did not wrap:  void vtkHyperStreamline 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkHyperStreamline(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkHyperStreamline(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkHyperStreamline();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkHyperStreamline();


};

} // end vtkGraphics
