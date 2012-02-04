using System;
using PipeSimulation.DataModel;
using PipeSimulation.SceneGraph;
using PipeSimulation.PipeApp;
using System.Collections.Generic;
using PipeSimulation.DataQuery;

namespace PipeSimulation.Utility
{
    /// <summary>
    /// This interface is used to map the progress and datetime
    /// </summary>
    public interface IProgress2DateTimeMapper
    {
        int GetMinimumRange();
        int GetMaximumRange();
        DateTime GetDateTime(int iPos);
        int GetPosition(DateTime dateTime);
    }

    /// <summary>
    /// This class is a implementation as what we did before
    /// </summary>
    public class CNormalProgress2DateTimeMapper : IProgress2DateTimeMapper
    {
        private CPipeWorkingTimeRange m_dateTimeRange;
        
        private int m_iMinRange = 0;
        private int m_iMaxRange = 100;

        public CNormalProgress2DateTimeMapper(DateTime startTime, DateTime endTime)
        {
            m_dateTimeRange = new CPipeWorkingTimeRange(startTime, endTime);
            UpdateRange();
        }

        public DateTime StartTime
        {
            get { return m_dateTimeRange.StartTime; }
        }

        public DateTime Endtime
        {
            get { return m_dateTimeRange.EndTime; }
        }

        private void UpdateRange()
        {
            // Set Range for the track bar
            // This logic is stated as below
            // If the total seconds of timespan is large than int.MaxValue, the int.MaxValue is used as the maximum range
            // If the total seconds of timespan is small than int.MaxValue, the total seconds will be used as the maximum range

            int[] trackRange = { 0, int.MaxValue };

            TimeSpan timeDuration = (Endtime - StartTime);
            double totalSeconds = timeDuration.TotalSeconds;

            if (totalSeconds > int.MaxValue)
            {
                trackRange[1] = int.MaxValue;
            }
            else
            {
                trackRange[1] = (int)totalSeconds;
            }
            if (trackRange[1] <= 0)
            {
                trackRange[1] = 100;
            }

            m_iMinRange = trackRange[0];
            m_iMaxRange = trackRange[1];
        }

        #region IProgress2DateTimeMapper members

        public int GetMinimumRange()
        {
            return m_iMinRange;
        }

        public int GetMaximumRange()
        {
            return m_iMaxRange;
        }

        public DateTime GetDateTime(int iPos)
        {
            if (iPos > GetMaximumRange() || iPos < GetMinimumRange())
            {
                string errorString = string.Format("Position {0} is out of range[{1}, {2}]", iPos, GetMinimumRange(), GetMaximumRange());
                throw new ArgumentOutOfRangeException(errorString);
            }

            DateTime specificTime;
            double linearValue = 1.0 * (iPos - GetMinimumRange()) / (GetMaximumRange() - GetMinimumRange());
            double intelopValue = (Endtime - StartTime).Ticks * linearValue;
            specificTime = StartTime + new TimeSpan((long)(intelopValue));

            return specificTime;
        }

        public int GetPosition(DateTime dateTime)
        {
            if (dateTime.CompareTo(Endtime) > 0 || dateTime.CompareTo(StartTime) < 0)
            {
                string errorString = string.Format("DateTime {0} is out of range[{1}, {2}]", dateTime, StartTime, Endtime);
                throw new ArgumentOutOfRangeException(errorString);
            }

            double intelopValue = 1.0 * (dateTime - StartTime).Ticks / (Endtime - StartTime).Ticks;
            double linearValue = intelopValue * (GetMaximumRange() - GetMinimumRange()) + GetMinimumRange();

            int iPos = (int)linearValue;
            return iPos;
        }

        #endregion
    }

    /// <summary>
    /// This derived class is a implementation that removed all unused date time. A new implementation
    /// </summary>
    public class CRemoveUnusedDateTimerMapper : IProgress2DateTimeMapper
    {
        private CPipeWorkingRanges m_pipeWorkingRanges = null;
        private int m_iMinRange = 0;
        private int m_iMaxRange = 100;
        private double m_dSecondsPerStep = 1;

        public CRemoveUnusedDateTimerMapper(CPipeWorkingRanges pipeWorkingRanges)
        {
            m_pipeWorkingRanges = pipeWorkingRanges;
            UpdateRange();
        }

        public CPipeWorkingRanges WorkingRanges
        {
            get { return m_pipeWorkingRanges; }
        }

        #region IProgress2DateTimeMapper Members

        public int GetMinimumRange()
        {
            return m_iMinRange;
        }

        public int GetMaximumRange()
        {
            return m_iMaxRange;
        }

        public DateTime GetDateTime(int iPos)
        {
            if (iPos > GetMaximumRange() || iPos < GetMinimumRange())
            {
                throw new ArgumentOutOfRangeException();
            }
            
            double dSeconds = (iPos - GetMinimumRange()) * m_dSecondsPerStep;

            double dTotalSecondsPassed = 0;
            for (int i = 0; i < m_pipeWorkingRanges.Count; ++i)
            {
                CPipeWorkingTimeRange range = m_pipeWorkingRanges[i];

                // The pos is in this range
                if (dTotalSecondsPassed <= dSeconds && (dTotalSecondsPassed + range.GetTimeTotalSeconds() >= dSeconds))
                {
                    return range.StartTime + new TimeSpan((int)(dSeconds - dTotalSecondsPassed) * TimeSpan.TicksPerSecond);
                }
                else
                {
                    dTotalSecondsPassed += range.GetTimeTotalSeconds();
                }
            }

            // Should not reach here
            throw new ArithmeticException();
        }

        public int GetPosition(DateTime dateTime)
        {
            int iPosPassed = 0;
            for (int i = 0; i < m_pipeWorkingRanges.Count; ++i)
            {
                CPipeWorkingTimeRange range = m_pipeWorkingRanges[i];

                // The date time is in this range
                if (dateTime.CompareTo(range.StartTime) >= 0 && dateTime.CompareTo(range.EndTime) <= 0)
                {
                    return iPosPassed + (int)((dateTime - range.StartTime).TotalSeconds / m_dSecondsPerStep);
                }
                else
                {
                    iPosPassed += (int)(range.GetTimeTotalSeconds() / m_dSecondsPerStep);
                }
            }

            throw new ArgumentOutOfRangeException();
        }

        #endregion

        private void UpdateRange()
        {
            double dTotalSeconds = GetTotalSeconds();
            m_iMinRange = 0;

            if (dTotalSeconds > int.MaxValue)
            {
                m_iMaxRange = int.MaxValue;
            }
            else
            {
                m_iMaxRange = (int)dTotalSeconds;
            }
            if (m_iMaxRange <= 0)
            {
                m_iMaxRange = 100;
            }

            m_dSecondsPerStep = dTotalSeconds / (m_iMaxRange - m_iMinRange);
        }

        private double GetTotalSeconds()
        {
            // Get total seconds
            double dTotalSeconds = 0;
            foreach (CPipeWorkingTimeRange range in m_pipeWorkingRanges)
            {
                dTotalSeconds += range.GetTimeTotalSeconds();
            }

            return dTotalSeconds;
        }

        private double GetTimeStep()
        {
            return GetTotalSeconds() / (m_iMaxRange - m_iMinRange);
        }
    }


    /// <summary>
    /// This class acts a manager of the Progress to date time mappers
    /// </summary>
    public class CPipeProgressController
    {
        private IDictionary<int, IProgress2DateTimeMapper> m_listProgress2DateTimeMapper = new Dictionary<int, IProgress2DateTimeMapper>();

        public CPipeProgressController()
        {
            Initialize();
        }

        private void Initialize()
        {
            int iPipeId = 0;
            foreach (CPipeModel pipeModel in IApp.theApp.DataModel.PipeModels)
            {
                iPipeId++;

                if (pipeModel.PipeWorkingRanges == null) continue;

                // Insert to Idictionary
                if (!m_listProgress2DateTimeMapper.ContainsKey(iPipeId))
                {
                    m_listProgress2DateTimeMapper[iPipeId] = new CRemoveUnusedDateTimerMapper(pipeModel.PipeWorkingRanges);
                }
            }
        }

        public IProgress2DateTimeMapper GetMapper(int iIndex)
        {
            if (m_listProgress2DateTimeMapper.ContainsKey(iIndex))
            {
                return m_listProgress2DateTimeMapper[iIndex];
            }

            IHistoryDataQuery dataQuery = IApp.theApp.HistoryTimeDataQuery;
            if (dataQuery != null && dataQuery.IsConnected)
            {
                try
                {
                    // Query the time
                    DateTime beginingTime = DateTime.Now;
                    DateTime endTime = DateTime.Now;

                    if (iIndex == 0) // View all pipes
                    {
                        CPipeWorkingRanges workingRanges = new CPipeWorkingRanges();

                        int pipeModelCount = IApp.theApp.DataModel.PipeModels.Count;
                        for (int i = pipeModelCount; i > 0; --i)
                        {
                            if (dataQuery.IsPipeStarted(i))
                            {
                                beginingTime = dataQuery.GetPipeStartTime(i, true);
                                endTime = dataQuery.GetPipeEndTime(i, true);

                                for (int j = 1; j < i; ++j)
                                {
                                    if (m_listProgress2DateTimeMapper.ContainsKey(j))
                                    {
                                        CRemoveUnusedDateTimerMapper mapper = m_listProgress2DateTimeMapper[j] as CRemoveUnusedDateTimerMapper;
                                        if (mapper != null)
                                        {
                                            workingRanges.AddRange(mapper.WorkingRanges);
                                            continue;
                                        }
                                    }

                                    // Get the start and end time
                                    CPipeWorkingTimeRange workingRange = new CPipeWorkingTimeRange(dataQuery.GetPipeStartTime(j, true),
                                    dataQuery.GetPipeEndTime(j, true));

                                    workingRanges.Add(workingRange);
                                }

                                // Add a working time range for this pipe
                                workingRanges.Add(new CPipeWorkingTimeRange(beginingTime, endTime));

                                // Construct a CRemoveUnusedDateTimerMapper for iIndex = 0 (the view all pipes option)
                                CRemoveUnusedDateTimerMapper removeUnusedDateTimerMapper = new CRemoveUnusedDateTimerMapper(workingRanges);
                                m_listProgress2DateTimeMapper[iIndex] = removeUnusedDateTimerMapper;
                                return removeUnusedDateTimerMapper;
                            }
                        }
                    }
                    else
                    {
                        //// View specific pipe and Get all count
                        //trackRange[1] = (int)dataQuery.GetPipeRecordCount(iSelectedIndex); // iSelectedIndex should start from 1

                        // Get the beginning time
                        beginingTime = dataQuery.GetPipeStartTime(iIndex, true);

                        // Get the end time
                        endTime = dataQuery.GetPipeEndTime(iIndex, true);
                    }

                    // Construct the mapper
                    CNormalProgress2DateTimeMapper normalProgress2DateTimeMapper = new CNormalProgress2DateTimeMapper(beginingTime, endTime);
                    m_listProgress2DateTimeMapper[iIndex] = normalProgress2DateTimeMapper;
                    return normalProgress2DateTimeMapper;
                }
                catch (Exception ex)
                {
                    string errMsg = ex.Message + "\n" + ex.StackTrace;
                    vtk.vtkOutputWindow.GetInstance().DisplayErrorText(errMsg);
                }
            }

            return null;
        }
    }
}