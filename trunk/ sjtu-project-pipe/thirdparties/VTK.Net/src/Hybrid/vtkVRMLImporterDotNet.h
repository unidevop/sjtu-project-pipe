#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkVRMLImporter : public vtkImporter
{

public:
// Did not wrap:  static vtkVRMLImporter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkVRMLImporter *NewInstance ();
  vtkVRMLImporter^ NewInstance();


  // vtkVRMLImporter *SafeDownCast (vtkObject* o);
  static vtkVRMLImporter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // vtkObject *GetVRMLDEFObject (const char *name);
/// <summary>
/// <para>In the VRML spec you can DEF and USE nodes (name them), This routine will return the associated VTK object which was created as a result of the DEF mechanism Send in the name from the VRML file, get the VTK object. You will have to check and correctly cast the object since this only returns vtkObjects.</para>
/// </summary>
  vtkObject^ GetVRMLDEFObject(System::String^ name);


  // void enterNode (const char *);
/// <summary>
/// <para>Needed by the yacc/lex grammar used</para>
/// </summary>
  void enterNode(System::String^ arg0);


  // void exitNode ();
/// <summary>
/// <para>Needed by the yacc/lex grammar used</para>
/// </summary>
  void exitNode();


  // void enterField (const char *);
/// <summary>
/// <para>Needed by the yacc/lex grammar used</para>
/// </summary>
  void enterField(System::String^ arg0);


  // void exitField ();
/// <summary>
/// <para>Needed by the yacc/lex grammar used</para>
/// </summary>
  void exitField();


  // void useNode (const char *);
/// <summary>
/// <para>Needed by the yacc/lex grammar used</para>
/// </summary>
  void useNode(System::String^ arg0);


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


// Did not wrap:  FILE *GetFileFD ();return this FileFD 


// Did not wrap:  vtkVRMLImporter ();


// Did not wrap:  ~vtkVRMLImporter ();


// Did not wrap:  virtual int ImportBegin ();


// Did not wrap:  virtual void ImportEnd ();


// Did not wrap:  virtual void ImportActors (vtkRenderer *);


// Did not wrap:  virtual void ImportCameras (vtkRenderer *);


// Did not wrap:  virtual void ImportLights (vtkRenderer *);


// Did not wrap:  virtual void ImportProperties (vtkRenderer *);


// Did not wrap:  int OpenImportFile ();


// Did not wrap:  vtkPoints *PointsNew ();


// Did not wrap:  vtkFloatArray *FloatArrayNew ();


// Did not wrap:  vtkIdTypeArray *IdTypeArrayNew ();


// Did not wrap:  void DeleteObject (vtkObject *);


// Did not wrap:  vtkVRMLImporter (const vtkVRMLImporter &);


// Did not wrap:  void vtkVRMLImporter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkVRMLImporter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkVRMLImporter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkVRMLImporter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkVRMLImporter();


};

} // end vtkHybrid
