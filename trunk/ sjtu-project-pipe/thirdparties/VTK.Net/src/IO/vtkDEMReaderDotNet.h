#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkDEMReader : public vtkImageAlgorithm
{

public:
// Did not wrap:  static vtkDEMReader *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkDEMReader *NewInstance ();
  vtkDEMReader^ NewInstance();


  // vtkDEMReader *SafeDownCast (vtkObject* o);
  static vtkDEMReader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetFileName (char *);
/// <summary>
/// <para>Specify file name of Digital Elevation Model (DEM) file</para>
/// </summary>
  void SetFileName(System::String^ arg0);


  // char *GetFileName ();
/// <summary>
/// <para>Specify file name of Digital Elevation Model (DEM) file</para>
/// </summary>
  System::String^ GetFileName();


  // void SetElevationReference (int );
/// <summary>
/// <para>Specify the elevation origin to use. By default, the elevation origin is equal to ElevationBounds[0]. A more convenient origin is to use sea level (i.e., a value of 0.0).</para>
/// </summary>
  void SetElevationReference(int arg0);


  // int GetElevationReferenceMinValue ();
/// <summary>
/// <para>Specify the elevation origin to use. By default, the elevation origin is equal to ElevationBounds[0]. A more convenient origin is to use sea level (i.e., a value of 0.0).</para>
/// </summary>
  int GetElevationReferenceMinValue();


  // int GetElevationReferenceMaxValue ();
/// <summary>
/// <para>Specify the elevation origin to use. By default, the elevation origin is equal to ElevationBounds[0]. A more convenient origin is to use sea level (i.e., a value of 0.0).</para>
/// </summary>
  int GetElevationReferenceMaxValue();


  // int GetElevationReference ();
/// <summary>
/// <para>Specify the elevation origin to use. By default, the elevation origin is equal to ElevationBounds[0]. A more convenient origin is to use sea level (i.e., a value of 0.0).</para>
/// </summary>
  int GetElevationReference();


  // void SetElevationReferenceToSeaLevel ();this SetElevationReference REFERENCE_SEA_LEVEL 
/// <summary>
/// <para>Specify the elevation origin to use. By default, the elevation origin is equal to ElevationBounds[0]. A more convenient origin is to use sea level (i.e., a value of 0.0).</para>
/// </summary>
  void SetElevationReferenceToSeaLevel();


  // void SetElevationReferenceToElevationBounds ();this SetElevationReference REFERENCE_ELEVATION_BOUNDS 
/// <summary>
/// <para>Specify the elevation origin to use. By default, the elevation origin is equal to ElevationBounds[0]. A more convenient origin is to use sea level (i.e., a value of 0.0).</para>
/// </summary>
  void SetElevationReferenceToElevationBounds();


  // const char *GetElevationReferenceAsString (void );
/// <summary>
/// <para>Specify the elevation origin to use. By default, the elevation origin is equal to ElevationBounds[0]. A more convenient origin is to use sea level (i.e., a value of 0.0).</para>
/// </summary>
  System::String^ GetElevationReferenceAsString();


  // char *GetMapLabel ();
/// <summary>
/// <para>An ASCII description of the map</para>
/// </summary>
  System::String^ GetMapLabel();


  // int GetDEMLevel ();
/// <summary>
/// <para>Code 1=DEM-1, 2=DEM_2, ...</para>
/// </summary>
  int GetDEMLevel();


  // int GetElevationPattern ();
/// <summary>
/// <para>Code 1=regular, 2=random, reserved for future use</para>
/// </summary>
  int GetElevationPattern();


  // int GetGroundSystem ();
/// <summary>
/// <para>Ground planimetric reference system</para>
/// </summary>
  int GetGroundSystem();


  // int GetGroundZone ();
/// <summary>
/// <para>Zone in ground planimetric reference system</para>
/// </summary>
  int GetGroundZone();


  // float  *GetProjectionParameters ();
/// <summary>
/// <para>Map Projection parameters. All are zero.</para>
/// </summary>
  array<float>^ GetProjectionParameters();


  // int GetPlaneUnitOfMeasure ();
/// <summary>
/// <para>Defining unit of measure for ground planimetric coordinates throughout the file. 0 = radians, 1 = feet, 2 = meters, 3 = arc-seconds.</para>
/// </summary>
  int GetPlaneUnitOfMeasure();


  // int GetElevationUnitOfMeasure ();
/// <summary>
/// <para>Defining unit of measure for elevation coordinates throughout the file. 1 = feet, 2 = meters</para>
/// </summary>
  int GetElevationUnitOfMeasure();


  // int GetPolygonSize ();
/// <summary>
/// <para>Number of sides in the polygon which defines the coverage of the DEM file. Set to 4.</para>
/// </summary>
  int GetPolygonSize();


  // float  *GetElevationBounds ();
/// <summary>
/// <para>Minimum and maximum elevation for the DEM. The units in the file are in ElevationUnitOfMeasure. This class converts them to meters.</para>
/// </summary>
  array<float>^ GetElevationBounds();


  // float GetLocalRotation ();
/// <summary>
/// <para>Counterclockwise angle (in radians) from the primary axis of the planimetric reference to the primary axis of the DEM local reference system. IGNORED BY THIS IMPLEMENTATION.</para>
/// </summary>
  float GetLocalRotation();


  // int GetAccuracyCode ();
/// <summary>
/// <para>Accuracy code for elevations. 0=unknown accuracy</para>
/// </summary>
  int GetAccuracyCode();


  // float  *GetSpatialResolution ();
/// <summary>
/// <para>DEM spatial resolution for x,y,z. Values are expressed in units of resolution. Since elevations are read as integers, this permits fractional elevations.</para>
/// </summary>
  array<float>^ GetSpatialResolution();


  // int  *GetProfileDimension ();
/// <summary>
/// <para>The number of rows and columns in the DEM.</para>
/// </summary>
  array<int>^ GetProfileDimension();


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkDEMReader ();


// Did not wrap:  ~vtkDEMReader ();


// Did not wrap:  void ComputeExtentOriginAndSpacing (int extent[6], double origin[6], double spacing[6]);


// Did not wrap:  int ReadTypeARecord ();


// Did not wrap:  int ReadProfiles (vtkImageData *data);


// Did not wrap:  virtual int RequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  vtkDEMReader (const vtkDEMReader &);


// Did not wrap:  void vtkDEMReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkDEMReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkDEMReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkDEMReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkDEMReader();


};

} // end vtkIO
