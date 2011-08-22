
// This is a simple volume rendering example that uses a
// vtkVolumeRayCast mapper

using System;
using System.Collections.Generic;
using System.Text;

using vtk;

namespace SimpleRayCast
{
    class SimpleRayCast
    {
        static void CheckAbort(vtkObject obj, uint eventId, Object data, IntPtr clientdata)
        {
            vtkRenderWindow renWin = vtkRenderWindow.SafeDownCast(obj);

            if (null != renWin)
            {
                if (renWin.GetEventPending() != 0)
                {
                    renWin.SetAbortRender(1);
                }
            }
        }


        static void Main(string[] args)
        {
            string VTK_DATA_ROOT = vtk.vtkDotNetUtil.vtkGetDataRoot();

            // Create the standard renderer, render window and interactor
            vtkRenderer ren = new vtk.vtkRenderer();
            vtkRenderWindow renWin = new vtk.vtkRenderWindow();
            renWin.AddRenderer(ren);
            vtkRenderWindowInteractor iren = new vtk.vtkRenderWindowInteractor();
            iren.SetRenderWindow(renWin);

            // Create the reader for the data
            vtkStructuredPointsReader reader = new vtk.vtkStructuredPointsReader();
            reader.SetFileName(VTK_DATA_ROOT + "/Data/ironProt.vtk");

            // Create transfer mapping scalar value to opacity
            vtkPiecewiseFunction opacityTransferFunction = new vtk.vtkPiecewiseFunction();
            opacityTransferFunction.AddPoint(20, 0.0);
            opacityTransferFunction.AddPoint(255, 0.2);

            // Create transfer mapping scalar value to color
            vtkColorTransferFunction colorTransferFunction = new vtk.vtkColorTransferFunction();
            colorTransferFunction.AddRGBPoint(0.0, 0.0, 0.0, 0.0);
            colorTransferFunction.AddRGBPoint(64.0, 1.0, 0.0, 0.0);
            colorTransferFunction.AddRGBPoint(128.0, 0.0, 0.0, 1.0);
            colorTransferFunction.AddRGBPoint(192.0, 0.0, 1.0, 0.0);
            colorTransferFunction.AddRGBPoint(255.0, 0.0, 0.2, 0.0);

            // The property describes how the data will look
            vtkVolumeProperty volumeProperty = new vtk.vtkVolumeProperty();
            volumeProperty.SetColor(colorTransferFunction);
            volumeProperty.SetScalarOpacity(opacityTransferFunction);
            volumeProperty.ShadeOn();
            volumeProperty.SetInterpolationTypeToLinear();

            // The mapper / ray cast function know how to render the data
            vtkVolumeRayCastCompositeFunction compositeFunction = new vtk.vtkVolumeRayCastCompositeFunction();
            vtkVolumeRayCastMapper volumeMapper = new vtk.vtkVolumeRayCastMapper();
            volumeMapper.SetVolumeRayCastFunction(compositeFunction);
            volumeMapper.SetInputConnection(reader.GetOutputPort());

            // The volume holds the mapper and the property and
            // can be used to position/orient the volume
            vtkVolume volume = new vtk.vtkVolume();
            volume.SetMapper(volumeMapper);
            volume.SetProperty(volumeProperty);

            ren.AddVolume(volume);
            ren.SetBackground(1, 1, 1);
            renWin.SetSize(600, 600);
            renWin.Render();

            renWin.AddObserver((uint)EventIds.AbortCheckEvent,
                new vtkDotNetCallback(CheckAbort));

            iren.Initialize();
            renWin.Render();
            iren.Start();

            vtk.vtkWin32OpenGLRenderWindow win32win =
                vtk.vtkWin32OpenGLRenderWindow.SafeDownCast(renWin);
            win32win.Clean();
        }
    }
}
