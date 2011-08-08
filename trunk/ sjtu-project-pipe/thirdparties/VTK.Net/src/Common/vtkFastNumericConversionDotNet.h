#pragma once

// managed includes
#include "vtkObjectDotNet.h"
#include "vtkObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkFastNumericConversion : public vtkObject
{

public:
// Did not wrap:  static vtkFastNumericConversion *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkFastNumericConversion *NewInstance ();
  vtkFastNumericConversion^ NewInstance();


  // vtkFastNumericConversion *SafeDownCast (vtkObject* o);
  static vtkFastNumericConversion^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // int TestQuickFloor (double val);
/// <summary>
/// <para>Wrappable method for script-testing of correct cross-platform functionality</para>
/// </summary>
  int TestQuickFloor(double val);


  // int TestSafeFloor (double val);
/// <summary>
/// <para>Wrappable method for script-testing of correct cross-platform functionality</para>
/// </summary>
  int TestSafeFloor(double val);


  // int TestRound (double val);
/// <summary>
/// <para>Wrappable method for script-testing of correct cross-platform functionality</para>
/// </summary>
  int TestRound(double val);


  // int TestConvertFixedPointIntPart (double val);
/// <summary>
/// <para>Wrappable method for script-testing of correct cross-platform functionality</para>
/// </summary>
  int TestConvertFixedPointIntPart(double val);


  // int TestConvertFixedPointFracPart (double val);
/// <summary>
/// <para>Wrappable method for script-testing of correct cross-platform functionality</para>
/// </summary>
  int TestConvertFixedPointFracPart(double val);


  // void SetReservedFracBits (int bits);bits unsigned long mtime this GetMTime this SetinternalReservedFracBits bits if mtime this GetMTime this InternalRebuild 
/// <summary>
/// <para>Set the number of bits reserved for fractional precision that are maintained as part of the flooring process. This number affects the flooring arithmetic. It may be useful if the factional part is to be used to index into a lookup table of some sort. However, if you are only interested in knowing the fractional remainder after flooring, there doesn't appear to be any advantage to using these bits, either in terms of a lookup table, or by directly multiplying by some unit fraction, over simply subtracting the floored value from the original value. Note that since only 32 bits are used for the entire fixed point representation, increasing the number of reserved fractional bits reduces the range of integer values that can be floored to. Add one to the requested number of fractional bits, to make the conversion safe with respect to rounding mode. This is the same as the difference between QuickFloor and SafeFloor.</para>
/// </summary>
  void SetReservedFracBits(int bits);


  // void PerformanceTests (void );
/// <summary>
/// <para>Conduct timing tests so that the usefulness of this class can be ascertained on whatever platform it is being used. Output can be retrieved via Print method.</para>
/// </summary>
  void PerformanceTests();


// Did not wrap:  vtkFastNumericConversion (const vtkFastNumericConversion &);


// Did not wrap:  void vtkFastNumericConversion 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkFastNumericConversion(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkFastNumericConversion(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkFastNumericConversion();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkFastNumericConversion();


};

} // end vtkCommon
