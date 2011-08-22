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
            public static string TopNode { get { return "F3B9B22A-F14F-4755-B77C-92CB8B39C61A"; } }

            // The 1st pipe group
            public static string GUANDUAN_1 { get { return "C9B5EEF0-0188-4C44-8186-6A0E8195B96E"; } }
            public static string TAJIA_1 { get { return "5917AA40-2FD6-4664-BC4F-DBACBA9D09A3"; } }
            public static string DIANPIAN_1 { get { return "62CC5EBB-4992-4173-A408-B8B3F90578F8"; } }

            // The 2nd pipe group
            public static string GUANDUAN_2 { get { return "66DDCDF5-811A-4B17-9DF2-D7212D7679AA"; } }
            public static string TAJIA_2 { get { return "091F682D-17E2-482F-B24F-6261FA7D8744"; } }
            public static string DIANPIAN_2 { get { return "447AA3F5-4A64-4B1C-AD78-0C26B6B3461D"; } }

            // The 3rd pipe group
            public static string GUANDUAN_3 { get { return "96237F5E-7996-44C8-ACF8-68442672658D"; } }
            public static string TAJIA_3 { get { return "CE033E69-AD51-46BD-A070-B1F5559E3437"; } }
            public static string DIANPIAN_3 { get { return "C071BE7E-DA53-4C10-AB00-79E4E66BE283"; } }

            // The 4th pipe group
            public static string GUANDUAN_4 { get { return "CDA592C9-7516-4273-B642-48AB021FD374"; } }
            public static string TAJIA_4 { get { return "FB76AEAA-4449-4CA0-AAD5-0C39BE469CFD"; } }
            public static string DIANPIAN_4 { get { return "9EE1B9A9-CE9A-41A6-B8DF-34D42E03F300"; } }

            // So far, we only support 4 pipes
            // In order to support the extensible application, how about read this file from file?
        }

        /// <summary>
        /// This class is used to define the xml nodes and attributes name.
        /// The strings used in this class should *NOT* be localized.
        /// </summary>
        public static class ModelXMLDefinition
        {
            public static string RootNode { get { return "System"; } }
            public static string PipeGroup { get { return "Pipes"; } }
            public static string Pipe { get { return "Pipe"; } }
            public static string Pylon { get { return "Pylon"; } }
            public static string Model { get { return "Model"; } }

            public static string modelPath { get { return "ModelPath"; } }

            //Pipe Parameters
            public static string pipeLength { get { return "Length"; } }
            public static string pipeWidth { get { return "Width"; } }
            public static string pipeHeight { get { return "Height"; } }

            // Pylon Parameters
            public static string pylonHeight { get { return "Height"; } }
            public static string d { get { return "d"; } }
            public static string t { get { return "t"; } }
        }
    }
}