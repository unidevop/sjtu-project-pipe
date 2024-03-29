package require vtk
package require vtkinteraction

vtkRenderer ren1
vtkRenderWindow renWin
    renWin AddRenderer ren1
vtkRenderWindowInteractor iren
    iren SetRenderWindow renWin

# read data
#
vtkGenericEnSightReader reader
    reader SetCaseFileName "$VTK_DATA_ROOT/Data/EnSight/office_bin.case"
    reader Update;#force a read to occur

# to add coverage for vtkMultiPartExtentTranslator
vtkMultiPartExtentTranslator translator
[reader GetOutput] SetExtentTranslator translator

vtkStructuredGridOutlineFilter outline
    outline SetInputConnection [reader GetOutputPort]
vtkPolyDataMapper mapOutline
    mapOutline SetInputConnection [outline GetOutputPort]
vtkActor outlineActor
    outlineActor SetMapper mapOutline
    [outlineActor GetProperty] SetColor 0 0 0

# Create source for streamtubes
vtkStreamPoints streamer
    streamer SetInputConnection [reader GetOutputPort]
    streamer SetStartPosition 0.1 2.1 0.5
    streamer SetMaximumPropagationTime 500
    streamer SetTimeIncrement 0.5
    streamer SetIntegrationDirectionToForward

vtkConeSource cone
    cone SetResolution 8
vtkGlyph3D cones
    cones SetInputConnection [streamer GetOutputPort]
    cones SetSource [cone GetOutput]
    cones SetScaleFactor 0.9
    cones SetScaleModeToScaleByVector
vtkPolyDataMapper mapCones
    mapCones SetInputConnection [cones GetOutputPort]
    eval mapCones SetScalarRange [[reader GetOutput] GetScalarRange]
vtkActor conesActor
    conesActor SetMapper mapCones

ren1 AddActor outlineActor
ren1 AddActor conesActor

ren1 SetBackground 0.4 0.4 0.5

renWin SetSize 300 300
iren AddObserver UserEvent {wm deiconify .vtkInteract}
iren Initialize

# interact with data
wm withdraw .

