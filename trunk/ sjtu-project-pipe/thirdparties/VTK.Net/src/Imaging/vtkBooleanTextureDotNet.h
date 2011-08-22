#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkBooleanTexture : public vtkImageAlgorithm
{

public:
// Did not wrap:  static vtkBooleanTexture *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkBooleanTexture *NewInstance ();
  vtkBooleanTexture^ NewInstance();


  // vtkBooleanTexture *SafeDownCast (vtkObject* o);
  static vtkBooleanTexture^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetXSize (int );
/// <summary>
/// <para>Set the X texture map dimension.</para>
/// </summary>
  void SetXSize(int arg0);


  // int GetXSize ();
/// <summary>
/// <para>Set the X texture map dimension.</para>
/// </summary>
  int GetXSize();


  // void SetYSize (int );
/// <summary>
/// <para>Set the Y texture map dimension.</para>
/// </summary>
  void SetYSize(int arg0);


  // int GetYSize ();
/// <summary>
/// <para>Set the Y texture map dimension.</para>
/// </summary>
  int GetYSize();


  // void SetThickness (int );
/// <summary>
/// <para>Set the thickness of the &quot;on&quot; region.</para>
/// </summary>
  void SetThickness(int arg0);


  // int GetThickness ();
/// <summary>
/// <para>Set the thickness of the &quot;on&quot; region.</para>
/// </summary>
  int GetThickness();


  // void SetInIn (unsigned char , unsigned char );
/// <summary>
/// <para>Specify intensity/transparency for &quot;in/in&quot; region.</para>
/// </summary>
  void SetInIn(unsigned char arg0, unsigned char arg1);


  // void SetInIn (unsigned char  a[2]);
/// <summary>
/// <para>Specify intensity/transparency for &quot;in/in&quot; region.</para>
/// </summary>
  void SetInIn(array<unsigned char>^ a);


  // unsigned char  *GetInIn ();
/// <summary>
/// <para>Specify intensity/transparency for &quot;in/in&quot; region.</para>
/// </summary>
  array<unsigned char>^ GetInIn();


  // void SetInOut (unsigned char , unsigned char );
/// <summary>
/// <para>Specify intensity/transparency for &quot;in/out&quot; region.</para>
/// </summary>
  void SetInOut(unsigned char arg0, unsigned char arg1);


  // void SetInOut (unsigned char  a[2]);
/// <summary>
/// <para>Specify intensity/transparency for &quot;in/out&quot; region.</para>
/// </summary>
  void SetInOut(array<unsigned char>^ a);


  // unsigned char  *GetInOut ();
/// <summary>
/// <para>Specify intensity/transparency for &quot;in/out&quot; region.</para>
/// </summary>
  array<unsigned char>^ GetInOut();


  // void SetOutIn (unsigned char , unsigned char );
/// <summary>
/// <para>Specify intensity/transparency for &quot;out/in&quot; region.</para>
/// </summary>
  void SetOutIn(unsigned char arg0, unsigned char arg1);


  // void SetOutIn (unsigned char  a[2]);
/// <summary>
/// <para>Specify intensity/transparency for &quot;out/in&quot; region.</para>
/// </summary>
  void SetOutIn(array<unsigned char>^ a);


  // unsigned char  *GetOutIn ();
/// <summary>
/// <para>Specify intensity/transparency for &quot;out/in&quot; region.</para>
/// </summary>
  array<unsigned char>^ GetOutIn();


  // void SetOutOut (unsigned char , unsigned char );
/// <summary>
/// <para>Specify intensity/transparency for &quot;out/out&quot; region.</para>
/// </summary>
  void SetOutOut(unsigned char arg0, unsigned char arg1);


  // void SetOutOut (unsigned char  a[2]);
/// <summary>
/// <para>Specify intensity/transparency for &quot;out/out&quot; region.</para>
/// </summary>
  void SetOutOut(array<unsigned char>^ a);


  // unsigned char  *GetOutOut ();
/// <summary>
/// <para>Specify intensity/transparency for &quot;out/out&quot; region.</para>
/// </summary>
  array<unsigned char>^ GetOutOut();


  // void SetOnOn (unsigned char , unsigned char );
/// <summary>
/// <para>Specify intensity/transparency for &quot;on/on&quot; region.</para>
/// </summary>
  void SetOnOn(unsigned char arg0, unsigned char arg1);


  // void SetOnOn (unsigned char  a[2]);
/// <summary>
/// <para>Specify intensity/transparency for &quot;on/on&quot; region.</para>
/// </summary>
  void SetOnOn(array<unsigned char>^ a);


  // unsigned char  *GetOnOn ();
/// <summary>
/// <para>Specify intensity/transparency for &quot;on/on&quot; region.</para>
/// </summary>
  array<unsigned char>^ GetOnOn();


  // void SetOnIn (unsigned char , unsigned char );
/// <summary>
/// <para>Specify intensity/transparency for &quot;on/in&quot; region.</para>
/// </summary>
  void SetOnIn(unsigned char arg0, unsigned char arg1);


  // void SetOnIn (unsigned char  a[2]);
/// <summary>
/// <para>Specify intensity/transparency for &quot;on/in&quot; region.</para>
/// </summary>
  void SetOnIn(array<unsigned char>^ a);


  // unsigned char  *GetOnIn ();
/// <summary>
/// <para>Specify intensity/transparency for &quot;on/in&quot; region.</para>
/// </summary>
  array<unsigned char>^ GetOnIn();


  // void SetOnOut (unsigned char , unsigned char );
/// <summary>
/// <para>Specify intensity/transparency for &quot;on/out&quot; region.</para>
/// </summary>
  void SetOnOut(unsigned char arg0, unsigned char arg1);


  // void SetOnOut (unsigned char  a[2]);
/// <summary>
/// <para>Specify intensity/transparency for &quot;on/out&quot; region.</para>
/// </summary>
  void SetOnOut(array<unsigned char>^ a);


  // unsigned char  *GetOnOut ();
/// <summary>
/// <para>Specify intensity/transparency for &quot;on/out&quot; region.</para>
/// </summary>
  array<unsigned char>^ GetOnOut();


  // void SetInOn (unsigned char , unsigned char );
/// <summary>
/// <para>Specify intensity/transparency for &quot;in/on&quot; region.</para>
/// </summary>
  void SetInOn(unsigned char arg0, unsigned char arg1);


  // void SetInOn (unsigned char  a[2]);
/// <summary>
/// <para>Specify intensity/transparency for &quot;in/on&quot; region.</para>
/// </summary>
  void SetInOn(array<unsigned char>^ a);


  // unsigned char  *GetInOn ();
/// <summary>
/// <para>Specify intensity/transparency for &quot;in/on&quot; region.</para>
/// </summary>
  array<unsigned char>^ GetInOn();


  // void SetOutOn (unsigned char , unsigned char );
/// <summary>
/// <para>Specify intensity/transparency for &quot;out/on&quot; region.</para>
/// </summary>
  void SetOutOn(unsigned char arg0, unsigned char arg1);


  // void SetOutOn (unsigned char  a[2]);
/// <summary>
/// <para>Specify intensity/transparency for &quot;out/on&quot; region.</para>
/// </summary>
  void SetOutOn(array<unsigned char>^ a);


  // unsigned char  *GetOutOn ();
/// <summary>
/// <para>Specify intensity/transparency for &quot;out/on&quot; region.</para>
/// </summary>
  array<unsigned char>^ GetOutOn();


// Did not wrap:  vtkBooleanTexture ();


// Did not wrap:  ~vtkBooleanTexture ();


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual void ExecuteData (vtkDataObject *data);


// Did not wrap:  vtkBooleanTexture (const vtkBooleanTexture &);


// Did not wrap:  void vtkBooleanTexture 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkBooleanTexture(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkBooleanTexture(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkBooleanTexture();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkBooleanTexture();


};

} // end vtkImaging
