#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkBYUReader : public vtkPolyDataAlgorithm
{

public:
// Did not wrap:  static vtkBYUReader *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkBYUReader *NewInstance ();
  vtkBYUReader^ NewInstance();


  // vtkBYUReader *SafeDownCast (vtkObject* o);
  static vtkBYUReader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetGeometryFileName (char *);
/// <summary>
/// <para>Specify name of geometry FileName.</para>
/// </summary>
  void SetGeometryFileName(System::String^ arg0);


  // char *GetGeometryFileName ();
/// <summary>
/// <para>Specify name of geometry FileName.</para>
/// </summary>
  System::String^ GetGeometryFileName();


  // virtual void SetFileName (const char *f);this SetGeometryFileName f 
/// <summary>
/// <para>Specify name of geometry FileName (alias).</para>
/// </summary>
  void SetFileName(System::String^ f);


  // virtual char *GetFileName ();return this GetGeometryFileName 
/// <summary>
/// <para>Specify name of displacement FileName.</para>
/// </summary>
  System::String^ GetFileName();


  // void SetDisplacementFileName (char *);
/// <summary>
/// <para>Specify name of displacement FileName.</para>
/// </summary>
  void SetDisplacementFileName(System::String^ arg0);


  // char *GetDisplacementFileName ();
/// <summary>
/// <para>Specify name of displacement FileName.</para>
/// </summary>
  System::String^ GetDisplacementFileName();


  // void SetScalarFileName (char *);
/// <summary>
/// <para>Specify name of scalar FileName.</para>
/// </summary>
  void SetScalarFileName(System::String^ arg0);


  // char *GetScalarFileName ();
/// <summary>
/// <para>Specify name of scalar FileName.</para>
/// </summary>
  System::String^ GetScalarFileName();


  // void SetTextureFileName (char *);
/// <summary>
/// <para>Specify name of texture coordinates FileName.</para>
/// </summary>
  void SetTextureFileName(System::String^ arg0);


  // char *GetTextureFileName ();
/// <summary>
/// <para>Specify name of texture coordinates FileName.</para>
/// </summary>
  System::String^ GetTextureFileName();


  // void SetReadDisplacement (int );
/// <summary>
/// <para>Turn on/off the reading of the displacement file.</para>
/// </summary>
  void SetReadDisplacement(int arg0);


  // int GetReadDisplacement ();
/// <summary>
/// <para>Turn on/off the reading of the displacement file.</para>
/// </summary>
  int GetReadDisplacement();


  // void ReadDisplacementOn ();
/// <summary>
/// <para>Turn on/off the reading of the displacement file.</para>
/// </summary>
  void ReadDisplacementOn();


  // void ReadDisplacementOff ();
/// <summary>
/// <para>Turn on/off the reading of the displacement file.</para>
/// </summary>
  void ReadDisplacementOff();


  // void SetReadScalar (int );
/// <summary>
/// <para>Turn on/off the reading of the scalar file.</para>
/// </summary>
  void SetReadScalar(int arg0);


  // int GetReadScalar ();
/// <summary>
/// <para>Turn on/off the reading of the scalar file.</para>
/// </summary>
  int GetReadScalar();


  // void ReadScalarOn ();
/// <summary>
/// <para>Turn on/off the reading of the scalar file.</para>
/// </summary>
  void ReadScalarOn();


  // void ReadScalarOff ();
/// <summary>
/// <para>Turn on/off the reading of the scalar file.</para>
/// </summary>
  void ReadScalarOff();


  // void SetReadTexture (int );
/// <summary>
/// <para>Turn on/off the reading of the texture coordinate file. Specify name of geometry FileName.</para>
/// </summary>
  void SetReadTexture(int arg0);


  // int GetReadTexture ();
/// <summary>
/// <para>Turn on/off the reading of the texture coordinate file. Specify name of geometry FileName.</para>
/// </summary>
  int GetReadTexture();


  // void ReadTextureOn ();
/// <summary>
/// <para>Turn on/off the reading of the texture coordinate file. Specify name of geometry FileName.</para>
/// </summary>
  void ReadTextureOn();


  // void ReadTextureOff ();
/// <summary>
/// <para>Turn on/off the reading of the texture coordinate file. Specify name of geometry FileName.</para>
/// </summary>
  void ReadTextureOff();


  // void SetPartNumber (int );
/// <summary>
/// <para>Set/Get the part number to be read.</para>
/// </summary>
  void SetPartNumber(int arg0);


  // int GetPartNumberMinValue ();
/// <summary>
/// <para>Set/Get the part number to be read.</para>
/// </summary>
  int GetPartNumberMinValue();


  // int GetPartNumberMaxValue ();
/// <summary>
/// <para>Set/Get the part number to be read.</para>
/// </summary>
  int GetPartNumberMaxValue();


  // int GetPartNumber ();
/// <summary>
/// <para>Set/Get the part number to be read.</para>
/// </summary>
  int GetPartNumber();


// Did not wrap:  vtkBYUReader ();


// Did not wrap:  ~vtkBYUReader ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  int ComputeDivisionExtents (vtkDataObject *output, int idx, int numDivisions);


// Did not wrap:  void ReadGeometryFile (FILE *fp, int &numPts, vtkInformation *outInfo);


// Did not wrap:  void ReadDisplacementFile (int numPts, vtkInformation *outInfo);


// Did not wrap:  void ReadScalarFile (int numPts, vtkInformation *outInfo);


// Did not wrap:  void ReadTextureFile (int numPts, vtkInformation *outInfo);


// Did not wrap:  vtkBYUReader (const vtkBYUReader &);


// Did not wrap:  void vtkBYUReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkBYUReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkBYUReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkBYUReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkBYUReader();


};

} // end vtkIO
