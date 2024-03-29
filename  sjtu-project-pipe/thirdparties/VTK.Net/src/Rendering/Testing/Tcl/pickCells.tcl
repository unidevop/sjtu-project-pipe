package require vtk
package require vtkinteraction

vtkRenderer ren1
vtkRenderWindow renWin
  renWin AddRenderer ren1
vtkRenderWindowInteractor iren
  iren SetRenderWindow renWin


# create a scene with one of each cell type

# Voxel

vtkPoints voxelPoints
  voxelPoints SetNumberOfPoints 8
  voxelPoints InsertPoint 0 0 0 0
  voxelPoints InsertPoint 1 1 0 0
  voxelPoints InsertPoint 2 0 1 0
  voxelPoints InsertPoint 3 1 1 0
  voxelPoints InsertPoint 4 0 0 1
  voxelPoints InsertPoint 5 1 0 1
  voxelPoints InsertPoint 6 0 1 1
  voxelPoints InsertPoint 7 1 1 1

vtkVoxel aVoxel
  [aVoxel GetPointIds] SetId 0 0
  [aVoxel GetPointIds] SetId 1 1
  [aVoxel GetPointIds] SetId 2 2
  [aVoxel GetPointIds] SetId 3 3
  [aVoxel GetPointIds] SetId 4 4
  [aVoxel GetPointIds] SetId 5 5
  [aVoxel GetPointIds] SetId 6 6
  [aVoxel GetPointIds] SetId 7 7


vtkUnstructuredGrid aVoxelGrid
  aVoxelGrid Allocate 1 1
  aVoxelGrid InsertNextCell [aVoxel GetCellType] [aVoxel GetPointIds]
  aVoxelGrid SetPoints voxelPoints

vtkDataSetMapper aVoxelMapper
aVoxelMapper SetInput aVoxelGrid

vtkActor aVoxelActor
  aVoxelActor SetMapper aVoxelMapper
  [aVoxelActor GetProperty] BackfaceCullingOn

# Hexahedron

vtkPoints hexahedronPoints
  hexahedronPoints SetNumberOfPoints 8
  hexahedronPoints InsertPoint 0 0 0 0
  hexahedronPoints InsertPoint 1 1 0 0
  hexahedronPoints InsertPoint 2 1 1 0
  hexahedronPoints InsertPoint 3 0 1 0
  hexahedronPoints InsertPoint 4 0 0 1
  hexahedronPoints InsertPoint 5 1 0 1
  hexahedronPoints InsertPoint 6 1 1 1
  hexahedronPoints InsertPoint 7 0 1 1
  
vtkHexahedron aHexahedron
  [aHexahedron GetPointIds] SetId 0 0
  [aHexahedron GetPointIds] SetId 1 1
  [aHexahedron GetPointIds] SetId 2 2
  [aHexahedron GetPointIds] SetId 3 3
  [aHexahedron GetPointIds] SetId 4 4
  [aHexahedron GetPointIds] SetId 5 5
  [aHexahedron GetPointIds] SetId 6 6
  [aHexahedron GetPointIds] SetId 7 7
  
  
vtkUnstructuredGrid aHexahedronGrid
  aHexahedronGrid Allocate 1 1
  aHexahedronGrid InsertNextCell [aHexahedron GetCellType] [aHexahedron GetPointIds]
  aHexahedronGrid SetPoints hexahedronPoints

vtkDataSetMapper aHexahedronMapper
  aHexahedronMapper SetInput aHexahedronGrid

vtkActor aHexahedronActor
  aHexahedronActor SetMapper aHexahedronMapper
  aHexahedronActor AddPosition 2 0 0
  [aHexahedronActor GetProperty] BackfaceCullingOn

# Tetra

vtkPoints tetraPoints
  tetraPoints SetNumberOfPoints 4
  tetraPoints InsertPoint 0 0 0 0
  tetraPoints InsertPoint 1 1 0 0
  tetraPoints InsertPoint 2 .5 1 0
  tetraPoints InsertPoint 3 .5 .5 1

vtkTetra aTetra
  [aTetra GetPointIds] SetId 0 0
  [aTetra GetPointIds] SetId 1 1
  [aTetra GetPointIds] SetId 2 2
  [aTetra GetPointIds] SetId 3 3

vtkUnstructuredGrid aTetraGrid
  aTetraGrid Allocate 1 1
  aTetraGrid InsertNextCell [aTetra GetCellType] [aTetra GetPointIds]
  aTetraGrid SetPoints tetraPoints

vtkDataSetMapper aTetraMapper
  aTetraMapper SetInput aTetraGrid

vtkActor aTetraActor
  aTetraActor SetMapper aTetraMapper
  aTetraActor AddPosition 4 0 0
  [aTetraActor GetProperty] BackfaceCullingOn

# Wedge

vtkPoints wedgePoints
  wedgePoints SetNumberOfPoints 6
  wedgePoints InsertPoint 0 0 1 0
  wedgePoints InsertPoint 1 0 0 0
  wedgePoints InsertPoint 2 0 .5 .5
  wedgePoints InsertPoint 3 1 1 0
  wedgePoints InsertPoint 4 1 0 0
  wedgePoints InsertPoint 5 1 .5 .5

vtkWedge aWedge
  [aWedge GetPointIds] SetId 0 0
  [aWedge GetPointIds] SetId 1 1
  [aWedge GetPointIds] SetId 2 2
  [aWedge GetPointIds] SetId 3 3
  [aWedge GetPointIds] SetId 4 4
  [aWedge GetPointIds] SetId 5 5


vtkUnstructuredGrid aWedgeGrid
  aWedgeGrid Allocate 1 1
  aWedgeGrid InsertNextCell [aWedge GetCellType] [aWedge GetPointIds]
  aWedgeGrid SetPoints wedgePoints

vtkDataSetMapper aWedgeMapper
  aWedgeMapper SetInput aWedgeGrid

vtkActor aWedgeActor
  aWedgeActor SetMapper aWedgeMapper
  aWedgeActor AddPosition 6 0 0
  [aWedgeActor GetProperty] BackfaceCullingOn

# Pyramid

vtkPoints pyramidPoints
  pyramidPoints SetNumberOfPoints 5
  pyramidPoints InsertPoint 0 0 0 0
  pyramidPoints InsertPoint 1 1 0 0
  pyramidPoints InsertPoint 2 1 1 0
  pyramidPoints InsertPoint 3 0 1 0
  pyramidPoints InsertPoint 4 .5 .5 1

vtkPyramid aPyramid
  [aPyramid GetPointIds] SetId 0 0
  [aPyramid GetPointIds] SetId 1 1
  [aPyramid GetPointIds] SetId 2 2
  [aPyramid GetPointIds] SetId 3 3
  [aPyramid GetPointIds] SetId 4 4


vtkUnstructuredGrid aPyramidGrid
  aPyramidGrid Allocate 1 1
  aPyramidGrid InsertNextCell [aPyramid GetCellType] [aPyramid GetPointIds]
  aPyramidGrid SetPoints pyramidPoints

vtkDataSetMapper aPyramidMapper
  aPyramidMapper SetInput aPyramidGrid

vtkActor aPyramidActor
  aPyramidActor SetMapper aPyramidMapper
  aPyramidActor AddPosition 8 0 0
  [aPyramidActor GetProperty] BackfaceCullingOn

# Pixel

vtkPoints pixelPoints
  pixelPoints SetNumberOfPoints 4
  pixelPoints InsertPoint 0 0 0 0
  pixelPoints InsertPoint 1 1 0 0
  pixelPoints InsertPoint 2 0 1 0
  pixelPoints InsertPoint 3 1 1 0

vtkPixel aPixel
  [aPixel GetPointIds] SetId 0 0
  [aPixel GetPointIds] SetId 1 1
  [aPixel GetPointIds] SetId 2 2
  [aPixel GetPointIds] SetId 3 3

vtkUnstructuredGrid aPixelGrid
  aPixelGrid Allocate 1 1
  aPixelGrid InsertNextCell [aPixel GetCellType] [aPixel GetPointIds]
  aPixelGrid SetPoints pixelPoints

vtkDataSetMapper aPixelMapper
  aPixelMapper SetInput aPixelGrid

vtkActor aPixelActor
  aPixelActor SetMapper aPixelMapper
  aPixelActor AddPosition 0 0 2
  [aPixelActor GetProperty] BackfaceCullingOn

# Quad

vtkPoints quadPoints
  quadPoints SetNumberOfPoints 4
  quadPoints InsertPoint 0 0 0 0
  quadPoints InsertPoint 1 1 0 0
  quadPoints InsertPoint 2 1 1 0
  quadPoints InsertPoint 3 0 1 0

vtkQuad aQuad
  [aQuad GetPointIds] SetId 0 0
  [aQuad GetPointIds] SetId 1 1
  [aQuad GetPointIds] SetId 2 2
  [aQuad GetPointIds] SetId 3 3

vtkUnstructuredGrid aQuadGrid
  aQuadGrid Allocate 1 1
  aQuadGrid InsertNextCell [aQuad GetCellType] [aQuad GetPointIds]
  aQuadGrid SetPoints quadPoints

vtkDataSetMapper aQuadMapper
  aQuadMapper SetInput aQuadGrid

vtkActor aQuadActor
  aQuadActor SetMapper aQuadMapper
  aQuadActor AddPosition 2 0 2
  [aQuadActor GetProperty] BackfaceCullingOn

# Triangle

vtkPoints trianglePoints
  trianglePoints SetNumberOfPoints 3
  trianglePoints InsertPoint 0 0 0 0
  trianglePoints InsertPoint 1 1 0 0
  trianglePoints InsertPoint 2 .5 .5 0

vtkTriangle aTriangle
  [aTriangle GetPointIds] SetId 0 0
  [aTriangle GetPointIds] SetId 1 1
  [aTriangle GetPointIds] SetId 2 2

vtkUnstructuredGrid aTriangleGrid
  aTriangleGrid Allocate 1 1
  aTriangleGrid InsertNextCell [aTriangle GetCellType] [aTriangle GetPointIds]
  aTriangleGrid SetPoints trianglePoints

vtkDataSetMapper aTriangleMapper
  aTriangleMapper SetInput aTriangleGrid

vtkActor aTriangleActor
  aTriangleActor SetMapper aTriangleMapper
  aTriangleActor AddPosition 4 0 2
  [aTriangleActor GetProperty] BackfaceCullingOn

# Polygon

vtkPoints polygonPoints
  polygonPoints SetNumberOfPoints 4
  polygonPoints InsertPoint 0 0 0 0
  polygonPoints InsertPoint 1 1 0 0
  polygonPoints InsertPoint 2 1 1 0
  polygonPoints InsertPoint 3 0 1 0

vtkPolygon aPolygon
  [aPolygon GetPointIds] SetNumberOfIds 4
  [aPolygon GetPointIds] SetId 0 0
  [aPolygon GetPointIds] SetId 1 1
  [aPolygon GetPointIds] SetId 2 2
  [aPolygon GetPointIds] SetId 3 3

vtkUnstructuredGrid aPolygonGrid
  aPolygonGrid Allocate 1 1
  aPolygonGrid InsertNextCell [aPolygon GetCellType] [aPolygon GetPointIds]
  aPolygonGrid SetPoints polygonPoints

vtkDataSetMapper aPolygonMapper
  aPolygonMapper SetInput aPolygonGrid

vtkActor aPolygonActor
  aPolygonActor SetMapper aPolygonMapper
  aPolygonActor AddPosition 6 0 2
  [aPolygonActor GetProperty] BackfaceCullingOn

# Triangle Strip

vtkPoints triangleStripPoints
  triangleStripPoints SetNumberOfPoints 5
  triangleStripPoints InsertPoint 0 0 1 0
  triangleStripPoints InsertPoint 1 0 0 0
  triangleStripPoints InsertPoint 2 1 1 0
  triangleStripPoints InsertPoint 3 1 0 0
  triangleStripPoints InsertPoint 4 2 1 0

vtkTriangleStrip aTriangleStrip
  [aTriangleStrip GetPointIds] SetNumberOfIds 5
  [aTriangleStrip GetPointIds] SetId 0 0
  [aTriangleStrip GetPointIds] SetId 1 1
  [aTriangleStrip GetPointIds] SetId 2 2
  [aTriangleStrip GetPointIds] SetId 3 3
  [aTriangleStrip GetPointIds] SetId 4 4

vtkUnstructuredGrid aTriangleStripGrid
  aTriangleStripGrid Allocate 1 1
  aTriangleStripGrid InsertNextCell [aTriangleStrip GetCellType] [aTriangleStrip GetPointIds]
  aTriangleStripGrid SetPoints triangleStripPoints

vtkDataSetMapper aTriangleStripMapper
  aTriangleStripMapper SetInput aTriangleStripGrid

vtkActor aTriangleStripActor
  aTriangleStripActor SetMapper aTriangleStripMapper
  aTriangleStripActor AddPosition 8 0 2
  [aTriangleStripActor GetProperty] BackfaceCullingOn

# Line

vtkPoints linePoints
  linePoints SetNumberOfPoints 2
  linePoints InsertPoint 0 0 0 0
  linePoints InsertPoint 1 1 1 0

vtkLine aLine
  [aLine GetPointIds] SetId 0 0
  [aLine GetPointIds] SetId 1 1

vtkUnstructuredGrid aLineGrid
  aLineGrid Allocate 1 1
  aLineGrid InsertNextCell [aLine GetCellType] [aLine GetPointIds]
  aLineGrid SetPoints linePoints

vtkDataSetMapper aLineMapper
  aLineMapper SetInput aLineGrid

vtkActor aLineActor
  aLineActor SetMapper aLineMapper
  aLineActor AddPosition 0 0 4
  [aLineActor GetProperty] BackfaceCullingOn

# Poly line

vtkPoints polyLinePoints
  polyLinePoints SetNumberOfPoints 3
  polyLinePoints InsertPoint 0 0 0 0
  polyLinePoints InsertPoint 1 1 1 0
  polyLinePoints InsertPoint 2 1 0 0

vtkPolyLine aPolyLine
  [aPolyLine GetPointIds] SetNumberOfIds 3
  [aPolyLine GetPointIds] SetId 0 0
  [aPolyLine GetPointIds] SetId 1 1
  [aPolyLine GetPointIds] SetId 2 2

vtkUnstructuredGrid aPolyLineGrid
  aPolyLineGrid Allocate 1 1
  aPolyLineGrid InsertNextCell [aPolyLine GetCellType] [aPolyLine GetPointIds]
  aPolyLineGrid SetPoints polyLinePoints

vtkDataSetMapper aPolyLineMapper
  aPolyLineMapper SetInput aPolyLineGrid

vtkActor aPolyLineActor
  aPolyLineActor SetMapper aPolyLineMapper
  aPolyLineActor AddPosition 2 0 4
  [aPolyLineActor GetProperty] BackfaceCullingOn

# Vertex

vtkPoints vertexPoints
  vertexPoints SetNumberOfPoints 1
  vertexPoints InsertPoint 0 0 0 0

vtkVertex aVertex
  [aVertex GetPointIds] SetId 0 0

vtkUnstructuredGrid aVertexGrid
  aVertexGrid Allocate 1 1
  aVertexGrid InsertNextCell [aVertex GetCellType] [aVertex GetPointIds]
  aVertexGrid SetPoints vertexPoints

vtkDataSetMapper aVertexMapper
  aVertexMapper SetInput aVertexGrid

vtkActor aVertexActor
  aVertexActor SetMapper aVertexMapper
  aVertexActor AddPosition 0 0 6
  [aVertexActor GetProperty] BackfaceCullingOn

# Poly Vertex

vtkPoints polyVertexPoints
  polyVertexPoints SetNumberOfPoints 3
  polyVertexPoints InsertPoint 0 0 0 0
  polyVertexPoints InsertPoint 1 1 0 0
  polyVertexPoints InsertPoint 2 1 1 0

vtkPolyVertex aPolyVertex
  [aPolyVertex GetPointIds] SetNumberOfIds 3
  [aPolyVertex GetPointIds] SetId 0 0
  [aPolyVertex GetPointIds] SetId 1 1
  [aPolyVertex GetPointIds] SetId 2 2

vtkUnstructuredGrid aPolyVertexGrid
  aPolyVertexGrid Allocate 1 1
  aPolyVertexGrid InsertNextCell [aPolyVertex GetCellType] [aPolyVertex GetPointIds]
  aPolyVertexGrid SetPoints polyVertexPoints

vtkDataSetMapper aPolyVertexMapper
  aPolyVertexMapper SetInput aPolyVertexGrid

vtkActor aPolyVertexActor
  aPolyVertexActor SetMapper aPolyVertexMapper
  aPolyVertexActor AddPosition 2 0 6
  [aPolyVertexActor GetProperty] BackfaceCullingOn

# Pentagonal prism

vtkPoints pentaPoints
  pentaPoints SetNumberOfPoints 10
  pentaPoints InsertPoint 0 0.25 0.0 0.0  
  pentaPoints InsertPoint 1 0.75 0.0 0.0 
  pentaPoints InsertPoint 2 1.0  0.5 0.0  
  pentaPoints InsertPoint 3 0.5  1.0 0.0 
  pentaPoints InsertPoint 4 0.0  0.5 0.0  
  pentaPoints InsertPoint 5 0.25 0.0 1.0  
  pentaPoints InsertPoint 6 0.75 0.0 1.0  
  pentaPoints InsertPoint 7 1.0  0.5 1.0  
  pentaPoints InsertPoint 8 0.5  1.0 1.0 
  pentaPoints InsertPoint 9 0.0  0.5 1.0 

vtkPentagonalPrism aPenta
  [aPenta GetPointIds] SetId 0 0
  [aPenta GetPointIds] SetId 1 1
  [aPenta GetPointIds] SetId 2 2
  [aPenta GetPointIds] SetId 3 3
  [aPenta GetPointIds] SetId 4 4
  [aPenta GetPointIds] SetId 5 5
  [aPenta GetPointIds] SetId 6 6
  [aPenta GetPointIds] SetId 7 7
  [aPenta GetPointIds] SetId 8 8
  [aPenta GetPointIds] SetId 9 9

vtkUnstructuredGrid aPentaGrid
  aPentaGrid Allocate 1 1
  aPentaGrid InsertNextCell [aPenta GetCellType] [aPenta GetPointIds]
  aPentaGrid SetPoints pentaPoints

vtkDataSetMapper aPentaMapper
  aPentaMapper SetInput aPentaGrid

vtkActor aPentaActor
  aPentaActor SetMapper aPentaMapper
  aPentaActor AddPosition 10 0 0
  [aPentaActor GetProperty] BackfaceCullingOn

# Hexagonal prism

vtkPoints hexaPoints
  hexaPoints SetNumberOfPoints 12
  hexaPoints InsertPoint 0 0.0 0.0 0.0  
  hexaPoints InsertPoint 1 0.5 0.0 0.0 
  hexaPoints InsertPoint 2 1.0 0.5 0.0  
  hexaPoints InsertPoint 3 1.0 1.0 0.0 
  hexaPoints InsertPoint 4 0.5 1.0 0.0  
  hexaPoints InsertPoint 5 0.0 0.5 0.0 
  hexaPoints InsertPoint 6 0.0 0.0 1.0  
  hexaPoints InsertPoint 7 0.5 0.0 1.0 
  hexaPoints InsertPoint 8 1.0 0.5 1.0  
  hexaPoints InsertPoint 9 1.0 1.0 1.0 
  hexaPoints InsertPoint 10 0.5 1.0 1.0  
  hexaPoints InsertPoint 11 0.0 0.5 1.0
                         
vtkHexagonalPrism aHexa
  [aHexa GetPointIds] SetId 0 0
  [aHexa GetPointIds] SetId 1 1
  [aHexa GetPointIds] SetId 2 2
  [aHexa GetPointIds] SetId 3 3
  [aHexa GetPointIds] SetId 4 4
  [aHexa GetPointIds] SetId 5 5
  [aHexa GetPointIds] SetId 6 6
  [aHexa GetPointIds] SetId 7 7
  [aHexa GetPointIds] SetId 8 8
  [aHexa GetPointIds] SetId 9 9
  [aHexa GetPointIds] SetId 10 10
  [aHexa GetPointIds] SetId 11 11

vtkUnstructuredGrid aHexaGrid
  aHexaGrid Allocate 1 1
  aHexaGrid InsertNextCell [aHexa GetCellType] [aHexa GetPointIds]
  aHexaGrid SetPoints hexaPoints

vtkDataSetMapper aHexaMapper
  aHexaMapper SetInput aHexaGrid

vtkActor aHexaActor
  aHexaActor SetMapper aHexaMapper
  aHexaActor AddPosition 12 0 0
  [aHexaActor GetProperty] BackfaceCullingOn



ren1 SetBackground .1 .2 .4

ren1 AddActor aVoxelActor; [aVoxelActor GetProperty] SetDiffuseColor 1 0 0
ren1 AddActor aHexahedronActor; [aHexahedronActor GetProperty] SetDiffuseColor 1 1 0
ren1 AddActor aTetraActor; [aTetraActor GetProperty] SetDiffuseColor 0 1 0
ren1 AddActor aWedgeActor; [aWedgeActor GetProperty] SetDiffuseColor 0 1 1
ren1 AddActor aPyramidActor; [aPyramidActor GetProperty] SetDiffuseColor 1 0 1
ren1 AddActor aPixelActor; [aPixelActor GetProperty] SetDiffuseColor 0 1 1
ren1 AddActor aQuadActor; [aQuadActor GetProperty] SetDiffuseColor 1 0 1
ren1 AddActor aTriangleActor; [aTriangleActor GetProperty] SetDiffuseColor .3 1 .5
ren1 AddActor aPolygonActor; [aPolygonActor GetProperty] SetDiffuseColor 1 .4 .5
ren1 AddActor aTriangleStripActor; [aTriangleStripActor GetProperty] SetDiffuseColor .3 .7 1
ren1 AddActor aLineActor; [aLineActor GetProperty] SetDiffuseColor .2 1 1
ren1 AddActor aPolyLineActor; [aPolyLineActor GetProperty] SetDiffuseColor 1 1 1
ren1 AddActor aVertexActor; [aVertexActor GetProperty] SetDiffuseColor 1 1 1
ren1 AddActor aPolyVertexActor; [aPolyVertexActor GetProperty] SetDiffuseColor 1 1 1
ren1 AddActor aPentaActor; [aPentaActor GetProperty] SetDiffuseColor .2 .4 .7
ren1 AddActor aHexaActor; [aHexaActor GetProperty] SetDiffuseColor .7 .5 1

ren1 ResetCamera
[ren1 GetActiveCamera] Azimuth 30
[ren1 GetActiveCamera] Elevation 20
[ren1 GetActiveCamera] Dolly 1.25
ren1 ResetCameraClippingRange

renWin Render

vtkCellPicker cellPicker
vtkPointPicker pointPicker
vtkWorldPointPicker worldPicker

set cellCount 0
set pointCount 0
ren1 IsInViewport 0 0

for {set x 0} { $x <= 265} {incr x 6} {
    for {set y 100} {$y <= 200} {incr y 6} {
	cellPicker Pick $x $y 0 ren1
	pointPicker Pick $x $y 0 ren1
        worldPicker Pick $x $y 0 ren1
        if {[cellPicker GetCellId] != "-1" } {
	    incr cellCount
	}
        if {[pointPicker GetPointId] != "-1" } {
	    incr pointCount
	}
    }
}

# render the image
#
iren AddObserver UserEvent {wm deiconify .vtkInteract}
iren Initialize
wm withdraw .
