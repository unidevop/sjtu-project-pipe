#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkUnstructuredGridVolumeMapper : public vtkAbstractVolumeMapper
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkUnstructuredGridVolumeMapper *NewInstance ();
  vtkUnstructuredGridVolumeMapper^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void SetInput (vtkUnstructuredGrid *);
/// <summary>
/// <para>Set/Get the input data</para>
/// </summary>
  void SetInput(vtkUnstructuredGrid^ arg0);


  // virtual void SetInput (vtkDataSet *);
/// <summary>
/// <para>Set/Get the input data</para>
/// </summary>
  void SetInput(vtkDataSet^ arg0);


  // vtkUnstructuredGrid *GetInput ();
/// <summary>
/// <para>Set/Get the input data</para>
/// </summary>
  vtkUnstructuredGrid^ GetInput();


  // void SetBlendMode (int );
  void SetBlendMode(int arg0);


  // void SetBlendModeToComposite ();this SetBlendMode vtkUnstructuredGridVolumeMapper COMPOSITE_BLEND 
  void SetBlendModeToComposite();


  // void SetBlendModeToMaximumIntensity ();this SetBlendMode vtkUnstructuredGridVolumeMapper MAXIMUM_INTENSITY_BLEND 
  void SetBlendModeToMaximumIntensity();


  // int GetBlendMode ();
  int GetBlendMode();


// Did not wrap:  vtkUnstructuredGridVolumeMapper ();


// Did not wrap:  ~vtkUnstructuredGridVolumeMapper ();


// Did not wrap:  virtual int FillInputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkUnstructuredGridVolumeMapper (const vtkUnstructuredGridVolumeMapper &);


// Did not wrap:  void vtkUnstructuredGridVolumeMapper 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkUnstructuredGridVolumeMapper(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkUnstructuredGridVolumeMapper(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkUnstructuredGridVolumeMapper();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkUnstructuredGridVolumeMapper();


};

} // end vtkVolumeRendering
