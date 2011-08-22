#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtk3DSImporter : public vtkImporter
{

public:
// Did not wrap:  static vtk3DSImporter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtk3DSImporter *NewInstance ();
  vtk3DSImporter^ NewInstance();


  // vtk3DSImporter *SafeDownCast (vtkObject* o);
  static vtk3DSImporter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetFileName (char *);
/// <summary>
/// <para>Specify the name of the file to read.</para>
/// </summary>
  void SetFileName(System::String^ arg0);


  // char *GetFileName ();
/// <summary>
/// <para>Specify the name of the file to read.</para>
/// </summary>
  System::String^ GetFileName();


  // void SetComputeNormals (int );
/// <summary>
/// <para>Set/Get the computation of normals. If on, imported geometry will be run through vtkPolyDataNormals.</para>
/// </summary>
  void SetComputeNormals(int arg0);


  // int GetComputeNormals ();
/// <summary>
/// <para>Set/Get the computation of normals. If on, imported geometry will be run through vtkPolyDataNormals.</para>
/// </summary>
  int GetComputeNormals();


  // void ComputeNormalsOn ();
/// <summary>
/// <para>Set/Get the computation of normals. If on, imported geometry will be run through vtkPolyDataNormals.</para>
/// </summary>
  void ComputeNormalsOn();


  // void ComputeNormalsOff ();
/// <summary>
/// <para>Set/Get the computation of normals. If on, imported geometry will be run through vtkPolyDataNormals.</para>
/// </summary>
  void ComputeNormalsOff();


// Did not wrap:  FILE *GetFileFD ();return this FileFD 


// Did not wrap:  vtk3DSImporter ();


// Did not wrap:  ~vtk3DSImporter ();


// Did not wrap:  virtual int ImportBegin ();


// Did not wrap:  virtual void ImportEnd ();


// Did not wrap:  virtual void ImportActors (vtkRenderer *renderer);


// Did not wrap:  virtual void ImportCameras (vtkRenderer *renderer);


// Did not wrap:  virtual void ImportLights (vtkRenderer *renderer);


// Did not wrap:  virtual void ImportProperties (vtkRenderer *renderer);


// Did not wrap:  vtkPolyData *GeneratePolyData (vtk3DSMesh *meshPtr);


// Did not wrap:  int Read3DS ();


// Did not wrap:  vtk3DSImporter (const vtk3DSImporter &);


// Did not wrap:  void vtk3DSImporter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtk3DSImporter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtk3DSImporter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtk3DSImporter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtk3DSImporter();

	vtkActorCollection^ ActorCollection();
};

} // end vtkHybrid
