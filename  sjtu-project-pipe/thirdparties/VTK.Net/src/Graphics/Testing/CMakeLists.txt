SUBDIRS(Cxx)

IF (VTK_WRAP_TCL)
  SUBDIRS(Tcl)
ENDIF (VTK_WRAP_TCL)

IF (VTK_WRAP_PYTHON)
  SUBDIRS(Python)
ENDIF (VTK_WRAP_PYTHON)

IF(PYTHON_EXECUTABLE)
  ADD_TEST(HeaderTesting-Graphics ${PYTHON_EXECUTABLE}
    ${VTK_SOURCE_DIR}/Common/Testing/HeaderTesting.py
    "${VTK_SOURCE_DIR}/Graphics"
    VTK_GRAPHICS_EXPORT
    vtkButterflySubdivisionFilter.h
    vtkLinearSubdivisionFilter.h
    vtkLoopSubdivisionFilter.h
    vtkOutlineFilter.h
    vtkProgrammableFilter.h
    vtkProgrammableSource.h
    vtkStructuredGridOutlineFilter.h
    vtkStructuredPointsGeometryFilter.h
    )
ENDIF(PYTHON_EXECUTABLE)
