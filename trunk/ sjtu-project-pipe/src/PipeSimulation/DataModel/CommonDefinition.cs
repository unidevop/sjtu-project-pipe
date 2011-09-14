using System;

namespace PipeSimulation
{
    namespace DataModel
    {
        /// <summary>
        /// This class is used to define the id for the models in this scene
        /// This id should be exactly the same as we define in the xml file.
        /// </summary>
        public static class ModelIdDefinition
        {
            public static string TopNode { get { return /*MSG0*/"F3B9B22A-F14F-4755-B77C-92CB8B39C61A"; } }

            // The 1st pipe group
            public static string GUANDUAN_1 { get { return /*MSG0*/"C9B5EEF0-0188-4C44-8186-6A0E8195B96E"; } }
            public static string TAJIA_1 { get { return /*MSG0*/"5917AA40-2FD6-4664-BC4F-DBACBA9D09A3"; } }
            public static string DIANPIAN_1 { get { return /*MSG0*/"62CC5EBB-4992-4173-A408-B8B3F90578F8"; } }

            // The 2nd pipe group
            public static string GUANDUAN_2 { get { return /*MSG0*/"66DDCDF5-811A-4B17-9DF2-D7212D7679AA"; } }
            public static string TAJIA_2 { get { return /*MSG0*/"091F682D-17E2-482F-B24F-6261FA7D8744"; } }
            public static string DIANPIAN_2 { get { return /*MSG0*/"447AA3F5-4A64-4B1C-AD78-0C26B6B3461D"; } }

            // The 3rd pipe group
            public static string GUANDUAN_3 { get { return /*MSG0*/"96237F5E-7996-44C8-ACF8-68442672658D"; } }
            public static string TAJIA_3 { get { return /*MSG0*/"CE033E69-AD51-46BD-A070-B1F5559E3437"; } }
            public static string DIANPIAN_3 { get { return /*MSG0*/"C071BE7E-DA53-4C10-AB00-79E4E66BE283"; } }

            // The 4th pipe group
            public static string GUANDUAN_4 { get { return /*MSG0*/"CDA592C9-7516-4273-B642-48AB021FD374"; } }
            public static string TAJIA_4 { get { return /*MSG0*/"FB76AEAA-4449-4CA0-AAD5-0C39BE469CFD"; } }
            public static string DIANPIAN_4 { get { return /*MSG0*/"9EE1B9A9-CE9A-41A6-B8DF-34D42E03F300"; } }

            // So far, we only support 4 pipes
            // In order to support the extensible application, how about read this file from file?
        }

        /// <summary>
        /// This class is used to define the xml nodes and attributes name.
        /// The strings used in this class should *NOT* be localized.
        /// </summary>
        public static class ModelXMLDefinition
        {
            public static string RootNode { get { return /*MSG0*/"System"; } }
            public static string PipeGroup { get { return /*MSG0*/"Pipes"; } }
            public static string Pipe { get { return /*MSG0*/"Pipe"; } }
            public static string Pylon { get { return /*MSG0*/"Pylon"; } }
            public static string Model { get { return /*MSG0*/"Model"; } }

            public static string modelPath { get { return /*MSG0*/"ModelPath"; } }

            //Pipe Parameters
            public static string pipeLength { get { return /*MSG0*/"Length"; } }
            public static string pipeWidth { get { return /*MSG0*/"Width"; } }
            public static string pipeHeight { get { return /*MSG0*/"Height"; } }
            public static string pipeConnectionPointPair { get { return /*MSG0*/"ConnectionPointPair"; } }
            public static string pipeStartConnPoint { get { return /*MSG0*/"StartConnectionPoint"; } }
            public static string pipeEndConnPoint { get { return /*MSG0*/"EndConnectionPoint"; } }
            public static string pipeCoordX { get { return /*MSG0*/"x"; } }
            public static string pipeCoordY { get { return /*MSG0*/"y"; } }
            public static string pipeCoordZ { get { return /*MSG0*/"z"; } }
            public static string pipeGPSUCS { get { return /*MSG0*/"GPSUCS"; } }
            public static string pipeUCSOrigin { get { return /*MSG0*/"Origin"; } }
            public static string pipeUCSXAxis { get { return /*MSG0*/"XAxis"; } }
            public static string pipeUCSYAxis { get { return /*MSG0*/"YAxis"; } }
            public static string pipeModelingUCS { get { return /*MSG0*/"ModelingUCS"; } }
            public static string pipeModelingUnitToMeter { get { return /*MSG0*/"ModelingUnitToMeter"; } }
            public static string pipeGPSUnitToMeter { get { return /*MSG0*/"GPSUnitToMeter"; } }

            // Pylon Parameters
            public static string pylonHeight { get { return /*MSG0*/"Height"; } }
            public static string d { get { return /*MSG0*/"d"; } }
            public static string t { get { return /*MSG0*/"t"; } }
        }
    }
}