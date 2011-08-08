using System;
using System.Collections.Generic;
using System.Text;
namespace flamingo
{
    class flamingo
    {
        static void Main(string[] args)
        {
            // This example demonstrates the use of vtk3DSImporter.
            // vtk3DSImporter is used to load 3D Studio files.  Unlike writers,
            // importers can load scenes (data as well as lights, cameras, actors
            // etc.). Importers will either generate an instance of vtkRenderWindow
            // and/or vtkRenderer or will use the ones you specify.
            string VTK_DATA_ROOT = vtk.vtkDotNetUtil.vtkGetDataRoot();


            // Create the importer and read a file
            vtk.vtk3DSImporter importer = new vtk.vtk3DSImporter();
            importer.ComputeNormalsOn();
            importer.SetFileName(VTK_DATA_ROOT + "/Data/iflamigm.3ds");
            importer.Read();

            // Here we let the importer create a renderer and a render window for
            // us. We could have also create and assigned those ourselves like so:
            // renWin = vtk.vtkRenderWindow();
            // importer.SetRenderWindow(renWin);

            // Assign an interactor.
            // We have to ask the importer for it's render window.
            vtk.vtkRenderWindow renWin = importer.GetRenderWindow();
            vtk.vtkRenderWindowInteractor iren = new vtk.vtkRenderWindowInteractor();
            iren.SetRenderWindow(renWin);

            // Set the render window's size
            renWin.SetSize(300, 300);

            // Set some properties on the renderer.
            // We have to ask the importer for it's renderer.
            vtk.vtkRenderer ren = importer.GetRenderer();
            ren.SetBackground(0.1, 0.2, 0.4);

            // Position the camera:
            // change view up to +z
            vtk.vtkCamera camera = ren.GetActiveCamera();
            camera.SetPosition(0, 1, 0);
            camera.SetFocalPoint(0, 0, 0);
            camera.SetViewUp(0, 0, 1);
            // let the renderer compute good position and focal point
            ren.ResetCamera();
            camera.Dolly(1.4);
            ren.ResetCameraClippingRange();

            iren.Initialize();
            renWin.Render();
            iren.Start();

            vtk.vtkWin32OpenGLRenderWindow win32win =
                vtk.vtkWin32OpenGLRenderWindow.SafeDownCast(renWin);
            if (null != win32win) win32win.Clean();
        }
    }
}