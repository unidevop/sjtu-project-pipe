#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkLinkEdgels : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkLinkEdgels *NewInstance ();
  vtkLinkEdgels^ NewInstance();


  // vtkLinkEdgels *SafeDownCast (vtkObject* o);
  static vtkLinkEdgels^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkLinkEdgels *New ();


  // void SetLinkThreshold (double );
/// <summary>
/// <para>Set/Get the threshold for Phi vs. Alpha link thresholding.</para>
/// </summary>
  void SetLinkThreshold(double arg0);


  // double GetLinkThreshold ();
/// <summary>
/// <para>Set/Get the threshold for Phi vs. Alpha link thresholding.</para>
/// </summary>
  double GetLinkThreshold();


  // void SetPhiThreshold (double );
/// <summary>
/// <para>Set/get the threshold for Phi vs. Phi link thresholding.</para>
/// </summary>
  void SetPhiThreshold(double arg0);


  // double GetPhiThreshold ();
/// <summary>
/// <para>Set/get the threshold for Phi vs. Phi link thresholding.</para>
/// </summary>
  double GetPhiThreshold();


  // void SetGradientThreshold (double );
/// <summary>
/// <para>Set/Get the threshold for image gradient thresholding.</para>
/// </summary>
  void SetGradientThreshold(double arg0);


  // double GetGradientThreshold ();
/// <summary>
/// <para>Set/Get the threshold for image gradient thresholding.</para>
/// </summary>
  double GetGradientThreshold();


// Did not wrap:  vtkLinkEdgels ();


// Did not wrap:  ~vtkLinkEdgels ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  void LinkEdgels (int xdim, int ydim, double *image, vtkDataArray *inVectors, vtkCellArray *newLines, vtkPoints *newPts, vtkDoubleArray *outScalars, vtkDoubleArray *outVectors, int z);


// Did not wrap:  vtkLinkEdgels (const vtkLinkEdgels &);


// Did not wrap:  void vtkLinkEdgels 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkLinkEdgels(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkLinkEdgels(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkLinkEdgels();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkLinkEdgels();


};

} // end vtkGraphics
