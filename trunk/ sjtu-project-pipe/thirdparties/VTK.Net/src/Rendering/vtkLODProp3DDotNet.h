#pragma once

// managed includes
#include "vtkProp3DDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkAbstractMapper3D;
ref class vtkAbstractVolumeMapper;
ref class vtkMapper;
ref class vtkProperty;
ref class vtkTexture;
ref class vtkVolumeProperty;

public ref class vtkLODProp3D : public vtkProp3D
{

public:
// Did not wrap:  typedef struct vtkProp3D Prop3D int Prop3DType int ID double EstimatedTime int State double Level vtkLODProp3DEntry static vtkLODProp3D *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkLODProp3D *NewInstance ();
  vtkLODProp3D^ NewInstance();


  // vtkLODProp3D *SafeDownCast (vtkObject* o);
  static vtkLODProp3D^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // double *GetBounds ();
/// <summary>
/// <para>Standard vtkProp method to get 3D bounds of a 3D prop</para>
/// </summary>
  array<double>^ GetBounds();


  // void GetBounds (double bounds[6]);this vtkProp3D GetBounds bounds 
/// <summary>
/// <para>Standard vtkProp method to get 3D bounds of a 3D prop</para>
/// </summary>
  void GetBounds(array<double>^ bounds);


  // int AddLOD (vtkMapper *m, vtkProperty *p, vtkProperty *back, vtkTexture *t, double time);
/// <summary>
/// <para>Add a level of detail with a given mapper, property, backface property, texture, and guess of rendering time.  The property and texture fields can be set to NULL (the other methods are included for script access where null variables are not allowed). The time field can be set to 0.0 indicating that no initial guess for rendering time is being supplied. The returned integer value is an ID that can be used later to delete this LOD, or set it as the selected LOD.</para>
/// </summary>
  int AddLOD(vtkMapper^ m, vtkProperty^ p, vtkProperty^ back, vtkTexture^ t, double time);


  // int AddLOD (vtkMapper *m, vtkProperty *p, vtkTexture *t, double time);
/// <summary>
/// <para>Add a level of detail with a given mapper, property, backface property, texture, and guess of rendering time.  The property and texture fields can be set to NULL (the other methods are included for script access where null variables are not allowed). The time field can be set to 0.0 indicating that no initial guess for rendering time is being supplied. The returned integer value is an ID that can be used later to delete this LOD, or set it as the selected LOD.</para>
/// </summary>
  int AddLOD(vtkMapper^ m, vtkProperty^ p, vtkTexture^ t, double time);


  // int AddLOD (vtkMapper *m, vtkProperty *p, vtkProperty *back, double time);
/// <summary>
/// <para>Add a level of detail with a given mapper, property, backface property, texture, and guess of rendering time.  The property and texture fields can be set to NULL (the other methods are included for script access where null variables are not allowed). The time field can be set to 0.0 indicating that no initial guess for rendering time is being supplied. The returned integer value is an ID that can be used later to delete this LOD, or set it as the selected LOD.</para>
/// </summary>
  int AddLOD(vtkMapper^ m, vtkProperty^ p, vtkProperty^ back, double time);


  // int AddLOD (vtkMapper *m, vtkProperty *p, double time);
/// <summary>
/// <para>Add a level of detail with a given mapper, property, backface property, texture, and guess of rendering time.  The property and texture fields can be set to NULL (the other methods are included for script access where null variables are not allowed). The time field can be set to 0.0 indicating that no initial guess for rendering time is being supplied. The returned integer value is an ID that can be used later to delete this LOD, or set it as the selected LOD.</para>
/// </summary>
  int AddLOD(vtkMapper^ m, vtkProperty^ p, double time);


  // int AddLOD (vtkMapper *m, vtkTexture *t, double time);
/// <summary>
/// <para>Add a level of detail with a given mapper, property, backface property, texture, and guess of rendering time.  The property and texture fields can be set to NULL (the other methods are included for script access where null variables are not allowed). The time field can be set to 0.0 indicating that no initial guess for rendering time is being supplied. The returned integer value is an ID that can be used later to delete this LOD, or set it as the selected LOD.</para>
/// </summary>
  int AddLOD(vtkMapper^ m, vtkTexture^ t, double time);


  // int AddLOD (vtkMapper *m, double time);
/// <summary>
/// <para>Add a level of detail with a given mapper, property, backface property, texture, and guess of rendering time.  The property and texture fields can be set to NULL (the other methods are included for script access where null variables are not allowed). The time field can be set to 0.0 indicating that no initial guess for rendering time is being supplied. The returned integer value is an ID that can be used later to delete this LOD, or set it as the selected LOD.</para>
/// </summary>
  int AddLOD(vtkMapper^ m, double time);


  // int AddLOD (vtkAbstractVolumeMapper *m, vtkVolumeProperty *p, double time);
/// <summary>
/// <para>Add a level of detail with a given mapper, property, backface property, texture, and guess of rendering time.  The property and texture fields can be set to NULL (the other methods are included for script access where null variables are not allowed). The time field can be set to 0.0 indicating that no initial guess for rendering time is being supplied. The returned integer value is an ID that can be used later to delete this LOD, or set it as the selected LOD.</para>
/// </summary>
  int AddLOD(vtkAbstractVolumeMapper^ m, vtkVolumeProperty^ p, double time);


  // int AddLOD (vtkAbstractVolumeMapper *m, double time);
/// <summary>
/// <para>Add a level of detail with a given mapper, property, backface property, texture, and guess of rendering time.  The property and texture fields can be set to NULL (the other methods are included for script access where null variables are not allowed). The time field can be set to 0.0 indicating that no initial guess for rendering time is being supplied. The returned integer value is an ID that can be used later to delete this LOD, or set it as the selected LOD.</para>
/// </summary>
  int AddLOD(vtkAbstractVolumeMapper^ m, double time);


  // int GetNumberOfLODs ();
/// <summary>
/// <para>Get the current number of LODs.</para>
/// </summary>
  int GetNumberOfLODs();


  // int GetCurrentIndex ();
/// <summary>
/// <para>Get the current index, used to determine the ID of the next LOD that is added.  Useful for guessing what IDs have been used (with NumberOfLODs, without depending on the constructor initialization to 1000.</para>
/// </summary>
  int GetCurrentIndex();


  // void RemoveLOD (int id);
/// <summary>
/// <para>Delete a level of detail given an ID. This is the ID returned by the AddLOD method</para>
/// </summary>
  void RemoveLOD(int id);


  // void SetLODProperty (int id, vtkProperty *p);
/// <summary>
/// <para>Methods to set / get the property of an LOD. Since the LOD could be a volume or an actor, you have to pass in the pointer to the property to get it. The returned property will be NULL if the id is not valid, or the property is of the wrong type for the corresponding Prop3D.</para>
/// </summary>
  void SetLODProperty(int id, vtkProperty^ p);


// Did not wrap:  void GetLODProperty (int id, vtkProperty *p);


  // void SetLODProperty (int id, vtkVolumeProperty *p);
/// <summary>
/// <para>Methods to set / get the property of an LOD. Since the LOD could be a volume or an actor, you have to pass in the pointer to the property to get it. The returned property will be NULL if the id is not valid, or the property is of the wrong type for the corresponding Prop3D.</para>
/// </summary>
  void SetLODProperty(int id, vtkVolumeProperty^ p);


// Did not wrap:  void GetLODProperty (int id, vtkVolumeProperty *p);


  // void SetLODMapper (int id, vtkMapper *m);
/// <summary>
/// <para>Methods to set / get the mapper of an LOD. Since the LOD could be a volume or an actor, you have to pass in the pointer to the mapper to get it. The returned mapper will be NULL if the id is not valid, or the mapper is of the wrong type for the corresponding Prop3D.</para>
/// </summary>
  void SetLODMapper(int id, vtkMapper^ m);


// Did not wrap:  void GetLODMapper (int id, vtkMapper *m);


  // void SetLODMapper (int id, vtkAbstractVolumeMapper *m);
/// <summary>
/// <para>Methods to set / get the mapper of an LOD. Since the LOD could be a volume or an actor, you have to pass in the pointer to the mapper to get it. The returned mapper will be NULL if the id is not valid, or the mapper is of the wrong type for the corresponding Prop3D.</para>
/// </summary>
  void SetLODMapper(int id, vtkAbstractVolumeMapper^ m);


// Did not wrap:  void GetLODMapper (int id, vtkAbstractVolumeMapper *m);


  // vtkAbstractMapper3D *GetLODMapper (int id);
/// <summary>
/// <para>Get the LODMapper as an vtkAbstractMapper3D.  It is the user's respondibility to safe down cast this to a vtkMapper or vtkVolumeMapper as appropriate.</para>
/// </summary>
  vtkAbstractMapper3D^ GetLODMapper(int id);


  // void SetLODBackfaceProperty (int id, vtkProperty *t);
/// <summary>
/// <para>Methods to set / get the backface property of an LOD. This method is only valid for LOD ids that are Actors (not Volumes)</para>
/// </summary>
  void SetLODBackfaceProperty(int id, vtkProperty^ t);


// Did not wrap:  void GetLODBackfaceProperty (int id, vtkProperty *t);


  // void SetLODTexture (int id, vtkTexture *t);
/// <summary>
/// <para>Methods to set / get the texture of an LOD. This method is only valid for LOD ids that are Actors (not Volumes)</para>
/// </summary>
  void SetLODTexture(int id, vtkTexture^ t);


// Did not wrap:  void GetLODTexture (int id, vtkTexture *t);


  // void EnableLOD (int id);
/// <summary>
/// <para>Enable / disable a particular LOD. If it is disabled, it will not be used during automatic selection, but can be selected as the LOD if automatic LOD selection is off.</para>
/// </summary>
  void EnableLOD(int id);


  // void DisableLOD (int id);
/// <summary>
/// <para>Enable / disable a particular LOD. If it is disabled, it will not be used during automatic selection, but can be selected as the LOD if automatic LOD selection is off.</para>
/// </summary>
  void DisableLOD(int id);


  // int IsLODEnabled (int id);
/// <summary>
/// <para>Enable / disable a particular LOD. If it is disabled, it will not be used during automatic selection, but can be selected as the LOD if automatic LOD selection is off.</para>
/// </summary>
  int IsLODEnabled(int id);


  // void SetLODLevel (int id, double level);
/// <summary>
/// <para>Set the level of a particular LOD. When a LOD is selected for rendering because it has the largest render time that fits within the allocated time, all LOD are then checked to see if any one can render faster but has a lower (more resolution/better) level. This quantity is a double to ensure that a level can be inserted  between 2 and 3.</para>
/// </summary>
  void SetLODLevel(int id, double level);


  // double GetLODLevel (int id);
/// <summary>
/// <para>Set the level of a particular LOD. When a LOD is selected for rendering because it has the largest render time that fits within the allocated time, all LOD are then checked to see if any one can render faster but has a lower (more resolution/better) level. This quantity is a double to ensure that a level can be inserted  between 2 and 3.</para>
/// </summary>
  double GetLODLevel(int id);


  // double GetLODIndexLevel (int index);
/// <summary>
/// <para>Set the level of a particular LOD. When a LOD is selected for rendering because it has the largest render time that fits within the allocated time, all LOD are then checked to see if any one can render faster but has a lower (more resolution/better) level. This quantity is a double to ensure that a level can be inserted  between 2 and 3.</para>
/// </summary>
  double GetLODIndexLevel(int index);


  // double GetLODEstimatedRenderTime (int id);
/// <summary>
/// <para>Access method that can be used to find out the estimated render time (the thing used to select an LOD) for a given LOD ID or index.  Value is returned in seconds.</para>
/// </summary>
  double GetLODEstimatedRenderTime(int id);


  // double GetLODIndexEstimatedRenderTime (int index);
/// <summary>
/// <para>Access method that can be used to find out the estimated render time (the thing used to select an LOD) for a given LOD ID or index.  Value is returned in seconds.</para>
/// </summary>
  double GetLODIndexEstimatedRenderTime(int index);


  // void SetAutomaticLODSelection (int );
/// <summary>
/// <para>Turn on / off automatic selection of LOD.  This is on by default. If it is off, then the SelectedLODID is  rendered regardless of rendering time or desired update rate. </para>
/// </summary>
  void SetAutomaticLODSelection(int arg0);


  // int GetAutomaticLODSelectionMinValue ();
/// <summary>
/// <para>Turn on / off automatic selection of LOD.  This is on by default. If it is off, then the SelectedLODID is  rendered regardless of rendering time or desired update rate. </para>
/// </summary>
  int GetAutomaticLODSelectionMinValue();


  // int GetAutomaticLODSelectionMaxValue ();
/// <summary>
/// <para>Turn on / off automatic selection of LOD.  This is on by default. If it is off, then the SelectedLODID is  rendered regardless of rendering time or desired update rate. </para>
/// </summary>
  int GetAutomaticLODSelectionMaxValue();


  // int GetAutomaticLODSelection ();
/// <summary>
/// <para>Turn on / off automatic selection of LOD.  This is on by default. If it is off, then the SelectedLODID is  rendered regardless of rendering time or desired update rate. </para>
/// </summary>
  int GetAutomaticLODSelection();


  // void AutomaticLODSelectionOn ();
/// <summary>
/// <para>Turn on / off automatic selection of LOD.  This is on by default. If it is off, then the SelectedLODID is  rendered regardless of rendering time or desired update rate. </para>
/// </summary>
  void AutomaticLODSelectionOn();


  // void AutomaticLODSelectionOff ();
/// <summary>
/// <para>Turn on / off automatic selection of LOD.  This is on by default. If it is off, then the SelectedLODID is  rendered regardless of rendering time or desired update rate. </para>
/// </summary>
  void AutomaticLODSelectionOff();


  // void SetSelectedLODID (int );
/// <summary>
/// <para>Set the id of the LOD that is to be drawn when automatic LOD selection is turned off.</para>
/// </summary>
  void SetSelectedLODID(int arg0);


  // int GetSelectedLODID ();
/// <summary>
/// <para>Set the id of the LOD that is to be drawn when automatic LOD selection is turned off.</para>
/// </summary>
  int GetSelectedLODID();


  // int GetLastRenderedLODID ();
/// <summary>
/// <para>Get the ID of the previously (during the last render) selected LOD index</para>
/// </summary>
  int GetLastRenderedLODID();


  // int GetPickLODID (void );
/// <summary>
/// <para>Get the ID of the appropriate pick LOD index</para>
/// </summary>
  int GetPickLODID();


  // virtual void GetActors (vtkPropCollection *);
/// <summary>
/// <para>For some exporters and other other operations we must be able to collect all the actors or volumes. These methods are used in that process.</para>
/// </summary>
  void GetActors(vtkPropCollection^ arg0);


  // void SetSelectedPickLODID (int id);
/// <summary>
/// <para>Set the id of the LOD that is to be used for picking when  automatic  LOD pick selection is turned off.</para>
/// </summary>
  void SetSelectedPickLODID(int id);


  // int GetSelectedPickLODID ();
/// <summary>
/// <para>Set the id of the LOD that is to be used for picking when  automatic  LOD pick selection is turned off.</para>
/// </summary>
  int GetSelectedPickLODID();


  // void SetAutomaticPickLODSelection (int );
/// <summary>
/// <para>Turn on / off automatic selection of picking LOD.  This is on by default. If it is off, then the SelectedLODID is  rendered regardless of rendering time or desired update rate. </para>
/// </summary>
  void SetAutomaticPickLODSelection(int arg0);


  // int GetAutomaticPickLODSelectionMinValue ();
/// <summary>
/// <para>Turn on / off automatic selection of picking LOD.  This is on by default. If it is off, then the SelectedLODID is  rendered regardless of rendering time or desired update rate. </para>
/// </summary>
  int GetAutomaticPickLODSelectionMinValue();


  // int GetAutomaticPickLODSelectionMaxValue ();
/// <summary>
/// <para>Turn on / off automatic selection of picking LOD.  This is on by default. If it is off, then the SelectedLODID is  rendered regardless of rendering time or desired update rate. </para>
/// </summary>
  int GetAutomaticPickLODSelectionMaxValue();


  // int GetAutomaticPickLODSelection ();
/// <summary>
/// <para>Turn on / off automatic selection of picking LOD.  This is on by default. If it is off, then the SelectedLODID is  rendered regardless of rendering time or desired update rate. </para>
/// </summary>
  int GetAutomaticPickLODSelection();


  // void AutomaticPickLODSelectionOn ();
/// <summary>
/// <para>Turn on / off automatic selection of picking LOD.  This is on by default. If it is off, then the SelectedLODID is  rendered regardless of rendering time or desired update rate. </para>
/// </summary>
  void AutomaticPickLODSelectionOn();


  // void AutomaticPickLODSelectionOff ();
/// <summary>
/// <para>Turn on / off automatic selection of picking LOD.  This is on by default. If it is off, then the SelectedLODID is  rendered regardless of rendering time or desired update rate. </para>
/// </summary>
  void AutomaticPickLODSelectionOff();


  // void ShallowCopy (vtkProp *prop);
/// <summary>
/// <para>Shallow copy of this vtkLODProp3D.</para>
/// </summary>
  void ShallowCopy(vtkProp^ prop);


// Did not wrap:  vtkLODProp3D ();


// Did not wrap:  ~vtkLODProp3D ();


// Did not wrap:  int GetAutomaticPickPropIndex (void );


// Did not wrap:  int GetNextEntryIndex ();


// Did not wrap:  int ConvertIDToIndex (int id);


// Did not wrap:  vtkLODProp3D (const vtkLODProp3D &);


// Did not wrap:  void vtkLODProp3D 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkLODProp3D(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkLODProp3D(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkLODProp3D();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkLODProp3D();


};

} // end vtkRendering
