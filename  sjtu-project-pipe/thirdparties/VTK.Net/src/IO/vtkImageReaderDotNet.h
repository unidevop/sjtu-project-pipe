#pragma once

// managed includes
#include "vtkImageReader2DotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageReader : public vtkImageReader2
{

public:
// Did not wrap:  static vtkImageReader *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageReader *NewInstance ();
  vtkImageReader^ NewInstance();


  // vtkImageReader *SafeDownCast (vtkObject* o);
  static vtkImageReader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetDataVOI (int , int , int , int , int , int );
/// <summary>
/// <para>Set/get the data VOI. You can limit the reader to only read a subset of the data. </para>
/// </summary>
  void SetDataVOI(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5);


  // void SetDataVOI (int  a[6]);
/// <summary>
/// <para>Set/get the data VOI. You can limit the reader to only read a subset of the data. </para>
/// </summary>
  void SetDataVOI(array<int>^ a);


  // int  *GetDataVOI ();
/// <summary>
/// <para>Set/get the data VOI. You can limit the reader to only read a subset of the data. </para>
/// </summary>
  array<int>^ GetDataVOI();


  // short unsigned GetDataMask ();
/// <summary>
/// <para>Set/Get the Data mask.</para>
/// </summary>
  unsigned short GetDataMask();


  // void SetDataMask (int val);if val this DataMask return this DataMask unsigned short val this Modified 
/// <summary>
/// <para>Set/Get transformation matrix to transform the data from slice space into world space. This matrix must be a permutation matrix. To qualify, the sums of the rows must be + or - 1.</para>
/// </summary>
  void SetDataMask(int val);


  // virtual void SetTransform (vtkTransform *);
/// <summary>
/// <para>Set/Get transformation matrix to transform the data from slice space into world space. This matrix must be a permutation matrix. To qualify, the sums of the rows must be + or - 1.</para>
/// </summary>
  void SetTransform(vtkTransform^ arg0);


  // vtkTransform *GetTransform ();
/// <summary>
/// <para>Set/Get transformation matrix to transform the data from slice space into world space. This matrix must be a permutation matrix. To qualify, the sums of the rows must be + or - 1.</para>
/// </summary>
  vtkTransform^ GetTransform();


  // void ComputeInverseTransformedExtent (int inExtent[6], int outExtent[6]);
  void ComputeInverseTransformedExtent(array<int>^ inExtent, array<int>^ outExtent);


  // void ComputeInverseTransformedIncrements (vtkIdType inIncr[3], vtkIdType outIncr[3]);
  void ComputeInverseTransformedIncrements(array<int>^ arg0, array<int>^ arg1);


  // int OpenAndSeekFile (int extent[6], int slice);
  int OpenAndSeekFile(array<int>^ extent, int slice);


  // void SetScalarArrayName (char *);
/// <summary>
/// <para>Set/get the scalar array name for this data set.</para>
/// </summary>
  void SetScalarArrayName(System::String^ arg0);


  // char *GetScalarArrayName ();
/// <summary>
/// <para>Set/get the scalar array name for this data set.</para>
/// </summary>
  System::String^ GetScalarArrayName();


// Did not wrap:  vtkImageReader ();


// Did not wrap:  ~vtkImageReader ();


// Did not wrap:  void ComputeTransformedSpacing (double Spacing[3]);


// Did not wrap:  void ComputeTransformedOrigin (double origin[3]);


// Did not wrap:  void ComputeTransformedExtent (int inExtent[6], int outExtent[6]);


// Did not wrap:  void ComputeTransformedIncrements (vtkIdType inIncr[3], vtkIdType outIncr[3]);


// Did not wrap:  virtual int RequestInformation (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  void ExecuteData (vtkDataObject *data);


// Did not wrap:  vtkImageReader (const vtkImageReader &);


// Did not wrap:  void vtkImageReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageReader();


};

} // end vtkIO
