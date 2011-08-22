#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageConnector : public vtkObject
{

public:
// Did not wrap:  static vtkImageConnector *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageConnector *NewInstance ();
  vtkImageConnector^ NewInstance();


  // vtkImageConnector *SafeDownCast (vtkObject* o);
  static vtkImageConnector^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void RemoveAllSeeds ();
  void RemoveAllSeeds();


  // void SetConnectedValue (unsigned char );
/// <summary>
/// <para>Values used by the MarkRegion method</para>
/// </summary>
  void SetConnectedValue(unsigned char arg0);


  // char unsigned GetConnectedValue ();
/// <summary>
/// <para>Values used by the MarkRegion method</para>
/// </summary>
  unsigned char GetConnectedValue();


  // void SetUnconnectedValue (unsigned char );
/// <summary>
/// <para>Values used by the MarkRegion method</para>
/// </summary>
  void SetUnconnectedValue(unsigned char arg0);


  // char unsigned GetUnconnectedValue ();
/// <summary>
/// <para>Values used by the MarkRegion method</para>
/// </summary>
  unsigned char GetUnconnectedValue();


  // void MarkData (vtkImageData *data, int dimensionality, int ext[6]);
/// <summary>
/// <para>Input a data of 0's and &quot;UnconnectedValue&quot;s. Seeds of this object are used to find connected pixels.  All pixels connected to seeds are set to ConnectedValue.  The data has to be unsigned char.</para>
/// </summary>
  void MarkData(vtkImageData^ data, int dimensionality, array<int>^ ext);


// Did not wrap:  vtkImageConnector ();


// Did not wrap:  ~vtkImageConnector ();


// Did not wrap:  vtkImageConnectorSeed *PopSeed ();


// Did not wrap:  vtkImageConnector (const vtkImageConnector &);


// Did not wrap:  void vtkImageConnector 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageConnector(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageConnector(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageConnector();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageConnector();


};

} // end vtkImaging
