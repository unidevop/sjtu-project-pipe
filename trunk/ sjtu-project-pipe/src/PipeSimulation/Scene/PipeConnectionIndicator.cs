using System;
using System.Collections.Generic;
using PipeSimulation.DataModel;

namespace PipeSimulation.SceneGraph
{
    public sealed class CPipeConnectionIndicator
    {
        const int LINEWIDTH = 2;
        private vtk.vtkActor m_actor = null;

        public CPipeConnectionIndicator(vtk.vtkRenderer renderer)
        {
            if (renderer == null) return;

            // Construct a line
            //m_lineSource = new vtk.vtkLineSource();

            //vtk.vtkPolyDataMapper dataMapper = new vtk.vtkPolyDataMapper();
            //dataMapper.SetInputConnection(m_lineSource.GetOutputPort());

            m_actor = new vtk.vtkActor();
            //m_actor.SetMapper(dataMapper);
            m_actor.GetProperty().SetLineWidth(LINEWIDTH);
            m_actor.GetProperty().SetColor(1, 1, 0); // Yellow

            renderer.AddActor(m_actor);
        }

        public void Update(IList<CPipeConnectionPointPair> connPointPairList)
        {
            if (m_actor == null) return;

            //// Invisible
            //if (connPointPairList == null)
            //{
            //    Visible = false;
            //    return;
            //}

            //// Create points
            //vtk.vtkPoints points = new vtk.vtkPoints();
            //foreach (CPipeConnectionPointPair pair in connPointPairList)
            //{
            //    points.InsertNextPoint(pair.StartConnectionPoint);
            //    points.InsertNextPoint(pair.EndConnectionPoint);
            //}

            //vtk.vtkCellArray lines = new vtk.vtkCellArray();

            //int iPairCount = connPointPairList.Count;
            //for (int i = 0; i < iPairCount; ++i)
            //{
            //    // Create Linee
            //    vtk.vtkLine line = new vtk.vtkLine();
            //    line.GetPointIds().SetId(0, i * 2);
            //    line.GetPointIds().SetId(1, i * 2 + 1);

            //    lines.InsertNextCell(line);
            //}

            //vtk.vtkPolyData polyData = new vtk.vtkPolyData();
            //polyData.SetPoints(points);
            //polyData.SetLines(lines);

            //vtk.vtkPolyDataMapper dataMapper = new vtk.vtkPolyDataMapper();
            //dataMapper.SetInput(polyData);

            //m_actor.SetMapper(dataMapper);
        }

        public bool Visible
        {
            get
            {
                if (null == m_actor) return false;
                return (m_actor.GetVisibility() != 0);
            }
            set
            {
                if (null == m_actor) return;
                m_actor.SetVisibility(value ? 1 : 0);
            }
        }
    }
}