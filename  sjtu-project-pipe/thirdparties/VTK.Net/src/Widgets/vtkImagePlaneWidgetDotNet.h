#pragma once

// managed includes
#include "vtkPolyDataSourceWidgetDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkImagePlaneWidget : public vtkPolyDataSourceWidget
{

public:
// Did not wrap:  static vtkImagePlaneWidget *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImagePlaneWidget *NewInstance ();
  vtkImagePlaneWidget^ NewInstance();


  // vtkImagePlaneWidget *SafeDownCast (vtkObject* o);
  static vtkImagePlaneWidget^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void SetEnabled (int );
/// <summary>
/// <para>Methods that satisfy the superclass' API.</para>
/// </summary>
  void SetEnabled(int arg0);


  // virtual void PlaceWidget (double bounds[6]);
/// <summary>
/// <para>Methods that satisfy the superclass' API.</para>
/// </summary>
  void PlaceWidget(array<double>^ bounds);


  // void PlaceWidget ();this Superclass PlaceWidget 
/// <summary>
/// <para>Methods that satisfy the superclass' API.</para>
/// </summary>
  void PlaceWidget();


  // void PlaceWidget (double xmin, double xmax, double ymin, double ymax, double zmin, double zmax);this Superclass PlaceWidget xmin xmax ymin ymax zmin zmax 
/// <summary>
/// <para>Set the vtkImageData* input for the vtkImageReslice.</para>
/// </summary>
  void PlaceWidget(double xmin, double xmax, double ymin, double ymax, double zmin, double zmax);


  // void SetInput (vtkDataSet *input);
/// <summary>
/// <para>Set the vtkImageData* input for the vtkImageReslice.</para>
/// </summary>
  void SetInput(vtkDataSet^ input);


  // void SetOrigin (double x, double y, double z);
/// <summary>
/// <para>Set/Get the origin of the plane.</para>
/// </summary>
  void SetOrigin(double x, double y, double z);


  // void SetOrigin (double xyz[3]);
/// <summary>
/// <para>Set/Get the origin of the plane.</para>
/// </summary>
  void SetOrigin(array<double>^ xyz);


  // double *GetOrigin ();
/// <summary>
/// <para>Set/Get the origin of the plane.</para>
/// </summary>
  array<double>^ GetOrigin();


  // void GetOrigin (double xyz[3]);
/// <summary>
/// <para>Set/Get the origin of the plane.</para>
/// </summary>
  void GetOrigin(array<double>^ xyz);


  // void SetPoint1 (double x, double y, double z);
/// <summary>
/// <para>Set/Get the position of the point defining the first axis of the plane.</para>
/// </summary>
  void SetPoint1(double x, double y, double z);


  // void SetPoint1 (double xyz[3]);
/// <summary>
/// <para>Set/Get the position of the point defining the first axis of the plane.</para>
/// </summary>
  void SetPoint1(array<double>^ xyz);


  // double *GetPoint1 ();
/// <summary>
/// <para>Set/Get the position of the point defining the first axis of the plane.</para>
/// </summary>
  array<double>^ GetPoint1();


  // void GetPoint1 (double xyz[3]);
/// <summary>
/// <para>Set/Get the position of the point defining the first axis of the plane.</para>
/// </summary>
  void GetPoint1(array<double>^ xyz);


  // void SetPoint2 (double x, double y, double z);
/// <summary>
/// <para>Set/Get the position of the point defining the second axis of the plane.</para>
/// </summary>
  void SetPoint2(double x, double y, double z);


  // void SetPoint2 (double xyz[3]);
/// <summary>
/// <para>Set/Get the position of the point defining the second axis of the plane.</para>
/// </summary>
  void SetPoint2(array<double>^ xyz);


  // double *GetPoint2 ();
/// <summary>
/// <para>Set/Get the position of the point defining the second axis of the plane.</para>
/// </summary>
  array<double>^ GetPoint2();


  // void GetPoint2 (double xyz[3]);
/// <summary>
/// <para>Set/Get the position of the point defining the second axis of the plane.</para>
/// </summary>
  void GetPoint2(array<double>^ xyz);


  // double *GetCenter ();
/// <summary>
/// <para>Get the center of the plane.</para>
/// </summary>
  array<double>^ GetCenter();


  // void GetCenter (double xyz[3]);
/// <summary>
/// <para>Get the center of the plane.</para>
/// </summary>
  void GetCenter(array<double>^ xyz);


  // double *GetNormal ();
/// <summary>
/// <para>Get the normal to the plane.</para>
/// </summary>
  array<double>^ GetNormal();


  // void GetNormal (double xyz[3]);
/// <summary>
/// <para>Get the normal to the plane.</para>
/// </summary>
  void GetNormal(array<double>^ xyz);


  // void GetVector1 (double v1[3]);
/// <summary>
/// <para>Get the vector from the plane origin to point1.</para>
/// </summary>
  void GetVector1(array<double>^ v1);


  // void GetVector2 (double v2[3]);
/// <summary>
/// <para>Get the vector from the plane origin to point2.</para>
/// </summary>
  void GetVector2(array<double>^ v2);


  // int GetSliceIndex ();
/// <summary>
/// <para>Get the slice position in terms of the data extent.</para>
/// </summary>
  int GetSliceIndex();


  // void SetSliceIndex (int index);
/// <summary>
/// <para>Set the slice position in terms of the data extent.</para>
/// </summary>
  void SetSliceIndex(int index);


  // double GetSlicePosition ();
/// <summary>
/// <para>Get the position of the slice along its normal.</para>
/// </summary>
  double GetSlicePosition();


  // void SetSlicePosition (double position);
/// <summary>
/// <para>Set the position of the slice along its normal.</para>
/// </summary>
  void SetSlicePosition(double position);


  // void SetResliceInterpolate (int );
/// <summary>
/// <para>Set the interpolation to use when texturing the plane.</para>
/// </summary>
  void SetResliceInterpolate(int arg0);


  // int GetResliceInterpolate ();
/// <summary>
/// <para>Set the interpolation to use when texturing the plane.</para>
/// </summary>
  int GetResliceInterpolate();


  // void SetResliceInterpolateToNearestNeighbour ();this SetResliceInterpolate VTK_NEAREST_RESLICE 
/// <summary>
/// <para>Set the interpolation to use when texturing the plane.</para>
/// </summary>
  void SetResliceInterpolateToNearestNeighbour();


  // void SetResliceInterpolateToLinear ();this SetResliceInterpolate VTK_LINEAR_RESLICE 
/// <summary>
/// <para>Set the interpolation to use when texturing the plane.</para>
/// </summary>
  void SetResliceInterpolateToLinear();


  // void SetResliceInterpolateToCubic ();this SetResliceInterpolate VTK_CUBIC_RESLICE 
/// <summary>
/// <para>Convenience method to get the vtkImageReslice output.</para>
/// </summary>
  void SetResliceInterpolateToCubic();


  // vtkImageData *GetResliceOutput ();
/// <summary>
/// <para>Convenience method to get the vtkImageReslice output.</para>
/// </summary>
  vtkImageData^ GetResliceOutput();


  // void SetRestrictPlaneToVolume (int );
/// <summary>
/// <para>Make sure that the plane remains within the volume. Default is On.</para>
/// </summary>
  void SetRestrictPlaneToVolume(int arg0);


  // int GetRestrictPlaneToVolume ();
/// <summary>
/// <para>Make sure that the plane remains within the volume. Default is On.</para>
/// </summary>
  int GetRestrictPlaneToVolume();


  // void RestrictPlaneToVolumeOn ();
/// <summary>
/// <para>Make sure that the plane remains within the volume. Default is On.</para>
/// </summary>
  void RestrictPlaneToVolumeOn();


  // void RestrictPlaneToVolumeOff ();
/// <summary>
/// <para>Make sure that the plane remains within the volume. Default is On.</para>
/// </summary>
  void RestrictPlaneToVolumeOff();


  // void SetUserControlledLookupTable (int );
/// <summary>
/// <para>Let the user control the lookup table. NOTE: apply this method BEFORE applying the SetLookupTable method. Default is Off.</para>
/// </summary>
  void SetUserControlledLookupTable(int arg0);


  // int GetUserControlledLookupTable ();
/// <summary>
/// <para>Let the user control the lookup table. NOTE: apply this method BEFORE applying the SetLookupTable method. Default is Off.</para>
/// </summary>
  int GetUserControlledLookupTable();


  // void UserControlledLookupTableOn ();
/// <summary>
/// <para>Let the user control the lookup table. NOTE: apply this method BEFORE applying the SetLookupTable method. Default is Off.</para>
/// </summary>
  void UserControlledLookupTableOn();


  // void UserControlledLookupTableOff ();
/// <summary>
/// <para>Let the user control the lookup table. NOTE: apply this method BEFORE applying the SetLookupTable method. Default is Off.</para>
/// </summary>
  void UserControlledLookupTableOff();


  // void SetTextureInterpolate (int );
/// <summary>
/// <para>Specify whether to interpolate the texture or not. When off, the reslice interpolation is nearest neighbour regardless of how the interpolation is set through the API. Set before setting the vtkImageData imput. Default is On.</para>
/// </summary>
  void SetTextureInterpolate(int arg0);


  // int GetTextureInterpolate ();
/// <summary>
/// <para>Specify whether to interpolate the texture or not. When off, the reslice interpolation is nearest neighbour regardless of how the interpolation is set through the API. Set before setting the vtkImageData imput. Default is On.</para>
/// </summary>
  int GetTextureInterpolate();


  // void TextureInterpolateOn ();
/// <summary>
/// <para>Specify whether to interpolate the texture or not. When off, the reslice interpolation is nearest neighbour regardless of how the interpolation is set through the API. Set before setting the vtkImageData imput. Default is On.</para>
/// </summary>
  void TextureInterpolateOn();


  // void TextureInterpolateOff ();
/// <summary>
/// <para>Specify whether to interpolate the texture or not. When off, the reslice interpolation is nearest neighbour regardless of how the interpolation is set through the API. Set before setting the vtkImageData imput. Default is On.</para>
/// </summary>
  void TextureInterpolateOff();


  // virtual void SetTextureVisibility (int );
/// <summary>
/// <para>Control the visibility of the actual texture mapped reformatted plane. in some cases you may only want the plane outline for example.</para>
/// </summary>
  void SetTextureVisibility(int arg0);


  // int GetTextureVisibility ();
/// <summary>
/// <para>Control the visibility of the actual texture mapped reformatted plane. in some cases you may only want the plane outline for example.</para>
/// </summary>
  int GetTextureVisibility();


  // void TextureVisibilityOn ();
/// <summary>
/// <para>Control the visibility of the actual texture mapped reformatted plane. in some cases you may only want the plane outline for example.</para>
/// </summary>
  void TextureVisibilityOn();


  // void TextureVisibilityOff ();
/// <summary>
/// <para>Control the visibility of the actual texture mapped reformatted plane. in some cases you may only want the plane outline for example.</para>
/// </summary>
  void TextureVisibilityOff();


  // void GetPolyData (vtkPolyData *pd);
/// <summary>
/// <para>Grab the polydata (including points) that defines the plane.  The polydata consists of (res+1)*(res+1) points, and res*res quadrilateral polygons, where res is the resolution of the plane. These point values are guaranteed to be up-to-date when either the InteractionEvent or EndInteraction events are invoked. The user provides the vtkPolyData and the points and polyplane are added to it.</para>
/// </summary>
  void GetPolyData(vtkPolyData^ pd);


  // vtkPolyDataAlgorithm *GetPolyDataAlgorithm ();
/// <summary>
/// <para>Satisfies superclass API.  This returns a pointer to the underlying PolyData.  Make changes to this before calling the initial PlaceWidget() to have the initial placement follow suit.  Or, make changes after the widget has been initialised and call UpdatePlacement() to realise.</para>
/// </summary>
  vtkPolyDataAlgorithm^ GetPolyDataAlgorithm();


  // void UpdatePlacement (void );
/// <summary>
/// <para>Satisfies superclass API.  This will change the state of the widget to match changes that have been made to the underlying PolyDataSource</para>
/// </summary>
  void UpdatePlacement();


  // vtkTexture *GetTexture ();
/// <summary>
/// <para>Convenience method to get the texture used by this widget.  This can be used in external slice viewers.</para>
/// </summary>
  vtkTexture^ GetTexture();


  // vtkImageMapToColors *GetColorMap ();
/// <summary>
/// <para>Convenience method to get the vtkImageMapToColors filter used by this widget.  The user can properly render other transparent actors in a scene by calling the filter's SetOuputFormatToRGB and  PassAlphaToOutputOff.</para>
/// </summary>
  vtkImageMapToColors^ GetColorMap();


  // virtual void SetColorMap (vtkImageMapToColors *);
/// <summary>
/// <para>Convenience method to get the vtkImageMapToColors filter used by this widget.  The user can properly render other transparent actors in a scene by calling the filter's SetOuputFormatToRGB and  PassAlphaToOutputOff.</para>
/// </summary>
  void SetColorMap(vtkImageMapToColors^ arg0);


  // virtual void SetPlaneProperty (vtkProperty *);
/// <summary>
/// <para>Set/Get the plane's outline properties. The properties of the plane's  outline when selected and unselected can be manipulated.</para>
/// </summary>
  void SetPlaneProperty(vtkProperty^ arg0);


  // vtkProperty *GetPlaneProperty ();
/// <summary>
/// <para>Set/Get the plane's outline properties. The properties of the plane's  outline when selected and unselected can be manipulated.</para>
/// </summary>
  vtkProperty^ GetPlaneProperty();


  // virtual void SetSelectedPlaneProperty (vtkProperty *);
/// <summary>
/// <para>Set/Get the plane's outline properties. The properties of the plane's  outline when selected and unselected can be manipulated.</para>
/// </summary>
  void SetSelectedPlaneProperty(vtkProperty^ arg0);


  // vtkProperty *GetSelectedPlaneProperty ();
/// <summary>
/// <para>Set/Get the plane's outline properties. The properties of the plane's  outline when selected and unselected can be manipulated.</para>
/// </summary>
  vtkProperty^ GetSelectedPlaneProperty();


  // void SetPlaneOrientation (int );
/// <summary>
/// <para>Convenience method sets the plane orientation normal to the x, y, or z axes.  Default is XAxes (0).</para>
/// </summary>
  void SetPlaneOrientation(int arg0);


  // int GetPlaneOrientation ();
/// <summary>
/// <para>Convenience method sets the plane orientation normal to the x, y, or z axes.  Default is XAxes (0).</para>
/// </summary>
  int GetPlaneOrientation();


  // void SetPlaneOrientationToXAxes ();this SetPlaneOrientation 
/// <summary>
/// <para>Convenience method sets the plane orientation normal to the x, y, or z axes.  Default is XAxes (0).</para>
/// </summary>
  void SetPlaneOrientationToXAxes();


  // void SetPlaneOrientationToYAxes ();this SetPlaneOrientation 
/// <summary>
/// <para>Convenience method sets the plane orientation normal to the x, y, or z axes.  Default is XAxes (0).</para>
/// </summary>
  void SetPlaneOrientationToYAxes();


  // void SetPlaneOrientationToZAxes ();this SetPlaneOrientation 
/// <summary>
/// <para>Set the internal picker to one defined by the user.  In this way, a set of three orthogonal planes can share the same picker so that picking is performed correctly.  The default internal picker can be re-set/allocated by setting to 0 (NULL).</para>
/// </summary>
  void SetPlaneOrientationToZAxes();


  // void SetPicker (vtkCellPicker *);
/// <summary>
/// <para>Set the internal picker to one defined by the user.  In this way, a set of three orthogonal planes can share the same picker so that picking is performed correctly.  The default internal picker can be re-set/allocated by setting to 0 (NULL).</para>
/// </summary>
  void SetPicker(vtkCellPicker^ arg0);


  // virtual void SetLookupTable (vtkLookupTable *);
/// <summary>
/// <para>Set/Get the internal lookuptable (lut) to one defined by the user, or, alternatively, to the lut of another vtkImgePlaneWidget.  In this way, a set of three orthogonal planes can share the same lut so that window-levelling is performed uniformly among planes.  The default internal lut can be re- set/allocated by setting to 0 (NULL).</para>
/// </summary>
  void SetLookupTable(vtkLookupTable^ arg0);


  // vtkLookupTable *GetLookupTable ();
/// <summary>
/// <para>Set/Get the internal lookuptable (lut) to one defined by the user, or, alternatively, to the lut of another vtkImgePlaneWidget.  In this way, a set of three orthogonal planes can share the same lut so that window-levelling is performed uniformly among planes.  The default internal lut can be re- set/allocated by setting to 0 (NULL).</para>
/// </summary>
  vtkLookupTable^ GetLookupTable();


  // void SetDisplayText (int );
/// <summary>
/// <para>Enable/disable text display of window-level, image coords and values in a render window.</para>
/// </summary>
  void SetDisplayText(int arg0);


  // int GetDisplayText ();
/// <summary>
/// <para>Enable/disable text display of window-level, image coords and values in a render window.</para>
/// </summary>
  int GetDisplayText();


  // void DisplayTextOn ();
/// <summary>
/// <para>Enable/disable text display of window-level, image coords and values in a render window.</para>
/// </summary>
  void DisplayTextOn();


  // void DisplayTextOff ();
/// <summary>
/// <para>Enable/disable text display of window-level, image coords and values in a render window.</para>
/// </summary>
  void DisplayTextOff();


  // virtual void SetCursorProperty (vtkProperty *);
/// <summary>
/// <para>Set the properties of the cross-hair cursor.</para>
/// </summary>
  void SetCursorProperty(vtkProperty^ arg0);


  // vtkProperty *GetCursorProperty ();
/// <summary>
/// <para>Set the properties of the cross-hair cursor.</para>
/// </summary>
  vtkProperty^ GetCursorProperty();


  // virtual void SetMarginProperty (vtkProperty *);
/// <summary>
/// <para>Set the properties of the margins.</para>
/// </summary>
  void SetMarginProperty(vtkProperty^ arg0);


  // vtkProperty *GetMarginProperty ();
/// <summary>
/// <para>Set the properties of the margins.</para>
/// </summary>
  vtkProperty^ GetMarginProperty();


  // void SetTextProperty (vtkTextProperty *tprop);
/// <summary>
/// <para>Set/Get the text property for the image data and window-level annotation.</para>
/// </summary>
  void SetTextProperty(vtkTextProperty^ tprop);


  // vtkTextProperty *GetTextProperty ();
/// <summary>
/// <para>Set/Get the text property for the image data and window-level annotation.</para>
/// </summary>
  vtkTextProperty^ GetTextProperty();


  // virtual void SetTexturePlaneProperty (vtkProperty *);
/// <summary>
/// <para>Set/Get the property for the resliced image.</para>
/// </summary>
  void SetTexturePlaneProperty(vtkProperty^ arg0);


  // vtkProperty *GetTexturePlaneProperty ();
/// <summary>
/// <para>Set/Get the property for the resliced image.</para>
/// </summary>
  vtkProperty^ GetTexturePlaneProperty();


  // void SetWindowLevel (double window, double level);
/// <summary>
/// <para>Set/Get the current window and level values.  Set should only be called after SetInput.</para>
/// </summary>
  void SetWindowLevel(double window, double level);


  // void GetWindowLevel (double wl[2]);
/// <summary>
/// <para>Set/Get the current window and level values.  Set should only be called after SetInput.</para>
/// </summary>
  void GetWindowLevel(array<double>^ wl);


  // int GetCursorData (double xyzv[4]);
/// <summary>
/// <para>Get the image coordinate position and voxel value.  Currently only supports single component image data.</para>
/// </summary>
  int GetCursorData(array<double>^ xyzv);


  // int GetCursorDataStatus ();
/// <summary>
/// <para>Get the status of the cursor data.  If this returns 1 the CurrentCursorPosition and CurrentImageValue will have current data.  If it returns 0, these values are invalid.</para>
/// </summary>
  int GetCursorDataStatus();


  // double  *GetCurrentCursorPosition ();
/// <summary>
/// <para>Get the current cursor position.  To be used in conjunction with GetCursorDataStatus.</para>
/// </summary>
  array<double>^ GetCurrentCursorPosition();


  // double GetCurrentImageValue ();
/// <summary>
/// <para>Get the current image value at the current cursor position.  To be used in conjunction with GetCursorDataStatus.  The value is VTK_DOUBLE_MAX when the data is invalid.</para>
/// </summary>
  double GetCurrentImageValue();


  // void SetUseContinuousCursor (int );
/// <summary>
/// <para>Choose between voxel centered or continuous cursor probing.  With voxel centered probing, the cursor snaps to the nearest voxel and the reported cursor coordinates are extent based.  With continuous probing, voxel data is interpolated using vtkDataSetAttributes' InterpolatePoint method and the reported coordinates are 3D spacial continuous.  </para>
/// </summary>
  void SetUseContinuousCursor(int arg0);


  // int GetUseContinuousCursor ();
/// <summary>
/// <para>Choose between voxel centered or continuous cursor probing.  With voxel centered probing, the cursor snaps to the nearest voxel and the reported cursor coordinates are extent based.  With continuous probing, voxel data is interpolated using vtkDataSetAttributes' InterpolatePoint method and the reported coordinates are 3D spacial continuous.  </para>
/// </summary>
  int GetUseContinuousCursor();


  // void UseContinuousCursorOn ();
/// <summary>
/// <para>Choose between voxel centered or continuous cursor probing.  With voxel centered probing, the cursor snaps to the nearest voxel and the reported cursor coordinates are extent based.  With continuous probing, voxel data is interpolated using vtkDataSetAttributes' InterpolatePoint method and the reported coordinates are 3D spacial continuous.  </para>
/// </summary>
  void UseContinuousCursorOn();


  // void UseContinuousCursorOff ();
/// <summary>
/// <para>Choose between voxel centered or continuous cursor probing.  With voxel centered probing, the cursor snaps to the nearest voxel and the reported cursor coordinates are extent based.  With continuous probing, voxel data is interpolated using vtkDataSetAttributes' InterpolatePoint method and the reported coordinates are 3D spacial continuous.  </para>
/// </summary>
  void UseContinuousCursorOff();


  // void SetInteraction (int interact);
/// <summary>
/// <para>Enable/disable mouse interaction so the widget remains on display.</para>
/// </summary>
  void SetInteraction(int interact);


  // int GetInteraction ();
/// <summary>
/// <para>Enable/disable mouse interaction so the widget remains on display.</para>
/// </summary>
  int GetInteraction();


  // void InteractionOn ();
/// <summary>
/// <para>Enable/disable mouse interaction so the widget remains on display.</para>
/// </summary>
  void InteractionOn();


  // void InteractionOff ();
/// <summary>
/// <para>Enable/disable mouse interaction so the widget remains on display.</para>
/// </summary>
  void InteractionOff();


  // void SetLeftButtonAction (int );
/// <summary>
/// <para>Set action associated to buttons.</para>
/// </summary>
  void SetLeftButtonAction(int arg0);


  // int GetLeftButtonActionMinValue ();
/// <summary>
/// <para>Set action associated to buttons.</para>
/// </summary>
  int GetLeftButtonActionMinValue();


  // int GetLeftButtonActionMaxValue ();
/// <summary>
/// <para>Set action associated to buttons.</para>
/// </summary>
  int GetLeftButtonActionMaxValue();


  // int GetLeftButtonAction ();
/// <summary>
/// <para>Set action associated to buttons.</para>
/// </summary>
  int GetLeftButtonAction();


  // void SetMiddleButtonAction (int );
/// <summary>
/// <para>Set action associated to buttons.</para>
/// </summary>
  void SetMiddleButtonAction(int arg0);


  // int GetMiddleButtonActionMinValue ();
/// <summary>
/// <para>Set action associated to buttons.</para>
/// </summary>
  int GetMiddleButtonActionMinValue();


  // int GetMiddleButtonActionMaxValue ();
/// <summary>
/// <para>Set action associated to buttons.</para>
/// </summary>
  int GetMiddleButtonActionMaxValue();


  // int GetMiddleButtonAction ();
/// <summary>
/// <para>Set action associated to buttons.</para>
/// </summary>
  int GetMiddleButtonAction();


  // void SetRightButtonAction (int );
/// <summary>
/// <para>Set action associated to buttons.</para>
/// </summary>
  void SetRightButtonAction(int arg0);


  // int GetRightButtonActionMinValue ();
/// <summary>
/// <para>Set action associated to buttons.</para>
/// </summary>
  int GetRightButtonActionMinValue();


  // int GetRightButtonActionMaxValue ();
/// <summary>
/// <para>Set action associated to buttons.</para>
/// </summary>
  int GetRightButtonActionMaxValue();


  // int GetRightButtonAction ();
/// <summary>
/// <para>Set action associated to buttons.</para>
/// </summary>
  int GetRightButtonAction();


  // void SetLeftButtonAutoModifier (int );
/// <summary>
/// <para>Set the auto-modifiers associated to buttons. This allows users to bind some buttons to actions that are usually triggered by a key modifier. For example, if you do not need cursoring, you can bind the left button action to SLICE_MOTION_ACTION (see above)  and the left button auto modifier to CONTROL_MODIFIER: you end up with the left button controling panning without pressing a key.</para>
/// </summary>
  void SetLeftButtonAutoModifier(int arg0);


  // int GetLeftButtonAutoModifierMinValue ();
/// <summary>
/// <para>Set the auto-modifiers associated to buttons. This allows users to bind some buttons to actions that are usually triggered by a key modifier. For example, if you do not need cursoring, you can bind the left button action to SLICE_MOTION_ACTION (see above)  and the left button auto modifier to CONTROL_MODIFIER: you end up with the left button controling panning without pressing a key.</para>
/// </summary>
  int GetLeftButtonAutoModifierMinValue();


  // int GetLeftButtonAutoModifierMaxValue ();
/// <summary>
/// <para>Set the auto-modifiers associated to buttons. This allows users to bind some buttons to actions that are usually triggered by a key modifier. For example, if you do not need cursoring, you can bind the left button action to SLICE_MOTION_ACTION (see above)  and the left button auto modifier to CONTROL_MODIFIER: you end up with the left button controling panning without pressing a key.</para>
/// </summary>
  int GetLeftButtonAutoModifierMaxValue();


  // int GetLeftButtonAutoModifier ();
/// <summary>
/// <para>Set the auto-modifiers associated to buttons. This allows users to bind some buttons to actions that are usually triggered by a key modifier. For example, if you do not need cursoring, you can bind the left button action to SLICE_MOTION_ACTION (see above)  and the left button auto modifier to CONTROL_MODIFIER: you end up with the left button controling panning without pressing a key.</para>
/// </summary>
  int GetLeftButtonAutoModifier();


  // void SetMiddleButtonAutoModifier (int );
/// <summary>
/// <para>Set the auto-modifiers associated to buttons. This allows users to bind some buttons to actions that are usually triggered by a key modifier. For example, if you do not need cursoring, you can bind the left button action to SLICE_MOTION_ACTION (see above)  and the left button auto modifier to CONTROL_MODIFIER: you end up with the left button controling panning without pressing a key.</para>
/// </summary>
  void SetMiddleButtonAutoModifier(int arg0);


  // int GetMiddleButtonAutoModifierMinValue ();
/// <summary>
/// <para>Set the auto-modifiers associated to buttons. This allows users to bind some buttons to actions that are usually triggered by a key modifier. For example, if you do not need cursoring, you can bind the left button action to SLICE_MOTION_ACTION (see above)  and the left button auto modifier to CONTROL_MODIFIER: you end up with the left button controling panning without pressing a key.</para>
/// </summary>
  int GetMiddleButtonAutoModifierMinValue();


  // int GetMiddleButtonAutoModifierMaxValue ();
/// <summary>
/// <para>Set the auto-modifiers associated to buttons. This allows users to bind some buttons to actions that are usually triggered by a key modifier. For example, if you do not need cursoring, you can bind the left button action to SLICE_MOTION_ACTION (see above)  and the left button auto modifier to CONTROL_MODIFIER: you end up with the left button controling panning without pressing a key.</para>
/// </summary>
  int GetMiddleButtonAutoModifierMaxValue();


  // int GetMiddleButtonAutoModifier ();
/// <summary>
/// <para>Set the auto-modifiers associated to buttons. This allows users to bind some buttons to actions that are usually triggered by a key modifier. For example, if you do not need cursoring, you can bind the left button action to SLICE_MOTION_ACTION (see above)  and the left button auto modifier to CONTROL_MODIFIER: you end up with the left button controling panning without pressing a key.</para>
/// </summary>
  int GetMiddleButtonAutoModifier();


  // void SetRightButtonAutoModifier (int );
/// <summary>
/// <para>Set the auto-modifiers associated to buttons. This allows users to bind some buttons to actions that are usually triggered by a key modifier. For example, if you do not need cursoring, you can bind the left button action to SLICE_MOTION_ACTION (see above)  and the left button auto modifier to CONTROL_MODIFIER: you end up with the left button controling panning without pressing a key.</para>
/// </summary>
  void SetRightButtonAutoModifier(int arg0);


  // int GetRightButtonAutoModifierMinValue ();
/// <summary>
/// <para>Set the auto-modifiers associated to buttons. This allows users to bind some buttons to actions that are usually triggered by a key modifier. For example, if you do not need cursoring, you can bind the left button action to SLICE_MOTION_ACTION (see above)  and the left button auto modifier to CONTROL_MODIFIER: you end up with the left button controling panning without pressing a key.</para>
/// </summary>
  int GetRightButtonAutoModifierMinValue();


  // int GetRightButtonAutoModifierMaxValue ();
/// <summary>
/// <para>Set the auto-modifiers associated to buttons. This allows users to bind some buttons to actions that are usually triggered by a key modifier. For example, if you do not need cursoring, you can bind the left button action to SLICE_MOTION_ACTION (see above)  and the left button auto modifier to CONTROL_MODIFIER: you end up with the left button controling panning without pressing a key.</para>
/// </summary>
  int GetRightButtonAutoModifierMaxValue();


  // int GetRightButtonAutoModifier ();
/// <summary>
/// <para>Set the auto-modifiers associated to buttons. This allows users to bind some buttons to actions that are usually triggered by a key modifier. For example, if you do not need cursoring, you can bind the left button action to SLICE_MOTION_ACTION (see above)  and the left button auto modifier to CONTROL_MODIFIER: you end up with the left button controling panning without pressing a key.</para>
/// </summary>
  int GetRightButtonAutoModifier();


// Did not wrap:  vtkImagePlaneWidget ();


// Did not wrap:  ~vtkImagePlaneWidget ();


// Did not wrap:  static void ProcessEvents (vtkObject *object, unsigned long event, void *clientdata, void *calldata);


// Did not wrap:  void AddObservers ();


// Did not wrap:  virtual void OnMouseMove ();


// Did not wrap:  virtual void OnLeftButtonDown ();


// Did not wrap:  virtual void OnLeftButtonUp ();


// Did not wrap:  virtual void OnMiddleButtonDown ();


// Did not wrap:  virtual void OnMiddleButtonUp ();


// Did not wrap:  virtual void OnRightButtonDown ();


// Did not wrap:  virtual void OnRightButtonUp ();


// Did not wrap:  virtual void StartCursor ();


// Did not wrap:  virtual void StopCursor ();


// Did not wrap:  virtual void StartSliceMotion ();


// Did not wrap:  virtual void StopSliceMotion ();


// Did not wrap:  virtual void StartWindowLevel ();


// Did not wrap:  virtual void StopWindowLevel ();


// Did not wrap:  void HighlightPlane (int highlight);


// Did not wrap:  void GeneratePlaneOutline ();


// Did not wrap:  void BuildRepresentation ();


// Did not wrap:  void WindowLevel (int X, int Y);


// Did not wrap:  void Push (double *p1, double *p2);


// Did not wrap:  void Spin (double *p1, double *p2);


// Did not wrap:  void Rotate (double *p1, double *p2, double *vpn);


// Did not wrap:  void Scale (double *p1, double *p2, int X, int Y);


// Did not wrap:  void Translate (double *p1, double *p2);


// Did not wrap:  vtkLookupTable *CreateDefaultLookupTable ();


// Did not wrap:  void CreateDefaultProperties ();


// Did not wrap:  void UpdatePlane ();


// Did not wrap:  void GenerateTexturePlane ();


// Did not wrap:  void GenerateCursor ();


// Did not wrap:  void UpdateCursor (int , int );


// Did not wrap:  void ActivateCursor (int );


// Did not wrap:  int UpdateContinuousCursor (double *q);


// Did not wrap:  int UpdateDiscreteCursor (double *q);


// Did not wrap:  void GenerateText ();


// Did not wrap:  void ManageTextDisplay ();


// Did not wrap:  void ActivateText (int );


// Did not wrap:  void AdjustState ();


// Did not wrap:  void GenerateMargins ();


// Did not wrap:  void UpdateMargins ();


// Did not wrap:  void ActivateMargins (int );


// Did not wrap:  vtkImagePlaneWidget (const vtkImagePlaneWidget &);


// Did not wrap:  void vtkImagePlaneWidget 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImagePlaneWidget(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImagePlaneWidget(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImagePlaneWidget();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImagePlaneWidget();


};

} // end vtkWidgets
