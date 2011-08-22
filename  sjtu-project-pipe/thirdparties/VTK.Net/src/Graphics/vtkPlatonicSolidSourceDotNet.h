#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkPlatonicSolidSource : public vtkPolyDataAlgorithm
{

public:
// Did not wrap:  static vtkPlatonicSolidSource *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPlatonicSolidSource *NewInstance ();
  vtkPlatonicSolidSource^ NewInstance();


  // vtkPlatonicSolidSource *SafeDownCast (vtkObject* o);
  static vtkPlatonicSolidSource^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetSolidType (int );
/// <summary>
/// <para>Specify the type of PlatonicSolid solid to create.</para>
/// </summary>
  void SetSolidType(int arg0);


  // int GetSolidTypeMinValue ();
/// <summary>
/// <para>Specify the type of PlatonicSolid solid to create.</para>
/// </summary>
  int GetSolidTypeMinValue();


  // int GetSolidTypeMaxValue ();
/// <summary>
/// <para>Specify the type of PlatonicSolid solid to create.</para>
/// </summary>
  int GetSolidTypeMaxValue();


  // int GetSolidType ();
/// <summary>
/// <para>Specify the type of PlatonicSolid solid to create.</para>
/// </summary>
  int GetSolidType();


  // void SetSolidTypeToTetrahedron ();this SetSolidType VTK_SOLID_TETRAHEDRON 
/// <summary>
/// <para>Specify the type of PlatonicSolid solid to create.</para>
/// </summary>
  void SetSolidTypeToTetrahedron();


  // void SetSolidTypeToCube ();this SetSolidType VTK_SOLID_CUBE 
/// <summary>
/// <para>Specify the type of PlatonicSolid solid to create.</para>
/// </summary>
  void SetSolidTypeToCube();


  // void SetSolidTypeToOctahedron ();this SetSolidType VTK_SOLID_OCTAHEDRON 
/// <summary>
/// <para>Specify the type of PlatonicSolid solid to create.</para>
/// </summary>
  void SetSolidTypeToOctahedron();


  // void SetSolidTypeToIcosahedron ();this SetSolidType VTK_SOLID_ICOSAHEDRON 
/// <summary>
/// <para>Specify the type of PlatonicSolid solid to create.</para>
/// </summary>
  void SetSolidTypeToIcosahedron();


  // void SetSolidTypeToDodecahedron ();this SetSolidType VTK_SOLID_DODECAHEDRON 
  void SetSolidTypeToDodecahedron();


// Did not wrap:  vtkPlatonicSolidSource ();


// Did not wrap:  ~vtkPlatonicSolidSource ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkPlatonicSolidSource (const vtkPlatonicSolidSource &);


// Did not wrap:  void vtkPlatonicSolidSource 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPlatonicSolidSource(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPlatonicSolidSource(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPlatonicSolidSource();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPlatonicSolidSource();


};

} // end vtkGraphics
