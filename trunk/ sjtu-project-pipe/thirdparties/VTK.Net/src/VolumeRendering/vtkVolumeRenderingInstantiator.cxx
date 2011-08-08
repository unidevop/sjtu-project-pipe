#include "vtkVolumeRenderingInstantiator.h"
  
extern vtkObject* vtkInstantiatorvtkEncodedGradientShaderNew();
extern vtkObject* vtkInstantiatorvtkFiniteDifferenceGradientEstimatorNew();
extern vtkObject* vtkInstantiatorvtkFixedPointRayCastImageNew();
extern vtkObject* vtkInstantiatorvtkFixedPointVolumeRayCastCompositeGOHelperNew();
extern vtkObject* vtkInstantiatorvtkFixedPointVolumeRayCastCompositeGOShadeHelperNew();
extern vtkObject* vtkInstantiatorvtkFixedPointVolumeRayCastCompositeHelperNew();
extern vtkObject* vtkInstantiatorvtkFixedPointVolumeRayCastCompositeShadeHelperNew();
extern vtkObject* vtkInstantiatorvtkFixedPointVolumeRayCastMIPHelperNew();
extern vtkObject* vtkInstantiatorvtkFixedPointVolumeRayCastMapperNew();
extern vtkObject* vtkInstantiatorvtkProjectedTetrahedraMapperNew();
extern vtkObject* vtkInstantiatorvtkRecursiveSphereDirectionEncoderNew();
extern vtkObject* vtkInstantiatorvtkSphericalDirectionEncoderNew();
extern vtkObject* vtkInstantiatorvtkVolumeRayCastCompositeFunctionNew();
extern vtkObject* vtkInstantiatorvtkVolumeRayCastIsosurfaceFunctionNew();
extern vtkObject* vtkInstantiatorvtkVolumeRayCastMIPFunctionNew();
extern vtkObject* vtkInstantiatorvtkVolumeRayCastMapperNew();
extern vtkObject* vtkInstantiatorvtkVolumeRenderingFactoryNew();
extern vtkObject* vtkInstantiatorvtkVolumeTextureMapper2DNew();
extern vtkObject* vtkInstantiatorvtkVolumeTextureMapper3DNew();
extern vtkObject* vtkInstantiatorvtkUnstructuredGridBunykRayCastFunctionNew();
extern vtkObject* vtkInstantiatorvtkUnstructuredGridHomogeneousRayIntegratorNew();
extern vtkObject* vtkInstantiatorvtkUnstructuredGridLinearRayIntegratorNew();
extern vtkObject* vtkInstantiatorvtkUnstructuredGridPartialPreIntegrationNew();
extern vtkObject* vtkInstantiatorvtkUnstructuredGridPreIntegrationNew();
extern vtkObject* vtkInstantiatorvtkUnstructuredGridVolumeRayCastMapperNew();
extern vtkObject* vtkInstantiatorvtkUnstructuredGridVolumeZSweepMapperNew();
extern vtkObject* vtkInstantiatorvtkOpenGLRayCastImageDisplayHelperNew();
extern vtkObject* vtkInstantiatorvtkOpenGLVolumeTextureMapper2DNew();
extern vtkObject* vtkInstantiatorvtkOpenGLVolumeTextureMapper3DNew();


  
void vtkVolumeRenderingInstantiator::ClassInitialize()
{
  
  vtkInstantiator::RegisterInstantiator("vtkEncodedGradientShader", vtkInstantiatorvtkEncodedGradientShaderNew);
  vtkInstantiator::RegisterInstantiator("vtkFiniteDifferenceGradientEstimator", vtkInstantiatorvtkFiniteDifferenceGradientEstimatorNew);
  vtkInstantiator::RegisterInstantiator("vtkFixedPointRayCastImage", vtkInstantiatorvtkFixedPointRayCastImageNew);
  vtkInstantiator::RegisterInstantiator("vtkFixedPointVolumeRayCastCompositeGOHelper", vtkInstantiatorvtkFixedPointVolumeRayCastCompositeGOHelperNew);
  vtkInstantiator::RegisterInstantiator("vtkFixedPointVolumeRayCastCompositeGOShadeHelper", vtkInstantiatorvtkFixedPointVolumeRayCastCompositeGOShadeHelperNew);
  vtkInstantiator::RegisterInstantiator("vtkFixedPointVolumeRayCastCompositeHelper", vtkInstantiatorvtkFixedPointVolumeRayCastCompositeHelperNew);
  vtkInstantiator::RegisterInstantiator("vtkFixedPointVolumeRayCastCompositeShadeHelper", vtkInstantiatorvtkFixedPointVolumeRayCastCompositeShadeHelperNew);
  vtkInstantiator::RegisterInstantiator("vtkFixedPointVolumeRayCastMIPHelper", vtkInstantiatorvtkFixedPointVolumeRayCastMIPHelperNew);
  vtkInstantiator::RegisterInstantiator("vtkFixedPointVolumeRayCastMapper", vtkInstantiatorvtkFixedPointVolumeRayCastMapperNew);
  vtkInstantiator::RegisterInstantiator("vtkProjectedTetrahedraMapper", vtkInstantiatorvtkProjectedTetrahedraMapperNew);
  vtkInstantiator::RegisterInstantiator("vtkRecursiveSphereDirectionEncoder", vtkInstantiatorvtkRecursiveSphereDirectionEncoderNew);
  vtkInstantiator::RegisterInstantiator("vtkSphericalDirectionEncoder", vtkInstantiatorvtkSphericalDirectionEncoderNew);
  vtkInstantiator::RegisterInstantiator("vtkVolumeRayCastCompositeFunction", vtkInstantiatorvtkVolumeRayCastCompositeFunctionNew);
  vtkInstantiator::RegisterInstantiator("vtkVolumeRayCastIsosurfaceFunction", vtkInstantiatorvtkVolumeRayCastIsosurfaceFunctionNew);
  vtkInstantiator::RegisterInstantiator("vtkVolumeRayCastMIPFunction", vtkInstantiatorvtkVolumeRayCastMIPFunctionNew);
  vtkInstantiator::RegisterInstantiator("vtkVolumeRayCastMapper", vtkInstantiatorvtkVolumeRayCastMapperNew);
  vtkInstantiator::RegisterInstantiator("vtkVolumeRenderingFactory", vtkInstantiatorvtkVolumeRenderingFactoryNew);
  vtkInstantiator::RegisterInstantiator("vtkVolumeTextureMapper2D", vtkInstantiatorvtkVolumeTextureMapper2DNew);
  vtkInstantiator::RegisterInstantiator("vtkVolumeTextureMapper3D", vtkInstantiatorvtkVolumeTextureMapper3DNew);
  vtkInstantiator::RegisterInstantiator("vtkUnstructuredGridBunykRayCastFunction", vtkInstantiatorvtkUnstructuredGridBunykRayCastFunctionNew);
  vtkInstantiator::RegisterInstantiator("vtkUnstructuredGridHomogeneousRayIntegrator", vtkInstantiatorvtkUnstructuredGridHomogeneousRayIntegratorNew);
  vtkInstantiator::RegisterInstantiator("vtkUnstructuredGridLinearRayIntegrator", vtkInstantiatorvtkUnstructuredGridLinearRayIntegratorNew);
  vtkInstantiator::RegisterInstantiator("vtkUnstructuredGridPartialPreIntegration", vtkInstantiatorvtkUnstructuredGridPartialPreIntegrationNew);
  vtkInstantiator::RegisterInstantiator("vtkUnstructuredGridPreIntegration", vtkInstantiatorvtkUnstructuredGridPreIntegrationNew);
  vtkInstantiator::RegisterInstantiator("vtkUnstructuredGridVolumeRayCastMapper", vtkInstantiatorvtkUnstructuredGridVolumeRayCastMapperNew);
  vtkInstantiator::RegisterInstantiator("vtkUnstructuredGridVolumeZSweepMapper", vtkInstantiatorvtkUnstructuredGridVolumeZSweepMapperNew);
  vtkInstantiator::RegisterInstantiator("vtkOpenGLRayCastImageDisplayHelper", vtkInstantiatorvtkOpenGLRayCastImageDisplayHelperNew);
  vtkInstantiator::RegisterInstantiator("vtkOpenGLVolumeTextureMapper2D", vtkInstantiatorvtkOpenGLVolumeTextureMapper2DNew);
  vtkInstantiator::RegisterInstantiator("vtkOpenGLVolumeTextureMapper3D", vtkInstantiatorvtkOpenGLVolumeTextureMapper3DNew);

  
}
          
void vtkVolumeRenderingInstantiator::ClassFinalize()
{ 

  vtkInstantiator::UnRegisterInstantiator("vtkEncodedGradientShader", vtkInstantiatorvtkEncodedGradientShaderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkFiniteDifferenceGradientEstimator", vtkInstantiatorvtkFiniteDifferenceGradientEstimatorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkFixedPointRayCastImage", vtkInstantiatorvtkFixedPointRayCastImageNew);
  vtkInstantiator::UnRegisterInstantiator("vtkFixedPointVolumeRayCastCompositeGOHelper", vtkInstantiatorvtkFixedPointVolumeRayCastCompositeGOHelperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkFixedPointVolumeRayCastCompositeGOShadeHelper", vtkInstantiatorvtkFixedPointVolumeRayCastCompositeGOShadeHelperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkFixedPointVolumeRayCastCompositeHelper", vtkInstantiatorvtkFixedPointVolumeRayCastCompositeHelperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkFixedPointVolumeRayCastCompositeShadeHelper", vtkInstantiatorvtkFixedPointVolumeRayCastCompositeShadeHelperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkFixedPointVolumeRayCastMIPHelper", vtkInstantiatorvtkFixedPointVolumeRayCastMIPHelperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkFixedPointVolumeRayCastMapper", vtkInstantiatorvtkFixedPointVolumeRayCastMapperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkProjectedTetrahedraMapper", vtkInstantiatorvtkProjectedTetrahedraMapperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkRecursiveSphereDirectionEncoder", vtkInstantiatorvtkRecursiveSphereDirectionEncoderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkSphericalDirectionEncoder", vtkInstantiatorvtkSphericalDirectionEncoderNew);
  vtkInstantiator::UnRegisterInstantiator("vtkVolumeRayCastCompositeFunction", vtkInstantiatorvtkVolumeRayCastCompositeFunctionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkVolumeRayCastIsosurfaceFunction", vtkInstantiatorvtkVolumeRayCastIsosurfaceFunctionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkVolumeRayCastMIPFunction", vtkInstantiatorvtkVolumeRayCastMIPFunctionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkVolumeRayCastMapper", vtkInstantiatorvtkVolumeRayCastMapperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkVolumeRenderingFactory", vtkInstantiatorvtkVolumeRenderingFactoryNew);
  vtkInstantiator::UnRegisterInstantiator("vtkVolumeTextureMapper2D", vtkInstantiatorvtkVolumeTextureMapper2DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkVolumeTextureMapper3D", vtkInstantiatorvtkVolumeTextureMapper3DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkUnstructuredGridBunykRayCastFunction", vtkInstantiatorvtkUnstructuredGridBunykRayCastFunctionNew);
  vtkInstantiator::UnRegisterInstantiator("vtkUnstructuredGridHomogeneousRayIntegrator", vtkInstantiatorvtkUnstructuredGridHomogeneousRayIntegratorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkUnstructuredGridLinearRayIntegrator", vtkInstantiatorvtkUnstructuredGridLinearRayIntegratorNew);
  vtkInstantiator::UnRegisterInstantiator("vtkUnstructuredGridPartialPreIntegration", vtkInstantiatorvtkUnstructuredGridPartialPreIntegrationNew);
  vtkInstantiator::UnRegisterInstantiator("vtkUnstructuredGridPreIntegration", vtkInstantiatorvtkUnstructuredGridPreIntegrationNew);
  vtkInstantiator::UnRegisterInstantiator("vtkUnstructuredGridVolumeRayCastMapper", vtkInstantiatorvtkUnstructuredGridVolumeRayCastMapperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkUnstructuredGridVolumeZSweepMapper", vtkInstantiatorvtkUnstructuredGridVolumeZSweepMapperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOpenGLRayCastImageDisplayHelper", vtkInstantiatorvtkOpenGLRayCastImageDisplayHelperNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOpenGLVolumeTextureMapper2D", vtkInstantiatorvtkOpenGLVolumeTextureMapper2DNew);
  vtkInstantiator::UnRegisterInstantiator("vtkOpenGLVolumeTextureMapper3D", vtkInstantiatorvtkOpenGLVolumeTextureMapper3DNew);

  
}

vtkVolumeRenderingInstantiator::vtkVolumeRenderingInstantiator()
{
  if(++vtkVolumeRenderingInstantiator::Count == 1)
    { 
    vtkVolumeRenderingInstantiator::ClassInitialize(); 
    }
}

vtkVolumeRenderingInstantiator::~vtkVolumeRenderingInstantiator()
{
  if(--vtkVolumeRenderingInstantiator::Count == 0)
    { 
    vtkVolumeRenderingInstantiator::ClassFinalize(); 
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkVolumeRenderingInstantiator::Count;
