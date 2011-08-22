// This example should demonstrate the vtkCellPicker.
// It doesn't work because the vtkCellPicker resets its
// current pick before the annotatePickCallback is called.

using System;
using System.Collections.Generic;
using System.Text;

using vtk;

namespace AnnotatePick
{
    struct PickData
    {
        public vtkTextMapper textMapper;
        public vtkActor2D textActor;

        // Create a Python function to create the text for the text mapper used
        // to display the results of picking.
        public void annotatePickCallback(vtkObject caller, uint eventId,
                                            object clientData, IntPtr callData)
        {
            vtkCellPicker picker = vtkCellPicker.SafeDownCast(caller);
            if (null != picker)
            {
                if (picker.GetCellId() < 0)
                {
                    textActor.VisibilityOff();
                }
                else
                {
                    double[] selPt = picker.GetSelectionPoint();
                    double[] pickPos = picker.GetPickPosition();
                    textMapper.SetInput(String.Format("({0}, {1}, {2})",
                        pickPos[0], pickPos[1], pickPos[2]));
                    textActor.SetPosition(selPt);
                    textActor.VisibilityOn();
                }
            }
        }
    }

    class annotatePick
    {
        static void Main(string[] args)
        {
            // create a sphere source, mapper, and actor
            vtkSphereSource sphere = new vtkSphereSource();
            vtkPolyDataMapper sphereMapper = new vtkPolyDataMapper();
            sphereMapper.SetInputConnection(sphere.GetOutputPort());
            vtkPolyDataMapper.GlobalImmediateModeRenderingOn();
            vtkLODActor sphereActor = new vtkLODActor();
            sphereActor.SetMapper(sphereMapper);

            // create the spikes by glyphing the sphere with a cone.  Create the
            // mapper and actor for the glyphs.
            vtkConeSource cone = new vtkConeSource();
            vtkGlyph3D glyph = new vtkGlyph3D();
            glyph.SetInputConnection(sphere.GetOutputPort());
            glyph.SetSource(cone.GetOutput());
            glyph.SetVectorModeToUseNormal();
            glyph.SetScaleModeToScaleByVector();
            glyph.SetScaleFactor(0.25);
            vtkPolyDataMapper spikeMapper = new vtkPolyDataMapper();
            spikeMapper.SetInputConnection(glyph.GetOutputPort());
            vtkLODActor spikeActor = new vtkLODActor();
            spikeActor.SetMapper(spikeMapper);

            // Create a text mapper and actor to display the results of picking.
            vtkTextMapper textMapper = new vtkTextMapper();
            vtkTextProperty tprop = textMapper.GetTextProperty();
            tprop.SetFontFamilyToArial();
            tprop.SetFontSize(10);
            tprop.BoldOn();
            tprop.ShadowOn();
            tprop.SetColor(1, 0, 0);
            vtkActor2D textActor = new vtkActor2D();
            textActor.VisibilityOff();
            textActor.SetMapper(textMapper);

            // Create a cell picker.
            vtkCellPicker picker = new vtkCellPicker();

            PickData pd = new PickData();
            pd.textActor = textActor;
            pd.textMapper = textMapper;
            vtkDotNetCallback cb = new vtkDotNetCallback(pd.annotatePickCallback);
            // Now at the end of the pick event call the above function.
            picker.AddObserver((uint) EventIds.EndPickEvent, cb);

            // Create the Renderer, RenderWindow, etc. and set the Picker.
            vtkRenderer ren = new vtkRenderer();
            vtkRenderWindow renWin = new vtkRenderWindow();
            renWin.AddRenderer(ren);
            vtkRenderWindowInteractor iren = new vtkRenderWindowInteractor();
            iren.SetRenderWindow(renWin);
            iren.SetPicker(picker);

            // Add the actors to the renderer, set the background and size
            ren.AddActor2D(textActor);
            ren.AddActor(sphereActor);
            ren.AddActor(spikeActor);
            ren.SetBackground(1, 1, 1);
            renWin.SetSize(300, 300);

            // Get the camera and zoom in closer to the image.
            ren.ResetCamera();
            vtkCamera cam1 = ren.GetActiveCamera();
            cam1.Zoom(1.4);

            iren.Initialize();
            // Initially pick the cell at this location.
            picker.Pick(85, 126, 0, ren);
            renWin.Render();

            iren.Start();

            vtkWin32OpenGLRenderWindow win32win =
                vtkWin32OpenGLRenderWindow.SafeDownCast(renWin);
            if (null != win32win) win32win.Clean();
        }
    }
}
