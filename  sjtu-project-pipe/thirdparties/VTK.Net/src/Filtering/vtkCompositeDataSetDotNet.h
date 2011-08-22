#pragma once

// managed includes
#include "vtkDataObjectDotNet.h"
#include "vtkDataObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkAlgorithmOutput;
ref class vtkCompositeDataIterator;
ref class vtkInformation;
ref class vtkInformationDataObjectKey;
ref class vtkInformationIntegerKey;

public ref class vtkCompositeDataSet : public vtkDataObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkCompositeDataSet *NewInstance ();
  vtkCompositeDataSet^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual vtkCompositeDataIterator *NewIterator () = 0;
/// <summary>
/// <para>Return a new (forward) iterator  (the iterator has to be deleted by user)</para>
/// </summary>
  vtkCompositeDataIterator^ NewIterator();


  // virtual int GetDataObjectType ();return VTK_COMPOSITE_DATA_SET 
/// <summary>
/// <para>Restore data object to initial state,</para>
/// </summary>
  int GetDataObjectType();


  // virtual void Initialize ();
/// <summary>
/// <para>Restore data object to initial state,</para>
/// </summary>
  void Initialize();


  // virtual void AddDataSet (vtkInformation *index, vtkDataObject *dobj) = 0;
/// <summary>
/// <para>Adds dobj to the composite dataset. Where the dataset goes is determined by appropriate keys in the index information object. Which keys are used depends on the actual subclass.</para>
/// </summary>
  void AddDataSet(vtkInformation^ index, vtkDataObject^ dobj);


  // virtual vtkDataObject *GetDataSet (vtkInformation *index) = 0;
/// <summary>
/// <para>Returns a dataset pointed by appropriate keys in the index information object.  Which keys are used depends on the actual subclass.</para>
/// </summary>
  vtkDataObject^ GetDataSet(vtkInformation^ index);


  // virtual void SetPipelineInformation (vtkInformation *);
/// <summary>
/// <para>Set the pipeline information object that owns this data object.</para>
/// </summary>
  void SetPipelineInformation(vtkInformation^ arg0);


  // virtual vtkAlgorithmOutput *GetProducerPort ();
/// <summary>
/// <para>Get the port currently producing this object.</para>
/// </summary>
  vtkAlgorithmOutput^ GetProducerPort();


  // static vtkInformationIntegerKey *INDEX ();
  static vtkInformationIntegerKey^ INDEX();


  // static vtkInformationDataObjectKey *COMPOSITE_DATA_SET ();
  static vtkInformationDataObjectKey^ COMPOSITE_DATA_SET();


// Did not wrap:  vtkCompositeDataSet ();


// Did not wrap:  ~vtkCompositeDataSet ();


// Did not wrap:  vtkCompositeDataSet (const vtkCompositeDataSet &);


// Did not wrap:  void vtkCompositeDataSet 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkCompositeDataSet(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkCompositeDataSet(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkCompositeDataSet();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkCompositeDataSet();


};

} // end vtkFiltering
