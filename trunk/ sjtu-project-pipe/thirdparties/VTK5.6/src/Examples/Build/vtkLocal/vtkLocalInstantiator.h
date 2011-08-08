#ifndef __vtkLocalInstantiator_h
#define __vtkLocalInstantiator_h

#include "vtkInstantiator.h"

#include "vtkLocalConfigure.h"


class VTK_vtkLocal_EXPORT vtkLocalInstantiator
{
  public:
  vtkLocalInstantiator();
  ~vtkLocalInstantiator();
  private:
  static void ClassInitialize();
  static void ClassFinalize();
  static unsigned int Count;
}; 

static vtkLocalInstantiator vtkLocalInstantiatorInitializer;

#endif
