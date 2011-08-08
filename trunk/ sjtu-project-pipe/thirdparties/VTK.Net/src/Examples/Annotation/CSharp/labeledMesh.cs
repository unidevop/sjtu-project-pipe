
// This example demonstrates the use of vtkLabeledDataMapper.  This
// class is used for displaying numerical data from an underlying data
// set.  In the case of this example, the underlying data are the point
// and cell ids.

using System;
using System.Collections.Generic;
using System.Text;

namespace labeledMesh
{
    class labeledMesh
    {
        int xLength, yLength, xmax, ymax;
        vtk.vtkSelectVisiblePoints visPts;
        vtk.vtkSelectVisiblePoints visCells;
        vtk.vtkPoints pts;
        vtk.vtkRenderWindow renWin;

        // Create a function to move the selection window across the data set.
        void MoveWindow()
        {
            for (int y = 100; y < 300; y += 25)
            {
                for (int x = 100; x < 300; x += 25)
                {
                    PlaceWindow(x, y);
                }
            }
        }

        // Create a function to draw the selection window at each location it
        // is moved to.
        void PlaceWindow(int xmin, int ymin)
        {

            xmax = xmin + xLength;
            ymax = ymin + yLength;

            visPts.SetSelection(xmin, xmax, ymin, ymax);
            visCells.SetSelection(xmin, xmax, ymin, ymax);

            pts.InsertPoint(0, xmin, ymin, 0);
            pts.InsertPoint(1, xmax, ymin, 0);
            pts.InsertPoint(2, xmax, ymax, 0);
            pts.InsertPoint(3, xmin, ymax, 0);
            // Call Modified because InsertPoints does not modify vtkPoints
            // (for performance reasons);
            pts.Modified();
            renWin.Render();
        }

        void Run()
        {
            // Create a selection window.  We will display the point and cell ids
            // that lie within this window.
            int xmin = 200;
            xLength = 100;
            xmax = xmin + xLength;
            int ymin = 200;
            yLength = 100;
            ymax = ymin + yLength;

            pts = new vtk.vtkPoints();
            pts.InsertPoint(0, xmin, ymin, 0);
            pts.InsertPoint(1, xmax, ymin, 0);
            pts.InsertPoint(2, xmax, ymax, 0);
            pts.InsertPoint(3, xmin, ymax, 0);
            vtk.vtkCellArray rect = new vtk.vtkCellArray();
            rect.InsertNextCell(5);
            rect.InsertCellPoint(0);
            rect.InsertCellPoint(1);
            rect.InsertCellPoint(2);
            rect.InsertCellPoint(3);
            rect.InsertCellPoint(0);
            vtk.vtkPolyData selectRect = new vtk.vtkPolyData();
            selectRect.SetPoints(pts);
            selectRect.SetLines(rect);
            vtk.vtkPolyDataMapper2D rectMapper = new vtk.vtkPolyDataMapper2D();
            rectMapper.SetInput(selectRect);
            vtk.vtkActor2D rectActor = new vtk.vtkActor2D();
            rectActor.SetMapper(rectMapper);

            // Create a sphere and its associated mapper and actor.
            vtk.vtkSphereSource sphere = new vtk.vtkSphereSource();
            vtk.vtkPolyDataMapper sphereMapper = new vtk.vtkPolyDataMapper();
            sphereMapper.SetInputConnection(sphere.GetOutputPort());
            vtk.vtkPolyDataMapper.GlobalImmediateModeRenderingOn();
            vtk.vtkActor sphereActor = new vtk.vtkActor();
            sphereActor.SetMapper(sphereMapper);

            // Generate data arrays containing point and cell ids
            vtk.vtkIdFilter ids = new vtk.vtkIdFilter();
            ids.SetInputConnection(sphere.GetOutputPort());
            ids.PointIdsOn();
            ids.CellIdsOn();
            ids.FieldDataOn();

            // Create the renderer here because vtkSelectVisiblePoints needs it.
            vtk.vtkRenderer ren = new vtk.vtkRenderer();

            // Create labels for points
            visPts = new vtk.vtkSelectVisiblePoints();
            visPts.SetInputConnection(ids.GetOutputPort());
            visPts.SetRenderer(ren);
            visPts.SelectionWindowOn();
            visPts.SetSelection(xmin, xmin + xLength, ymin, ymin + yLength);

            // Create the mapper to display the point ids.  Specify the format to
            // use for the labels.  Also create the associated actor.
            vtk.vtkLabeledDataMapper ldm = new vtk.vtkLabeledDataMapper();
            ldm.SetInputConnection(visPts.GetOutputPort());
            ldm.SetLabelFormat("%g");
            ldm.SetLabelModeToLabelFieldData();
            vtk.vtkActor2D pointLabels = new vtk.vtkActor2D();
            pointLabels.SetMapper(ldm);

            // Create labels for cells
            vtk.vtkCellCenters cc = new vtk.vtkCellCenters();
            cc.SetInputConnection(ids.GetOutputPort());
            visCells = new vtk.vtkSelectVisiblePoints();
            visCells.SetInputConnection(cc.GetOutputPort());
            visCells.SetRenderer(ren);
            visCells.SelectionWindowOn();
            visCells.SetSelection(xmin, xmin + xLength, ymin, ymin + yLength);

            // Create the mapper to display the cell ids.  Specify the format to
            // use for the labels.  Also create the associated actor.
            vtk.vtkLabeledDataMapper cellMapper = new vtk.vtkLabeledDataMapper();
            cellMapper.SetInputConnection(visCells.GetOutputPort());
            cellMapper.SetLabelFormat("%g");
            cellMapper.SetLabelModeToLabelFieldData();
            cellMapper.GetLabelTextProperty().SetColor(0, 1, 0);
            vtk.vtkActor2D cellLabels = new vtk.vtkActor2D();
            cellLabels.SetMapper(cellMapper);

            // Create the RenderWindow and RenderWindowInteractor
            renWin = new vtk.vtkRenderWindow();
            renWin.AddRenderer(ren);
            vtk.vtkRenderWindowInteractor iren = new vtk.vtkRenderWindowInteractor();
            iren.SetRenderWindow(renWin);

            // Add the actors to the renderer; set the background and size;
            // render
            ren.AddActor(sphereActor);
            ren.AddActor2D(rectActor);
            ren.AddActor2D(pointLabels);
            ren.AddActor2D(cellLabels);

            ren.SetBackground(1, 1, 1);
            renWin.SetSize(500, 500);


            // Initialize the interactor.
            iren.Initialize();
            renWin.Render();

            // Move the selection window across the data set.
            MoveWindow();

            // Put the selection window in the center of the render window.
            // This works because the xmin = ymin = 200, xLength = yLength = 100, and
            // the render window size is 500 x 500.
            PlaceWindow(xmin, ymin);

            // Now start normal interaction.
            iren.Start();
            vtk.vtkWin32OpenGLRenderWindow win32win =
                vtk.vtkWin32OpenGLRenderWindow.SafeDownCast(renWin);
            if (null != win32win) win32win.Clean();
        }


        static void Main(string[] args)
        {
            labeledMesh program = new labeledMesh();
            program.Run();

        }
    }
}