#pragma once

// managed includes
#include "vtkNonLinearCellDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkDataSet;

public ref class vtkExplicitCell : public vtkNonLinearCell
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkExplicitCell *NewInstance ();
  vtkExplicitCell^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual int IsExplicitCell ();return 
/// <summary>
/// <para>Set/Get the cell id. This is necessary for explicit cells because they often need to keep extra information (typically contained in the cell data of a point set). This information might be things like knot points/weights, boundaries, etc.</para>
/// </summary>
  int IsExplicitCell();


  // void SetCellId (vtkIdType );
/// <summary>
/// <para>Set/Get the cell id. This is necessary for explicit cells because they often need to keep extra information (typically contained in the cell data of a point set). This information might be things like knot points/weights, boundaries, etc.</para>
/// </summary>
  void SetCellId(int arg0);


  // vtkIdType GetCellId ();
/// <summary>
/// <para>Set/Get the cell id. This is necessary for explicit cells because they often need to keep extra information (typically contained in the cell data of a point set). This information might be things like knot points/weights, boundaries, etc.</para>
/// </summary>
  int GetCellId();


  // virtual void SetDataSet (vtkDataSet *);
/// <summary>
/// <para>Set/Get the mesh that owns this cell. This is necessary for explicit cells because they often need to keep extra information (typically contained in the cell data of a point set). This information might be things like knot points/weights, boundaries, etc.</para>
/// </summary>
  void SetDataSet(vtkDataSet^ arg0);


  // vtkDataSet *GetDataSet ();
/// <summary>
/// <para>Set/Get the mesh that owns this cell. This is necessary for explicit cells because they often need to keep extra information (typically contained in the cell data of a point set). This information might be things like knot points/weights, boundaries, etc.</para>
/// </summary>
  vtkDataSet^ GetDataSet();


// Did not wrap:  vtkExplicitCell ();


// Did not wrap:  ~vtkExplicitCell ();


// Did not wrap:  vtkExplicitCell (const vtkExplicitCell &);


// Did not wrap:  void vtkExplicitCell 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkExplicitCell(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkExplicitCell(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkExplicitCell();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkExplicitCell();


};

} // end vtkFiltering
