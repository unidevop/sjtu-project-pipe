#include "vtkParallelInstantiator.h"
  
extern vtkObject* vtkInstantiatorvtkBranchExtentTranslatorNew();
extern vtkObject* vtkInstantiatorvtkCachingInterpolatedVelocityFieldNew();
extern vtkObject* vtkInstantiatorvtkCollectGraphNew();
extern vtkObject* vtkInstantiatorvtkCollectPolyDataNew();
extern vtkObject* vtkInstantiatorvtkCollectTableNew();
extern vtkObject* vtkInstantiatorvtkCompositerNew();
extern vtkObject* vtkInstantiatorvtkCompressCompositerNew();
extern vtkObject* vtkInstantiatorvtkCutMaterialNew();
extern vtkObject* vtkInstantiatorvtkDistributedDataFilterNew();
extern vtkObject* vtkInstantiatorvtkDistributedStreamTracerNew();
extern vtkObject* vtkInstantiatorvtkDummyCommunicatorNew();
extern vtkObject* vtkInstantiatorvtkDummyControllerNew();
extern vtkObject* vtkInstantiatorvtkDuplicatePolyDataNew();
extern vtkObject* vtkInstantiatorvtkEnSightWriterNew();
extern vtkObject* vtkInstantiatorvtkExtractCTHPartNew();
extern vtkObject* vtkInstantiatorvtkExtractPieceNew();
extern vtkObject* vtkInstantiatorvtkExtractPolyDataPieceNew();
extern vtkObject* vtkInstantiatorvtkExtractUnstructuredGridPieceNew();
extern vtkObject* vtkInstantiatorvtkExtractUserDefinedPieceNew();
extern vtkObject* vtkInstantiatorvtkMPIImageReaderNew();
extern vtkObject* vtkInstantiatorvtkParallelFactoryNew();
extern vtkObject* vtkInstantiatorvtkPassThroughFilterNew();
extern vtkObject* vtkInstantiatorvtkPCellDataToPointDataNew();
extern vtkObject* vtkInstantiatorvtkPChacoReaderNew();
extern vtkObject* vtkInstantiatorvtkPCosmoHaloFinderNew();
extern vtkObject* vtkInstantiatorvtkPCosmoReaderNew();
extern vtkObject* vtkInstantiatorvtkPDataSetReaderNew();
extern vtkObject* vtkInstantiatorvtkPDataSetWriterNew();
extern vtkObject* vtkInstantiatorvtkPExtractArraysOverTimeNew();
extern vtkObject* vtkInstantiatorvtkPieceRequestFilterNew();
extern vtkObject* vtkInstantiatorvtkPieceScalarsNew();
extern vtkObject* vtkInstantiatorvtkPKdTreeNew();
extern vtkObject* vtkInstantiatorvtkPLinearExtrusionFilterNew();
extern vtkObject* vtkInstantiatorvtkPNrrdReaderNew();
extern vtkObject* vtkInstantiatorvtkPOPReaderNew();
extern vtkObject* vtkInstantiatorvtkPOpenFOAMReaderNew();
extern vtkObject* vtkInstantiatorvtkPOutlineCornerFilterNew();
extern vtkObject* vtkInstantiatorvtkPOutlineFilterNew();
extern vtkObject* vtkInstantiatorvtkPPolyDataNormalsNew();
extern vtkObject* vtkInstantiatorvtkPProbeFilterNew();
extern vtkObject* vtkInstantiatorvtkProcessGroupNew();
extern vtkObject* vtkInstantiatorvtkProcessIdScalarsNew();
extern vtkObject* vtkInstantiatorvtkPReflectionFilterNew();
extern vtkObject* vtkInstantiatorvtkPSLACReaderNew();
extern vtkObject* vtkInstantiatorvtkPSphereSourceNew();
extern vtkObject* vtkInstantiatorvtkPTableToStructuredGridNew();
extern vtkObject* vtkInstantiatorvtkRectilinearGridOutlineFilterNew();
extern vtkObject* vtkInstantiatorvtkSocketCommunicatorNew();
extern vtkObject* vtkInstantiatorvtkSocketControllerNew();
extern vtkObject* vtkInstantiatorvtkSubCommunicatorNew();
extern vtkObject* vtkInstantiatorvtkSubGroupNew();
extern vtkObject* vtkInstantiatorvtkTemporalFractalNew();
extern vtkObject* vtkInstantiatorvtkTemporalInterpolatedVelocityFieldNew();
extern vtkObject* vtkInstantiatorvtkTemporalStreamTracerNew();
extern vtkObject* vtkInstantiatorvtkTransmitImageDataPieceNew();
extern vtkObject* vtkInstantiatorvtkTransmitPolyDataPieceNew();
extern vtkObject* vtkInstantiatorvtkTransmitRectilinearGridPieceNew();
extern vtkObject* vtkInstantiatorvtkTransmitStructuredGridPieceNew();
extern vtkObject* vtkInstantiatorvtkTransmitUnstructuredGridPieceNew();
extern vtkObject* vtkInstantiatorvtkVPICReaderNew();
extern vtkObject* vtkInstantiatorvtkWindBladeReaderNew();
extern vtkObject* vtkInstantiatorvtkXMLPHierarchicalBoxDataWriterNew();
extern vtkObject* vtkInstantiatorvtkXMLPMultiBlockDataWriterNew();
extern vtkObject* vtkInstantiatorvtkCompositeRenderManagerNew();
extern vtkObject* vtkInstantiatorvtkImageRenderManagerNew();
extern vtkObject* vtkInstantiatorvtkMemoryLimitImageDataStreamerNew();
extern vtkObject* vtkInstantiatorvtkPipelineSizeNew();
extern vtkObject* vtkInstantiatorvtkPImageWriterNew();
extern vtkObject* vtkInstantiatorvtkTreeCompositerNew();
extern vtkObject* vtkInstantiatorvtkExodusIIWriterNew();


  
void vtkParallelInstantiator::ClassInitialize()
{
  
  vtkInstantiator::RegisterInstantiator("vtkBranchExtentTranslator", vtkInstantiatorvtkBranchExtentTranslatorNew);
  vtkInstantiator::RegisterInstantiator("vtkCachingInterpolatedVelocityField", vtkInstantiatorvtkCachingInterpolatedVelocityFieldNew);
  vtkInstantiator::RegisterInstantiator("vtkCollectGraph", vtkInstantiatorvtkCollectGraphNew);
  vtkInstantiator::RegisterInstantiator("vtkCollectPolyData", vtkInstantiatorvtkCollectPolyDataNew);
  vtkInstantiator::RegisterInstantiator("vtkCollectTable", vtkInstantiatorvtkCollectTableNew);
  vtkInstantiator::RegisterInstantiator("vtkCompositer", vtkInstantiatorvtkCompositerNew);
  vtkInstantiator::RegisterInstantiator("vtkCompressCompositer", vtkInstantiatorvtkCompressCompositerNew);
  vtkInstantiator::RegisterInstantiator("vtkCutMaterial", vtkInstantiatorvtkCutMaterialNew);
  vtkInstantiator::RegisterInstantiator("vtkDistributedDataFilter", vtkInstantiatorvtkDistributedDataFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkDistributedStreamTracer", vtkInstantiatorvtkDistributedStreamTracerNew);
  vtkInstantiator::RegisterInstantiator("vtkDummyCommunicator", vtkInstantiatorvtkDummyCommunicatorNew);
  vtkInstantiator::RegisterInstantiator("vtkDummyController", vtkInstantiatorvtkDummyControllerNew);
  vtkInstantiator::RegisterInstantiator("vtkDuplicatePolyData", vtkInstantiatorvtkDuplicatePolyDataNew);
  vtkInstantiator::RegisterInstantiator("vtkEnSightWriter", vtkInstantiatorvtkEnSightWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkExtractCTHPart", vtkInstantiatorvtkExtractCTHPartNew);
  vtkInstantiator::RegisterInstantiator("vtkExtractPiece", vtkInstantiatorvtkExtractPieceNew);
  vtkInstantiator::RegisterInstantiator("vtkExtractPolyDataPiece", vtkInstantiatorvtkExtractPolyDataPieceNew);
  vtkInstantiator::RegisterInstantiator("vtkExtractUnstructuredGridPiece", vtkInstantiatorvtkExtractUnstructuredGridPieceNew);
  vtkInstantiator::RegisterInstantiator("vtkExtractUserDefinedPiece", vtkInstantiatorvtkExtractUserDefinedPieceNew);
  vtkInstantiator::RegisterInstantiator("vtkMPIImageReader", vtkInstantiatorvtkMPIImageReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkParallelFactory", vtkInstantiatorvtkParallelFactoryNew);
  vtkInstantiator::RegisterInstantiator("vtkPassThroughFilter", vtkInstantiatorvtkPassThroughFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkPCellDataToPointData", vtkInstantiatorvtkPCellDataToPointDataNew);
  vtkInstantiator::RegisterInstantiator("vtkPChacoReader", vtkInstantiatorvtkPChacoReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkPCosmoHaloFinder", vtkInstantiatorvtkPCosmoHaloFinderNew);
  vtkInstantiator::RegisterInstantiator("vtkPCosmoReader", vtkInstantiatorvtkPCosmoReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkPDataSetReader", vtkInstantiatorvtkPDataSetReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkPDataSetWriter", vtkInstantiatorvtkPDataSetWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkPExtractArraysOverTime", vtkInstantiatorvtkPExtractArraysOverTimeNew);
  vtkInstantiator::RegisterInstantiator("vtkPieceRequestFilter", vtkInstantiatorvtkPieceRequestFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkPieceScalars", vtkInstantiatorvtkPieceScalarsNew);
  vtkInstantiator::RegisterInstantiator("vtkPKdTree", vtkInstantiatorvtkPKdTreeNew);
  vtkInstantiator::RegisterInstantiator("vtkPLinearExtrusionFilter", vtkInstantiatorvtkPLinearExtrusionFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkPNrrdReader", vtkInstantiatorvtkPNrrdReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkPOPReader", vtkInstantiatorvtkPOPReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkPOpenFOAMReader", vtkInstantiatorvtkPOpenFOAMReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkPOutlineCornerFilter", vtkInstantiatorvtkPOutlineCornerFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkPOutlineFilter", vtkInstantiatorvtkPOutlineFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkPPolyDataNormals", vtkInstantiatorvtkPPolyDataNormalsNew);
  vtkInstantiator::RegisterInstantiator("vtkPProbeFilter", vtkInstantiatorvtkPProbeFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkProcessGroup", vtkInstantiatorvtkProcessGroupNew);
  vtkInstantiator::RegisterInstantiator("vtkProcessIdScalars", vtkInstantiatorvtkProcessIdScalarsNew);
  vtkInstantiator::RegisterInstantiator("vtkPReflectionFilter", vtkInstantiatorvtkPReflectionFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkPSLACReader", vtkInstantiatorvtkPSLACReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkPSphereSource", vtkInstantiatorvtkPSphereSourceNew);
  vtkInstantiator::RegisterInstantiator("vtkPTableToStructuredGrid", vtkInstantiatorvtkPTableToStructuredGridNew);
  vtkInstantiator::RegisterInstantiator("vtkRectilinearGridOutlineFilter", vtkInstantiatorvtkRectilinearGridOutlineFilterNew);
  vtkInstantiator::RegisterInstantiator("vtkSocketCommunicator", vtkInstantiatorvtkSocketCommunicatorNew);
  vtkInstantiator::RegisterInstantiator("vtkSocketController", vtkInstantiatorvtkSocketControllerNew);
  vtkInstantiator::RegisterInstantiator("vtkSubCommunicator", vtkInstantiatorvtkSubCommunicatorNew);
  vtkInstantiator::RegisterInstantiator("vtkSubGroup", vtkInstantiatorvtkSubGroupNew);
  vtkInstantiator::RegisterInstantiator("vtkTemporalFractal", vtkInstantiatorvtkTemporalFractalNew);
  vtkInstantiator::RegisterInstantiator("vtkTemporalInterpolatedVelocityField", vtkInstantiatorvtkTemporalInterpolatedVelocityFieldNew);
  vtkInstantiator::RegisterInstantiator("vtkTemporalStreamTracer", vtkInstantiatorvtkTemporalStreamTracerNew);
  vtkInstantiator::RegisterInstantiator("vtkTransmitImageDataPiece", vtkInstantiatorvtkTransmitImageDataPieceNew);
  vtkInstantiator::RegisterInstantiator("vtkTransmitPolyDataPiece", vtkInstantiatorvtkTransmitPolyDataPieceNew);
  vtkInstantiator::RegisterInstantiator("vtkTransmitRectilinearGridPiece", vtkInstantiatorvtkTransmitRectilinearGridPieceNew);
  vtkInstantiator::RegisterInstantiator("vtkTransmitStructuredGridPiece", vtkInstantiatorvtkTransmitStructuredGridPieceNew);
  vtkInstantiator::RegisterInstantiator("vtkTransmitUnstructuredGridPiece", vtkInstantiatorvtkTransmitUnstructuredGridPieceNew);
  vtkInstantiator::RegisterInstantiator("vtkVPICReader", vtkInstantiatorvtkVPICReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkWindBladeReader", vtkInstantiatorvtkWindBladeReaderNew);
  vtkInstantiator::RegisterInstantiator("vtkXMLPHierarchicalBoxDataWriter", vtkInstantiatorvtkXMLPHierarchicalBoxDataWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkXMLPMultiBlockDataWriter", vtkInstantiatorvtkXMLPMultiBlockDataWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkCompositeRenderManager", vtkInstantiatorvtkCompositeRenderManagerNew);
  vtkInstantiator::RegisterInstantiator("vtkImageRenderManager", vtkInstantiatorvtkImageRenderManagerNew);
  vtkInstantiator::RegisterInstantiator("vtkMemoryLimitImageDataStreamer", vtkInstantiatorvtkMemoryLimitImageDataStreamerNew);
  vtkInstantiator::RegisterInstantiator("vtkPipelineSize", vtkInstantiatorvtkPipelineSizeNew);
  vtkInstantiator::RegisterInstantiator("vtkPImageWriter", vtkInstantiatorvtkPImageWriterNew);
  vtkInstantiator::RegisterInstantiator("vtkTreeCompositer", vtkInstantiatorvtkTreeCompositerNew);
  vtkInstantiator::RegisterInstantiator("vtkExodusIIWriter", vtkInstantiatorvtkExodusIIWriterNew);

  
}
          
void vtkParallelInstantiator::ClassFinalize()
{ 

  vtkInstantiator::UnRegisterInstantiator("vtkBranchExtentTranslator", vtkInstantiatorvtkBranchExtentTranslatorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCachingInterpolatedVelocityField", vtkInstantiatorvtkCachingInterpolatedVelocityFieldNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCollectGraph", vtkInstantiatorvtkCollectGraphNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCollectPolyData", vtkInstantiatorvtkCollectPolyDataNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCollectTable", vtkInstantiatorvtkCollectTableNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCompositer", vtkInstantiatorvtkCompositerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCompressCompositer", vtkInstantiatorvtkCompressCompositerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCutMaterial", vtkInstantiatorvtkCutMaterialNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDistributedDataFilter", vtkInstantiatorvtkDistributedDataFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDistributedStreamTracer", vtkInstantiatorvtkDistributedStreamTracerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDummyCommunicator", vtkInstantiatorvtkDummyCommunicatorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDummyController", vtkInstantiatorvtkDummyControllerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkDuplicatePolyData", vtkInstantiatorvtkDuplicatePolyDataNew);
  vtkInstantiator::UnRegisterInstantiator("vtkEnSightWriter", vtkInstantiatorvtkEnSightWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkExtractCTHPart", vtkInstantiatorvtkExtractCTHPartNew);
  vtkInstantiator::UnRegisterInstantiator("vtkExtractPiece", vtkInstantiatorvtkExtractPieceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkExtractPolyDataPiece", vtkInstantiatorvtkExtractPolyDataPieceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkExtractUnstructuredGridPiece", vtkInstantiatorvtkExtractUnstructuredGridPieceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkExtractUserDefinedPiece", vtkInstantiatorvtkExtractUserDefinedPieceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMPIImageReader", vtkInstantiatorvtkMPIImageReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkParallelFactory", vtkInstantiatorvtkParallelFactoryNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPassThroughFilter", vtkInstantiatorvtkPassThroughFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPCellDataToPointData", vtkInstantiatorvtkPCellDataToPointDataNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPChacoReader", vtkInstantiatorvtkPChacoReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPCosmoHaloFinder", vtkInstantiatorvtkPCosmoHaloFinderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPCosmoReader", vtkInstantiatorvtkPCosmoReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPDataSetReader", vtkInstantiatorvtkPDataSetReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPDataSetWriter", vtkInstantiatorvtkPDataSetWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPExtractArraysOverTime", vtkInstantiatorvtkPExtractArraysOverTimeNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPieceRequestFilter", vtkInstantiatorvtkPieceRequestFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPieceScalars", vtkInstantiatorvtkPieceScalarsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPKdTree", vtkInstantiatorvtkPKdTreeNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPLinearExtrusionFilter", vtkInstantiatorvtkPLinearExtrusionFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPNrrdReader", vtkInstantiatorvtkPNrrdReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPOPReader", vtkInstantiatorvtkPOPReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPOpenFOAMReader", vtkInstantiatorvtkPOpenFOAMReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPOutlineCornerFilter", vtkInstantiatorvtkPOutlineCornerFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPOutlineFilter", vtkInstantiatorvtkPOutlineFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPPolyDataNormals", vtkInstantiatorvtkPPolyDataNormalsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPProbeFilter", vtkInstantiatorvtkPProbeFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkProcessGroup", vtkInstantiatorvtkProcessGroupNew);
  vtkInstantiator::UnRegisterInstantiator("vtkProcessIdScalars", vtkInstantiatorvtkProcessIdScalarsNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPReflectionFilter", vtkInstantiatorvtkPReflectionFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPSLACReader", vtkInstantiatorvtkPSLACReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPSphereSource", vtkInstantiatorvtkPSphereSourceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPTableToStructuredGrid", vtkInstantiatorvtkPTableToStructuredGridNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRectilinearGridOutlineFilter", vtkInstantiatorvtkRectilinearGridOutlineFilterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSocketCommunicator", vtkInstantiatorvtkSocketCommunicatorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSocketController", vtkInstantiatorvtkSocketControllerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSubCommunicator", vtkInstantiatorvtkSubCommunicatorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSubGroup", vtkInstantiatorvtkSubGroupNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTemporalFractal", vtkInstantiatorvtkTemporalFractalNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTemporalInterpolatedVelocityField", vtkInstantiatorvtkTemporalInterpolatedVelocityFieldNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTemporalStreamTracer", vtkInstantiatorvtkTemporalStreamTracerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTransmitImageDataPiece", vtkInstantiatorvtkTransmitImageDataPieceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTransmitPolyDataPiece", vtkInstantiatorvtkTransmitPolyDataPieceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTransmitRectilinearGridPiece", vtkInstantiatorvtkTransmitRectilinearGridPieceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTransmitStructuredGridPiece", vtkInstantiatorvtkTransmitStructuredGridPieceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTransmitUnstructuredGridPiece", vtkInstantiatorvtkTransmitUnstructuredGridPieceNew);
  vtkInstantiator::UnRegisterInstantiator("vtkVPICReader", vtkInstantiatorvtkVPICReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkWindBladeReader", vtkInstantiatorvtkWindBladeReaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkXMLPHierarchicalBoxDataWriter", vtkInstantiatorvtkXMLPHierarchicalBoxDataWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkXMLPMultiBlockDataWriter", vtkInstantiatorvtkXMLPMultiBlockDataWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkCompositeRenderManager", vtkInstantiatorvtkCompositeRenderManagerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkImageRenderManager", vtkInstantiatorvtkImageRenderManagerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkMemoryLimitImageDataStreamer", vtkInstantiatorvtkMemoryLimitImageDataStreamerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPipelineSize", vtkInstantiatorvtkPipelineSizeNew);
  vtkInstantiator::UnRegisterInstantiator("vtkPImageWriter", vtkInstantiatorvtkPImageWriterNew);
  vtkInstantiator::UnRegisterInstantiator("vtkTreeCompositer", vtkInstantiatorvtkTreeCompositerNew);
  vtkInstantiator::UnRegisterInstantiator("vtkExodusIIWriter", vtkInstantiatorvtkExodusIIWriterNew);

  
}

vtkParallelInstantiator::vtkParallelInstantiator()
{
  if(++vtkParallelInstantiator::Count == 1)
    { 
    vtkParallelInstantiator::ClassInitialize(); 
    }
}

vtkParallelInstantiator::~vtkParallelInstantiator()
{
  if(--vtkParallelInstantiator::Count == 0)
    { 
    vtkParallelInstantiator::ClassFinalize(); 
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkParallelInstantiator::Count;
