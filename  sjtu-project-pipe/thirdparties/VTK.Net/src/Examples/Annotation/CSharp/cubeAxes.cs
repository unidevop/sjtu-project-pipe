using System;
using System.Collections.Generic;
using System.Windows.Forms;

using vtk;


namespace CubeAxes
{
    static class cubeAxes
    {
        // Set up a check for aborting rendering.
        // Create a Python function to create the text for the text mapper used
        // to display the results of picking.
        public static void CheckAbort(vtkObject caller, uint eventId,
                                            object clientData, IntPtr callData)
        {
            if (caller is vtkRenderWindow)
            {
                vtkRenderWindow renWin = (vtkRenderWindow)caller;
                renWin.SetAbortRender(1);
            }
        }

        /// <summary>
        /// The main entry point for the application.
        /// </summary>
        [STAThread]
        static void Main()
        {
            string VTK_DATA_ROOT = "C:/Program Files/VTKData";

            // Create a vtkBYUReader and read in a data set.
            vtkBYUReader fohe = new vtkBYUReader();
            fohe.SetGeometryFileName(VTK_DATA_ROOT + "/Data/teapot.g");

            // Create a vtkPolyDataNormals filter to calculate the normals of the
            // data set.
            vtkPolyDataNormals normals = new vtkPolyDataNormals();
            normals.SetInputConnection(fohe.GetOutputPort());
            // Set up the associated mapper and actor.
            vtkPolyDataMapper foheMapper = new vtkPolyDataMapper();
            foheMapper.SetInputConnection(normals.GetOutputPort());
            vtkLODActor foheActor = new vtkLODActor();
            foheActor.SetMapper(foheMapper);

            // Create a vtkOutlineFilter to draw the bounding box of the data set.
            // Also create the associated mapper and actor.
            vtkOutlineFilter outline = new vtkOutlineFilter();
            outline.SetInputConnection(normals.GetOutputPort());
            vtkPolyDataMapper mapOutline = new vtkPolyDataMapper();
            mapOutline.SetInputConnection(outline.GetOutputPort());
            vtkActor outlineActor = new vtkActor();
            outlineActor.SetMapper(mapOutline);
            outlineActor.GetProperty().SetColor(0, 0, 0);

            // Create a vtkCamera, and set the camera parameters.
            vtkCamera camera = new vtkCamera();
            camera.SetClippingRange(1.60187, 20.0842);
            camera.SetFocalPoint(0.21406, 1.5, 0);
            camera.SetPosition(8.3761, 4.94858, 4.12505);
            camera.SetViewUp(0.180325, 0.549245, -0.815974);

            // Create a vtkLight, and set the light parameters.
            vtkLight light = new vtkLight();
            light.SetFocalPoint(0.21406, 1.5, 0);
            light.SetPosition(8.3761, 4.94858, 4.12505);

            // Create the Renderers.  Assign them the appropriate viewport
            // coordinates, active camera, and light.
            vtkRenderer ren = new vtkRenderer();
            ren.SetViewport(0, 0, 0.5, 1.0);
            ren.SetActiveCamera(camera);
            ren.AddLight(light);
            vtkRenderer ren2 = new vtkRenderer();
            ren2.SetViewport(0.5, 0, 1.0, 1.0);
            ren2.SetActiveCamera(camera);
            ren2.AddLight(light);

            // Create the RenderWindow and RenderWindowInteractor.
            vtkRenderWindow renWin = new vtkRenderWindow();
            renWin.AddRenderer(ren);
            renWin.AddRenderer(ren2);
            renWin.SetWindowName("VTK - Cube Axes");
            renWin.SetSize(600, 300);
            vtkRenderWindowInteractor iren = new vtkRenderWindowInteractor();
            iren.SetRenderWindow(renWin);

            // Add the actors to the renderer, and set the background.
            ren.AddViewProp(foheActor);
            ren.AddViewProp(outlineActor);
            ren2.AddViewProp(foheActor);
            ren2.AddViewProp(outlineActor);

            ren.SetBackground(0.1, 0.2, 0.4);
            ren2.SetBackground(0.1, 0.2, 0.4);

            // Create a text property for both cube axes
            vtkTextProperty tprop = new vtkTextProperty();
            tprop.SetColor(1, 1, 1);
            tprop.ShadowOn();

            // Create a vtkCubeAxesActor2D.  Use the outer edges of the bounding box to
            // draw the axes.  Add the actor to the renderer.
            vtkCubeAxesActor2D axes = new vtkCubeAxesActor2D();
            axes.SetInput(normals.GetOutput());
            axes.SetCamera(ren.GetActiveCamera());
            axes.SetLabelFormat("%6.4g");
            axes.SetFlyModeToOuterEdges();
            axes.SetFontFactor(0.8);
            axes.SetAxisTitleTextProperty(tprop);
            axes.SetAxisLabelTextProperty(tprop);
            ren.AddViewProp(axes);

            // Create a vtkCubeAxesActor2D.  Use the closest vertex to the camera to
            // determine where to draw the axes.  Add the actor to the renderer.
            vtkCubeAxesActor2D axes2 = new vtkCubeAxesActor2D();
            axes2.SetViewProp(foheActor);
            axes2.SetCamera(ren2.GetActiveCamera());
            axes2.SetLabelFormat("%6.4g");
            axes2.SetFlyModeToClosestTriad();
            axes2.SetFontFactor(0.8);
            axes2.ScalingOff();
            axes2.SetAxisTitleTextProperty(tprop);
            axes2.SetAxisLabelTextProperty(tprop);
            ren2.AddViewProp(axes2);


            renWin.AddObserver((uint) EventIds.AbortCheckEvent, CheckAbort);

            iren.Initialize();
            renWin.Render();
            iren.Start();

            vtkWin32OpenGLRenderWindow win32win =
                vtkWin32OpenGLRenderWindow.SafeDownCast(renWin);
            if (null != win32win) win32win.Clean();
        }
    }
}