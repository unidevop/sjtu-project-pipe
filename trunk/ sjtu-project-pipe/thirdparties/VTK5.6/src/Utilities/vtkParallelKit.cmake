# Directory containing class headers.
SET(VTK_PARALLEL_HEADER_DIR "M:/thirdparties/VTK5.6/src/Parallel")

# Classes in vtkParallel.
SET(VTK_PARALLEL_CLASSES
  "vtkBranchExtentTranslator"
  "vtkCachingInterpolatedVelocityField"
  "vtkCollectGraph"
  "vtkCollectPolyData"
  "vtkCollectTable"
  "vtkCommunicator"
  "vtkCompositer"
  "vtkCompressCompositer"
  "vtkCutMaterial"
  "vtkDistributedDataFilter"
  "vtkDistributedStreamTracer"
  "vtkDummyCommunicator"
  "vtkDummyController"
  "vtkDuplicatePolyData"
  "vtkEnSightWriter"
  "vtkExtractCTHPart"
  "vtkExtractPiece"
  "vtkExtractPolyDataPiece"
  "vtkExtractUnstructuredGridPiece"
  "vtkExtractUserDefinedPiece"
  "vtkMPIImageReader"
  "vtkMultiProcessController"
  "vtkMultiProcessStream"
  "vtkParallelFactory"
  "vtkPassThroughFilter"
  "vtkPCellDataToPointData"
  "vtkPChacoReader"
  "vtkPCosmoHaloFinder"
  "vtkPCosmoReader"
  "vtkPDataSetReader"
  "vtkPDataSetWriter"
  "vtkPExtractArraysOverTime"
  "vtkPieceRequestFilter"
  "vtkPieceScalars"
  "vtkPKdTree"
  "vtkPLinearExtrusionFilter"
  "vtkPNrrdReader"
  "vtkPOPReader"
  "vtkPOpenFOAMReader"
  "vtkPOutlineCornerFilter"
  "vtkPOutlineFilter"
  "vtkPPolyDataNormals"
  "vtkPProbeFilter"
  "vtkProcess"
  "vtkProcessGroup"
  "vtkProcessIdScalars"
  "vtkPReflectionFilter"
  "vtkPSLACReader"
  "vtkPSphereSource"
  "vtkPStreamTracer"
  "vtkPTableToStructuredGrid"
  "vtkRectilinearGridOutlineFilter"
  "vtkSocketCommunicator"
  "vtkSocketController"
  "vtkSubCommunicator"
  "vtkSubGroup"
  "vtkTemporalFractal"
  "vtkTemporalInterpolatedVelocityField"
  "vtkTemporalStreamTracer"
  "vtkTransmitImageDataPiece"
  "vtkTransmitPolyDataPiece"
  "vtkTransmitRectilinearGridPiece"
  "vtkTransmitStructuredGridPiece"
  "vtkTransmitUnstructuredGridPiece"
  "vtkVPICReader"
  "vtkWindBladeReader"
  "vtkXMLPHierarchicalBoxDataWriter"
  "vtkXMLPMultiBlockDataWriter"
  "vtkCompositeRenderManager"
  "vtkImageRenderManager"
  "vtkMemoryLimitImageDataStreamer"
  "vtkPipelineSize"
  "vtkParallelRenderManager"
  "vtkPImageWriter"
  "vtkTreeCompositer"
  "vtkCompositeRGBAPass"
  "vtkCompositeZPass"
  "vtkExodusIIWriter")

# Abstract classes in vtkParallel.
SET(VTK_PARALLEL_CLASSES_ABSTRACT
  "vtkCommunicator"
  "vtkMultiProcessController"
  "vtkMultiProcessStream"
  "vtkProcess"
  "vtkPStreamTracer"
  "vtkParallelRenderManager")

# Wrap-exclude classes in vtkParallel.
SET(VTK_PARALLEL_CLASSES_WRAP_EXCLUDE
  "vtkMultiProcessStream"
  "vtkCompositeRGBAPass"
  "vtkCompositeZPass")

# Set convenient variables to test each class.
FOREACH(class ${VTK_PARALLEL_CLASSES})
  SET(VTK_CLASS_EXISTS_${class} 1)
ENDFOREACH(class)
FOREACH(class ${VTK_PARALLEL_CLASSES_ABSTRACT})
  SET(VTK_CLASS_ABSTRACT_${class} 1)
ENDFOREACH(class)
FOREACH(class ${VTK_PARALLEL_CLASSES_WRAP_EXCLUDE})
  SET(VTK_CLASS_WRAP_EXCLUDE_${class} 1)
ENDFOREACH(class)
