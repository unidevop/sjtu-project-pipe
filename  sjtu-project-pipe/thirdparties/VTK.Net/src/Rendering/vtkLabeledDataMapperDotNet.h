#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkTextProperty;

public ref class vtkLabeledDataMapper : public vtkMapper2D
{

public:
// Did not wrap:  static vtkLabeledDataMapper *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkLabeledDataMapper *NewInstance ();
  vtkLabeledDataMapper^ NewInstance();


  // vtkLabeledDataMapper *SafeDownCast (vtkObject* o);
  static vtkLabeledDataMapper^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetLabelFormat (char *);
/// <summary>
/// <para>Set/Get the format with which to print the labels. The format needs to change depending on what you're trying to print. For example, if you're printing a vector, 3 values are printed, whereas when printing an id only one value is printed. See also the ivar LabeledComponent which can be used to specify the component to print if you want to only print one of several.</para>
/// </summary>
  void SetLabelFormat(System::String^ arg0);


  // char *GetLabelFormat ();
/// <summary>
/// <para>Set/Get the format with which to print the labels. The format needs to change depending on what you're trying to print. For example, if you're printing a vector, 3 values are printed, whereas when printing an id only one value is printed. See also the ivar LabeledComponent which can be used to specify the component to print if you want to only print one of several.</para>
/// </summary>
  System::String^ GetLabelFormat();


  // void SetLabeledComponent (int );
/// <summary>
/// <para>Set/Get the component number to label if the data to print has more than one component. For example, all the components of scalars, vectors, normals, etc. are labeled by default (LabeledComponent=(-1)). However, if this ivar is nonnegative, then only the one component specified is labeled.</para>
/// </summary>
  void SetLabeledComponent(int arg0);


  // int GetLabeledComponent ();
/// <summary>
/// <para>Set/Get the component number to label if the data to print has more than one component. For example, all the components of scalars, vectors, normals, etc. are labeled by default (LabeledComponent=(-1)). However, if this ivar is nonnegative, then only the one component specified is labeled.</para>
/// </summary>
  int GetLabeledComponent();


  // void SetFieldDataArray (int );
/// <summary>
/// <para>Set/Get the field data array to label. This instance variable is only applicable if field data is labeled.</para>
/// </summary>
  void SetFieldDataArray(int arg0);


  // int GetFieldDataArrayMinValue ();
/// <summary>
/// <para>Set/Get the field data array to label. This instance variable is only applicable if field data is labeled.</para>
/// </summary>
  int GetFieldDataArrayMinValue();


  // int GetFieldDataArrayMaxValue ();
/// <summary>
/// <para>Set/Get the field data array to label. This instance variable is only applicable if field data is labeled.</para>
/// </summary>
  int GetFieldDataArrayMaxValue();


  // int GetFieldDataArray ();
/// <summary>
/// <para>Set/Get the field data array to label. This instance variable is only applicable if field data is labeled.</para>
/// </summary>
  int GetFieldDataArray();


  // virtual void SetInput (vtkDataSet *);
/// <summary>
/// <para>Set the input dataset to the mapper. This mapper handles any type of data.</para>
/// </summary>
  void SetInput(vtkDataSet^ arg0);


  // vtkDataSet *GetInput ();
/// <summary>
/// <para>Set the input dataset to the mapper. This mapper handles any type of data.</para>
/// </summary>
  vtkDataSet^ GetInput();


  // void SetLabelMode (int );
/// <summary>
/// <para>Specify which data to plot: scalars, vectors, normals, texture coords, tensors, or field data. If the data has more than one component, use the method SetLabeledComponent to control which components to plot.</para>
/// </summary>
  void SetLabelMode(int arg0);


  // int GetLabelMode ();
/// <summary>
/// <para>Specify which data to plot: scalars, vectors, normals, texture coords, tensors, or field data. If the data has more than one component, use the method SetLabeledComponent to control which components to plot.</para>
/// </summary>
  int GetLabelMode();


  // void SetLabelModeToLabelIds ();this SetLabelMode VTK_LABEL_IDS 
/// <summary>
/// <para>Specify which data to plot: scalars, vectors, normals, texture coords, tensors, or field data. If the data has more than one component, use the method SetLabeledComponent to control which components to plot.</para>
/// </summary>
  void SetLabelModeToLabelIds();


  // void SetLabelModeToLabelScalars ();this SetLabelMode VTK_LABEL_SCALARS 
/// <summary>
/// <para>Specify which data to plot: scalars, vectors, normals, texture coords, tensors, or field data. If the data has more than one component, use the method SetLabeledComponent to control which components to plot.</para>
/// </summary>
  void SetLabelModeToLabelScalars();


  // void SetLabelModeToLabelVectors ();this SetLabelMode VTK_LABEL_VECTORS 
/// <summary>
/// <para>Specify which data to plot: scalars, vectors, normals, texture coords, tensors, or field data. If the data has more than one component, use the method SetLabeledComponent to control which components to plot.</para>
/// </summary>
  void SetLabelModeToLabelVectors();


  // void SetLabelModeToLabelNormals ();this SetLabelMode VTK_LABEL_NORMALS 
/// <summary>
/// <para>Specify which data to plot: scalars, vectors, normals, texture coords, tensors, or field data. If the data has more than one component, use the method SetLabeledComponent to control which components to plot.</para>
/// </summary>
  void SetLabelModeToLabelNormals();


  // void SetLabelModeToLabelTCoords ();this SetLabelMode VTK_LABEL_TCOORDS 
/// <summary>
/// <para>Specify which data to plot: scalars, vectors, normals, texture coords, tensors, or field data. If the data has more than one component, use the method SetLabeledComponent to control which components to plot.</para>
/// </summary>
  void SetLabelModeToLabelTCoords();


  // void SetLabelModeToLabelTensors ();this SetLabelMode VTK_LABEL_TENSORS 
/// <summary>
/// <para>Specify which data to plot: scalars, vectors, normals, texture coords, tensors, or field data. If the data has more than one component, use the method SetLabeledComponent to control which components to plot.</para>
/// </summary>
  void SetLabelModeToLabelTensors();


  // void SetLabelModeToLabelFieldData ();this SetLabelMode VTK_LABEL_FIELD_DATA 
/// <summary>
/// <para>Specify which data to plot: scalars, vectors, normals, texture coords, tensors, or field data. If the data has more than one component, use the method SetLabeledComponent to control which components to plot.</para>
/// </summary>
  void SetLabelModeToLabelFieldData();


  // virtual void SetLabelTextProperty (vtkTextProperty *p);
/// <summary>
/// <para>Set/Get the text property.</para>
/// </summary>
  void SetLabelTextProperty(vtkTextProperty^ p);


  // vtkTextProperty *GetLabelTextProperty ();
/// <summary>
/// <para>Set/Get the text property.</para>
/// </summary>
  vtkTextProperty^ GetLabelTextProperty();


  // void RenderOpaqueGeometry (vtkViewport *viewport, vtkActor2D *actor);
/// <summary>
/// <para>Draw the text to the screen at each input point.</para>
/// </summary>
  void RenderOpaqueGeometry(vtkViewport^ viewport, vtkActor2D^ actor);


  // void RenderOverlay (vtkViewport *viewport, vtkActor2D *actor);
/// <summary>
/// <para>Draw the text to the screen at each input point.</para>
/// </summary>
  void RenderOverlay(vtkViewport^ viewport, vtkActor2D^ actor);


  // virtual void ReleaseGraphicsResources (vtkWindow *);
/// <summary>
/// <para>Release any graphics resources that are being consumed by this actor.</para>
/// </summary>
  void ReleaseGraphicsResources(vtkWindow^ arg0);


// Did not wrap:  vtkLabeledDataMapper ();


// Did not wrap:  ~vtkLabeledDataMapper ();


// Did not wrap:  virtual int FillInputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkLabeledDataMapper (const vtkLabeledDataMapper &);


// Did not wrap:  void vtkLabeledDataMapper 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkLabeledDataMapper(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkLabeledDataMapper(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkLabeledDataMapper();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkLabeledDataMapper();


};

} // end vtkRendering
