#pragma once

// managed includes
#include "vtkImageDecomposeFilterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageEuclideanDistance : public vtkImageDecomposeFilter
{

public:
// Did not wrap:  static vtkImageEuclideanDistance *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageEuclideanDistance *NewInstance ();
  vtkImageEuclideanDistance^ NewInstance();


  // vtkImageEuclideanDistance *SafeDownCast (vtkObject* o);
  static vtkImageEuclideanDistance^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // int SplitExtent (int splitExt[6], int startExt[6], int num, int total);
/// <summary>
/// <para>Used internally for streaming and threads.   Splits output update extent into num pieces. This method needs to be called num times.  Results must not overlap for consistent starting extent.  Subclass can override this method. This method returns the number of peices resulting from a successful split.  This can be from 1 to &quot;total&quot;.   If 1 is returned, the extent cannot be split.</para>
/// </summary>
  int SplitExtent(array<int>^ splitExt, array<int>^ startExt, int num, int total);


  // void SetInitialize (int );
/// <summary>
/// <para>Used to set all non-zero voxels to MaximumDistance before starting the distance transformation. Setting Initialize off keeps the current  value in the input image as starting point. This allows to superimpose  several distance maps. </para>
/// </summary>
  void SetInitialize(int arg0);


  // int GetInitialize ();
/// <summary>
/// <para>Used to set all non-zero voxels to MaximumDistance before starting the distance transformation. Setting Initialize off keeps the current  value in the input image as starting point. This allows to superimpose  several distance maps. </para>
/// </summary>
  int GetInitialize();


  // void InitializeOn ();
/// <summary>
/// <para>Used to set all non-zero voxels to MaximumDistance before starting the distance transformation. Setting Initialize off keeps the current  value in the input image as starting point. This allows to superimpose  several distance maps. </para>
/// </summary>
  void InitializeOn();


  // void InitializeOff ();
/// <summary>
/// <para>Used to set all non-zero voxels to MaximumDistance before starting the distance transformation. Setting Initialize off keeps the current  value in the input image as starting point. This allows to superimpose  several distance maps. </para>
/// </summary>
  void InitializeOff();


  // void SetConsiderAnisotropy (int );
/// <summary>
/// <para>Used to define whether Spacing should be used in the computation of the distances </para>
/// </summary>
  void SetConsiderAnisotropy(int arg0);


  // int GetConsiderAnisotropy ();
/// <summary>
/// <para>Used to define whether Spacing should be used in the computation of the distances </para>
/// </summary>
  int GetConsiderAnisotropy();


  // void ConsiderAnisotropyOn ();
/// <summary>
/// <para>Used to define whether Spacing should be used in the computation of the distances </para>
/// </summary>
  void ConsiderAnisotropyOn();


  // void ConsiderAnisotropyOff ();
/// <summary>
/// <para>Used to define whether Spacing should be used in the computation of the distances </para>
/// </summary>
  void ConsiderAnisotropyOff();


  // void SetMaximumDistance (double );
/// <summary>
/// <para>Any distance bigger than this-&gt;MaximumDistance will not ne computed but set to this-&gt;MaximumDistance instead. </para>
/// </summary>
  void SetMaximumDistance(double arg0);


  // double GetMaximumDistance ();
/// <summary>
/// <para>Any distance bigger than this-&gt;MaximumDistance will not ne computed but set to this-&gt;MaximumDistance instead. </para>
/// </summary>
  double GetMaximumDistance();


  // void SetAlgorithm (int );
/// <summary>
/// <para>Selects a Euclidean DT algorithm.  1. Saito 2. Saito-cached  More algorithms will be added later on. </para>
/// </summary>
  void SetAlgorithm(int arg0);


  // int GetAlgorithm ();
/// <summary>
/// <para>Selects a Euclidean DT algorithm.  1. Saito 2. Saito-cached  More algorithms will be added later on. </para>
/// </summary>
  int GetAlgorithm();


  // void SetAlgorithmToSaito ();this SetAlgorithm VTK_EDT_SAITO 
/// <summary>
/// <para>Selects a Euclidean DT algorithm.  1. Saito 2. Saito-cached  More algorithms will be added later on. </para>
/// </summary>
  void SetAlgorithmToSaito();


  // void SetAlgorithmToSaitoCached ();this SetAlgorithm VTK_EDT_SAITO_CACHED 
  void SetAlgorithmToSaitoCached();


// Did not wrap:  virtual int IterativeRequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkImageEuclideanDistance ();


// Did not wrap:  ~vtkImageEuclideanDistance ();


// Did not wrap:  virtual void AllocateOutputScalars (vtkImageData *outData);


// Did not wrap:  virtual int IterativeRequestInformation (vtkInformation *in, vtkInformation *out);


// Did not wrap:  virtual int IterativeRequestUpdateExtent (vtkInformation *in, vtkInformation *out);


// Did not wrap:  vtkImageEuclideanDistance (const vtkImageEuclideanDistance &);


// Did not wrap:  void vtkImageEuclideanDistance 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageEuclideanDistance(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageEuclideanDistance(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageEuclideanDistance();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageEuclideanDistance();


};

} // end vtkImaging
