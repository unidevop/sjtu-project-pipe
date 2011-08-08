// This example demonstrates the use of vtkSTLReader to load data into
// VTK from a file.  This example also uses vtkLODActor which changes
// its graphical representation of the data to maintain interactive
// performance.

using System;
using System.Collections.Generic;
using System.Text;
namespace stl
{
    class stl
    {
        static void Main(string[] args)
        {
            string VTK_DATA_ROOT = vtk.vtkDotNetUtil.vtkGetDataRoot();

            // Create the reader and read a data file.  Connect the mapper and
            // actor.
            vtk.vtkSTLReader sr = new vtk.vtkSTLReader();
            sr.SetFileName(VTK_DATA_ROOT + "/Data/42400-IDGH.stl");

            vtk.vtkPolyDataMapper stlMapper = new vtk.vtkPolyDataMapper();
            stlMapper.SetInputConnection(sr.GetOutputPort());

            vtk.vtkLODActor stlActor = new vtk.vtkLODActor();
            stlActor.SetMapper(stlMapper);

            // Create the Renderer, RenderWindow, and RenderWindowInteractor
            vtk.vtkRenderer ren = new vtk.vtkRenderer();
            vtk.vtkRenderWindow renWin = new vtk.vtkRenderWindow();
            renWin.AddRenderer(ren);
            vtk.vtkRenderWindowInteractor iren = new vtk.vtkRenderWindowInteractor();
            iren.SetRenderWindow(renWin);

            // Add the actors to the render; set the background and size
            ren.AddActor(stlActor);
            ren.SetBackground(0.1, 0.2, 0.4);
            renWin.SetSize(500, 500);

            // Zoom in closer
            ren.ResetCamera();
            vtk.vtkCamera cam1 = ren.GetActiveCamera();
            cam1.Zoom(1.4);

            iren.Initialize();
            renWin.Render();
            iren.Start();

            vtk.vtkWin32OpenGLRenderWindow win32win =
                vtk.vtkWin32OpenGLRenderWindow.SafeDownCast(renWin);
            if (null != win32win) win32win.Clean();
        }
    }
}
