#!/usr/bin/env python

import sys

for i in range(0, len(sys.argv)):
    if sys.argv[i] == '-A' and i < len(sys.argv)-1:
        sys.path = sys.path + [sys.argv[i+1]]

import vtk
from vtk.util.misc import vtkRegressionTestImage, vtkGetDataRoot

# create planes
# Create the RenderWindow, Renderer
#
ren = vtk.vtkRenderer()
renWin = vtk.vtkRenderWindow()
renWin.AddRenderer( ren )

iren = vtk.vtkRenderWindowInteractor()
iren.SetRenderWindow(renWin)

# create pipeline
#
pl3d = vtk.vtkPLOT3DReader()
pl3d.SetXYZFileName( vtkGetDataRoot() + '/Data/combxyz.bin' )
pl3d.SetQFileName( vtkGetDataRoot() + '/Data/combq.bin' )
pl3d.SetScalarFunctionNumber( 100 )
pl3d.SetVectorFunctionNumber( 202 )
pl3d.Update()

outline = vtk.vtkStructuredGridOutlineFilter()
outline.SetInputConnection(pl3d.GetOutputPort())

outlineMapper = vtk.vtkPolyDataMapper() 
outlineMapper.SetInputConnection(outline.GetOutputPort())

outlineActor = vtk.vtkActor()
outlineActor.SetMapper(outlineMapper)

seeds = vtk.vtkLineSource()
seeds.SetPoint1(15, -5, 32)
seeds.SetPoint2(15, 5, 32)
seeds.SetResolution(10)

sl = vtk.vtkStreamLine()
sl.SetInputConnection(pl3d.GetOutputPort())
sl.SetSource(seeds.GetOutput())
sl.SetMaximumPropagationTime(0.1)
sl.SetIntegrationStepLength(0.1)
sl.SetIntegrationDirectionToIntegrateBothDirections()
sl.SetStepLength(0.001)

mapper = vtk.vtkPolyDataMapper()
mapper.SetInputConnection(sl.GetOutputPort())

actor = vtk.vtkActor()
actor.SetMapper(mapper)

mmapper = vtk.vtkPolyDataMapper()
mmapper.SetInputConnection(seeds.GetOutputPort())
mactor = vtk.vtkActor()
mactor.SetMapper(mmapper)
ren.AddActor(mactor)
                      
ren.AddActor(actor)
ren.AddActor(outlineActor)

cam=ren.GetActiveCamera()
cam.SetClippingRange( 3.95297, 50 )
cam.SetFocalPoint( 8.88908, 0.595038, 29.3342 )
cam.SetPosition( -12.3332, 31.7479, 41.2387 )
cam.SetViewUp( 0.060772, -0.319905, 0.945498 )

renWin.Render()
retVal = vtkRegressionTestImage(renWin)
sys.exit( not retVal )

