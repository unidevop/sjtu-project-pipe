#pragma once

// managed includes
#include "vtkExodusReaderDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkDSPFilterDefinition;

public ref class vtkPExodusReader : public vtkExodusReader
{

public:
// Did not wrap:  static vtkPExodusReader *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPExodusReader *NewInstance ();
  vtkPExodusReader^ NewInstance();


  // vtkPExodusReader *SafeDownCast (vtkObject* o);
  static vtkPExodusReader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetFilePattern (char *);
/// <summary>
/// <para>These methods tell the reader that the data is ditributed across multiple files. This is for distributed execution. It this case, pieces are mapped to files. The pattern should have one %d to format the file number. FileNumberRange is used to generate file numbers. I was thinking of having an arbitrary list of file numbers. This may happen in the future. (That is why there is no GetFileNumberRange method.</para>
/// </summary>
  void SetFilePattern(System::String^ arg0);


  // char *GetFilePattern ();
/// <summary>
/// <para>These methods tell the reader that the data is ditributed across multiple files. This is for distributed execution. It this case, pieces are mapped to files. The pattern should have one %d to format the file number. FileNumberRange is used to generate file numbers. I was thinking of having an arbitrary list of file numbers. This may happen in the future. (That is why there is no GetFileNumberRange method.</para>
/// </summary>
  System::String^ GetFilePattern();


  // void SetFilePrefix (char *);
/// <summary>
/// <para>These methods tell the reader that the data is ditributed across multiple files. This is for distributed execution. It this case, pieces are mapped to files. The pattern should have one %d to format the file number. FileNumberRange is used to generate file numbers. I was thinking of having an arbitrary list of file numbers. This may happen in the future. (That is why there is no GetFileNumberRange method.</para>
/// </summary>
  void SetFilePrefix(System::String^ arg0);


  // char *GetFilePrefix ();
/// <summary>
/// <para>These methods tell the reader that the data is ditributed across multiple files. This is for distributed execution. It this case, pieces are mapped to files. The pattern should have one %d to format the file number. FileNumberRange is used to generate file numbers. I was thinking of having an arbitrary list of file numbers. This may happen in the future. (That is why there is no GetFileNumberRange method.</para>
/// </summary>
  System::String^ GetFilePrefix();


  // void SetFileRange (int , int );
/// <summary>
/// <para>Set the range of files that are being loaded. The range for single file should add to 0.</para>
/// </summary>
  void SetFileRange(int arg0, int arg1);


  // void SetFileRange (int *r);this SetFileRange r r 
/// <summary>
/// <para>Set the range of files that are being loaded. The range for single file should add to 0.</para>
/// </summary>
  void SetFileRange(array<int>^ r);


  // int  *GetFileRange ();
/// <summary>
/// <para>Set the range of files that are being loaded. The range for single file should add to 0.</para>
/// </summary>
  array<int>^ GetFileRange();


// Did not wrap:  void SetFileNames (int nfiles, const char *names);


  // virtual void SetFileName (const char *name);
  void SetFileName(System::String^ name);


// Did not wrap:  char *GetFileNames ();return this FileNames 


  // int GetNumberOfFileNames ();return this NumberOfFileNames 
/// <summary>
/// <para>Return the number of files to be read.</para>
/// </summary>
  int GetNumberOfFileNames();


  // int GetNumberOfFiles ();
/// <summary>
/// <para>Return the number of files to be read.</para>
/// </summary>
  int GetNumberOfFiles();


  // void SetGenerateFileIdArray (int flag);
  void SetGenerateFileIdArray(int flag);


  // int GetGenerateFileIdArray ();
  int GetGenerateFileIdArray();


  // void GenerateFileIdArrayOn ();
  void GenerateFileIdArrayOn();


  // void GenerateFileIdArrayOff ();
  void GenerateFileIdArrayOff();


  // int GetNumberOfVariableArrays ();
  int GetNumberOfVariableArrays();


  // const char *GetVariableArrayName (int a_which);
  System::String^ GetVariableArrayName(int a_which);


  // void EnableDSPFiltering ();
  void EnableDSPFiltering();


  // void AddFilter (vtkDSPFilterDefinition *a_filter);
  void AddFilter(vtkDSPFilterDefinition^ a_filter);


  // void StartAddingFilter ();
  void StartAddingFilter();


  // void AddFilterInputVar (char *name);
  void AddFilterInputVar(System::String^ name);


  // void AddFilterOutputVar (char *name);
  void AddFilterOutputVar(System::String^ name);


  // void AddFilterNumeratorWeight (double weight);
  void AddFilterNumeratorWeight(double weight);


  // void AddFilterForwardNumeratorWeight (double weight);
  void AddFilterForwardNumeratorWeight(double weight);


  // void AddFilterDenominatorWeight (double weight);
  void AddFilterDenominatorWeight(double weight);


  // void FinishAddingFilter ();
  void FinishAddingFilter();


  // void RemoveFilter (char *a_outputVariableName);
  void RemoveFilter(System::String^ a_outputVariableName);


// Did not wrap:  vtkPExodusReader ();


// Did not wrap:  ~vtkPExodusReader ();


// Did not wrap:  void GetDSPOutputArrays (int exoid, vtkUnstructuredGrid *output);


// Did not wrap:  int DeterminePattern (const char *file);


// Did not wrap:  static int DetermineFileId (const char *file);


// Did not wrap:  void SetUpEmptyGrid ();


// Did not wrap:  int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkPExodusReader (const vtkPExodusReader &);


// Did not wrap:  void vtkPExodusReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPExodusReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPExodusReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPExodusReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPExodusReader();


};

} // end vtkHybrid
