#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkHierarchicalDataExtractLevel : public vtkHierarchicalDataSetAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkHierarchicalDataExtractLevel *NewInstance ();
  vtkHierarchicalDataExtractLevel^ NewInstance();


  // vtkHierarchicalDataExtractLevel *SafeDownCast (vtkObject* o);
  static vtkHierarchicalDataExtractLevel^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkHierarchicalDataExtractLevel *New ();


  // void SetMinLevel (unsigned int );
/// <summary>
/// <para>Minimum level to be extacted</para>
/// </summary>
  void SetMinLevel(unsigned int arg0);


  // int unsigned GetMinLevel ();
/// <summary>
/// <para>Minimum level to be extacted</para>
/// </summary>
  unsigned int GetMinLevel();


  // void SetMaxLevel (unsigned int );
/// <summary>
/// <para>Maximum level to be extacted</para>
/// </summary>
  void SetMaxLevel(unsigned int arg0);


  // int unsigned GetMaxLevel ();
/// <summary>
/// <para>Maximum level to be extacted</para>
/// </summary>
  unsigned int GetMaxLevel();


  // void SetLevelRange (unsigned int min, unsigned int max);this SetMinLevel min this SetMaxLevel max 
/// <summary>
/// <para>Returns input min (always 0) and max levels.</para>
/// </summary>
  void SetLevelRange(unsigned int min, unsigned int max);


  // int  *GetInputLevels ();
/// <summary>
/// <para>Returns input min (always 0) and max levels.</para>
/// </summary>
  array<int>^ GetInputLevels();


// Did not wrap:  vtkHierarchicalDataExtractLevel ();


// Did not wrap:  ~vtkHierarchicalDataExtractLevel ();


// Did not wrap:  virtual int RequestDataObject (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkHierarchicalDataExtractLevel (const vtkHierarchicalDataExtractLevel &);


// Did not wrap:  void vtkHierarchicalDataExtractLevel 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkHierarchicalDataExtractLevel(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkHierarchicalDataExtractLevel(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkHierarchicalDataExtractLevel();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkHierarchicalDataExtractLevel();


};

} // end vtkGraphics
