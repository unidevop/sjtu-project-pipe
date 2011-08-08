#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkRenderWindow;
ref class vtkRenderer;

public ref class vtkImporter : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImporter *NewInstance ();
  vtkImporter^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // vtkRenderer *GetRenderer ();
  vtkRenderer^ GetRenderer();


  // virtual void SetRenderWindow (vtkRenderWindow *);
  void SetRenderWindow(vtkRenderWindow^ arg0);


  // vtkRenderWindow *GetRenderWindow ();
  vtkRenderWindow^ GetRenderWindow();


  // void Read ();
  void Read();


  // void Update ();this Read 
  void Update();


// Did not wrap:  vtkImporter ();


// Did not wrap:  ~vtkImporter ();


// Did not wrap:  virtual int ImportBegin ();return 


// Did not wrap:  virtual void ImportEnd ();


// Did not wrap:  virtual void ImportActors (vtkRenderer *);


// Did not wrap:  virtual void ImportCameras (vtkRenderer *);


// Did not wrap:  virtual void ImportLights (vtkRenderer *);


// Did not wrap:  virtual void ImportProperties (vtkRenderer *);


// Did not wrap:  virtual void ReadData ();


// Did not wrap:  vtkImporter (const vtkImporter &);


// Did not wrap:  void vtkImporter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImporter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImporter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImporter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImporter();


};

} // end vtkRendering
