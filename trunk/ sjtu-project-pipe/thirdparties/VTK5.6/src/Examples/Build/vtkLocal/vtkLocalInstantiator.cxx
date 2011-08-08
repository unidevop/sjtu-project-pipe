#include "vtkLocalInstantiator.h"
  
extern vtkObject* vtkInstantiatorvtkLocalExampleNew();


  
void vtkLocalInstantiator::ClassInitialize()
{
  
  vtkInstantiator::RegisterInstantiator("vtkLocalExample", vtkInstantiatorvtkLocalExampleNew);

  
}
          
void vtkLocalInstantiator::ClassFinalize()
{ 

  vtkInstantiator::UnRegisterInstantiator("vtkLocalExample", vtkInstantiatorvtkLocalExampleNew);

  
}

vtkLocalInstantiator::vtkLocalInstantiator()
{
  if(++vtkLocalInstantiator::Count == 1)
    { 
    vtkLocalInstantiator::ClassInitialize(); 
    }
}

vtkLocalInstantiator::~vtkLocalInstantiator()
{
  if(--vtkLocalInstantiator::Count == 0)
    { 
    vtkLocalInstantiator::ClassFinalize(); 
    }
}

// Number of translation units that include this class's header.
// Purposely not initialized.  Default is static initialization to 0.
unsigned int vtkLocalInstantiator::Count;
