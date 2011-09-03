using System;
using PipeSimulation.DataModel;
using PipeSimulation.DataQuery;
using PipeSimulation.PipeApp;
using PipeSimulation.SceneGraph;

namespace PipeSimulation
{
    namespace DataDriven
    {
        // This class is used to drive the models according to the data query result
        public class CDataDriven : IDataDriven
        {
            private PipeInfo m_currentPipeInfo = null;

            public CDataDriven()
            {
            }

            #region IDataDriven Members

            public void DriveModel(PipeInfo queryResult)
            {
                // Save the current pipe info
                m_currentPipeInfo = queryResult;

                IApp.theApp.RenderWindow.GetInteractor().Render();

                //// The most logic should be here

                //// Get the working in progress pipe id.

                //// Drive previous pipe to its location and remove the other components

                //// Drive the working in progress pipe to its location

                //// Update the information output
            }

            public void DriveModel(int iPipeId, int iRecordId)
            {
                IHistoryDataQuery dateQuery = IApp.theApp.HistoryTimeDataQuery;
                if (dateQuery != null && dateQuery.IsConnected)
                {
                    DriveModel(dateQuery.GetPipeRecord(iPipeId + 1, iRecordId));
                }
                else
                {
                    DriveModel(iRecordId);
                }
            }

            public PipeInfo CurrentData 
            {
                get { return m_currentPipeInfo; }
            }

            #endregion

            // Test function
            private void DriveModel(int iProgress)
            {
                // Here, write a test code here

                //double dMoveDistance = 1000;

                // iProgress should be a range from 1 to 100
                DrivePipeModel(0, (iProgress >= 0 && iProgress < 30),  (iProgress >= 30), 1.0 * iProgress / 30);
                DrivePipeModel(1, (iProgress >= 30 && iProgress < 60), (iProgress >= 60), 1.0 * (iProgress - 30) / 30);
                DrivePipeModel(2, (iProgress >= 60 && iProgress < 90), (iProgress >= 90), 1.0 * (iProgress - 60) / 30);
                DrivePipeModel(3, (iProgress >= 90 && iProgress <= 100), (iProgress >= 100), 1.0 * (iProgress - 90) / 10);

                IApp.theApp.RenderWindow.GetInteractor().Render();
            }

            private static double dMoveDistance = 1000;

            private void DrivePipeModel(int iPipeId, bool bWorking, bool bFinished, double iProgress)
            {
                // if iProgress is between the [0, 30), we should show the first pipe 
                CPipeModel pipeModel = IApp.theApp.DataModel.PipeModels[iPipeId];
                vtk.vtkProp actor = pipeModel.ModelNode as vtk.vtkProp;

                pipeModel.Visible = bWorking || bFinished;
                foreach (ISceneNode node in pipeModel.Children)
                {
                    node.Visible = bWorking;
               }

                double dDeltaDistance = 0;
                if (bWorking)
                {
                    dDeltaDistance = CDataDriven.dMoveDistance * (1 - iProgress);
                }

                // From a translation matrix from -z
                vtk.vtkTransform transform = new vtk.vtkTransform();
                transform.Translate(0, 0, dDeltaDistance);
                transform.Update();

                DrivdeModel(actor, transform);
                foreach (ISceneNode node in pipeModel.Children)
                {
                    DrivdeModel(node.ModelNode, transform);
                }
            }

            private void DrivdeModel(vtk.vtkProp node, vtk.vtkTransform transform)
            {
                node.PokeMatrix(transform.GetMatrix());
            }
        }
    }
}