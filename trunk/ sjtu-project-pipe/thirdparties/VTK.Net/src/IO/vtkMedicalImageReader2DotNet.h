#pragma once

// managed includes
#include "vtkImageReader2DotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkMedicalImageProperties;

public ref class vtkMedicalImageReader2 : public vtkImageReader2
{

public:
// Did not wrap:  static vtkMedicalImageReader2 *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkMedicalImageReader2 *NewInstance ();
  vtkMedicalImageReader2^ NewInstance();


  // vtkMedicalImageReader2 *SafeDownCast (vtkObject* o);
  static vtkMedicalImageReader2^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // vtkMedicalImageProperties *GetMedicalImageProperties ();
/// <summary>
/// <para>Get the medical image properties object</para>
/// </summary>
  vtkMedicalImageProperties^ GetMedicalImageProperties();


  // virtual void SetPatientName (const char *);
/// <summary>
/// <para>For backward compatibility, propagate calls to the MedicalImageProperties object.</para>
/// </summary>
  void SetPatientName(System::String^ arg0);


  // virtual const char *GetPatientName ();
/// <summary>
/// <para>For backward compatibility, propagate calls to the MedicalImageProperties object.</para>
/// </summary>
  System::String^ GetPatientName();


  // virtual void SetPatientID (const char *);
/// <summary>
/// <para>For backward compatibility, propagate calls to the MedicalImageProperties object.</para>
/// </summary>
  void SetPatientID(System::String^ arg0);


  // virtual const char *GetPatientID ();
/// <summary>
/// <para>For backward compatibility, propagate calls to the MedicalImageProperties object.</para>
/// </summary>
  System::String^ GetPatientID();


  // virtual void SetDate (const char *);
/// <summary>
/// <para>For backward compatibility, propagate calls to the MedicalImageProperties object.</para>
/// </summary>
  void SetDate(System::String^ arg0);


  // virtual const char *GetDate ();
/// <summary>
/// <para>For backward compatibility, propagate calls to the MedicalImageProperties object.</para>
/// </summary>
  System::String^ GetDate();


  // virtual void SetSeries (const char *);
/// <summary>
/// <para>For backward compatibility, propagate calls to the MedicalImageProperties object.</para>
/// </summary>
  void SetSeries(System::String^ arg0);


  // virtual const char *GetSeries ();
/// <summary>
/// <para>For backward compatibility, propagate calls to the MedicalImageProperties object.</para>
/// </summary>
  System::String^ GetSeries();


  // virtual void SetStudy (const char *);
/// <summary>
/// <para>For backward compatibility, propagate calls to the MedicalImageProperties object.</para>
/// </summary>
  void SetStudy(System::String^ arg0);


  // virtual const char *GetStudy ();
/// <summary>
/// <para>For backward compatibility, propagate calls to the MedicalImageProperties object.</para>
/// </summary>
  System::String^ GetStudy();


  // virtual void SetImageNumber (const char *);
/// <summary>
/// <para>For backward compatibility, propagate calls to the MedicalImageProperties object.</para>
/// </summary>
  void SetImageNumber(System::String^ arg0);


  // virtual const char *GetImageNumber ();
/// <summary>
/// <para>For backward compatibility, propagate calls to the MedicalImageProperties object.</para>
/// </summary>
  System::String^ GetImageNumber();


  // virtual void SetModality (const char *);
/// <summary>
/// <para>For backward compatibility, propagate calls to the MedicalImageProperties object.</para>
/// </summary>
  void SetModality(System::String^ arg0);


  // virtual const char *GetModality ();
/// <summary>
/// <para>For backward compatibility, propagate calls to the MedicalImageProperties object.</para>
/// </summary>
  System::String^ GetModality();


// Did not wrap:  vtkMedicalImageReader2 ();


// Did not wrap:  ~vtkMedicalImageReader2 ();


// Did not wrap:  vtkMedicalImageReader2 (const vtkMedicalImageReader2 &);


// Did not wrap:  void vtkMedicalImageReader2 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkMedicalImageReader2(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkMedicalImageReader2(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkMedicalImageReader2();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkMedicalImageReader2();


};

} // end vtkIO
