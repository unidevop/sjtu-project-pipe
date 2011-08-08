#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageMaskBits : public vtkThreadedImageAlgorithm
{

public:
// Did not wrap:  static vtkImageMaskBits *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageMaskBits *NewInstance ();
  vtkImageMaskBits^ NewInstance();


  // vtkImageMaskBits *SafeDownCast (vtkObject* o);
  static vtkImageMaskBits^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetMasks (unsigned int , unsigned int , unsigned int , unsigned int );
/// <summary>
/// <para>Set/Get the bit-masks. Default is 0xffffffff.</para>
/// </summary>
  void SetMasks(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3);


  // void SetMasks (unsigned int  a[4]);
/// <summary>
/// <para>Set/Get the bit-masks. Default is 0xffffffff.</para>
/// </summary>
  void SetMasks(array<unsigned int>^ arg0);


  // void SetMask (unsigned int mask);this SetMasks mask mask mask mask 
/// <summary>
/// <para>Set/Get the bit-masks. Default is 0xffffffff.</para>
/// </summary>
  void SetMask(unsigned int mask);


  // void SetMasks (unsigned int mask1, unsigned int mask2);this SetMasks mask1 mask2 xffffffff xffffffff 
/// <summary>
/// <para>Set/Get the bit-masks. Default is 0xffffffff.</para>
/// </summary>
  void SetMasks(unsigned int mask1, unsigned int mask2);


  // void SetMasks (unsigned int mask1, unsigned int mask2, unsigned int mask3);this SetMasks mask1 mask2 mask3 xffffffff 
/// <summary>
/// <para>Set/Get the bit-masks. Default is 0xffffffff.</para>
/// </summary>
  void SetMasks(unsigned int mask1, unsigned int mask2, unsigned int mask3);


  // unsigned int  *GetMasks ();
/// <summary>
/// <para>Set/Get the bit-masks. Default is 0xffffffff.</para>
/// </summary>
  array<unsigned int>^ GetMasks();


  // void SetOperation (int );
/// <summary>
/// <para>Set/Get the boolean operator. Default is AND.</para>
/// </summary>
  void SetOperation(int arg0);


  // int GetOperation ();
/// <summary>
/// <para>Set/Get the boolean operator. Default is AND.</para>
/// </summary>
  int GetOperation();


  // void SetOperationToAnd ();this SetOperation VTK_AND 
/// <summary>
/// <para>Set/Get the boolean operator. Default is AND.</para>
/// </summary>
  void SetOperationToAnd();


  // void SetOperationToOr ();this SetOperation VTK_OR 
/// <summary>
/// <para>Set/Get the boolean operator. Default is AND.</para>
/// </summary>
  void SetOperationToOr();


  // void SetOperationToXor ();this SetOperation VTK_XOR 
/// <summary>
/// <para>Set/Get the boolean operator. Default is AND.</para>
/// </summary>
  void SetOperationToXor();


  // void SetOperationToNand ();this SetOperation VTK_NAND 
/// <summary>
/// <para>Set/Get the boolean operator. Default is AND.</para>
/// </summary>
  void SetOperationToNand();


  // void SetOperationToNor ();this SetOperation VTK_NOR 
/// <summary>
/// <para>Set/Get the boolean operator. Default is AND.</para>
/// </summary>
  void SetOperationToNor();


// Did not wrap:  vtkImageMaskBits ();


// Did not wrap:  ~vtkImageMaskBits ();


// Did not wrap:  void ThreadedExecute (vtkImageData *inData, vtkImageData *outData, int ext[6], int id);


// Did not wrap:  vtkImageMaskBits (const vtkImageMaskBits &);


// Did not wrap:  void vtkImageMaskBits 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageMaskBits(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageMaskBits(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageMaskBits();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageMaskBits();


};

} // end vtkImaging
