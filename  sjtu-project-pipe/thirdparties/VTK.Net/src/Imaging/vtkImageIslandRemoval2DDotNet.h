#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageIslandRemoval2D : public vtkImageAlgorithm
{

public:
// Did not wrap:  static vtkImageIslandRemoval2D *New ();


  // const char *GetClassName ();
/// <summary>
/// <para>Constructor: Sets default filter to be identity.</para>
/// </summary>
  System::String^ GetClassName();


  // int IsA (const char *name);
/// <summary>
/// <para>Constructor: Sets default filter to be identity.</para>
/// </summary>
  int IsA(System::String^ name);


  // vtkImageIslandRemoval2D *NewInstance ();
/// <summary>
/// <para>Constructor: Sets default filter to be identity.</para>
/// </summary>
  vtkImageIslandRemoval2D^ NewInstance();


  // vtkImageIslandRemoval2D *SafeDownCast (vtkObject* o);
/// <summary>
/// <para>Constructor: Sets default filter to be identity.</para>
/// </summary>
  static vtkImageIslandRemoval2D^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetAreaThreshold (int );
/// <summary>
/// <para>Set/Get the cutoff area for removal</para>
/// </summary>
  void SetAreaThreshold(int arg0);


  // int GetAreaThreshold ();
/// <summary>
/// <para>Set/Get the cutoff area for removal</para>
/// </summary>
  int GetAreaThreshold();


  // void SetSquareNeighborhood (int );
/// <summary>
/// <para>Set/Get whether to use 4 or 8 neighbors</para>
/// </summary>
  void SetSquareNeighborhood(int arg0);


  // int GetSquareNeighborhood ();
/// <summary>
/// <para>Set/Get whether to use 4 or 8 neighbors</para>
/// </summary>
  int GetSquareNeighborhood();


  // void SquareNeighborhoodOn ();
/// <summary>
/// <para>Set/Get whether to use 4 or 8 neighbors</para>
/// </summary>
  void SquareNeighborhoodOn();


  // void SquareNeighborhoodOff ();
/// <summary>
/// <para>Set/Get whether to use 4 or 8 neighbors</para>
/// </summary>
  void SquareNeighborhoodOff();


  // void SetIslandValue (double );
/// <summary>
/// <para>Set/Get the value to remove.</para>
/// </summary>
  void SetIslandValue(double arg0);


  // double GetIslandValue ();
/// <summary>
/// <para>Set/Get the value to remove.</para>
/// </summary>
  double GetIslandValue();


  // void SetReplaceValue (double );
/// <summary>
/// <para>Set/Get the value to put in the place of removed pixels.</para>
/// </summary>
  void SetReplaceValue(double arg0);


  // double GetReplaceValue ();
/// <summary>
/// <para>Set/Get the value to put in the place of removed pixels.</para>
/// </summary>
  double GetReplaceValue();


// Did not wrap:  vtkImageIslandRemoval2D ();


// Did not wrap:  ~vtkImageIslandRemoval2D ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkImageIslandRemoval2D (const vtkImageIslandRemoval2D &);


// Did not wrap:  void vtkImageIslandRemoval2D 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageIslandRemoval2D(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageIslandRemoval2D(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageIslandRemoval2D();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageIslandRemoval2D();


};

} // end vtkImaging
