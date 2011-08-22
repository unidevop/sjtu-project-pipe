#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkXMLDataElement;

public ref class vtkXMLUtilities : public vtkObject
{

public:
// Did not wrap:  static vtkXMLUtilities *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkXMLUtilities *NewInstance ();
  vtkXMLUtilities^ NewInstance();


  // vtkXMLUtilities *SafeDownCast (vtkObject* o);
  static vtkXMLUtilities^ SafeDownCast(vtkObject^ o);


// Did not wrap:  static void EncodeString (const char *input, int input_encoding, ostream &output, int output_encoding, int special_entities);


// Did not wrap:  static void CollateAttributes (vtkXMLDataElement *, ostream &, const char *sep);


  // static void FactorElements (vtkXMLDataElement *tree);
/// <summary>
/// <para>Factor and unfactor a tree. This operation looks for duplicate elements in the tree, and replace them with references to a pool of elements. Unfactoring a non-factored element is harmless.</para>
/// </summary>
  static void FactorElements(vtkXMLDataElement^ tree);


  // static void UnFactorElements (vtkXMLDataElement *tree);
/// <summary>
/// <para>Factor and unfactor a tree. This operation looks for duplicate elements in the tree, and replace them with references to a pool of elements. Unfactoring a non-factored element is harmless.</para>
/// </summary>
  static void UnFactorElements(vtkXMLDataElement^ tree);


// Did not wrap:  vtkXMLUtilities ();


// Did not wrap:  ~vtkXMLUtilities ();


// Did not wrap:  static int FactorElementsInternal (vtkXMLDataElement *tree, vtkXMLDataElement *root, vtkXMLDataElement *pool);


// Did not wrap:  static int UnFactorElementsInternal (vtkXMLDataElement *tree, vtkXMLDataElement *pool);


// Did not wrap:  vtkXMLUtilities (const vtkXMLUtilities &);


// Did not wrap:  void vtkXMLUtilities 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkXMLUtilities(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkXMLUtilities(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkXMLUtilities();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkXMLUtilities();


};

} // end vtkIO
