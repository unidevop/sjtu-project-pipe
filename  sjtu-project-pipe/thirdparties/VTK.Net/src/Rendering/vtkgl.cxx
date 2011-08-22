// -*- c++ -*-

//DO NOT EDIT!
//This file was created with ..\bin\Release\vtkParseOGLExt.exe
//from M:/thirdparties/VTK.Net/src/Rendering M:/thirdparties/VTK.Net/src/Utilities/ParseOGLExt/headers/glext.h M:/thirdparties/VTK.Net/src/Utilities/ParseOGLExt/headers/glxext.h M:/thirdparties/VTK.Net/src/Utilities/ParseOGLExt/headers/wglext.h

/*
 * Copyright 2003 Sandia Corporation.
 * Under the terms of Contract DE-AC04-94AL85000, there is a non-exclusive
 * license for use of this work by or on behalf of the
 * U.S. Government. Redistribution and use in source and binary forms, with
 * or without modification, are permitted provided that this Notice and any
 * statement of authorship are reproduced on all copies.
 */

#include "vtkgl.h"
#include "vtkOpenGLExtensionManager.h"

//Functions for GL_3DFX_tbuffer
vtkgl::PFNGLTBUFFERMASK3DFXPROC vtkgl::TbufferMask3DFX = NULL;
//Functions for GL_APPLE_element_array
vtkgl::PFNGLELEMENTPOINTERAPPLEPROC vtkgl::ElementPointerAPPLE = NULL;
vtkgl::PFNGLDRAWELEMENTARRAYAPPLEPROC vtkgl::DrawElementArrayAPPLE = NULL;
vtkgl::PFNGLDRAWRANGEELEMENTARRAYAPPLEPROC vtkgl::DrawRangeElementArrayAPPLE = NULL;
vtkgl::PFNGLMULTIDRAWELEMENTARRAYAPPLEPROC vtkgl::MultiDrawElementArrayAPPLE = NULL;
vtkgl::PFNGLMULTIDRAWRANGEELEMENTARRAYAPPLEPROC vtkgl::MultiDrawRangeElementArrayAPPLE = NULL;
//Functions for GL_APPLE_fence
vtkgl::PFNGLGENFENCESAPPLEPROC vtkgl::GenFencesAPPLE = NULL;
vtkgl::PFNGLDELETEFENCESAPPLEPROC vtkgl::DeleteFencesAPPLE = NULL;
vtkgl::PFNGLSETFENCEAPPLEPROC vtkgl::SetFenceAPPLE = NULL;
vtkgl::PFNGLISFENCEAPPLEPROC vtkgl::IsFenceAPPLE = NULL;
vtkgl::PFNGLTESTFENCEAPPLEPROC vtkgl::TestFenceAPPLE = NULL;
vtkgl::PFNGLFINISHFENCEAPPLEPROC vtkgl::FinishFenceAPPLE = NULL;
vtkgl::PFNGLTESTOBJECTAPPLEPROC vtkgl::TestObjectAPPLE = NULL;
vtkgl::PFNGLFINISHOBJECTAPPLEPROC vtkgl::FinishObjectAPPLE = NULL;
//Functions for GL_APPLE_vertex_array_object
vtkgl::PFNGLBINDVERTEXARRAYAPPLEPROC vtkgl::BindVertexArrayAPPLE = NULL;
vtkgl::PFNGLDELETEVERTEXARRAYSAPPLEPROC vtkgl::DeleteVertexArraysAPPLE = NULL;
vtkgl::PFNGLGENVERTEXARRAYSAPPLEPROC vtkgl::GenVertexArraysAPPLE = NULL;
vtkgl::PFNGLISVERTEXARRAYAPPLEPROC vtkgl::IsVertexArrayAPPLE = NULL;
//Functions for GL_APPLE_vertex_array_range
vtkgl::PFNGLVERTEXARRAYRANGEAPPLEPROC vtkgl::VertexArrayRangeAPPLE = NULL;
vtkgl::PFNGLFLUSHVERTEXARRAYRANGEAPPLEPROC vtkgl::FlushVertexArrayRangeAPPLE = NULL;
vtkgl::PFNGLVERTEXARRAYPARAMETERIAPPLEPROC vtkgl::VertexArrayParameteriAPPLE = NULL;
//Functions for GL_ARB_color_buffer_float
vtkgl::PFNGLCLAMPCOLORARBPROC vtkgl::ClampColorARB = NULL;
//Functions for GL_ARB_draw_buffers
vtkgl::PFNGLDRAWBUFFERSARBPROC vtkgl::DrawBuffersARB = NULL;
//Functions for GL_ARB_matrix_palette
vtkgl::PFNGLCURRENTPALETTEMATRIXARBPROC vtkgl::CurrentPaletteMatrixARB = NULL;
vtkgl::PFNGLMATRIXINDEXUBVARBPROC vtkgl::MatrixIndexubvARB = NULL;
vtkgl::PFNGLMATRIXINDEXUSVARBPROC vtkgl::MatrixIndexusvARB = NULL;
vtkgl::PFNGLMATRIXINDEXUIVARBPROC vtkgl::MatrixIndexuivARB = NULL;
vtkgl::PFNGLMATRIXINDEXPOINTERARBPROC vtkgl::MatrixIndexPointerARB = NULL;
//Functions for GL_ARB_multisample
vtkgl::PFNGLSAMPLECOVERAGEARBPROC vtkgl::SampleCoverageARB = NULL;
//Functions for GL_ARB_multitexture
vtkgl::PFNGLACTIVETEXTUREARBPROC vtkgl::ActiveTextureARB = NULL;
vtkgl::PFNGLCLIENTACTIVETEXTUREARBPROC vtkgl::ClientActiveTextureARB = NULL;
vtkgl::PFNGLMULTITEXCOORD1DARBPROC vtkgl::MultiTexCoord1dARB = NULL;
vtkgl::PFNGLMULTITEXCOORD1DVARBPROC vtkgl::MultiTexCoord1dvARB = NULL;
vtkgl::PFNGLMULTITEXCOORD1FARBPROC vtkgl::MultiTexCoord1fARB = NULL;
vtkgl::PFNGLMULTITEXCOORD1FVARBPROC vtkgl::MultiTexCoord1fvARB = NULL;
vtkgl::PFNGLMULTITEXCOORD1IARBPROC vtkgl::MultiTexCoord1iARB = NULL;
vtkgl::PFNGLMULTITEXCOORD1IVARBPROC vtkgl::MultiTexCoord1ivARB = NULL;
vtkgl::PFNGLMULTITEXCOORD1SARBPROC vtkgl::MultiTexCoord1sARB = NULL;
vtkgl::PFNGLMULTITEXCOORD1SVARBPROC vtkgl::MultiTexCoord1svARB = NULL;
vtkgl::PFNGLMULTITEXCOORD2DARBPROC vtkgl::MultiTexCoord2dARB = NULL;
vtkgl::PFNGLMULTITEXCOORD2DVARBPROC vtkgl::MultiTexCoord2dvARB = NULL;
vtkgl::PFNGLMULTITEXCOORD2FARBPROC vtkgl::MultiTexCoord2fARB = NULL;
vtkgl::PFNGLMULTITEXCOORD2FVARBPROC vtkgl::MultiTexCoord2fvARB = NULL;
vtkgl::PFNGLMULTITEXCOORD2IARBPROC vtkgl::MultiTexCoord2iARB = NULL;
vtkgl::PFNGLMULTITEXCOORD2IVARBPROC vtkgl::MultiTexCoord2ivARB = NULL;
vtkgl::PFNGLMULTITEXCOORD2SARBPROC vtkgl::MultiTexCoord2sARB = NULL;
vtkgl::PFNGLMULTITEXCOORD2SVARBPROC vtkgl::MultiTexCoord2svARB = NULL;
vtkgl::PFNGLMULTITEXCOORD3DARBPROC vtkgl::MultiTexCoord3dARB = NULL;
vtkgl::PFNGLMULTITEXCOORD3DVARBPROC vtkgl::MultiTexCoord3dvARB = NULL;
vtkgl::PFNGLMULTITEXCOORD3FARBPROC vtkgl::MultiTexCoord3fARB = NULL;
vtkgl::PFNGLMULTITEXCOORD3FVARBPROC vtkgl::MultiTexCoord3fvARB = NULL;
vtkgl::PFNGLMULTITEXCOORD3IARBPROC vtkgl::MultiTexCoord3iARB = NULL;
vtkgl::PFNGLMULTITEXCOORD3IVARBPROC vtkgl::MultiTexCoord3ivARB = NULL;
vtkgl::PFNGLMULTITEXCOORD3SARBPROC vtkgl::MultiTexCoord3sARB = NULL;
vtkgl::PFNGLMULTITEXCOORD3SVARBPROC vtkgl::MultiTexCoord3svARB = NULL;
vtkgl::PFNGLMULTITEXCOORD4DARBPROC vtkgl::MultiTexCoord4dARB = NULL;
vtkgl::PFNGLMULTITEXCOORD4DVARBPROC vtkgl::MultiTexCoord4dvARB = NULL;
vtkgl::PFNGLMULTITEXCOORD4FARBPROC vtkgl::MultiTexCoord4fARB = NULL;
vtkgl::PFNGLMULTITEXCOORD4FVARBPROC vtkgl::MultiTexCoord4fvARB = NULL;
vtkgl::PFNGLMULTITEXCOORD4IARBPROC vtkgl::MultiTexCoord4iARB = NULL;
vtkgl::PFNGLMULTITEXCOORD4IVARBPROC vtkgl::MultiTexCoord4ivARB = NULL;
vtkgl::PFNGLMULTITEXCOORD4SARBPROC vtkgl::MultiTexCoord4sARB = NULL;
vtkgl::PFNGLMULTITEXCOORD4SVARBPROC vtkgl::MultiTexCoord4svARB = NULL;
//Functions for GL_ARB_occlusion_query
vtkgl::PFNGLGENQUERIESARBPROC vtkgl::GenQueriesARB = NULL;
vtkgl::PFNGLDELETEQUERIESARBPROC vtkgl::DeleteQueriesARB = NULL;
vtkgl::PFNGLISQUERYARBPROC vtkgl::IsQueryARB = NULL;
vtkgl::PFNGLBEGINQUERYARBPROC vtkgl::BeginQueryARB = NULL;
vtkgl::PFNGLENDQUERYARBPROC vtkgl::EndQueryARB = NULL;
vtkgl::PFNGLGETQUERYIVARBPROC vtkgl::GetQueryivARB = NULL;
vtkgl::PFNGLGETQUERYOBJECTIVARBPROC vtkgl::GetQueryObjectivARB = NULL;
vtkgl::PFNGLGETQUERYOBJECTUIVARBPROC vtkgl::GetQueryObjectuivARB = NULL;
//Functions for GL_ARB_point_parameters
vtkgl::PFNGLPOINTPARAMETERFARBPROC vtkgl::PointParameterfARB = NULL;
vtkgl::PFNGLPOINTPARAMETERFVARBPROC vtkgl::PointParameterfvARB = NULL;
//Functions for GL_ARB_shader_objects
vtkgl::PFNGLDELETEOBJECTARBPROC vtkgl::DeleteObjectARB = NULL;
vtkgl::PFNGLGETHANDLEARBPROC vtkgl::GetHandleARB = NULL;
vtkgl::PFNGLDETACHOBJECTARBPROC vtkgl::DetachObjectARB = NULL;
vtkgl::PFNGLCREATESHADEROBJECTARBPROC vtkgl::CreateShaderObjectARB = NULL;
vtkgl::PFNGLSHADERSOURCEARBPROC vtkgl::ShaderSourceARB = NULL;
vtkgl::PFNGLCOMPILESHADERARBPROC vtkgl::CompileShaderARB = NULL;
vtkgl::PFNGLCREATEPROGRAMOBJECTARBPROC vtkgl::CreateProgramObjectARB = NULL;
vtkgl::PFNGLATTACHOBJECTARBPROC vtkgl::AttachObjectARB = NULL;
vtkgl::PFNGLLINKPROGRAMARBPROC vtkgl::LinkProgramARB = NULL;
vtkgl::PFNGLUSEPROGRAMOBJECTARBPROC vtkgl::UseProgramObjectARB = NULL;
vtkgl::PFNGLVALIDATEPROGRAMARBPROC vtkgl::ValidateProgramARB = NULL;
vtkgl::PFNGLUNIFORM1FARBPROC vtkgl::Uniform1fARB = NULL;
vtkgl::PFNGLUNIFORM2FARBPROC vtkgl::Uniform2fARB = NULL;
vtkgl::PFNGLUNIFORM3FARBPROC vtkgl::Uniform3fARB = NULL;
vtkgl::PFNGLUNIFORM4FARBPROC vtkgl::Uniform4fARB = NULL;
vtkgl::PFNGLUNIFORM1IARBPROC vtkgl::Uniform1iARB = NULL;
vtkgl::PFNGLUNIFORM2IARBPROC vtkgl::Uniform2iARB = NULL;
vtkgl::PFNGLUNIFORM3IARBPROC vtkgl::Uniform3iARB = NULL;
vtkgl::PFNGLUNIFORM4IARBPROC vtkgl::Uniform4iARB = NULL;
vtkgl::PFNGLUNIFORM1FVARBPROC vtkgl::Uniform1fvARB = NULL;
vtkgl::PFNGLUNIFORM2FVARBPROC vtkgl::Uniform2fvARB = NULL;
vtkgl::PFNGLUNIFORM3FVARBPROC vtkgl::Uniform3fvARB = NULL;
vtkgl::PFNGLUNIFORM4FVARBPROC vtkgl::Uniform4fvARB = NULL;
vtkgl::PFNGLUNIFORM1IVARBPROC vtkgl::Uniform1ivARB = NULL;
vtkgl::PFNGLUNIFORM2IVARBPROC vtkgl::Uniform2ivARB = NULL;
vtkgl::PFNGLUNIFORM3IVARBPROC vtkgl::Uniform3ivARB = NULL;
vtkgl::PFNGLUNIFORM4IVARBPROC vtkgl::Uniform4ivARB = NULL;
vtkgl::PFNGLUNIFORMMATRIX2FVARBPROC vtkgl::UniformMatrix2fvARB = NULL;
vtkgl::PFNGLUNIFORMMATRIX3FVARBPROC vtkgl::UniformMatrix3fvARB = NULL;
vtkgl::PFNGLUNIFORMMATRIX4FVARBPROC vtkgl::UniformMatrix4fvARB = NULL;
vtkgl::PFNGLGETOBJECTPARAMETERFVARBPROC vtkgl::GetObjectParameterfvARB = NULL;
vtkgl::PFNGLGETOBJECTPARAMETERIVARBPROC vtkgl::GetObjectParameterivARB = NULL;
vtkgl::PFNGLGETINFOLOGARBPROC vtkgl::GetInfoLogARB = NULL;
vtkgl::PFNGLGETATTACHEDOBJECTSARBPROC vtkgl::GetAttachedObjectsARB = NULL;
vtkgl::PFNGLGETUNIFORMLOCATIONARBPROC vtkgl::GetUniformLocationARB = NULL;
vtkgl::PFNGLGETACTIVEUNIFORMARBPROC vtkgl::GetActiveUniformARB = NULL;
vtkgl::PFNGLGETUNIFORMFVARBPROC vtkgl::GetUniformfvARB = NULL;
vtkgl::PFNGLGETUNIFORMIVARBPROC vtkgl::GetUniformivARB = NULL;
vtkgl::PFNGLGETSHADERSOURCEARBPROC vtkgl::GetShaderSourceARB = NULL;
//Functions for GL_ARB_texture_compression
vtkgl::PFNGLCOMPRESSEDTEXIMAGE3DARBPROC vtkgl::CompressedTexImage3DARB = NULL;
vtkgl::PFNGLCOMPRESSEDTEXIMAGE2DARBPROC vtkgl::CompressedTexImage2DARB = NULL;
vtkgl::PFNGLCOMPRESSEDTEXIMAGE1DARBPROC vtkgl::CompressedTexImage1DARB = NULL;
vtkgl::PFNGLCOMPRESSEDTEXSUBIMAGE3DARBPROC vtkgl::CompressedTexSubImage3DARB = NULL;
vtkgl::PFNGLCOMPRESSEDTEXSUBIMAGE2DARBPROC vtkgl::CompressedTexSubImage2DARB = NULL;
vtkgl::PFNGLCOMPRESSEDTEXSUBIMAGE1DARBPROC vtkgl::CompressedTexSubImage1DARB = NULL;
vtkgl::PFNGLGETCOMPRESSEDTEXIMAGEARBPROC vtkgl::GetCompressedTexImageARB = NULL;
//Functions for GL_ARB_transpose_matrix
vtkgl::PFNGLLOADTRANSPOSEMATRIXFARBPROC vtkgl::LoadTransposeMatrixfARB = NULL;
vtkgl::PFNGLLOADTRANSPOSEMATRIXDARBPROC vtkgl::LoadTransposeMatrixdARB = NULL;
vtkgl::PFNGLMULTTRANSPOSEMATRIXFARBPROC vtkgl::MultTransposeMatrixfARB = NULL;
vtkgl::PFNGLMULTTRANSPOSEMATRIXDARBPROC vtkgl::MultTransposeMatrixdARB = NULL;
//Functions for GL_ARB_vertex_blend
vtkgl::PFNGLWEIGHTBVARBPROC vtkgl::WeightbvARB = NULL;
vtkgl::PFNGLWEIGHTSVARBPROC vtkgl::WeightsvARB = NULL;
vtkgl::PFNGLWEIGHTIVARBPROC vtkgl::WeightivARB = NULL;
vtkgl::PFNGLWEIGHTFVARBPROC vtkgl::WeightfvARB = NULL;
vtkgl::PFNGLWEIGHTDVARBPROC vtkgl::WeightdvARB = NULL;
vtkgl::PFNGLWEIGHTUBVARBPROC vtkgl::WeightubvARB = NULL;
vtkgl::PFNGLWEIGHTUSVARBPROC vtkgl::WeightusvARB = NULL;
vtkgl::PFNGLWEIGHTUIVARBPROC vtkgl::WeightuivARB = NULL;
vtkgl::PFNGLWEIGHTPOINTERARBPROC vtkgl::WeightPointerARB = NULL;
vtkgl::PFNGLVERTEXBLENDARBPROC vtkgl::VertexBlendARB = NULL;
//Functions for GL_ARB_vertex_buffer_object
vtkgl::PFNGLBINDBUFFERARBPROC vtkgl::BindBufferARB = NULL;
vtkgl::PFNGLDELETEBUFFERSARBPROC vtkgl::DeleteBuffersARB = NULL;
vtkgl::PFNGLGENBUFFERSARBPROC vtkgl::GenBuffersARB = NULL;
vtkgl::PFNGLISBUFFERARBPROC vtkgl::IsBufferARB = NULL;
vtkgl::PFNGLBUFFERDATAARBPROC vtkgl::BufferDataARB = NULL;
vtkgl::PFNGLBUFFERSUBDATAARBPROC vtkgl::BufferSubDataARB = NULL;
vtkgl::PFNGLGETBUFFERSUBDATAARBPROC vtkgl::GetBufferSubDataARB = NULL;
vtkgl::PFNGLMAPBUFFERARBPROC vtkgl::MapBufferARB = NULL;
vtkgl::PFNGLUNMAPBUFFERARBPROC vtkgl::UnmapBufferARB = NULL;
vtkgl::PFNGLGETBUFFERPARAMETERIVARBPROC vtkgl::GetBufferParameterivARB = NULL;
vtkgl::PFNGLGETBUFFERPOINTERVARBPROC vtkgl::GetBufferPointervARB = NULL;
//Functions for GL_ARB_vertex_program
vtkgl::PFNGLVERTEXATTRIB1DARBPROC vtkgl::VertexAttrib1dARB = NULL;
vtkgl::PFNGLVERTEXATTRIB1DVARBPROC vtkgl::VertexAttrib1dvARB = NULL;
vtkgl::PFNGLVERTEXATTRIB1FARBPROC vtkgl::VertexAttrib1fARB = NULL;
vtkgl::PFNGLVERTEXATTRIB1FVARBPROC vtkgl::VertexAttrib1fvARB = NULL;
vtkgl::PFNGLVERTEXATTRIB1SARBPROC vtkgl::VertexAttrib1sARB = NULL;
vtkgl::PFNGLVERTEXATTRIB1SVARBPROC vtkgl::VertexAttrib1svARB = NULL;
vtkgl::PFNGLVERTEXATTRIB2DARBPROC vtkgl::VertexAttrib2dARB = NULL;
vtkgl::PFNGLVERTEXATTRIB2DVARBPROC vtkgl::VertexAttrib2dvARB = NULL;
vtkgl::PFNGLVERTEXATTRIB2FARBPROC vtkgl::VertexAttrib2fARB = NULL;
vtkgl::PFNGLVERTEXATTRIB2FVARBPROC vtkgl::VertexAttrib2fvARB = NULL;
vtkgl::PFNGLVERTEXATTRIB2SARBPROC vtkgl::VertexAttrib2sARB = NULL;
vtkgl::PFNGLVERTEXATTRIB2SVARBPROC vtkgl::VertexAttrib2svARB = NULL;
vtkgl::PFNGLVERTEXATTRIB3DARBPROC vtkgl::VertexAttrib3dARB = NULL;
vtkgl::PFNGLVERTEXATTRIB3DVARBPROC vtkgl::VertexAttrib3dvARB = NULL;
vtkgl::PFNGLVERTEXATTRIB3FARBPROC vtkgl::VertexAttrib3fARB = NULL;
vtkgl::PFNGLVERTEXATTRIB3FVARBPROC vtkgl::VertexAttrib3fvARB = NULL;
vtkgl::PFNGLVERTEXATTRIB3SARBPROC vtkgl::VertexAttrib3sARB = NULL;
vtkgl::PFNGLVERTEXATTRIB3SVARBPROC vtkgl::VertexAttrib3svARB = NULL;
vtkgl::PFNGLVERTEXATTRIB4NBVARBPROC vtkgl::VertexAttrib4NbvARB = NULL;
vtkgl::PFNGLVERTEXATTRIB4NIVARBPROC vtkgl::VertexAttrib4NivARB = NULL;
vtkgl::PFNGLVERTEXATTRIB4NSVARBPROC vtkgl::VertexAttrib4NsvARB = NULL;
vtkgl::PFNGLVERTEXATTRIB4NUBARBPROC vtkgl::VertexAttrib4NubARB = NULL;
vtkgl::PFNGLVERTEXATTRIB4NUBVARBPROC vtkgl::VertexAttrib4NubvARB = NULL;
vtkgl::PFNGLVERTEXATTRIB4NUIVARBPROC vtkgl::VertexAttrib4NuivARB = NULL;
vtkgl::PFNGLVERTEXATTRIB4NUSVARBPROC vtkgl::VertexAttrib4NusvARB = NULL;
vtkgl::PFNGLVERTEXATTRIB4BVARBPROC vtkgl::VertexAttrib4bvARB = NULL;
vtkgl::PFNGLVERTEXATTRIB4DARBPROC vtkgl::VertexAttrib4dARB = NULL;
vtkgl::PFNGLVERTEXATTRIB4DVARBPROC vtkgl::VertexAttrib4dvARB = NULL;
vtkgl::PFNGLVERTEXATTRIB4FARBPROC vtkgl::VertexAttrib4fARB = NULL;
vtkgl::PFNGLVERTEXATTRIB4FVARBPROC vtkgl::VertexAttrib4fvARB = NULL;
vtkgl::PFNGLVERTEXATTRIB4IVARBPROC vtkgl::VertexAttrib4ivARB = NULL;
vtkgl::PFNGLVERTEXATTRIB4SARBPROC vtkgl::VertexAttrib4sARB = NULL;
vtkgl::PFNGLVERTEXATTRIB4SVARBPROC vtkgl::VertexAttrib4svARB = NULL;
vtkgl::PFNGLVERTEXATTRIB4UBVARBPROC vtkgl::VertexAttrib4ubvARB = NULL;
vtkgl::PFNGLVERTEXATTRIB4UIVARBPROC vtkgl::VertexAttrib4uivARB = NULL;
vtkgl::PFNGLVERTEXATTRIB4USVARBPROC vtkgl::VertexAttrib4usvARB = NULL;
vtkgl::PFNGLVERTEXATTRIBPOINTERARBPROC vtkgl::VertexAttribPointerARB = NULL;
vtkgl::PFNGLENABLEVERTEXATTRIBARRAYARBPROC vtkgl::EnableVertexAttribArrayARB = NULL;
vtkgl::PFNGLDISABLEVERTEXATTRIBARRAYARBPROC vtkgl::DisableVertexAttribArrayARB = NULL;
vtkgl::PFNGLPROGRAMSTRINGARBPROC vtkgl::ProgramStringARB = NULL;
vtkgl::PFNGLBINDPROGRAMARBPROC vtkgl::BindProgramARB = NULL;
vtkgl::PFNGLDELETEPROGRAMSARBPROC vtkgl::DeleteProgramsARB = NULL;
vtkgl::PFNGLGENPROGRAMSARBPROC vtkgl::GenProgramsARB = NULL;
vtkgl::PFNGLPROGRAMENVPARAMETER4DARBPROC vtkgl::ProgramEnvParameter4dARB = NULL;
vtkgl::PFNGLPROGRAMENVPARAMETER4DVARBPROC vtkgl::ProgramEnvParameter4dvARB = NULL;
vtkgl::PFNGLPROGRAMENVPARAMETER4FARBPROC vtkgl::ProgramEnvParameter4fARB = NULL;
vtkgl::PFNGLPROGRAMENVPARAMETER4FVARBPROC vtkgl::ProgramEnvParameter4fvARB = NULL;
vtkgl::PFNGLPROGRAMLOCALPARAMETER4DARBPROC vtkgl::ProgramLocalParameter4dARB = NULL;
vtkgl::PFNGLPROGRAMLOCALPARAMETER4DVARBPROC vtkgl::ProgramLocalParameter4dvARB = NULL;
vtkgl::PFNGLPROGRAMLOCALPARAMETER4FARBPROC vtkgl::ProgramLocalParameter4fARB = NULL;
vtkgl::PFNGLPROGRAMLOCALPARAMETER4FVARBPROC vtkgl::ProgramLocalParameter4fvARB = NULL;
vtkgl::PFNGLGETPROGRAMENVPARAMETERDVARBPROC vtkgl::GetProgramEnvParameterdvARB = NULL;
vtkgl::PFNGLGETPROGRAMENVPARAMETERFVARBPROC vtkgl::GetProgramEnvParameterfvARB = NULL;
vtkgl::PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC vtkgl::GetProgramLocalParameterdvARB = NULL;
vtkgl::PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC vtkgl::GetProgramLocalParameterfvARB = NULL;
vtkgl::PFNGLGETPROGRAMIVARBPROC vtkgl::GetProgramivARB = NULL;
vtkgl::PFNGLGETPROGRAMSTRINGARBPROC vtkgl::GetProgramStringARB = NULL;
vtkgl::PFNGLGETVERTEXATTRIBDVARBPROC vtkgl::GetVertexAttribdvARB = NULL;
vtkgl::PFNGLGETVERTEXATTRIBFVARBPROC vtkgl::GetVertexAttribfvARB = NULL;
vtkgl::PFNGLGETVERTEXATTRIBIVARBPROC vtkgl::GetVertexAttribivARB = NULL;
vtkgl::PFNGLGETVERTEXATTRIBPOINTERVARBPROC vtkgl::GetVertexAttribPointervARB = NULL;
vtkgl::PFNGLISPROGRAMARBPROC vtkgl::IsProgramARB = NULL;
//Functions for GL_ARB_vertex_shader
vtkgl::PFNGLBINDATTRIBLOCATIONARBPROC vtkgl::BindAttribLocationARB = NULL;
vtkgl::PFNGLGETACTIVEATTRIBARBPROC vtkgl::GetActiveAttribARB = NULL;
vtkgl::PFNGLGETATTRIBLOCATIONARBPROC vtkgl::GetAttribLocationARB = NULL;
//Functions for GL_ARB_window_pos
vtkgl::PFNGLWINDOWPOS2DARBPROC vtkgl::WindowPos2dARB = NULL;
vtkgl::PFNGLWINDOWPOS2DVARBPROC vtkgl::WindowPos2dvARB = NULL;
vtkgl::PFNGLWINDOWPOS2FARBPROC vtkgl::WindowPos2fARB = NULL;
vtkgl::PFNGLWINDOWPOS2FVARBPROC vtkgl::WindowPos2fvARB = NULL;
vtkgl::PFNGLWINDOWPOS2IARBPROC vtkgl::WindowPos2iARB = NULL;
vtkgl::PFNGLWINDOWPOS2IVARBPROC vtkgl::WindowPos2ivARB = NULL;
vtkgl::PFNGLWINDOWPOS2SARBPROC vtkgl::WindowPos2sARB = NULL;
vtkgl::PFNGLWINDOWPOS2SVARBPROC vtkgl::WindowPos2svARB = NULL;
vtkgl::PFNGLWINDOWPOS3DARBPROC vtkgl::WindowPos3dARB = NULL;
vtkgl::PFNGLWINDOWPOS3DVARBPROC vtkgl::WindowPos3dvARB = NULL;
vtkgl::PFNGLWINDOWPOS3FARBPROC vtkgl::WindowPos3fARB = NULL;
vtkgl::PFNGLWINDOWPOS3FVARBPROC vtkgl::WindowPos3fvARB = NULL;
vtkgl::PFNGLWINDOWPOS3IARBPROC vtkgl::WindowPos3iARB = NULL;
vtkgl::PFNGLWINDOWPOS3IVARBPROC vtkgl::WindowPos3ivARB = NULL;
vtkgl::PFNGLWINDOWPOS3SARBPROC vtkgl::WindowPos3sARB = NULL;
vtkgl::PFNGLWINDOWPOS3SVARBPROC vtkgl::WindowPos3svARB = NULL;
//Functions for GL_ATI_draw_buffers
vtkgl::PFNGLDRAWBUFFERSATIPROC vtkgl::DrawBuffersATI = NULL;
//Functions for GL_ATI_element_array
vtkgl::PFNGLELEMENTPOINTERATIPROC vtkgl::ElementPointerATI = NULL;
vtkgl::PFNGLDRAWELEMENTARRAYATIPROC vtkgl::DrawElementArrayATI = NULL;
vtkgl::PFNGLDRAWRANGEELEMENTARRAYATIPROC vtkgl::DrawRangeElementArrayATI = NULL;
//Functions for GL_ATI_envmap_bumpmap
vtkgl::PFNGLTEXBUMPPARAMETERIVATIPROC vtkgl::TexBumpParameterivATI = NULL;
vtkgl::PFNGLTEXBUMPPARAMETERFVATIPROC vtkgl::TexBumpParameterfvATI = NULL;
vtkgl::PFNGLGETTEXBUMPPARAMETERIVATIPROC vtkgl::GetTexBumpParameterivATI = NULL;
vtkgl::PFNGLGETTEXBUMPPARAMETERFVATIPROC vtkgl::GetTexBumpParameterfvATI = NULL;
//Functions for GL_ATI_fragment_shader
vtkgl::PFNGLGENFRAGMENTSHADERSATIPROC vtkgl::GenFragmentShadersATI = NULL;
vtkgl::PFNGLBINDFRAGMENTSHADERATIPROC vtkgl::BindFragmentShaderATI = NULL;
vtkgl::PFNGLDELETEFRAGMENTSHADERATIPROC vtkgl::DeleteFragmentShaderATI = NULL;
vtkgl::PFNGLBEGINFRAGMENTSHADERATIPROC vtkgl::BeginFragmentShaderATI = NULL;
vtkgl::PFNGLENDFRAGMENTSHADERATIPROC vtkgl::EndFragmentShaderATI = NULL;
vtkgl::PFNGLPASSTEXCOORDATIPROC vtkgl::PassTexCoordATI = NULL;
vtkgl::PFNGLSAMPLEMAPATIPROC vtkgl::SampleMapATI = NULL;
vtkgl::PFNGLCOLORFRAGMENTOP1ATIPROC vtkgl::ColorFragmentOp1ATI = NULL;
vtkgl::PFNGLCOLORFRAGMENTOP2ATIPROC vtkgl::ColorFragmentOp2ATI = NULL;
vtkgl::PFNGLCOLORFRAGMENTOP3ATIPROC vtkgl::ColorFragmentOp3ATI = NULL;
vtkgl::PFNGLALPHAFRAGMENTOP1ATIPROC vtkgl::AlphaFragmentOp1ATI = NULL;
vtkgl::PFNGLALPHAFRAGMENTOP2ATIPROC vtkgl::AlphaFragmentOp2ATI = NULL;
vtkgl::PFNGLALPHAFRAGMENTOP3ATIPROC vtkgl::AlphaFragmentOp3ATI = NULL;
vtkgl::PFNGLSETFRAGMENTSHADERCONSTANTATIPROC vtkgl::SetFragmentShaderConstantATI = NULL;
//Functions for GL_ATI_map_object_buffer
vtkgl::PFNGLMAPOBJECTBUFFERATIPROC vtkgl::MapObjectBufferATI = NULL;
vtkgl::PFNGLUNMAPOBJECTBUFFERATIPROC vtkgl::UnmapObjectBufferATI = NULL;
//Functions for GL_ATI_pn_triangles
vtkgl::PFNGLPNTRIANGLESIATIPROC vtkgl::PNTrianglesiATI = NULL;
vtkgl::PFNGLPNTRIANGLESFATIPROC vtkgl::PNTrianglesfATI = NULL;
//Functions for GL_ATI_separate_stencil
vtkgl::PFNGLSTENCILOPSEPARATEATIPROC vtkgl::StencilOpSeparateATI = NULL;
vtkgl::PFNGLSTENCILFUNCSEPARATEATIPROC vtkgl::StencilFuncSeparateATI = NULL;
//Functions for GL_ATI_vertex_array_object
vtkgl::PFNGLNEWOBJECTBUFFERATIPROC vtkgl::NewObjectBufferATI = NULL;
vtkgl::PFNGLISOBJECTBUFFERATIPROC vtkgl::IsObjectBufferATI = NULL;
vtkgl::PFNGLUPDATEOBJECTBUFFERATIPROC vtkgl::UpdateObjectBufferATI = NULL;
vtkgl::PFNGLGETOBJECTBUFFERFVATIPROC vtkgl::GetObjectBufferfvATI = NULL;
vtkgl::PFNGLGETOBJECTBUFFERIVATIPROC vtkgl::GetObjectBufferivATI = NULL;
vtkgl::PFNGLFREEOBJECTBUFFERATIPROC vtkgl::FreeObjectBufferATI = NULL;
vtkgl::PFNGLARRAYOBJECTATIPROC vtkgl::ArrayObjectATI = NULL;
vtkgl::PFNGLGETARRAYOBJECTFVATIPROC vtkgl::GetArrayObjectfvATI = NULL;
vtkgl::PFNGLGETARRAYOBJECTIVATIPROC vtkgl::GetArrayObjectivATI = NULL;
vtkgl::PFNGLVARIANTARRAYOBJECTATIPROC vtkgl::VariantArrayObjectATI = NULL;
vtkgl::PFNGLGETVARIANTARRAYOBJECTFVATIPROC vtkgl::GetVariantArrayObjectfvATI = NULL;
vtkgl::PFNGLGETVARIANTARRAYOBJECTIVATIPROC vtkgl::GetVariantArrayObjectivATI = NULL;
//Functions for GL_ATI_vertex_attrib_array_object
vtkgl::PFNGLVERTEXATTRIBARRAYOBJECTATIPROC vtkgl::VertexAttribArrayObjectATI = NULL;
vtkgl::PFNGLGETVERTEXATTRIBARRAYOBJECTFVATIPROC vtkgl::GetVertexAttribArrayObjectfvATI = NULL;
vtkgl::PFNGLGETVERTEXATTRIBARRAYOBJECTIVATIPROC vtkgl::GetVertexAttribArrayObjectivATI = NULL;
//Functions for GL_ATI_vertex_streams
vtkgl::PFNGLVERTEXSTREAM1SATIPROC vtkgl::VertexStream1sATI = NULL;
vtkgl::PFNGLVERTEXSTREAM1SVATIPROC vtkgl::VertexStream1svATI = NULL;
vtkgl::PFNGLVERTEXSTREAM1IATIPROC vtkgl::VertexStream1iATI = NULL;
vtkgl::PFNGLVERTEXSTREAM1IVATIPROC vtkgl::VertexStream1ivATI = NULL;
vtkgl::PFNGLVERTEXSTREAM1FATIPROC vtkgl::VertexStream1fATI = NULL;
vtkgl::PFNGLVERTEXSTREAM1FVATIPROC vtkgl::VertexStream1fvATI = NULL;
vtkgl::PFNGLVERTEXSTREAM1DATIPROC vtkgl::VertexStream1dATI = NULL;
vtkgl::PFNGLVERTEXSTREAM1DVATIPROC vtkgl::VertexStream1dvATI = NULL;
vtkgl::PFNGLVERTEXSTREAM2SATIPROC vtkgl::VertexStream2sATI = NULL;
vtkgl::PFNGLVERTEXSTREAM2SVATIPROC vtkgl::VertexStream2svATI = NULL;
vtkgl::PFNGLVERTEXSTREAM2IATIPROC vtkgl::VertexStream2iATI = NULL;
vtkgl::PFNGLVERTEXSTREAM2IVATIPROC vtkgl::VertexStream2ivATI = NULL;
vtkgl::PFNGLVERTEXSTREAM2FATIPROC vtkgl::VertexStream2fATI = NULL;
vtkgl::PFNGLVERTEXSTREAM2FVATIPROC vtkgl::VertexStream2fvATI = NULL;
vtkgl::PFNGLVERTEXSTREAM2DATIPROC vtkgl::VertexStream2dATI = NULL;
vtkgl::PFNGLVERTEXSTREAM2DVATIPROC vtkgl::VertexStream2dvATI = NULL;
vtkgl::PFNGLVERTEXSTREAM3SATIPROC vtkgl::VertexStream3sATI = NULL;
vtkgl::PFNGLVERTEXSTREAM3SVATIPROC vtkgl::VertexStream3svATI = NULL;
vtkgl::PFNGLVERTEXSTREAM3IATIPROC vtkgl::VertexStream3iATI = NULL;
vtkgl::PFNGLVERTEXSTREAM3IVATIPROC vtkgl::VertexStream3ivATI = NULL;
vtkgl::PFNGLVERTEXSTREAM3FATIPROC vtkgl::VertexStream3fATI = NULL;
vtkgl::PFNGLVERTEXSTREAM3FVATIPROC vtkgl::VertexStream3fvATI = NULL;
vtkgl::PFNGLVERTEXSTREAM3DATIPROC vtkgl::VertexStream3dATI = NULL;
vtkgl::PFNGLVERTEXSTREAM3DVATIPROC vtkgl::VertexStream3dvATI = NULL;
vtkgl::PFNGLVERTEXSTREAM4SATIPROC vtkgl::VertexStream4sATI = NULL;
vtkgl::PFNGLVERTEXSTREAM4SVATIPROC vtkgl::VertexStream4svATI = NULL;
vtkgl::PFNGLVERTEXSTREAM4IATIPROC vtkgl::VertexStream4iATI = NULL;
vtkgl::PFNGLVERTEXSTREAM4IVATIPROC vtkgl::VertexStream4ivATI = NULL;
vtkgl::PFNGLVERTEXSTREAM4FATIPROC vtkgl::VertexStream4fATI = NULL;
vtkgl::PFNGLVERTEXSTREAM4FVATIPROC vtkgl::VertexStream4fvATI = NULL;
vtkgl::PFNGLVERTEXSTREAM4DATIPROC vtkgl::VertexStream4dATI = NULL;
vtkgl::PFNGLVERTEXSTREAM4DVATIPROC vtkgl::VertexStream4dvATI = NULL;
vtkgl::PFNGLNORMALSTREAM3BATIPROC vtkgl::NormalStream3bATI = NULL;
vtkgl::PFNGLNORMALSTREAM3BVATIPROC vtkgl::NormalStream3bvATI = NULL;
vtkgl::PFNGLNORMALSTREAM3SATIPROC vtkgl::NormalStream3sATI = NULL;
vtkgl::PFNGLNORMALSTREAM3SVATIPROC vtkgl::NormalStream3svATI = NULL;
vtkgl::PFNGLNORMALSTREAM3IATIPROC vtkgl::NormalStream3iATI = NULL;
vtkgl::PFNGLNORMALSTREAM3IVATIPROC vtkgl::NormalStream3ivATI = NULL;
vtkgl::PFNGLNORMALSTREAM3FATIPROC vtkgl::NormalStream3fATI = NULL;
vtkgl::PFNGLNORMALSTREAM3FVATIPROC vtkgl::NormalStream3fvATI = NULL;
vtkgl::PFNGLNORMALSTREAM3DATIPROC vtkgl::NormalStream3dATI = NULL;
vtkgl::PFNGLNORMALSTREAM3DVATIPROC vtkgl::NormalStream3dvATI = NULL;
vtkgl::PFNGLCLIENTACTIVEVERTEXSTREAMATIPROC vtkgl::ClientActiveVertexStreamATI = NULL;
vtkgl::PFNGLVERTEXBLENDENVIATIPROC vtkgl::VertexBlendEnviATI = NULL;
vtkgl::PFNGLVERTEXBLENDENVFATIPROC vtkgl::VertexBlendEnvfATI = NULL;
//Functions for GL_EXT_blend_color
vtkgl::PFNGLBLENDCOLOREXTPROC vtkgl::BlendColorEXT = NULL;
//Functions for GL_EXT_blend_equation_separate
vtkgl::PFNGLBLENDEQUATIONSEPARATEEXTPROC vtkgl::BlendEquationSeparateEXT = NULL;
//Functions for GL_EXT_blend_func_separate
vtkgl::PFNGLBLENDFUNCSEPARATEEXTPROC vtkgl::BlendFuncSeparateEXT = NULL;
//Functions for GL_EXT_blend_minmax
vtkgl::PFNGLBLENDEQUATIONEXTPROC vtkgl::BlendEquationEXT = NULL;
//Functions for GL_EXT_color_subtable
vtkgl::PFNGLCOLORSUBTABLEEXTPROC vtkgl::ColorSubTableEXT = NULL;
vtkgl::PFNGLCOPYCOLORSUBTABLEEXTPROC vtkgl::CopyColorSubTableEXT = NULL;
//Functions for GL_EXT_compiled_vertex_array
vtkgl::PFNGLLOCKARRAYSEXTPROC vtkgl::LockArraysEXT = NULL;
vtkgl::PFNGLUNLOCKARRAYSEXTPROC vtkgl::UnlockArraysEXT = NULL;
//Functions for GL_EXT_convolution
vtkgl::PFNGLCONVOLUTIONFILTER1DEXTPROC vtkgl::ConvolutionFilter1DEXT = NULL;
vtkgl::PFNGLCONVOLUTIONFILTER2DEXTPROC vtkgl::ConvolutionFilter2DEXT = NULL;
vtkgl::PFNGLCONVOLUTIONPARAMETERFEXTPROC vtkgl::ConvolutionParameterfEXT = NULL;
vtkgl::PFNGLCONVOLUTIONPARAMETERFVEXTPROC vtkgl::ConvolutionParameterfvEXT = NULL;
vtkgl::PFNGLCONVOLUTIONPARAMETERIEXTPROC vtkgl::ConvolutionParameteriEXT = NULL;
vtkgl::PFNGLCONVOLUTIONPARAMETERIVEXTPROC vtkgl::ConvolutionParameterivEXT = NULL;
vtkgl::PFNGLCOPYCONVOLUTIONFILTER1DEXTPROC vtkgl::CopyConvolutionFilter1DEXT = NULL;
vtkgl::PFNGLCOPYCONVOLUTIONFILTER2DEXTPROC vtkgl::CopyConvolutionFilter2DEXT = NULL;
vtkgl::PFNGLGETCONVOLUTIONFILTEREXTPROC vtkgl::GetConvolutionFilterEXT = NULL;
vtkgl::PFNGLGETCONVOLUTIONPARAMETERFVEXTPROC vtkgl::GetConvolutionParameterfvEXT = NULL;
vtkgl::PFNGLGETCONVOLUTIONPARAMETERIVEXTPROC vtkgl::GetConvolutionParameterivEXT = NULL;
vtkgl::PFNGLGETSEPARABLEFILTEREXTPROC vtkgl::GetSeparableFilterEXT = NULL;
vtkgl::PFNGLSEPARABLEFILTER2DEXTPROC vtkgl::SeparableFilter2DEXT = NULL;
//Functions for GL_EXT_coordinate_frame
vtkgl::PFNGLTANGENT3BEXTPROC vtkgl::Tangent3bEXT = NULL;
vtkgl::PFNGLTANGENT3BVEXTPROC vtkgl::Tangent3bvEXT = NULL;
vtkgl::PFNGLTANGENT3DEXTPROC vtkgl::Tangent3dEXT = NULL;
vtkgl::PFNGLTANGENT3DVEXTPROC vtkgl::Tangent3dvEXT = NULL;
vtkgl::PFNGLTANGENT3FEXTPROC vtkgl::Tangent3fEXT = NULL;
vtkgl::PFNGLTANGENT3FVEXTPROC vtkgl::Tangent3fvEXT = NULL;
vtkgl::PFNGLTANGENT3IEXTPROC vtkgl::Tangent3iEXT = NULL;
vtkgl::PFNGLTANGENT3IVEXTPROC vtkgl::Tangent3ivEXT = NULL;
vtkgl::PFNGLTANGENT3SEXTPROC vtkgl::Tangent3sEXT = NULL;
vtkgl::PFNGLTANGENT3SVEXTPROC vtkgl::Tangent3svEXT = NULL;
vtkgl::PFNGLBINORMAL3BEXTPROC vtkgl::Binormal3bEXT = NULL;
vtkgl::PFNGLBINORMAL3BVEXTPROC vtkgl::Binormal3bvEXT = NULL;
vtkgl::PFNGLBINORMAL3DEXTPROC vtkgl::Binormal3dEXT = NULL;
vtkgl::PFNGLBINORMAL3DVEXTPROC vtkgl::Binormal3dvEXT = NULL;
vtkgl::PFNGLBINORMAL3FEXTPROC vtkgl::Binormal3fEXT = NULL;
vtkgl::PFNGLBINORMAL3FVEXTPROC vtkgl::Binormal3fvEXT = NULL;
vtkgl::PFNGLBINORMAL3IEXTPROC vtkgl::Binormal3iEXT = NULL;
vtkgl::PFNGLBINORMAL3IVEXTPROC vtkgl::Binormal3ivEXT = NULL;
vtkgl::PFNGLBINORMAL3SEXTPROC vtkgl::Binormal3sEXT = NULL;
vtkgl::PFNGLBINORMAL3SVEXTPROC vtkgl::Binormal3svEXT = NULL;
vtkgl::PFNGLTANGENTPOINTEREXTPROC vtkgl::TangentPointerEXT = NULL;
vtkgl::PFNGLBINORMALPOINTEREXTPROC vtkgl::BinormalPointerEXT = NULL;
//Functions for GL_EXT_copy_texture
vtkgl::PFNGLCOPYTEXIMAGE1DEXTPROC vtkgl::CopyTexImage1DEXT = NULL;
vtkgl::PFNGLCOPYTEXIMAGE2DEXTPROC vtkgl::CopyTexImage2DEXT = NULL;
vtkgl::PFNGLCOPYTEXSUBIMAGE1DEXTPROC vtkgl::CopyTexSubImage1DEXT = NULL;
vtkgl::PFNGLCOPYTEXSUBIMAGE2DEXTPROC vtkgl::CopyTexSubImage2DEXT = NULL;
vtkgl::PFNGLCOPYTEXSUBIMAGE3DEXTPROC vtkgl::CopyTexSubImage3DEXT = NULL;
//Functions for GL_EXT_cull_vertex
vtkgl::PFNGLCULLPARAMETERDVEXTPROC vtkgl::CullParameterdvEXT = NULL;
vtkgl::PFNGLCULLPARAMETERFVEXTPROC vtkgl::CullParameterfvEXT = NULL;
//Functions for GL_EXT_depth_bounds_test
vtkgl::PFNGLDEPTHBOUNDSEXTPROC vtkgl::DepthBoundsEXT = NULL;
//Functions for GL_EXT_draw_range_elements
vtkgl::PFNGLDRAWRANGEELEMENTSEXTPROC vtkgl::DrawRangeElementsEXT = NULL;
//Functions for GL_EXT_fog_coord
vtkgl::PFNGLFOGCOORDFEXTPROC vtkgl::FogCoordfEXT = NULL;
vtkgl::PFNGLFOGCOORDFVEXTPROC vtkgl::FogCoordfvEXT = NULL;
vtkgl::PFNGLFOGCOORDDEXTPROC vtkgl::FogCoorddEXT = NULL;
vtkgl::PFNGLFOGCOORDDVEXTPROC vtkgl::FogCoorddvEXT = NULL;
vtkgl::PFNGLFOGCOORDPOINTEREXTPROC vtkgl::FogCoordPointerEXT = NULL;
//Functions for GL_EXT_histogram
vtkgl::PFNGLGETHISTOGRAMEXTPROC vtkgl::GetHistogramEXT = NULL;
vtkgl::PFNGLGETHISTOGRAMPARAMETERFVEXTPROC vtkgl::GetHistogramParameterfvEXT = NULL;
vtkgl::PFNGLGETHISTOGRAMPARAMETERIVEXTPROC vtkgl::GetHistogramParameterivEXT = NULL;
vtkgl::PFNGLGETMINMAXEXTPROC vtkgl::GetMinmaxEXT = NULL;
vtkgl::PFNGLGETMINMAXPARAMETERFVEXTPROC vtkgl::GetMinmaxParameterfvEXT = NULL;
vtkgl::PFNGLGETMINMAXPARAMETERIVEXTPROC vtkgl::GetMinmaxParameterivEXT = NULL;
vtkgl::PFNGLHISTOGRAMEXTPROC vtkgl::HistogramEXT = NULL;
vtkgl::PFNGLMINMAXEXTPROC vtkgl::MinmaxEXT = NULL;
vtkgl::PFNGLRESETHISTOGRAMEXTPROC vtkgl::ResetHistogramEXT = NULL;
vtkgl::PFNGLRESETMINMAXEXTPROC vtkgl::ResetMinmaxEXT = NULL;
//Functions for GL_EXT_index_func
vtkgl::PFNGLINDEXFUNCEXTPROC vtkgl::IndexFuncEXT = NULL;
//Functions for GL_EXT_index_material
vtkgl::PFNGLINDEXMATERIALEXTPROC vtkgl::IndexMaterialEXT = NULL;
//Functions for GL_EXT_light_texture
vtkgl::PFNGLAPPLYTEXTUREEXTPROC vtkgl::ApplyTextureEXT = NULL;
vtkgl::PFNGLTEXTURELIGHTEXTPROC vtkgl::TextureLightEXT = NULL;
vtkgl::PFNGLTEXTUREMATERIALEXTPROC vtkgl::TextureMaterialEXT = NULL;
//Functions for GL_EXT_multi_draw_arrays
vtkgl::PFNGLMULTIDRAWARRAYSEXTPROC vtkgl::MultiDrawArraysEXT = NULL;
vtkgl::PFNGLMULTIDRAWELEMENTSEXTPROC vtkgl::MultiDrawElementsEXT = NULL;
//Functions for GL_EXT_multisample
vtkgl::PFNGLSAMPLEMASKEXTPROC vtkgl::SampleMaskEXT = NULL;
vtkgl::PFNGLSAMPLEPATTERNEXTPROC vtkgl::SamplePatternEXT = NULL;
//Functions for GL_EXT_paletted_texture
vtkgl::PFNGLCOLORTABLEEXTPROC vtkgl::ColorTableEXT = NULL;
vtkgl::PFNGLGETCOLORTABLEEXTPROC vtkgl::GetColorTableEXT = NULL;
vtkgl::PFNGLGETCOLORTABLEPARAMETERIVEXTPROC vtkgl::GetColorTableParameterivEXT = NULL;
vtkgl::PFNGLGETCOLORTABLEPARAMETERFVEXTPROC vtkgl::GetColorTableParameterfvEXT = NULL;
//Functions for GL_EXT_pixel_transform
vtkgl::PFNGLPIXELTRANSFORMPARAMETERIEXTPROC vtkgl::PixelTransformParameteriEXT = NULL;
vtkgl::PFNGLPIXELTRANSFORMPARAMETERFEXTPROC vtkgl::PixelTransformParameterfEXT = NULL;
vtkgl::PFNGLPIXELTRANSFORMPARAMETERIVEXTPROC vtkgl::PixelTransformParameterivEXT = NULL;
vtkgl::PFNGLPIXELTRANSFORMPARAMETERFVEXTPROC vtkgl::PixelTransformParameterfvEXT = NULL;
//Functions for GL_EXT_point_parameters
vtkgl::PFNGLPOINTPARAMETERFEXTPROC vtkgl::PointParameterfEXT = NULL;
vtkgl::PFNGLPOINTPARAMETERFVEXTPROC vtkgl::PointParameterfvEXT = NULL;
//Functions for GL_EXT_polygon_offset
vtkgl::PFNGLPOLYGONOFFSETEXTPROC vtkgl::PolygonOffsetEXT = NULL;
//Functions for GL_EXT_secondary_color
vtkgl::PFNGLSECONDARYCOLOR3BEXTPROC vtkgl::SecondaryColor3bEXT = NULL;
vtkgl::PFNGLSECONDARYCOLOR3BVEXTPROC vtkgl::SecondaryColor3bvEXT = NULL;
vtkgl::PFNGLSECONDARYCOLOR3DEXTPROC vtkgl::SecondaryColor3dEXT = NULL;
vtkgl::PFNGLSECONDARYCOLOR3DVEXTPROC vtkgl::SecondaryColor3dvEXT = NULL;
vtkgl::PFNGLSECONDARYCOLOR3FEXTPROC vtkgl::SecondaryColor3fEXT = NULL;
vtkgl::PFNGLSECONDARYCOLOR3FVEXTPROC vtkgl::SecondaryColor3fvEXT = NULL;
vtkgl::PFNGLSECONDARYCOLOR3IEXTPROC vtkgl::SecondaryColor3iEXT = NULL;
vtkgl::PFNGLSECONDARYCOLOR3IVEXTPROC vtkgl::SecondaryColor3ivEXT = NULL;
vtkgl::PFNGLSECONDARYCOLOR3SEXTPROC vtkgl::SecondaryColor3sEXT = NULL;
vtkgl::PFNGLSECONDARYCOLOR3SVEXTPROC vtkgl::SecondaryColor3svEXT = NULL;
vtkgl::PFNGLSECONDARYCOLOR3UBEXTPROC vtkgl::SecondaryColor3ubEXT = NULL;
vtkgl::PFNGLSECONDARYCOLOR3UBVEXTPROC vtkgl::SecondaryColor3ubvEXT = NULL;
vtkgl::PFNGLSECONDARYCOLOR3UIEXTPROC vtkgl::SecondaryColor3uiEXT = NULL;
vtkgl::PFNGLSECONDARYCOLOR3UIVEXTPROC vtkgl::SecondaryColor3uivEXT = NULL;
vtkgl::PFNGLSECONDARYCOLOR3USEXTPROC vtkgl::SecondaryColor3usEXT = NULL;
vtkgl::PFNGLSECONDARYCOLOR3USVEXTPROC vtkgl::SecondaryColor3usvEXT = NULL;
vtkgl::PFNGLSECONDARYCOLORPOINTEREXTPROC vtkgl::SecondaryColorPointerEXT = NULL;
//Functions for GL_EXT_stencil_two_side
vtkgl::PFNGLACTIVESTENCILFACEEXTPROC vtkgl::ActiveStencilFaceEXT = NULL;
//Functions for GL_EXT_subtexture
vtkgl::PFNGLTEXSUBIMAGE1DEXTPROC vtkgl::TexSubImage1DEXT = NULL;
vtkgl::PFNGLTEXSUBIMAGE2DEXTPROC vtkgl::TexSubImage2DEXT = NULL;
//Functions for GL_EXT_texture3D
vtkgl::PFNGLTEXIMAGE3DEXTPROC vtkgl::TexImage3DEXT = NULL;
vtkgl::PFNGLTEXSUBIMAGE3DEXTPROC vtkgl::TexSubImage3DEXT = NULL;
//Functions for GL_EXT_texture_object
vtkgl::PFNGLARETEXTURESRESIDENTEXTPROC vtkgl::AreTexturesResidentEXT = NULL;
vtkgl::PFNGLBINDTEXTUREEXTPROC vtkgl::BindTextureEXT = NULL;
vtkgl::PFNGLDELETETEXTURESEXTPROC vtkgl::DeleteTexturesEXT = NULL;
vtkgl::PFNGLGENTEXTURESEXTPROC vtkgl::GenTexturesEXT = NULL;
vtkgl::PFNGLISTEXTUREEXTPROC vtkgl::IsTextureEXT = NULL;
vtkgl::PFNGLPRIORITIZETEXTURESEXTPROC vtkgl::PrioritizeTexturesEXT = NULL;
//Functions for GL_EXT_texture_perturb_normal
vtkgl::PFNGLTEXTURENORMALEXTPROC vtkgl::TextureNormalEXT = NULL;
//Functions for GL_EXT_vertex_array
vtkgl::PFNGLARRAYELEMENTEXTPROC vtkgl::ArrayElementEXT = NULL;
vtkgl::PFNGLCOLORPOINTEREXTPROC vtkgl::ColorPointerEXT = NULL;
vtkgl::PFNGLDRAWARRAYSEXTPROC vtkgl::DrawArraysEXT = NULL;
vtkgl::PFNGLEDGEFLAGPOINTEREXTPROC vtkgl::EdgeFlagPointerEXT = NULL;
vtkgl::PFNGLGETPOINTERVEXTPROC vtkgl::GetPointervEXT = NULL;
vtkgl::PFNGLINDEXPOINTEREXTPROC vtkgl::IndexPointerEXT = NULL;
vtkgl::PFNGLNORMALPOINTEREXTPROC vtkgl::NormalPointerEXT = NULL;
vtkgl::PFNGLTEXCOORDPOINTEREXTPROC vtkgl::TexCoordPointerEXT = NULL;
vtkgl::PFNGLVERTEXPOINTEREXTPROC vtkgl::VertexPointerEXT = NULL;
//Functions for GL_EXT_vertex_shader
vtkgl::PFNGLBEGINVERTEXSHADEREXTPROC vtkgl::BeginVertexShaderEXT = NULL;
vtkgl::PFNGLENDVERTEXSHADEREXTPROC vtkgl::EndVertexShaderEXT = NULL;
vtkgl::PFNGLBINDVERTEXSHADEREXTPROC vtkgl::BindVertexShaderEXT = NULL;
vtkgl::PFNGLGENVERTEXSHADERSEXTPROC vtkgl::GenVertexShadersEXT = NULL;
vtkgl::PFNGLDELETEVERTEXSHADEREXTPROC vtkgl::DeleteVertexShaderEXT = NULL;
vtkgl::PFNGLSHADEROP1EXTPROC vtkgl::ShaderOp1EXT = NULL;
vtkgl::PFNGLSHADEROP2EXTPROC vtkgl::ShaderOp2EXT = NULL;
vtkgl::PFNGLSHADEROP3EXTPROC vtkgl::ShaderOp3EXT = NULL;
vtkgl::PFNGLSWIZZLEEXTPROC vtkgl::SwizzleEXT = NULL;
vtkgl::PFNGLWRITEMASKEXTPROC vtkgl::WriteMaskEXT = NULL;
vtkgl::PFNGLINSERTCOMPONENTEXTPROC vtkgl::InsertComponentEXT = NULL;
vtkgl::PFNGLEXTRACTCOMPONENTEXTPROC vtkgl::ExtractComponentEXT = NULL;
vtkgl::PFNGLGENSYMBOLSEXTPROC vtkgl::GenSymbolsEXT = NULL;
vtkgl::PFNGLSETINVARIANTEXTPROC vtkgl::SetInvariantEXT = NULL;
vtkgl::PFNGLSETLOCALCONSTANTEXTPROC vtkgl::SetLocalConstantEXT = NULL;
vtkgl::PFNGLVARIANTBVEXTPROC vtkgl::VariantbvEXT = NULL;
vtkgl::PFNGLVARIANTSVEXTPROC vtkgl::VariantsvEXT = NULL;
vtkgl::PFNGLVARIANTIVEXTPROC vtkgl::VariantivEXT = NULL;
vtkgl::PFNGLVARIANTFVEXTPROC vtkgl::VariantfvEXT = NULL;
vtkgl::PFNGLVARIANTDVEXTPROC vtkgl::VariantdvEXT = NULL;
vtkgl::PFNGLVARIANTUBVEXTPROC vtkgl::VariantubvEXT = NULL;
vtkgl::PFNGLVARIANTUSVEXTPROC vtkgl::VariantusvEXT = NULL;
vtkgl::PFNGLVARIANTUIVEXTPROC vtkgl::VariantuivEXT = NULL;
vtkgl::PFNGLVARIANTPOINTEREXTPROC vtkgl::VariantPointerEXT = NULL;
vtkgl::PFNGLENABLEVARIANTCLIENTSTATEEXTPROC vtkgl::EnableVariantClientStateEXT = NULL;
vtkgl::PFNGLDISABLEVARIANTCLIENTSTATEEXTPROC vtkgl::DisableVariantClientStateEXT = NULL;
vtkgl::PFNGLBINDLIGHTPARAMETEREXTPROC vtkgl::BindLightParameterEXT = NULL;
vtkgl::PFNGLBINDMATERIALPARAMETEREXTPROC vtkgl::BindMaterialParameterEXT = NULL;
vtkgl::PFNGLBINDTEXGENPARAMETEREXTPROC vtkgl::BindTexGenParameterEXT = NULL;
vtkgl::PFNGLBINDTEXTUREUNITPARAMETEREXTPROC vtkgl::BindTextureUnitParameterEXT = NULL;
vtkgl::PFNGLBINDPARAMETEREXTPROC vtkgl::BindParameterEXT = NULL;
vtkgl::PFNGLISVARIANTENABLEDEXTPROC vtkgl::IsVariantEnabledEXT = NULL;
vtkgl::PFNGLGETVARIANTBOOLEANVEXTPROC vtkgl::GetVariantBooleanvEXT = NULL;
vtkgl::PFNGLGETVARIANTINTEGERVEXTPROC vtkgl::GetVariantIntegervEXT = NULL;
vtkgl::PFNGLGETVARIANTFLOATVEXTPROC vtkgl::GetVariantFloatvEXT = NULL;
vtkgl::PFNGLGETVARIANTPOINTERVEXTPROC vtkgl::GetVariantPointervEXT = NULL;
vtkgl::PFNGLGETINVARIANTBOOLEANVEXTPROC vtkgl::GetInvariantBooleanvEXT = NULL;
vtkgl::PFNGLGETINVARIANTINTEGERVEXTPROC vtkgl::GetInvariantIntegervEXT = NULL;
vtkgl::PFNGLGETINVARIANTFLOATVEXTPROC vtkgl::GetInvariantFloatvEXT = NULL;
vtkgl::PFNGLGETLOCALCONSTANTBOOLEANVEXTPROC vtkgl::GetLocalConstantBooleanvEXT = NULL;
vtkgl::PFNGLGETLOCALCONSTANTINTEGERVEXTPROC vtkgl::GetLocalConstantIntegervEXT = NULL;
vtkgl::PFNGLGETLOCALCONSTANTFLOATVEXTPROC vtkgl::GetLocalConstantFloatvEXT = NULL;
//Functions for GL_EXT_vertex_weighting
vtkgl::PFNGLVERTEXWEIGHTFEXTPROC vtkgl::VertexWeightfEXT = NULL;
vtkgl::PFNGLVERTEXWEIGHTFVEXTPROC vtkgl::VertexWeightfvEXT = NULL;
vtkgl::PFNGLVERTEXWEIGHTPOINTEREXTPROC vtkgl::VertexWeightPointerEXT = NULL;
//Functions for GL_HP_image_transform
vtkgl::PFNGLIMAGETRANSFORMPARAMETERIHPPROC vtkgl::ImageTransformParameteriHP = NULL;
vtkgl::PFNGLIMAGETRANSFORMPARAMETERFHPPROC vtkgl::ImageTransformParameterfHP = NULL;
vtkgl::PFNGLIMAGETRANSFORMPARAMETERIVHPPROC vtkgl::ImageTransformParameterivHP = NULL;
vtkgl::PFNGLIMAGETRANSFORMPARAMETERFVHPPROC vtkgl::ImageTransformParameterfvHP = NULL;
vtkgl::PFNGLGETIMAGETRANSFORMPARAMETERIVHPPROC vtkgl::GetImageTransformParameterivHP = NULL;
vtkgl::PFNGLGETIMAGETRANSFORMPARAMETERFVHPPROC vtkgl::GetImageTransformParameterfvHP = NULL;
//Functions for GL_IBM_multimode_draw_arrays
vtkgl::PFNGLMULTIMODEDRAWARRAYSIBMPROC vtkgl::MultiModeDrawArraysIBM = NULL;
vtkgl::PFNGLMULTIMODEDRAWELEMENTSIBMPROC vtkgl::MultiModeDrawElementsIBM = NULL;
//Functions for GL_IBM_vertex_array_lists
vtkgl::PFNGLCOLORPOINTERLISTIBMPROC vtkgl::ColorPointerListIBM = NULL;
vtkgl::PFNGLSECONDARYCOLORPOINTERLISTIBMPROC vtkgl::SecondaryColorPointerListIBM = NULL;
vtkgl::PFNGLEDGEFLAGPOINTERLISTIBMPROC vtkgl::EdgeFlagPointerListIBM = NULL;
vtkgl::PFNGLFOGCOORDPOINTERLISTIBMPROC vtkgl::FogCoordPointerListIBM = NULL;
vtkgl::PFNGLINDEXPOINTERLISTIBMPROC vtkgl::IndexPointerListIBM = NULL;
vtkgl::PFNGLNORMALPOINTERLISTIBMPROC vtkgl::NormalPointerListIBM = NULL;
vtkgl::PFNGLTEXCOORDPOINTERLISTIBMPROC vtkgl::TexCoordPointerListIBM = NULL;
vtkgl::PFNGLVERTEXPOINTERLISTIBMPROC vtkgl::VertexPointerListIBM = NULL;
//Functions for GL_INGR_blend_func_separate
vtkgl::PFNGLBLENDFUNCSEPARATEINGRPROC vtkgl::BlendFuncSeparateINGR = NULL;
//Functions for GL_INTEL_parallel_arrays
vtkgl::PFNGLVERTEXPOINTERVINTELPROC vtkgl::VertexPointervINTEL = NULL;
vtkgl::PFNGLNORMALPOINTERVINTELPROC vtkgl::NormalPointervINTEL = NULL;
vtkgl::PFNGLCOLORPOINTERVINTELPROC vtkgl::ColorPointervINTEL = NULL;
vtkgl::PFNGLTEXCOORDPOINTERVINTELPROC vtkgl::TexCoordPointervINTEL = NULL;
//Functions for GL_MESA_resize_buffers
vtkgl::PFNGLRESIZEBUFFERSMESAPROC vtkgl::ResizeBuffersMESA = NULL;
//Functions for GL_MESA_window_pos
vtkgl::PFNGLWINDOWPOS2DMESAPROC vtkgl::WindowPos2dMESA = NULL;
vtkgl::PFNGLWINDOWPOS2DVMESAPROC vtkgl::WindowPos2dvMESA = NULL;
vtkgl::PFNGLWINDOWPOS2FMESAPROC vtkgl::WindowPos2fMESA = NULL;
vtkgl::PFNGLWINDOWPOS2FVMESAPROC vtkgl::WindowPos2fvMESA = NULL;
vtkgl::PFNGLWINDOWPOS2IMESAPROC vtkgl::WindowPos2iMESA = NULL;
vtkgl::PFNGLWINDOWPOS2IVMESAPROC vtkgl::WindowPos2ivMESA = NULL;
vtkgl::PFNGLWINDOWPOS2SMESAPROC vtkgl::WindowPos2sMESA = NULL;
vtkgl::PFNGLWINDOWPOS2SVMESAPROC vtkgl::WindowPos2svMESA = NULL;
vtkgl::PFNGLWINDOWPOS3DMESAPROC vtkgl::WindowPos3dMESA = NULL;
vtkgl::PFNGLWINDOWPOS3DVMESAPROC vtkgl::WindowPos3dvMESA = NULL;
vtkgl::PFNGLWINDOWPOS3FMESAPROC vtkgl::WindowPos3fMESA = NULL;
vtkgl::PFNGLWINDOWPOS3FVMESAPROC vtkgl::WindowPos3fvMESA = NULL;
vtkgl::PFNGLWINDOWPOS3IMESAPROC vtkgl::WindowPos3iMESA = NULL;
vtkgl::PFNGLWINDOWPOS3IVMESAPROC vtkgl::WindowPos3ivMESA = NULL;
vtkgl::PFNGLWINDOWPOS3SMESAPROC vtkgl::WindowPos3sMESA = NULL;
vtkgl::PFNGLWINDOWPOS3SVMESAPROC vtkgl::WindowPos3svMESA = NULL;
vtkgl::PFNGLWINDOWPOS4DMESAPROC vtkgl::WindowPos4dMESA = NULL;
vtkgl::PFNGLWINDOWPOS4DVMESAPROC vtkgl::WindowPos4dvMESA = NULL;
vtkgl::PFNGLWINDOWPOS4FMESAPROC vtkgl::WindowPos4fMESA = NULL;
vtkgl::PFNGLWINDOWPOS4FVMESAPROC vtkgl::WindowPos4fvMESA = NULL;
vtkgl::PFNGLWINDOWPOS4IMESAPROC vtkgl::WindowPos4iMESA = NULL;
vtkgl::PFNGLWINDOWPOS4IVMESAPROC vtkgl::WindowPos4ivMESA = NULL;
vtkgl::PFNGLWINDOWPOS4SMESAPROC vtkgl::WindowPos4sMESA = NULL;
vtkgl::PFNGLWINDOWPOS4SVMESAPROC vtkgl::WindowPos4svMESA = NULL;
//Functions for GL_NV_evaluators
vtkgl::PFNGLMAPCONTROLPOINTSNVPROC vtkgl::MapControlPointsNV = NULL;
vtkgl::PFNGLMAPPARAMETERIVNVPROC vtkgl::MapParameterivNV = NULL;
vtkgl::PFNGLMAPPARAMETERFVNVPROC vtkgl::MapParameterfvNV = NULL;
vtkgl::PFNGLGETMAPCONTROLPOINTSNVPROC vtkgl::GetMapControlPointsNV = NULL;
vtkgl::PFNGLGETMAPPARAMETERIVNVPROC vtkgl::GetMapParameterivNV = NULL;
vtkgl::PFNGLGETMAPPARAMETERFVNVPROC vtkgl::GetMapParameterfvNV = NULL;
vtkgl::PFNGLGETMAPATTRIBPARAMETERIVNVPROC vtkgl::GetMapAttribParameterivNV = NULL;
vtkgl::PFNGLGETMAPATTRIBPARAMETERFVNVPROC vtkgl::GetMapAttribParameterfvNV = NULL;
vtkgl::PFNGLEVALMAPSNVPROC vtkgl::EvalMapsNV = NULL;
//Functions for GL_NV_fence
vtkgl::PFNGLDELETEFENCESNVPROC vtkgl::DeleteFencesNV = NULL;
vtkgl::PFNGLGENFENCESNVPROC vtkgl::GenFencesNV = NULL;
vtkgl::PFNGLISFENCENVPROC vtkgl::IsFenceNV = NULL;
vtkgl::PFNGLTESTFENCENVPROC vtkgl::TestFenceNV = NULL;
vtkgl::PFNGLGETFENCEIVNVPROC vtkgl::GetFenceivNV = NULL;
vtkgl::PFNGLFINISHFENCENVPROC vtkgl::FinishFenceNV = NULL;
vtkgl::PFNGLSETFENCENVPROC vtkgl::SetFenceNV = NULL;
//Functions for GL_NV_fragment_program
vtkgl::PFNGLPROGRAMNAMEDPARAMETER4FNVPROC vtkgl::ProgramNamedParameter4fNV = NULL;
vtkgl::PFNGLPROGRAMNAMEDPARAMETER4DNVPROC vtkgl::ProgramNamedParameter4dNV = NULL;
vtkgl::PFNGLPROGRAMNAMEDPARAMETER4FVNVPROC vtkgl::ProgramNamedParameter4fvNV = NULL;
vtkgl::PFNGLPROGRAMNAMEDPARAMETER4DVNVPROC vtkgl::ProgramNamedParameter4dvNV = NULL;
vtkgl::PFNGLGETPROGRAMNAMEDPARAMETERFVNVPROC vtkgl::GetProgramNamedParameterfvNV = NULL;
vtkgl::PFNGLGETPROGRAMNAMEDPARAMETERDVNVPROC vtkgl::GetProgramNamedParameterdvNV = NULL;
//Functions for GL_NV_half_float
vtkgl::PFNGLVERTEX2HNVPROC vtkgl::Vertex2hNV = NULL;
vtkgl::PFNGLVERTEX2HVNVPROC vtkgl::Vertex2hvNV = NULL;
vtkgl::PFNGLVERTEX3HNVPROC vtkgl::Vertex3hNV = NULL;
vtkgl::PFNGLVERTEX3HVNVPROC vtkgl::Vertex3hvNV = NULL;
vtkgl::PFNGLVERTEX4HNVPROC vtkgl::Vertex4hNV = NULL;
vtkgl::PFNGLVERTEX4HVNVPROC vtkgl::Vertex4hvNV = NULL;
vtkgl::PFNGLNORMAL3HNVPROC vtkgl::Normal3hNV = NULL;
vtkgl::PFNGLNORMAL3HVNVPROC vtkgl::Normal3hvNV = NULL;
vtkgl::PFNGLCOLOR3HNVPROC vtkgl::Color3hNV = NULL;
vtkgl::PFNGLCOLOR3HVNVPROC vtkgl::Color3hvNV = NULL;
vtkgl::PFNGLCOLOR4HNVPROC vtkgl::Color4hNV = NULL;
vtkgl::PFNGLCOLOR4HVNVPROC vtkgl::Color4hvNV = NULL;
vtkgl::PFNGLTEXCOORD1HNVPROC vtkgl::TexCoord1hNV = NULL;
vtkgl::PFNGLTEXCOORD1HVNVPROC vtkgl::TexCoord1hvNV = NULL;
vtkgl::PFNGLTEXCOORD2HNVPROC vtkgl::TexCoord2hNV = NULL;
vtkgl::PFNGLTEXCOORD2HVNVPROC vtkgl::TexCoord2hvNV = NULL;
vtkgl::PFNGLTEXCOORD3HNVPROC vtkgl::TexCoord3hNV = NULL;
vtkgl::PFNGLTEXCOORD3HVNVPROC vtkgl::TexCoord3hvNV = NULL;
vtkgl::PFNGLTEXCOORD4HNVPROC vtkgl::TexCoord4hNV = NULL;
vtkgl::PFNGLTEXCOORD4HVNVPROC vtkgl::TexCoord4hvNV = NULL;
vtkgl::PFNGLMULTITEXCOORD1HNVPROC vtkgl::MultiTexCoord1hNV = NULL;
vtkgl::PFNGLMULTITEXCOORD1HVNVPROC vtkgl::MultiTexCoord1hvNV = NULL;
vtkgl::PFNGLMULTITEXCOORD2HNVPROC vtkgl::MultiTexCoord2hNV = NULL;
vtkgl::PFNGLMULTITEXCOORD2HVNVPROC vtkgl::MultiTexCoord2hvNV = NULL;
vtkgl::PFNGLMULTITEXCOORD3HNVPROC vtkgl::MultiTexCoord3hNV = NULL;
vtkgl::PFNGLMULTITEXCOORD3HVNVPROC vtkgl::MultiTexCoord3hvNV = NULL;
vtkgl::PFNGLMULTITEXCOORD4HNVPROC vtkgl::MultiTexCoord4hNV = NULL;
vtkgl::PFNGLMULTITEXCOORD4HVNVPROC vtkgl::MultiTexCoord4hvNV = NULL;
vtkgl::PFNGLFOGCOORDHNVPROC vtkgl::FogCoordhNV = NULL;
vtkgl::PFNGLFOGCOORDHVNVPROC vtkgl::FogCoordhvNV = NULL;
vtkgl::PFNGLSECONDARYCOLOR3HNVPROC vtkgl::SecondaryColor3hNV = NULL;
vtkgl::PFNGLSECONDARYCOLOR3HVNVPROC vtkgl::SecondaryColor3hvNV = NULL;
vtkgl::PFNGLVERTEXWEIGHTHNVPROC vtkgl::VertexWeighthNV = NULL;
vtkgl::PFNGLVERTEXWEIGHTHVNVPROC vtkgl::VertexWeighthvNV = NULL;
vtkgl::PFNGLVERTEXATTRIB1HNVPROC vtkgl::VertexAttrib1hNV = NULL;
vtkgl::PFNGLVERTEXATTRIB1HVNVPROC vtkgl::VertexAttrib1hvNV = NULL;
vtkgl::PFNGLVERTEXATTRIB2HNVPROC vtkgl::VertexAttrib2hNV = NULL;
vtkgl::PFNGLVERTEXATTRIB2HVNVPROC vtkgl::VertexAttrib2hvNV = NULL;
vtkgl::PFNGLVERTEXATTRIB3HNVPROC vtkgl::VertexAttrib3hNV = NULL;
vtkgl::PFNGLVERTEXATTRIB3HVNVPROC vtkgl::VertexAttrib3hvNV = NULL;
vtkgl::PFNGLVERTEXATTRIB4HNVPROC vtkgl::VertexAttrib4hNV = NULL;
vtkgl::PFNGLVERTEXATTRIB4HVNVPROC vtkgl::VertexAttrib4hvNV = NULL;
vtkgl::PFNGLVERTEXATTRIBS1HVNVPROC vtkgl::VertexAttribs1hvNV = NULL;
vtkgl::PFNGLVERTEXATTRIBS2HVNVPROC vtkgl::VertexAttribs2hvNV = NULL;
vtkgl::PFNGLVERTEXATTRIBS3HVNVPROC vtkgl::VertexAttribs3hvNV = NULL;
vtkgl::PFNGLVERTEXATTRIBS4HVNVPROC vtkgl::VertexAttribs4hvNV = NULL;
//Functions for GL_NV_occlusion_query
vtkgl::PFNGLGENOCCLUSIONQUERIESNVPROC vtkgl::GenOcclusionQueriesNV = NULL;
vtkgl::PFNGLDELETEOCCLUSIONQUERIESNVPROC vtkgl::DeleteOcclusionQueriesNV = NULL;
vtkgl::PFNGLISOCCLUSIONQUERYNVPROC vtkgl::IsOcclusionQueryNV = NULL;
vtkgl::PFNGLBEGINOCCLUSIONQUERYNVPROC vtkgl::BeginOcclusionQueryNV = NULL;
vtkgl::PFNGLENDOCCLUSIONQUERYNVPROC vtkgl::EndOcclusionQueryNV = NULL;
vtkgl::PFNGLGETOCCLUSIONQUERYIVNVPROC vtkgl::GetOcclusionQueryivNV = NULL;
vtkgl::PFNGLGETOCCLUSIONQUERYUIVNVPROC vtkgl::GetOcclusionQueryuivNV = NULL;
//Functions for GL_NV_pixel_data_range
vtkgl::PFNGLPIXELDATARANGENVPROC vtkgl::PixelDataRangeNV = NULL;
vtkgl::PFNGLFLUSHPIXELDATARANGENVPROC vtkgl::FlushPixelDataRangeNV = NULL;
//Functions for GL_NV_point_sprite
vtkgl::PFNGLPOINTPARAMETERINVPROC vtkgl::PointParameteriNV = NULL;
vtkgl::PFNGLPOINTPARAMETERIVNVPROC vtkgl::PointParameterivNV = NULL;
//Functions for GL_NV_primitive_restart
vtkgl::PFNGLPRIMITIVERESTARTNVPROC vtkgl::PrimitiveRestartNV = NULL;
vtkgl::PFNGLPRIMITIVERESTARTINDEXNVPROC vtkgl::PrimitiveRestartIndexNV = NULL;
//Functions for GL_NV_register_combiners
vtkgl::PFNGLCOMBINERPARAMETERFVNVPROC vtkgl::CombinerParameterfvNV = NULL;
vtkgl::PFNGLCOMBINERPARAMETERFNVPROC vtkgl::CombinerParameterfNV = NULL;
vtkgl::PFNGLCOMBINERPARAMETERIVNVPROC vtkgl::CombinerParameterivNV = NULL;
vtkgl::PFNGLCOMBINERPARAMETERINVPROC vtkgl::CombinerParameteriNV = NULL;
vtkgl::PFNGLCOMBINERINPUTNVPROC vtkgl::CombinerInputNV = NULL;
vtkgl::PFNGLCOMBINEROUTPUTNVPROC vtkgl::CombinerOutputNV = NULL;
vtkgl::PFNGLFINALCOMBINERINPUTNVPROC vtkgl::FinalCombinerInputNV = NULL;
vtkgl::PFNGLGETCOMBINERINPUTPARAMETERFVNVPROC vtkgl::GetCombinerInputParameterfvNV = NULL;
vtkgl::PFNGLGETCOMBINERINPUTPARAMETERIVNVPROC vtkgl::GetCombinerInputParameterivNV = NULL;
vtkgl::PFNGLGETCOMBINEROUTPUTPARAMETERFVNVPROC vtkgl::GetCombinerOutputParameterfvNV = NULL;
vtkgl::PFNGLGETCOMBINEROUTPUTPARAMETERIVNVPROC vtkgl::GetCombinerOutputParameterivNV = NULL;
vtkgl::PFNGLGETFINALCOMBINERINPUTPARAMETERFVNVPROC vtkgl::GetFinalCombinerInputParameterfvNV = NULL;
vtkgl::PFNGLGETFINALCOMBINERINPUTPARAMETERIVNVPROC vtkgl::GetFinalCombinerInputParameterivNV = NULL;
//Functions for GL_NV_register_combiners2
vtkgl::PFNGLCOMBINERSTAGEPARAMETERFVNVPROC vtkgl::CombinerStageParameterfvNV = NULL;
vtkgl::PFNGLGETCOMBINERSTAGEPARAMETERFVNVPROC vtkgl::GetCombinerStageParameterfvNV = NULL;
//Functions for GL_NV_vertex_array_range
vtkgl::PFNGLFLUSHVERTEXARRAYRANGENVPROC vtkgl::FlushVertexArrayRangeNV = NULL;
vtkgl::PFNGLVERTEXARRAYRANGENVPROC vtkgl::VertexArrayRangeNV = NULL;
//Functions for GL_NV_vertex_program
vtkgl::PFNGLAREPROGRAMSRESIDENTNVPROC vtkgl::AreProgramsResidentNV = NULL;
vtkgl::PFNGLBINDPROGRAMNVPROC vtkgl::BindProgramNV = NULL;
vtkgl::PFNGLDELETEPROGRAMSNVPROC vtkgl::DeleteProgramsNV = NULL;
vtkgl::PFNGLEXECUTEPROGRAMNVPROC vtkgl::ExecuteProgramNV = NULL;
vtkgl::PFNGLGENPROGRAMSNVPROC vtkgl::GenProgramsNV = NULL;
vtkgl::PFNGLGETPROGRAMPARAMETERDVNVPROC vtkgl::GetProgramParameterdvNV = NULL;
vtkgl::PFNGLGETPROGRAMPARAMETERFVNVPROC vtkgl::GetProgramParameterfvNV = NULL;
vtkgl::PFNGLGETPROGRAMIVNVPROC vtkgl::GetProgramivNV = NULL;
vtkgl::PFNGLGETPROGRAMSTRINGNVPROC vtkgl::GetProgramStringNV = NULL;
vtkgl::PFNGLGETTRACKMATRIXIVNVPROC vtkgl::GetTrackMatrixivNV = NULL;
vtkgl::PFNGLGETVERTEXATTRIBDVNVPROC vtkgl::GetVertexAttribdvNV = NULL;
vtkgl::PFNGLGETVERTEXATTRIBFVNVPROC vtkgl::GetVertexAttribfvNV = NULL;
vtkgl::PFNGLGETVERTEXATTRIBIVNVPROC vtkgl::GetVertexAttribivNV = NULL;
vtkgl::PFNGLGETVERTEXATTRIBPOINTERVNVPROC vtkgl::GetVertexAttribPointervNV = NULL;
vtkgl::PFNGLISPROGRAMNVPROC vtkgl::IsProgramNV = NULL;
vtkgl::PFNGLLOADPROGRAMNVPROC vtkgl::LoadProgramNV = NULL;
vtkgl::PFNGLPROGRAMPARAMETER4DNVPROC vtkgl::ProgramParameter4dNV = NULL;
vtkgl::PFNGLPROGRAMPARAMETER4DVNVPROC vtkgl::ProgramParameter4dvNV = NULL;
vtkgl::PFNGLPROGRAMPARAMETER4FNVPROC vtkgl::ProgramParameter4fNV = NULL;
vtkgl::PFNGLPROGRAMPARAMETER4FVNVPROC vtkgl::ProgramParameter4fvNV = NULL;
vtkgl::PFNGLPROGRAMPARAMETERS4DVNVPROC vtkgl::ProgramParameters4dvNV = NULL;
vtkgl::PFNGLPROGRAMPARAMETERS4FVNVPROC vtkgl::ProgramParameters4fvNV = NULL;
vtkgl::PFNGLREQUESTRESIDENTPROGRAMSNVPROC vtkgl::RequestResidentProgramsNV = NULL;
vtkgl::PFNGLTRACKMATRIXNVPROC vtkgl::TrackMatrixNV = NULL;
vtkgl::PFNGLVERTEXATTRIBPOINTERNVPROC vtkgl::VertexAttribPointerNV = NULL;
vtkgl::PFNGLVERTEXATTRIB1DNVPROC vtkgl::VertexAttrib1dNV = NULL;
vtkgl::PFNGLVERTEXATTRIB1DVNVPROC vtkgl::VertexAttrib1dvNV = NULL;
vtkgl::PFNGLVERTEXATTRIB1FNVPROC vtkgl::VertexAttrib1fNV = NULL;
vtkgl::PFNGLVERTEXATTRIB1FVNVPROC vtkgl::VertexAttrib1fvNV = NULL;
vtkgl::PFNGLVERTEXATTRIB1SNVPROC vtkgl::VertexAttrib1sNV = NULL;
vtkgl::PFNGLVERTEXATTRIB1SVNVPROC vtkgl::VertexAttrib1svNV = NULL;
vtkgl::PFNGLVERTEXATTRIB2DNVPROC vtkgl::VertexAttrib2dNV = NULL;
vtkgl::PFNGLVERTEXATTRIB2DVNVPROC vtkgl::VertexAttrib2dvNV = NULL;
vtkgl::PFNGLVERTEXATTRIB2FNVPROC vtkgl::VertexAttrib2fNV = NULL;
vtkgl::PFNGLVERTEXATTRIB2FVNVPROC vtkgl::VertexAttrib2fvNV = NULL;
vtkgl::PFNGLVERTEXATTRIB2SNVPROC vtkgl::VertexAttrib2sNV = NULL;
vtkgl::PFNGLVERTEXATTRIB2SVNVPROC vtkgl::VertexAttrib2svNV = NULL;
vtkgl::PFNGLVERTEXATTRIB3DNVPROC vtkgl::VertexAttrib3dNV = NULL;
vtkgl::PFNGLVERTEXATTRIB3DVNVPROC vtkgl::VertexAttrib3dvNV = NULL;
vtkgl::PFNGLVERTEXATTRIB3FNVPROC vtkgl::VertexAttrib3fNV = NULL;
vtkgl::PFNGLVERTEXATTRIB3FVNVPROC vtkgl::VertexAttrib3fvNV = NULL;
vtkgl::PFNGLVERTEXATTRIB3SNVPROC vtkgl::VertexAttrib3sNV = NULL;
vtkgl::PFNGLVERTEXATTRIB3SVNVPROC vtkgl::VertexAttrib3svNV = NULL;
vtkgl::PFNGLVERTEXATTRIB4DNVPROC vtkgl::VertexAttrib4dNV = NULL;
vtkgl::PFNGLVERTEXATTRIB4DVNVPROC vtkgl::VertexAttrib4dvNV = NULL;
vtkgl::PFNGLVERTEXATTRIB4FNVPROC vtkgl::VertexAttrib4fNV = NULL;
vtkgl::PFNGLVERTEXATTRIB4FVNVPROC vtkgl::VertexAttrib4fvNV = NULL;
vtkgl::PFNGLVERTEXATTRIB4SNVPROC vtkgl::VertexAttrib4sNV = NULL;
vtkgl::PFNGLVERTEXATTRIB4SVNVPROC vtkgl::VertexAttrib4svNV = NULL;
vtkgl::PFNGLVERTEXATTRIB4UBNVPROC vtkgl::VertexAttrib4ubNV = NULL;
vtkgl::PFNGLVERTEXATTRIB4UBVNVPROC vtkgl::VertexAttrib4ubvNV = NULL;
vtkgl::PFNGLVERTEXATTRIBS1DVNVPROC vtkgl::VertexAttribs1dvNV = NULL;
vtkgl::PFNGLVERTEXATTRIBS1FVNVPROC vtkgl::VertexAttribs1fvNV = NULL;
vtkgl::PFNGLVERTEXATTRIBS1SVNVPROC vtkgl::VertexAttribs1svNV = NULL;
vtkgl::PFNGLVERTEXATTRIBS2DVNVPROC vtkgl::VertexAttribs2dvNV = NULL;
vtkgl::PFNGLVERTEXATTRIBS2FVNVPROC vtkgl::VertexAttribs2fvNV = NULL;
vtkgl::PFNGLVERTEXATTRIBS2SVNVPROC vtkgl::VertexAttribs2svNV = NULL;
vtkgl::PFNGLVERTEXATTRIBS3DVNVPROC vtkgl::VertexAttribs3dvNV = NULL;
vtkgl::PFNGLVERTEXATTRIBS3FVNVPROC vtkgl::VertexAttribs3fvNV = NULL;
vtkgl::PFNGLVERTEXATTRIBS3SVNVPROC vtkgl::VertexAttribs3svNV = NULL;
vtkgl::PFNGLVERTEXATTRIBS4DVNVPROC vtkgl::VertexAttribs4dvNV = NULL;
vtkgl::PFNGLVERTEXATTRIBS4FVNVPROC vtkgl::VertexAttribs4fvNV = NULL;
vtkgl::PFNGLVERTEXATTRIBS4SVNVPROC vtkgl::VertexAttribs4svNV = NULL;
vtkgl::PFNGLVERTEXATTRIBS4UBVNVPROC vtkgl::VertexAttribs4ubvNV = NULL;
//Functions for GL_PGI_misc_hints
vtkgl::PFNGLHINTPGIPROC vtkgl::HintPGI = NULL;
//Functions for GL_SGIS_detail_texture
vtkgl::PFNGLDETAILTEXFUNCSGISPROC vtkgl::DetailTexFuncSGIS = NULL;
vtkgl::PFNGLGETDETAILTEXFUNCSGISPROC vtkgl::GetDetailTexFuncSGIS = NULL;
//Functions for GL_SGIS_fog_function
vtkgl::PFNGLFOGFUNCSGISPROC vtkgl::FogFuncSGIS = NULL;
vtkgl::PFNGLGETFOGFUNCSGISPROC vtkgl::GetFogFuncSGIS = NULL;
//Functions for GL_SGIS_multisample
vtkgl::PFNGLSAMPLEMASKSGISPROC vtkgl::SampleMaskSGIS = NULL;
vtkgl::PFNGLSAMPLEPATTERNSGISPROC vtkgl::SamplePatternSGIS = NULL;
//Functions for GL_SGIS_pixel_texture
vtkgl::PFNGLPIXELTEXGENPARAMETERISGISPROC vtkgl::PixelTexGenParameteriSGIS = NULL;
vtkgl::PFNGLPIXELTEXGENPARAMETERIVSGISPROC vtkgl::PixelTexGenParameterivSGIS = NULL;
vtkgl::PFNGLPIXELTEXGENPARAMETERFSGISPROC vtkgl::PixelTexGenParameterfSGIS = NULL;
vtkgl::PFNGLPIXELTEXGENPARAMETERFVSGISPROC vtkgl::PixelTexGenParameterfvSGIS = NULL;
vtkgl::PFNGLGETPIXELTEXGENPARAMETERIVSGISPROC vtkgl::GetPixelTexGenParameterivSGIS = NULL;
vtkgl::PFNGLGETPIXELTEXGENPARAMETERFVSGISPROC vtkgl::GetPixelTexGenParameterfvSGIS = NULL;
//Functions for GL_SGIS_point_parameters
vtkgl::PFNGLPOINTPARAMETERFSGISPROC vtkgl::PointParameterfSGIS = NULL;
vtkgl::PFNGLPOINTPARAMETERFVSGISPROC vtkgl::PointParameterfvSGIS = NULL;
//Functions for GL_SGIS_sharpen_texture
vtkgl::PFNGLSHARPENTEXFUNCSGISPROC vtkgl::SharpenTexFuncSGIS = NULL;
vtkgl::PFNGLGETSHARPENTEXFUNCSGISPROC vtkgl::GetSharpenTexFuncSGIS = NULL;
//Functions for GL_SGIS_texture4D
vtkgl::PFNGLTEXIMAGE4DSGISPROC vtkgl::TexImage4DSGIS = NULL;
vtkgl::PFNGLTEXSUBIMAGE4DSGISPROC vtkgl::TexSubImage4DSGIS = NULL;
//Functions for GL_SGIS_texture_color_mask
vtkgl::PFNGLTEXTURECOLORMASKSGISPROC vtkgl::TextureColorMaskSGIS = NULL;
//Functions for GL_SGIS_texture_filter4
vtkgl::PFNGLGETTEXFILTERFUNCSGISPROC vtkgl::GetTexFilterFuncSGIS = NULL;
vtkgl::PFNGLTEXFILTERFUNCSGISPROC vtkgl::TexFilterFuncSGIS = NULL;
//Functions for GL_SGIX_async
vtkgl::PFNGLASYNCMARKERSGIXPROC vtkgl::AsyncMarkerSGIX = NULL;
vtkgl::PFNGLFINISHASYNCSGIXPROC vtkgl::FinishAsyncSGIX = NULL;
vtkgl::PFNGLPOLLASYNCSGIXPROC vtkgl::PollAsyncSGIX = NULL;
vtkgl::PFNGLGENASYNCMARKERSSGIXPROC vtkgl::GenAsyncMarkersSGIX = NULL;
vtkgl::PFNGLDELETEASYNCMARKERSSGIXPROC vtkgl::DeleteAsyncMarkersSGIX = NULL;
vtkgl::PFNGLISASYNCMARKERSGIXPROC vtkgl::IsAsyncMarkerSGIX = NULL;
//Functions for GL_SGIX_flush_raster
vtkgl::PFNGLFLUSHRASTERSGIXPROC vtkgl::FlushRasterSGIX = NULL;
//Functions for GL_SGIX_fragment_lighting
vtkgl::PFNGLFRAGMENTCOLORMATERIALSGIXPROC vtkgl::FragmentColorMaterialSGIX = NULL;
vtkgl::PFNGLFRAGMENTLIGHTFSGIXPROC vtkgl::FragmentLightfSGIX = NULL;
vtkgl::PFNGLFRAGMENTLIGHTFVSGIXPROC vtkgl::FragmentLightfvSGIX = NULL;
vtkgl::PFNGLFRAGMENTLIGHTISGIXPROC vtkgl::FragmentLightiSGIX = NULL;
vtkgl::PFNGLFRAGMENTLIGHTIVSGIXPROC vtkgl::FragmentLightivSGIX = NULL;
vtkgl::PFNGLFRAGMENTLIGHTMODELFSGIXPROC vtkgl::FragmentLightModelfSGIX = NULL;
vtkgl::PFNGLFRAGMENTLIGHTMODELFVSGIXPROC vtkgl::FragmentLightModelfvSGIX = NULL;
vtkgl::PFNGLFRAGMENTLIGHTMODELISGIXPROC vtkgl::FragmentLightModeliSGIX = NULL;
vtkgl::PFNGLFRAGMENTLIGHTMODELIVSGIXPROC vtkgl::FragmentLightModelivSGIX = NULL;
vtkgl::PFNGLFRAGMENTMATERIALFSGIXPROC vtkgl::FragmentMaterialfSGIX = NULL;
vtkgl::PFNGLFRAGMENTMATERIALFVSGIXPROC vtkgl::FragmentMaterialfvSGIX = NULL;
vtkgl::PFNGLFRAGMENTMATERIALISGIXPROC vtkgl::FragmentMaterialiSGIX = NULL;
vtkgl::PFNGLFRAGMENTMATERIALIVSGIXPROC vtkgl::FragmentMaterialivSGIX = NULL;
vtkgl::PFNGLGETFRAGMENTLIGHTFVSGIXPROC vtkgl::GetFragmentLightfvSGIX = NULL;
vtkgl::PFNGLGETFRAGMENTLIGHTIVSGIXPROC vtkgl::GetFragmentLightivSGIX = NULL;
vtkgl::PFNGLGETFRAGMENTMATERIALFVSGIXPROC vtkgl::GetFragmentMaterialfvSGIX = NULL;
vtkgl::PFNGLGETFRAGMENTMATERIALIVSGIXPROC vtkgl::GetFragmentMaterialivSGIX = NULL;
vtkgl::PFNGLLIGHTENVISGIXPROC vtkgl::LightEnviSGIX = NULL;
//Functions for GL_SGIX_framezoom
vtkgl::PFNGLFRAMEZOOMSGIXPROC vtkgl::FrameZoomSGIX = NULL;
//Functions for GL_SGIX_igloo_interface
vtkgl::PFNGLIGLOOINTERFACESGIXPROC vtkgl::IglooInterfaceSGIX = NULL;
//Functions for GL_SGIX_instruments
vtkgl::PFNGLGETINSTRUMENTSSGIXPROC vtkgl::GetInstrumentsSGIX = NULL;
vtkgl::PFNGLINSTRUMENTSBUFFERSGIXPROC vtkgl::InstrumentsBufferSGIX = NULL;
vtkgl::PFNGLPOLLINSTRUMENTSSGIXPROC vtkgl::PollInstrumentsSGIX = NULL;
vtkgl::PFNGLREADINSTRUMENTSSGIXPROC vtkgl::ReadInstrumentsSGIX = NULL;
vtkgl::PFNGLSTARTINSTRUMENTSSGIXPROC vtkgl::StartInstrumentsSGIX = NULL;
vtkgl::PFNGLSTOPINSTRUMENTSSGIXPROC vtkgl::StopInstrumentsSGIX = NULL;
//Functions for GL_SGIX_list_priority
vtkgl::PFNGLGETLISTPARAMETERFVSGIXPROC vtkgl::GetListParameterfvSGIX = NULL;
vtkgl::PFNGLGETLISTPARAMETERIVSGIXPROC vtkgl::GetListParameterivSGIX = NULL;
vtkgl::PFNGLLISTPARAMETERFSGIXPROC vtkgl::ListParameterfSGIX = NULL;
vtkgl::PFNGLLISTPARAMETERFVSGIXPROC vtkgl::ListParameterfvSGIX = NULL;
vtkgl::PFNGLLISTPARAMETERISGIXPROC vtkgl::ListParameteriSGIX = NULL;
vtkgl::PFNGLLISTPARAMETERIVSGIXPROC vtkgl::ListParameterivSGIX = NULL;
//Functions for GL_SGIX_pixel_texture
vtkgl::PFNGLPIXELTEXGENSGIXPROC vtkgl::PixelTexGenSGIX = NULL;
//Functions for GL_SGIX_polynomial_ffd
vtkgl::PFNGLDEFORMATIONMAP3DSGIXPROC vtkgl::DeformationMap3dSGIX = NULL;
vtkgl::PFNGLDEFORMATIONMAP3FSGIXPROC vtkgl::DeformationMap3fSGIX = NULL;
vtkgl::PFNGLDEFORMSGIXPROC vtkgl::DeformSGIX = NULL;
vtkgl::PFNGLLOADIDENTITYDEFORMATIONMAPSGIXPROC vtkgl::LoadIdentityDeformationMapSGIX = NULL;
//Functions for GL_SGIX_reference_plane
vtkgl::PFNGLREFERENCEPLANESGIXPROC vtkgl::ReferencePlaneSGIX = NULL;
//Functions for GL_SGIX_sprite
vtkgl::PFNGLSPRITEPARAMETERFSGIXPROC vtkgl::SpriteParameterfSGIX = NULL;
vtkgl::PFNGLSPRITEPARAMETERFVSGIXPROC vtkgl::SpriteParameterfvSGIX = NULL;
vtkgl::PFNGLSPRITEPARAMETERISGIXPROC vtkgl::SpriteParameteriSGIX = NULL;
vtkgl::PFNGLSPRITEPARAMETERIVSGIXPROC vtkgl::SpriteParameterivSGIX = NULL;
//Functions for GL_SGIX_tag_sample_buffer
vtkgl::PFNGLTAGSAMPLEBUFFERSGIXPROC vtkgl::TagSampleBufferSGIX = NULL;
//Functions for GL_SGI_color_table
vtkgl::PFNGLCOLORTABLESGIPROC vtkgl::ColorTableSGI = NULL;
vtkgl::PFNGLCOLORTABLEPARAMETERFVSGIPROC vtkgl::ColorTableParameterfvSGI = NULL;
vtkgl::PFNGLCOLORTABLEPARAMETERIVSGIPROC vtkgl::ColorTableParameterivSGI = NULL;
vtkgl::PFNGLCOPYCOLORTABLESGIPROC vtkgl::CopyColorTableSGI = NULL;
vtkgl::PFNGLGETCOLORTABLESGIPROC vtkgl::GetColorTableSGI = NULL;
vtkgl::PFNGLGETCOLORTABLEPARAMETERFVSGIPROC vtkgl::GetColorTableParameterfvSGI = NULL;
vtkgl::PFNGLGETCOLORTABLEPARAMETERIVSGIPROC vtkgl::GetColorTableParameterivSGI = NULL;
//Functions for GL_SUNX_constant_data
vtkgl::PFNGLFINISHTEXTURESUNXPROC vtkgl::FinishTextureSUNX = NULL;
//Functions for GL_SUN_global_alpha
vtkgl::PFNGLGLOBALALPHAFACTORBSUNPROC vtkgl::GlobalAlphaFactorbSUN = NULL;
vtkgl::PFNGLGLOBALALPHAFACTORSSUNPROC vtkgl::GlobalAlphaFactorsSUN = NULL;
vtkgl::PFNGLGLOBALALPHAFACTORISUNPROC vtkgl::GlobalAlphaFactoriSUN = NULL;
vtkgl::PFNGLGLOBALALPHAFACTORFSUNPROC vtkgl::GlobalAlphaFactorfSUN = NULL;
vtkgl::PFNGLGLOBALALPHAFACTORDSUNPROC vtkgl::GlobalAlphaFactordSUN = NULL;
vtkgl::PFNGLGLOBALALPHAFACTORUBSUNPROC vtkgl::GlobalAlphaFactorubSUN = NULL;
vtkgl::PFNGLGLOBALALPHAFACTORUSSUNPROC vtkgl::GlobalAlphaFactorusSUN = NULL;
vtkgl::PFNGLGLOBALALPHAFACTORUISUNPROC vtkgl::GlobalAlphaFactoruiSUN = NULL;
//Functions for GL_SUN_mesh_array
vtkgl::PFNGLDRAWMESHARRAYSSUNPROC vtkgl::DrawMeshArraysSUN = NULL;
//Functions for GL_SUN_triangle_list
vtkgl::PFNGLREPLACEMENTCODEUISUNPROC vtkgl::ReplacementCodeuiSUN = NULL;
vtkgl::PFNGLREPLACEMENTCODEUSSUNPROC vtkgl::ReplacementCodeusSUN = NULL;
vtkgl::PFNGLREPLACEMENTCODEUBSUNPROC vtkgl::ReplacementCodeubSUN = NULL;
vtkgl::PFNGLREPLACEMENTCODEUIVSUNPROC vtkgl::ReplacementCodeuivSUN = NULL;
vtkgl::PFNGLREPLACEMENTCODEUSVSUNPROC vtkgl::ReplacementCodeusvSUN = NULL;
vtkgl::PFNGLREPLACEMENTCODEUBVSUNPROC vtkgl::ReplacementCodeubvSUN = NULL;
vtkgl::PFNGLREPLACEMENTCODEPOINTERSUNPROC vtkgl::ReplacementCodePointerSUN = NULL;
//Functions for GL_SUN_vertex
vtkgl::PFNGLCOLOR4UBVERTEX2FSUNPROC vtkgl::Color4ubVertex2fSUN = NULL;
vtkgl::PFNGLCOLOR4UBVERTEX2FVSUNPROC vtkgl::Color4ubVertex2fvSUN = NULL;
vtkgl::PFNGLCOLOR4UBVERTEX3FSUNPROC vtkgl::Color4ubVertex3fSUN = NULL;
vtkgl::PFNGLCOLOR4UBVERTEX3FVSUNPROC vtkgl::Color4ubVertex3fvSUN = NULL;
vtkgl::PFNGLCOLOR3FVERTEX3FSUNPROC vtkgl::Color3fVertex3fSUN = NULL;
vtkgl::PFNGLCOLOR3FVERTEX3FVSUNPROC vtkgl::Color3fVertex3fvSUN = NULL;
vtkgl::PFNGLNORMAL3FVERTEX3FSUNPROC vtkgl::Normal3fVertex3fSUN = NULL;
vtkgl::PFNGLNORMAL3FVERTEX3FVSUNPROC vtkgl::Normal3fVertex3fvSUN = NULL;
vtkgl::PFNGLCOLOR4FNORMAL3FVERTEX3FSUNPROC vtkgl::Color4fNormal3fVertex3fSUN = NULL;
vtkgl::PFNGLCOLOR4FNORMAL3FVERTEX3FVSUNPROC vtkgl::Color4fNormal3fVertex3fvSUN = NULL;
vtkgl::PFNGLTEXCOORD2FVERTEX3FSUNPROC vtkgl::TexCoord2fVertex3fSUN = NULL;
vtkgl::PFNGLTEXCOORD2FVERTEX3FVSUNPROC vtkgl::TexCoord2fVertex3fvSUN = NULL;
vtkgl::PFNGLTEXCOORD4FVERTEX4FSUNPROC vtkgl::TexCoord4fVertex4fSUN = NULL;
vtkgl::PFNGLTEXCOORD4FVERTEX4FVSUNPROC vtkgl::TexCoord4fVertex4fvSUN = NULL;
vtkgl::PFNGLTEXCOORD2FCOLOR4UBVERTEX3FSUNPROC vtkgl::TexCoord2fColor4ubVertex3fSUN = NULL;
vtkgl::PFNGLTEXCOORD2FCOLOR4UBVERTEX3FVSUNPROC vtkgl::TexCoord2fColor4ubVertex3fvSUN = NULL;
vtkgl::PFNGLTEXCOORD2FCOLOR3FVERTEX3FSUNPROC vtkgl::TexCoord2fColor3fVertex3fSUN = NULL;
vtkgl::PFNGLTEXCOORD2FCOLOR3FVERTEX3FVSUNPROC vtkgl::TexCoord2fColor3fVertex3fvSUN = NULL;
vtkgl::PFNGLTEXCOORD2FNORMAL3FVERTEX3FSUNPROC vtkgl::TexCoord2fNormal3fVertex3fSUN = NULL;
vtkgl::PFNGLTEXCOORD2FNORMAL3FVERTEX3FVSUNPROC vtkgl::TexCoord2fNormal3fVertex3fvSUN = NULL;
vtkgl::PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC vtkgl::TexCoord2fColor4fNormal3fVertex3fSUN = NULL;
vtkgl::PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC vtkgl::TexCoord2fColor4fNormal3fVertex3fvSUN = NULL;
vtkgl::PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FSUNPROC vtkgl::TexCoord4fColor4fNormal3fVertex4fSUN = NULL;
vtkgl::PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FVSUNPROC vtkgl::TexCoord4fColor4fNormal3fVertex4fvSUN = NULL;
vtkgl::PFNGLREPLACEMENTCODEUIVERTEX3FSUNPROC vtkgl::ReplacementCodeuiVertex3fSUN = NULL;
vtkgl::PFNGLREPLACEMENTCODEUIVERTEX3FVSUNPROC vtkgl::ReplacementCodeuiVertex3fvSUN = NULL;
vtkgl::PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FSUNPROC vtkgl::ReplacementCodeuiColor4ubVertex3fSUN = NULL;
vtkgl::PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FVSUNPROC vtkgl::ReplacementCodeuiColor4ubVertex3fvSUN = NULL;
vtkgl::PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FSUNPROC vtkgl::ReplacementCodeuiColor3fVertex3fSUN = NULL;
vtkgl::PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FVSUNPROC vtkgl::ReplacementCodeuiColor3fVertex3fvSUN = NULL;
vtkgl::PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FSUNPROC vtkgl::ReplacementCodeuiNormal3fVertex3fSUN = NULL;
vtkgl::PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FVSUNPROC vtkgl::ReplacementCodeuiNormal3fVertex3fvSUN = NULL;
vtkgl::PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FSUNPROC vtkgl::ReplacementCodeuiColor4fNormal3fVertex3fSUN = NULL;
vtkgl::PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FVSUNPROC vtkgl::ReplacementCodeuiColor4fNormal3fVertex3fvSUN = NULL;
vtkgl::PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FSUNPROC vtkgl::ReplacementCodeuiTexCoord2fVertex3fSUN = NULL;
vtkgl::PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FVSUNPROC vtkgl::ReplacementCodeuiTexCoord2fVertex3fvSUN = NULL;
vtkgl::PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FSUNPROC vtkgl::ReplacementCodeuiTexCoord2fNormal3fVertex3fSUN = NULL;
vtkgl::PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FVSUNPROC vtkgl::ReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN = NULL;
vtkgl::PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC vtkgl::ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN = NULL;
vtkgl::PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC vtkgl::ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN = NULL;
//Functions for GL_VERSION_1_2
vtkgl::PFNGLBLENDCOLORPROC vtkgl::BlendColor = NULL;
vtkgl::PFNGLBLENDEQUATIONPROC vtkgl::BlendEquation = NULL;
vtkgl::PFNGLDRAWRANGEELEMENTSPROC vtkgl::DrawRangeElements = NULL;
vtkgl::PFNGLCOLORTABLEPROC vtkgl::ColorTable = NULL;
vtkgl::PFNGLCOLORTABLEPARAMETERFVPROC vtkgl::ColorTableParameterfv = NULL;
vtkgl::PFNGLCOLORTABLEPARAMETERIVPROC vtkgl::ColorTableParameteriv = NULL;
vtkgl::PFNGLCOPYCOLORTABLEPROC vtkgl::CopyColorTable = NULL;
vtkgl::PFNGLGETCOLORTABLEPROC vtkgl::GetColorTable = NULL;
vtkgl::PFNGLGETCOLORTABLEPARAMETERFVPROC vtkgl::GetColorTableParameterfv = NULL;
vtkgl::PFNGLGETCOLORTABLEPARAMETERIVPROC vtkgl::GetColorTableParameteriv = NULL;
vtkgl::PFNGLCOLORSUBTABLEPROC vtkgl::ColorSubTable = NULL;
vtkgl::PFNGLCOPYCOLORSUBTABLEPROC vtkgl::CopyColorSubTable = NULL;
vtkgl::PFNGLCONVOLUTIONFILTER1DPROC vtkgl::ConvolutionFilter1D = NULL;
vtkgl::PFNGLCONVOLUTIONFILTER2DPROC vtkgl::ConvolutionFilter2D = NULL;
vtkgl::PFNGLCONVOLUTIONPARAMETERFPROC vtkgl::ConvolutionParameterf = NULL;
vtkgl::PFNGLCONVOLUTIONPARAMETERFVPROC vtkgl::ConvolutionParameterfv = NULL;
vtkgl::PFNGLCONVOLUTIONPARAMETERIPROC vtkgl::ConvolutionParameteri = NULL;
vtkgl::PFNGLCONVOLUTIONPARAMETERIVPROC vtkgl::ConvolutionParameteriv = NULL;
vtkgl::PFNGLCOPYCONVOLUTIONFILTER1DPROC vtkgl::CopyConvolutionFilter1D = NULL;
vtkgl::PFNGLCOPYCONVOLUTIONFILTER2DPROC vtkgl::CopyConvolutionFilter2D = NULL;
vtkgl::PFNGLGETCONVOLUTIONFILTERPROC vtkgl::GetConvolutionFilter = NULL;
vtkgl::PFNGLGETCONVOLUTIONPARAMETERFVPROC vtkgl::GetConvolutionParameterfv = NULL;
vtkgl::PFNGLGETCONVOLUTIONPARAMETERIVPROC vtkgl::GetConvolutionParameteriv = NULL;
vtkgl::PFNGLGETSEPARABLEFILTERPROC vtkgl::GetSeparableFilter = NULL;
vtkgl::PFNGLSEPARABLEFILTER2DPROC vtkgl::SeparableFilter2D = NULL;
vtkgl::PFNGLGETHISTOGRAMPROC vtkgl::GetHistogram = NULL;
vtkgl::PFNGLGETHISTOGRAMPARAMETERFVPROC vtkgl::GetHistogramParameterfv = NULL;
vtkgl::PFNGLGETHISTOGRAMPARAMETERIVPROC vtkgl::GetHistogramParameteriv = NULL;
vtkgl::PFNGLGETMINMAXPROC vtkgl::GetMinmax = NULL;
vtkgl::PFNGLGETMINMAXPARAMETERFVPROC vtkgl::GetMinmaxParameterfv = NULL;
vtkgl::PFNGLGETMINMAXPARAMETERIVPROC vtkgl::GetMinmaxParameteriv = NULL;
vtkgl::PFNGLHISTOGRAMPROC vtkgl::Histogram = NULL;
vtkgl::PFNGLMINMAXPROC vtkgl::Minmax = NULL;
vtkgl::PFNGLRESETHISTOGRAMPROC vtkgl::ResetHistogram = NULL;
vtkgl::PFNGLRESETMINMAXPROC vtkgl::ResetMinmax = NULL;
vtkgl::PFNGLTEXIMAGE3DPROC vtkgl::TexImage3D = NULL;
vtkgl::PFNGLTEXSUBIMAGE3DPROC vtkgl::TexSubImage3D = NULL;
vtkgl::PFNGLCOPYTEXSUBIMAGE3DPROC vtkgl::CopyTexSubImage3D = NULL;
//Functions for GL_VERSION_1_3
vtkgl::PFNGLACTIVETEXTUREPROC vtkgl::ActiveTexture = NULL;
vtkgl::PFNGLCLIENTACTIVETEXTUREPROC vtkgl::ClientActiveTexture = NULL;
vtkgl::PFNGLMULTITEXCOORD1DPROC vtkgl::MultiTexCoord1d = NULL;
vtkgl::PFNGLMULTITEXCOORD1DVPROC vtkgl::MultiTexCoord1dv = NULL;
vtkgl::PFNGLMULTITEXCOORD1FPROC vtkgl::MultiTexCoord1f = NULL;
vtkgl::PFNGLMULTITEXCOORD1FVPROC vtkgl::MultiTexCoord1fv = NULL;
vtkgl::PFNGLMULTITEXCOORD1IPROC vtkgl::MultiTexCoord1i = NULL;
vtkgl::PFNGLMULTITEXCOORD1IVPROC vtkgl::MultiTexCoord1iv = NULL;
vtkgl::PFNGLMULTITEXCOORD1SPROC vtkgl::MultiTexCoord1s = NULL;
vtkgl::PFNGLMULTITEXCOORD1SVPROC vtkgl::MultiTexCoord1sv = NULL;
vtkgl::PFNGLMULTITEXCOORD2DPROC vtkgl::MultiTexCoord2d = NULL;
vtkgl::PFNGLMULTITEXCOORD2DVPROC vtkgl::MultiTexCoord2dv = NULL;
vtkgl::PFNGLMULTITEXCOORD2FPROC vtkgl::MultiTexCoord2f = NULL;
vtkgl::PFNGLMULTITEXCOORD2FVPROC vtkgl::MultiTexCoord2fv = NULL;
vtkgl::PFNGLMULTITEXCOORD2IPROC vtkgl::MultiTexCoord2i = NULL;
vtkgl::PFNGLMULTITEXCOORD2IVPROC vtkgl::MultiTexCoord2iv = NULL;
vtkgl::PFNGLMULTITEXCOORD2SPROC vtkgl::MultiTexCoord2s = NULL;
vtkgl::PFNGLMULTITEXCOORD2SVPROC vtkgl::MultiTexCoord2sv = NULL;
vtkgl::PFNGLMULTITEXCOORD3DPROC vtkgl::MultiTexCoord3d = NULL;
vtkgl::PFNGLMULTITEXCOORD3DVPROC vtkgl::MultiTexCoord3dv = NULL;
vtkgl::PFNGLMULTITEXCOORD3FPROC vtkgl::MultiTexCoord3f = NULL;
vtkgl::PFNGLMULTITEXCOORD3FVPROC vtkgl::MultiTexCoord3fv = NULL;
vtkgl::PFNGLMULTITEXCOORD3IPROC vtkgl::MultiTexCoord3i = NULL;
vtkgl::PFNGLMULTITEXCOORD3IVPROC vtkgl::MultiTexCoord3iv = NULL;
vtkgl::PFNGLMULTITEXCOORD3SPROC vtkgl::MultiTexCoord3s = NULL;
vtkgl::PFNGLMULTITEXCOORD3SVPROC vtkgl::MultiTexCoord3sv = NULL;
vtkgl::PFNGLMULTITEXCOORD4DPROC vtkgl::MultiTexCoord4d = NULL;
vtkgl::PFNGLMULTITEXCOORD4DVPROC vtkgl::MultiTexCoord4dv = NULL;
vtkgl::PFNGLMULTITEXCOORD4FPROC vtkgl::MultiTexCoord4f = NULL;
vtkgl::PFNGLMULTITEXCOORD4FVPROC vtkgl::MultiTexCoord4fv = NULL;
vtkgl::PFNGLMULTITEXCOORD4IPROC vtkgl::MultiTexCoord4i = NULL;
vtkgl::PFNGLMULTITEXCOORD4IVPROC vtkgl::MultiTexCoord4iv = NULL;
vtkgl::PFNGLMULTITEXCOORD4SPROC vtkgl::MultiTexCoord4s = NULL;
vtkgl::PFNGLMULTITEXCOORD4SVPROC vtkgl::MultiTexCoord4sv = NULL;
vtkgl::PFNGLLOADTRANSPOSEMATRIXFPROC vtkgl::LoadTransposeMatrixf = NULL;
vtkgl::PFNGLLOADTRANSPOSEMATRIXDPROC vtkgl::LoadTransposeMatrixd = NULL;
vtkgl::PFNGLMULTTRANSPOSEMATRIXFPROC vtkgl::MultTransposeMatrixf = NULL;
vtkgl::PFNGLMULTTRANSPOSEMATRIXDPROC vtkgl::MultTransposeMatrixd = NULL;
vtkgl::PFNGLSAMPLECOVERAGEPROC vtkgl::SampleCoverage = NULL;
vtkgl::PFNGLCOMPRESSEDTEXIMAGE3DPROC vtkgl::CompressedTexImage3D = NULL;
vtkgl::PFNGLCOMPRESSEDTEXIMAGE2DPROC vtkgl::CompressedTexImage2D = NULL;
vtkgl::PFNGLCOMPRESSEDTEXIMAGE1DPROC vtkgl::CompressedTexImage1D = NULL;
vtkgl::PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC vtkgl::CompressedTexSubImage3D = NULL;
vtkgl::PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC vtkgl::CompressedTexSubImage2D = NULL;
vtkgl::PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC vtkgl::CompressedTexSubImage1D = NULL;
vtkgl::PFNGLGETCOMPRESSEDTEXIMAGEPROC vtkgl::GetCompressedTexImage = NULL;
//Functions for GL_VERSION_1_4
vtkgl::PFNGLBLENDFUNCSEPARATEPROC vtkgl::BlendFuncSeparate = NULL;
vtkgl::PFNGLFOGCOORDFPROC vtkgl::FogCoordf = NULL;
vtkgl::PFNGLFOGCOORDFVPROC vtkgl::FogCoordfv = NULL;
vtkgl::PFNGLFOGCOORDDPROC vtkgl::FogCoordd = NULL;
vtkgl::PFNGLFOGCOORDDVPROC vtkgl::FogCoorddv = NULL;
vtkgl::PFNGLFOGCOORDPOINTERPROC vtkgl::FogCoordPointer = NULL;
vtkgl::PFNGLMULTIDRAWARRAYSPROC vtkgl::MultiDrawArrays = NULL;
vtkgl::PFNGLMULTIDRAWELEMENTSPROC vtkgl::MultiDrawElements = NULL;
vtkgl::PFNGLPOINTPARAMETERFPROC vtkgl::PointParameterf = NULL;
vtkgl::PFNGLPOINTPARAMETERFVPROC vtkgl::PointParameterfv = NULL;
vtkgl::PFNGLPOINTPARAMETERIPROC vtkgl::PointParameteri = NULL;
vtkgl::PFNGLPOINTPARAMETERIVPROC vtkgl::PointParameteriv = NULL;
vtkgl::PFNGLSECONDARYCOLOR3BPROC vtkgl::SecondaryColor3b = NULL;
vtkgl::PFNGLSECONDARYCOLOR3BVPROC vtkgl::SecondaryColor3bv = NULL;
vtkgl::PFNGLSECONDARYCOLOR3DPROC vtkgl::SecondaryColor3d = NULL;
vtkgl::PFNGLSECONDARYCOLOR3DVPROC vtkgl::SecondaryColor3dv = NULL;
vtkgl::PFNGLSECONDARYCOLOR3FPROC vtkgl::SecondaryColor3f = NULL;
vtkgl::PFNGLSECONDARYCOLOR3FVPROC vtkgl::SecondaryColor3fv = NULL;
vtkgl::PFNGLSECONDARYCOLOR3IPROC vtkgl::SecondaryColor3i = NULL;
vtkgl::PFNGLSECONDARYCOLOR3IVPROC vtkgl::SecondaryColor3iv = NULL;
vtkgl::PFNGLSECONDARYCOLOR3SPROC vtkgl::SecondaryColor3s = NULL;
vtkgl::PFNGLSECONDARYCOLOR3SVPROC vtkgl::SecondaryColor3sv = NULL;
vtkgl::PFNGLSECONDARYCOLOR3UBPROC vtkgl::SecondaryColor3ub = NULL;
vtkgl::PFNGLSECONDARYCOLOR3UBVPROC vtkgl::SecondaryColor3ubv = NULL;
vtkgl::PFNGLSECONDARYCOLOR3UIPROC vtkgl::SecondaryColor3ui = NULL;
vtkgl::PFNGLSECONDARYCOLOR3UIVPROC vtkgl::SecondaryColor3uiv = NULL;
vtkgl::PFNGLSECONDARYCOLOR3USPROC vtkgl::SecondaryColor3us = NULL;
vtkgl::PFNGLSECONDARYCOLOR3USVPROC vtkgl::SecondaryColor3usv = NULL;
vtkgl::PFNGLSECONDARYCOLORPOINTERPROC vtkgl::SecondaryColorPointer = NULL;
vtkgl::PFNGLWINDOWPOS2DPROC vtkgl::WindowPos2d = NULL;
vtkgl::PFNGLWINDOWPOS2DVPROC vtkgl::WindowPos2dv = NULL;
vtkgl::PFNGLWINDOWPOS2FPROC vtkgl::WindowPos2f = NULL;
vtkgl::PFNGLWINDOWPOS2FVPROC vtkgl::WindowPos2fv = NULL;
vtkgl::PFNGLWINDOWPOS2IPROC vtkgl::WindowPos2i = NULL;
vtkgl::PFNGLWINDOWPOS2IVPROC vtkgl::WindowPos2iv = NULL;
vtkgl::PFNGLWINDOWPOS2SPROC vtkgl::WindowPos2s = NULL;
vtkgl::PFNGLWINDOWPOS2SVPROC vtkgl::WindowPos2sv = NULL;
vtkgl::PFNGLWINDOWPOS3DPROC vtkgl::WindowPos3d = NULL;
vtkgl::PFNGLWINDOWPOS3DVPROC vtkgl::WindowPos3dv = NULL;
vtkgl::PFNGLWINDOWPOS3FPROC vtkgl::WindowPos3f = NULL;
vtkgl::PFNGLWINDOWPOS3FVPROC vtkgl::WindowPos3fv = NULL;
vtkgl::PFNGLWINDOWPOS3IPROC vtkgl::WindowPos3i = NULL;
vtkgl::PFNGLWINDOWPOS3IVPROC vtkgl::WindowPos3iv = NULL;
vtkgl::PFNGLWINDOWPOS3SPROC vtkgl::WindowPos3s = NULL;
vtkgl::PFNGLWINDOWPOS3SVPROC vtkgl::WindowPos3sv = NULL;
//Functions for GL_VERSION_1_5
vtkgl::PFNGLGENQUERIESPROC vtkgl::GenQueries = NULL;
vtkgl::PFNGLDELETEQUERIESPROC vtkgl::DeleteQueries = NULL;
vtkgl::PFNGLISQUERYPROC vtkgl::IsQuery = NULL;
vtkgl::PFNGLBEGINQUERYPROC vtkgl::BeginQuery = NULL;
vtkgl::PFNGLENDQUERYPROC vtkgl::EndQuery = NULL;
vtkgl::PFNGLGETQUERYIVPROC vtkgl::GetQueryiv = NULL;
vtkgl::PFNGLGETQUERYOBJECTIVPROC vtkgl::GetQueryObjectiv = NULL;
vtkgl::PFNGLGETQUERYOBJECTUIVPROC vtkgl::GetQueryObjectuiv = NULL;
vtkgl::PFNGLBINDBUFFERPROC vtkgl::BindBuffer = NULL;
vtkgl::PFNGLDELETEBUFFERSPROC vtkgl::DeleteBuffers = NULL;
vtkgl::PFNGLGENBUFFERSPROC vtkgl::GenBuffers = NULL;
vtkgl::PFNGLISBUFFERPROC vtkgl::IsBuffer = NULL;
vtkgl::PFNGLBUFFERDATAPROC vtkgl::BufferData = NULL;
vtkgl::PFNGLBUFFERSUBDATAPROC vtkgl::BufferSubData = NULL;
vtkgl::PFNGLGETBUFFERSUBDATAPROC vtkgl::GetBufferSubData = NULL;
vtkgl::PFNGLMAPBUFFERPROC vtkgl::MapBuffer = NULL;
vtkgl::PFNGLUNMAPBUFFERPROC vtkgl::UnmapBuffer = NULL;
vtkgl::PFNGLGETBUFFERPARAMETERIVPROC vtkgl::GetBufferParameteriv = NULL;
vtkgl::PFNGLGETBUFFERPOINTERVPROC vtkgl::GetBufferPointerv = NULL;
//Functions for GL_VERSION_2_0
vtkgl::PFNGLBLENDEQUATIONSEPARATEPROC vtkgl::BlendEquationSeparate = NULL;
vtkgl::PFNGLDRAWBUFFERSPROC vtkgl::DrawBuffers = NULL;
vtkgl::PFNGLSTENCILOPSEPARATEPROC vtkgl::StencilOpSeparate = NULL;
vtkgl::PFNGLSTENCILFUNCSEPARATEPROC vtkgl::StencilFuncSeparate = NULL;
vtkgl::PFNGLSTENCILMASKSEPARATEPROC vtkgl::StencilMaskSeparate = NULL;
vtkgl::PFNGLATTACHSHADERPROC vtkgl::AttachShader = NULL;
vtkgl::PFNGLBINDATTRIBLOCATIONPROC vtkgl::BindAttribLocation = NULL;
vtkgl::PFNGLCOMPILESHADERPROC vtkgl::CompileShader = NULL;
vtkgl::PFNGLCREATEPROGRAMPROC vtkgl::CreateProgram = NULL;
vtkgl::PFNGLCREATESHADERPROC vtkgl::CreateShader = NULL;
vtkgl::PFNGLDELETEPROGRAMPROC vtkgl::DeleteProgram = NULL;
vtkgl::PFNGLDELETESHADERPROC vtkgl::DeleteShader = NULL;
vtkgl::PFNGLDETACHSHADERPROC vtkgl::DetachShader = NULL;
vtkgl::PFNGLDISABLEVERTEXATTRIBARRAYPROC vtkgl::DisableVertexAttribArray = NULL;
vtkgl::PFNGLENABLEVERTEXATTRIBARRAYPROC vtkgl::EnableVertexAttribArray = NULL;
vtkgl::PFNGLGETACTIVEATTRIBPROC vtkgl::GetActiveAttrib = NULL;
vtkgl::PFNGLGETACTIVEUNIFORMPROC vtkgl::GetActiveUniform = NULL;
vtkgl::PFNGLGETATTACHEDSHADERSPROC vtkgl::GetAttachedShaders = NULL;
vtkgl::PFNGLGETATTRIBLOCATIONPROC vtkgl::GetAttribLocation = NULL;
vtkgl::PFNGLGETPROGRAMIVPROC vtkgl::GetProgramiv = NULL;
vtkgl::PFNGLGETPROGRAMINFOLOGPROC vtkgl::GetProgramInfoLog = NULL;
vtkgl::PFNGLGETSHADERIVPROC vtkgl::GetShaderiv = NULL;
vtkgl::PFNGLGETSHADERINFOLOGPROC vtkgl::GetShaderInfoLog = NULL;
vtkgl::PFNGLGETSHADERSOURCEPROC vtkgl::GetShaderSource = NULL;
vtkgl::PFNGLGETUNIFORMLOCATIONPROC vtkgl::GetUniformLocation = NULL;
vtkgl::PFNGLGETUNIFORMFVPROC vtkgl::GetUniformfv = NULL;
vtkgl::PFNGLGETUNIFORMIVPROC vtkgl::GetUniformiv = NULL;
vtkgl::PFNGLGETVERTEXATTRIBDVPROC vtkgl::GetVertexAttribdv = NULL;
vtkgl::PFNGLGETVERTEXATTRIBFVPROC vtkgl::GetVertexAttribfv = NULL;
vtkgl::PFNGLGETVERTEXATTRIBIVPROC vtkgl::GetVertexAttribiv = NULL;
vtkgl::PFNGLGETVERTEXATTRIBPOINTERVPROC vtkgl::GetVertexAttribPointerv = NULL;
vtkgl::PFNGLISPROGRAMPROC vtkgl::IsProgram = NULL;
vtkgl::PFNGLISSHADERPROC vtkgl::IsShader = NULL;
vtkgl::PFNGLLINKPROGRAMPROC vtkgl::LinkProgram = NULL;
vtkgl::PFNGLSHADERSOURCEPROC vtkgl::ShaderSource = NULL;
vtkgl::PFNGLUSEPROGRAMPROC vtkgl::UseProgram = NULL;
vtkgl::PFNGLUNIFORM1FPROC vtkgl::Uniform1f = NULL;
vtkgl::PFNGLUNIFORM2FPROC vtkgl::Uniform2f = NULL;
vtkgl::PFNGLUNIFORM3FPROC vtkgl::Uniform3f = NULL;
vtkgl::PFNGLUNIFORM4FPROC vtkgl::Uniform4f = NULL;
vtkgl::PFNGLUNIFORM1IPROC vtkgl::Uniform1i = NULL;
vtkgl::PFNGLUNIFORM2IPROC vtkgl::Uniform2i = NULL;
vtkgl::PFNGLUNIFORM3IPROC vtkgl::Uniform3i = NULL;
vtkgl::PFNGLUNIFORM4IPROC vtkgl::Uniform4i = NULL;
vtkgl::PFNGLUNIFORM1FVPROC vtkgl::Uniform1fv = NULL;
vtkgl::PFNGLUNIFORM2FVPROC vtkgl::Uniform2fv = NULL;
vtkgl::PFNGLUNIFORM3FVPROC vtkgl::Uniform3fv = NULL;
vtkgl::PFNGLUNIFORM4FVPROC vtkgl::Uniform4fv = NULL;
vtkgl::PFNGLUNIFORM1IVPROC vtkgl::Uniform1iv = NULL;
vtkgl::PFNGLUNIFORM2IVPROC vtkgl::Uniform2iv = NULL;
vtkgl::PFNGLUNIFORM3IVPROC vtkgl::Uniform3iv = NULL;
vtkgl::PFNGLUNIFORM4IVPROC vtkgl::Uniform4iv = NULL;
vtkgl::PFNGLUNIFORMMATRIX2FVPROC vtkgl::UniformMatrix2fv = NULL;
vtkgl::PFNGLUNIFORMMATRIX3FVPROC vtkgl::UniformMatrix3fv = NULL;
vtkgl::PFNGLUNIFORMMATRIX4FVPROC vtkgl::UniformMatrix4fv = NULL;
vtkgl::PFNGLVALIDATEPROGRAMPROC vtkgl::ValidateProgram = NULL;
vtkgl::PFNGLVERTEXATTRIB1DPROC vtkgl::VertexAttrib1d = NULL;
vtkgl::PFNGLVERTEXATTRIB1DVPROC vtkgl::VertexAttrib1dv = NULL;
vtkgl::PFNGLVERTEXATTRIB1FPROC vtkgl::VertexAttrib1f = NULL;
vtkgl::PFNGLVERTEXATTRIB1FVPROC vtkgl::VertexAttrib1fv = NULL;
vtkgl::PFNGLVERTEXATTRIB1SPROC vtkgl::VertexAttrib1s = NULL;
vtkgl::PFNGLVERTEXATTRIB1SVPROC vtkgl::VertexAttrib1sv = NULL;
vtkgl::PFNGLVERTEXATTRIB2DPROC vtkgl::VertexAttrib2d = NULL;
vtkgl::PFNGLVERTEXATTRIB2DVPROC vtkgl::VertexAttrib2dv = NULL;
vtkgl::PFNGLVERTEXATTRIB2FPROC vtkgl::VertexAttrib2f = NULL;
vtkgl::PFNGLVERTEXATTRIB2FVPROC vtkgl::VertexAttrib2fv = NULL;
vtkgl::PFNGLVERTEXATTRIB2SPROC vtkgl::VertexAttrib2s = NULL;
vtkgl::PFNGLVERTEXATTRIB2SVPROC vtkgl::VertexAttrib2sv = NULL;
vtkgl::PFNGLVERTEXATTRIB3DPROC vtkgl::VertexAttrib3d = NULL;
vtkgl::PFNGLVERTEXATTRIB3DVPROC vtkgl::VertexAttrib3dv = NULL;
vtkgl::PFNGLVERTEXATTRIB3FPROC vtkgl::VertexAttrib3f = NULL;
vtkgl::PFNGLVERTEXATTRIB3FVPROC vtkgl::VertexAttrib3fv = NULL;
vtkgl::PFNGLVERTEXATTRIB3SPROC vtkgl::VertexAttrib3s = NULL;
vtkgl::PFNGLVERTEXATTRIB3SVPROC vtkgl::VertexAttrib3sv = NULL;
vtkgl::PFNGLVERTEXATTRIB4NBVPROC vtkgl::VertexAttrib4Nbv = NULL;
vtkgl::PFNGLVERTEXATTRIB4NIVPROC vtkgl::VertexAttrib4Niv = NULL;
vtkgl::PFNGLVERTEXATTRIB4NSVPROC vtkgl::VertexAttrib4Nsv = NULL;
vtkgl::PFNGLVERTEXATTRIB4NUBPROC vtkgl::VertexAttrib4Nub = NULL;
vtkgl::PFNGLVERTEXATTRIB4NUBVPROC vtkgl::VertexAttrib4Nubv = NULL;
vtkgl::PFNGLVERTEXATTRIB4NUIVPROC vtkgl::VertexAttrib4Nuiv = NULL;
vtkgl::PFNGLVERTEXATTRIB4NUSVPROC vtkgl::VertexAttrib4Nusv = NULL;
vtkgl::PFNGLVERTEXATTRIB4BVPROC vtkgl::VertexAttrib4bv = NULL;
vtkgl::PFNGLVERTEXATTRIB4DPROC vtkgl::VertexAttrib4d = NULL;
vtkgl::PFNGLVERTEXATTRIB4DVPROC vtkgl::VertexAttrib4dv = NULL;
vtkgl::PFNGLVERTEXATTRIB4FPROC vtkgl::VertexAttrib4f = NULL;
vtkgl::PFNGLVERTEXATTRIB4FVPROC vtkgl::VertexAttrib4fv = NULL;
vtkgl::PFNGLVERTEXATTRIB4IVPROC vtkgl::VertexAttrib4iv = NULL;
vtkgl::PFNGLVERTEXATTRIB4SPROC vtkgl::VertexAttrib4s = NULL;
vtkgl::PFNGLVERTEXATTRIB4SVPROC vtkgl::VertexAttrib4sv = NULL;
vtkgl::PFNGLVERTEXATTRIB4UBVPROC vtkgl::VertexAttrib4ubv = NULL;
vtkgl::PFNGLVERTEXATTRIB4UIVPROC vtkgl::VertexAttrib4uiv = NULL;
vtkgl::PFNGLVERTEXATTRIB4USVPROC vtkgl::VertexAttrib4usv = NULL;
vtkgl::PFNGLVERTEXATTRIBPOINTERPROC vtkgl::VertexAttribPointer = NULL;

#ifdef VTK_USE_X
//Functions for GLX_ARB_get_proc_address
vtkglX::PFNGLXGETPROCADDRESSARBPROC vtkglX::GetProcAddressARB = NULL;
//Functions for GLX_EXT_import_context
vtkglX::PFNGLXGETCURRENTDISPLAYEXTPROC vtkglX::GetCurrentDisplayEXT = NULL;
vtkglX::PFNGLXQUERYCONTEXTINFOEXTPROC vtkglX::QueryContextInfoEXT = NULL;
vtkglX::PFNGLXGETCONTEXTIDEXTPROC vtkglX::GetContextIDEXT = NULL;
vtkglX::PFNGLXIMPORTCONTEXTEXTPROC vtkglX::ImportContextEXT = NULL;
vtkglX::PFNGLXFREECONTEXTEXTPROC vtkglX::FreeContextEXT = NULL;
//Functions for GLX_MESA_agp_offset
vtkglX::PFNGLXGETAGPOFFSETMESAPROC vtkglX::GetAGPOffsetMESA = NULL;
//Functions for GLX_MESA_copy_sub_buffer
vtkglX::PFNGLXCOPYSUBBUFFERMESAPROC vtkglX::CopySubBufferMESA = NULL;
//Functions for GLX_MESA_pixmap_colormap
vtkglX::PFNGLXCREATEGLXPIXMAPMESAPROC vtkglX::CreateGLXPixmapMESA = NULL;
//Functions for GLX_MESA_release_buffers
vtkglX::PFNGLXRELEASEBUFFERSMESAPROC vtkglX::ReleaseBuffersMESA = NULL;
//Functions for GLX_MESA_set_3dfx_mode
vtkglX::PFNGLXSET3DFXMODEMESAPROC vtkglX::Set3DfxModeMESA = NULL;
//Functions for GLX_OML_sync_control
vtkglX::PFNGLXGETSYNCVALUESOMLPROC vtkglX::GetSyncValuesOML = NULL;
vtkglX::PFNGLXGETMSCRATEOMLPROC vtkglX::GetMscRateOML = NULL;
vtkglX::PFNGLXSWAPBUFFERSMSCOMLPROC vtkglX::SwapBuffersMscOML = NULL;
vtkglX::PFNGLXWAITFORMSCOMLPROC vtkglX::WaitForMscOML = NULL;
vtkglX::PFNGLXWAITFORSBCOMLPROC vtkglX::WaitForSbcOML = NULL;
//Functions for GLX_SGIX_fbconfig
vtkglX::PFNGLXGETFBCONFIGATTRIBSGIXPROC vtkglX::GetFBConfigAttribSGIX = NULL;
vtkglX::PFNGLXCHOOSEFBCONFIGSGIXPROC vtkglX::ChooseFBConfigSGIX = NULL;
vtkglX::PFNGLXCREATEGLXPIXMAPWITHCONFIGSGIXPROC vtkglX::CreateGLXPixmapWithConfigSGIX = NULL;
vtkglX::PFNGLXCREATECONTEXTWITHCONFIGSGIXPROC vtkglX::CreateContextWithConfigSGIX = NULL;
vtkglX::PFNGLXGETVISUALFROMFBCONFIGSGIXPROC vtkglX::GetVisualFromFBConfigSGIX = NULL;
vtkglX::PFNGLXGETFBCONFIGFROMVISUALSGIXPROC vtkglX::GetFBConfigFromVisualSGIX = NULL;
//Functions for GLX_SGIX_pbuffer
vtkglX::PFNGLXCREATEGLXPBUFFERSGIXPROC vtkglX::CreateGLXPbufferSGIX = NULL;
vtkglX::PFNGLXDESTROYGLXPBUFFERSGIXPROC vtkglX::DestroyGLXPbufferSGIX = NULL;
vtkglX::PFNGLXQUERYGLXPBUFFERSGIXPROC vtkglX::QueryGLXPbufferSGIX = NULL;
vtkglX::PFNGLXSELECTEVENTSGIXPROC vtkglX::SelectEventSGIX = NULL;
vtkglX::PFNGLXGETSELECTEDEVENTSGIXPROC vtkglX::GetSelectedEventSGIX = NULL;
//Functions for GLX_SGIX_swap_barrier
vtkglX::PFNGLXBINDSWAPBARRIERSGIXPROC vtkglX::BindSwapBarrierSGIX = NULL;
vtkglX::PFNGLXQUERYMAXSWAPBARRIERSSGIXPROC vtkglX::QueryMaxSwapBarriersSGIX = NULL;
//Functions for GLX_SGIX_swap_group
vtkglX::PFNGLXJOINSWAPGROUPSGIXPROC vtkglX::JoinSwapGroupSGIX = NULL;
//Functions for GLX_SGIX_video_resize
vtkglX::PFNGLXBINDCHANNELTOWINDOWSGIXPROC vtkglX::BindChannelToWindowSGIX = NULL;
vtkglX::PFNGLXCHANNELRECTSGIXPROC vtkglX::ChannelRectSGIX = NULL;
vtkglX::PFNGLXQUERYCHANNELRECTSGIXPROC vtkglX::QueryChannelRectSGIX = NULL;
vtkglX::PFNGLXQUERYCHANNELDELTASSGIXPROC vtkglX::QueryChannelDeltasSGIX = NULL;
vtkglX::PFNGLXCHANNELRECTSYNCSGIXPROC vtkglX::ChannelRectSyncSGIX = NULL;
//Functions for GLX_SGI_cushion
vtkglX::PFNGLXCUSHIONSGIPROC vtkglX::CushionSGI = NULL;
//Functions for GLX_SGI_make_current_read
vtkglX::PFNGLXMAKECURRENTREADSGIPROC vtkglX::MakeCurrentReadSGI = NULL;
vtkglX::PFNGLXGETCURRENTREADDRAWABLESGIPROC vtkglX::GetCurrentReadDrawableSGI = NULL;
//Functions for GLX_SGI_swap_control
vtkglX::PFNGLXSWAPINTERVALSGIPROC vtkglX::SwapIntervalSGI = NULL;
//Functions for GLX_SGI_video_sync
vtkglX::PFNGLXGETVIDEOSYNCSGIPROC vtkglX::GetVideoSyncSGI = NULL;
vtkglX::PFNGLXWAITVIDEOSYNCSGIPROC vtkglX::WaitVideoSyncSGI = NULL;
//Functions for GLX_SUN_get_transparent_index
vtkglX::PFNGLXGETTRANSPARENTINDEXSUNPROC vtkglX::GetTransparentIndexSUN = NULL;
//Functions for GLX_VERSION_1_3
vtkglX::PFNGLXGETFBCONFIGSPROC vtkglX::GetFBConfigs = NULL;
vtkglX::PFNGLXCHOOSEFBCONFIGPROC vtkglX::ChooseFBConfig = NULL;
vtkglX::PFNGLXGETFBCONFIGATTRIBPROC vtkglX::GetFBConfigAttrib = NULL;
vtkglX::PFNGLXGETVISUALFROMFBCONFIGPROC vtkglX::GetVisualFromFBConfig = NULL;
vtkglX::PFNGLXCREATEWINDOWPROC vtkglX::CreateWindow = NULL;
vtkglX::PFNGLXDESTROYWINDOWPROC vtkglX::DestroyWindow = NULL;
vtkglX::PFNGLXCREATEPIXMAPPROC vtkglX::CreatePixmap = NULL;
vtkglX::PFNGLXDESTROYPIXMAPPROC vtkglX::DestroyPixmap = NULL;
vtkglX::PFNGLXCREATEPBUFFERPROC vtkglX::CreatePbuffer = NULL;
vtkglX::PFNGLXDESTROYPBUFFERPROC vtkglX::DestroyPbuffer = NULL;
vtkglX::PFNGLXQUERYDRAWABLEPROC vtkglX::QueryDrawable = NULL;
vtkglX::PFNGLXCREATENEWCONTEXTPROC vtkglX::CreateNewContext = NULL;
vtkglX::PFNGLXMAKECONTEXTCURRENTPROC vtkglX::MakeContextCurrent = NULL;
vtkglX::PFNGLXGETCURRENTREADDRAWABLEPROC vtkglX::GetCurrentReadDrawable = NULL;
vtkglX::PFNGLXGETCURRENTDISPLAYPROC vtkglX::GetCurrentDisplay = NULL;
vtkglX::PFNGLXQUERYCONTEXTPROC vtkglX::QueryContext = NULL;
vtkglX::PFNGLXSELECTEVENTPROC vtkglX::SelectEvent = NULL;
vtkglX::PFNGLXGETSELECTEDEVENTPROC vtkglX::GetSelectedEvent = NULL;
//Functions for GLX_VERSION_1_4
vtkglX::PFNGLXGETPROCADDRESSPROC vtkglX::GetProcAddress = NULL;
#endif

#ifdef WIN32
//Functions for WGL_ARB_buffer_region
vtkwgl::PFNWGLCREATEBUFFERREGIONARBPROC vtkwgl::CreateBufferRegionARB = NULL;
vtkwgl::PFNWGLDELETEBUFFERREGIONARBPROC vtkwgl::DeleteBufferRegionARB = NULL;
vtkwgl::PFNWGLSAVEBUFFERREGIONARBPROC vtkwgl::SaveBufferRegionARB = NULL;
vtkwgl::PFNWGLRESTOREBUFFERREGIONARBPROC vtkwgl::RestoreBufferRegionARB = NULL;
//Functions for WGL_ARB_extensions_string
vtkwgl::PFNWGLGETEXTENSIONSSTRINGARBPROC vtkwgl::GetExtensionsStringARB = NULL;
//Functions for WGL_ARB_make_current_read
vtkwgl::PFNWGLMAKECONTEXTCURRENTARBPROC vtkwgl::MakeContextCurrentARB = NULL;
vtkwgl::PFNWGLGETCURRENTREADDCARBPROC vtkwgl::GetCurrentReadDCARB = NULL;
//Functions for WGL_ARB_pbuffer
vtkwgl::PFNWGLCREATEPBUFFERARBPROC vtkwgl::CreatePbufferARB = NULL;
vtkwgl::PFNWGLGETPBUFFERDCARBPROC vtkwgl::GetPbufferDCARB = NULL;
vtkwgl::PFNWGLRELEASEPBUFFERDCARBPROC vtkwgl::ReleasePbufferDCARB = NULL;
vtkwgl::PFNWGLDESTROYPBUFFERARBPROC vtkwgl::DestroyPbufferARB = NULL;
vtkwgl::PFNWGLQUERYPBUFFERARBPROC vtkwgl::QueryPbufferARB = NULL;
//Functions for WGL_ARB_pixel_format
vtkwgl::PFNWGLGETPIXELFORMATATTRIBIVARBPROC vtkwgl::GetPixelFormatAttribivARB = NULL;
vtkwgl::PFNWGLGETPIXELFORMATATTRIBFVARBPROC vtkwgl::GetPixelFormatAttribfvARB = NULL;
vtkwgl::PFNWGLCHOOSEPIXELFORMATARBPROC vtkwgl::ChoosePixelFormatARB = NULL;
//Functions for WGL_ARB_render_texture
vtkwgl::PFNWGLBINDTEXIMAGEARBPROC vtkwgl::BindTexImageARB = NULL;
vtkwgl::PFNWGLRELEASETEXIMAGEARBPROC vtkwgl::ReleaseTexImageARB = NULL;
vtkwgl::PFNWGLSETPBUFFERATTRIBARBPROC vtkwgl::SetPbufferAttribARB = NULL;
//Functions for WGL_EXT_display_color_table
vtkwgl::PFNWGLCREATEDISPLAYCOLORTABLEEXTPROC vtkwgl::CreateDisplayColorTableEXT = NULL;
vtkwgl::PFNWGLLOADDISPLAYCOLORTABLEEXTPROC vtkwgl::LoadDisplayColorTableEXT = NULL;
vtkwgl::PFNWGLBINDDISPLAYCOLORTABLEEXTPROC vtkwgl::BindDisplayColorTableEXT = NULL;
vtkwgl::PFNWGLDESTROYDISPLAYCOLORTABLEEXTPROC vtkwgl::DestroyDisplayColorTableEXT = NULL;
//Functions for WGL_EXT_extensions_string
vtkwgl::PFNWGLGETEXTENSIONSSTRINGEXTPROC vtkwgl::GetExtensionsStringEXT = NULL;
//Functions for WGL_EXT_make_current_read
vtkwgl::PFNWGLMAKECONTEXTCURRENTEXTPROC vtkwgl::MakeContextCurrentEXT = NULL;
vtkwgl::PFNWGLGETCURRENTREADDCEXTPROC vtkwgl::GetCurrentReadDCEXT = NULL;
//Functions for WGL_EXT_pbuffer
vtkwgl::PFNWGLCREATEPBUFFEREXTPROC vtkwgl::CreatePbufferEXT = NULL;
vtkwgl::PFNWGLGETPBUFFERDCEXTPROC vtkwgl::GetPbufferDCEXT = NULL;
vtkwgl::PFNWGLRELEASEPBUFFERDCEXTPROC vtkwgl::ReleasePbufferDCEXT = NULL;
vtkwgl::PFNWGLDESTROYPBUFFEREXTPROC vtkwgl::DestroyPbufferEXT = NULL;
vtkwgl::PFNWGLQUERYPBUFFEREXTPROC vtkwgl::QueryPbufferEXT = NULL;
//Functions for WGL_EXT_pixel_format
vtkwgl::PFNWGLGETPIXELFORMATATTRIBIVEXTPROC vtkwgl::GetPixelFormatAttribivEXT = NULL;
vtkwgl::PFNWGLGETPIXELFORMATATTRIBFVEXTPROC vtkwgl::GetPixelFormatAttribfvEXT = NULL;
vtkwgl::PFNWGLCHOOSEPIXELFORMATEXTPROC vtkwgl::ChoosePixelFormatEXT = NULL;
//Functions for WGL_EXT_swap_control
vtkwgl::PFNWGLSWAPINTERVALEXTPROC vtkwgl::SwapIntervalEXT = NULL;
vtkwgl::PFNWGLGETSWAPINTERVALEXTPROC vtkwgl::GetSwapIntervalEXT = NULL;
//Functions for WGL_I3D_digital_video_control
vtkwgl::PFNWGLGETDIGITALVIDEOPARAMETERSI3DPROC vtkwgl::GetDigitalVideoParametersI3D = NULL;
vtkwgl::PFNWGLSETDIGITALVIDEOPARAMETERSI3DPROC vtkwgl::SetDigitalVideoParametersI3D = NULL;
//Functions for WGL_I3D_gamma
vtkwgl::PFNWGLGETGAMMATABLEPARAMETERSI3DPROC vtkwgl::GetGammaTableParametersI3D = NULL;
vtkwgl::PFNWGLSETGAMMATABLEPARAMETERSI3DPROC vtkwgl::SetGammaTableParametersI3D = NULL;
vtkwgl::PFNWGLGETGAMMATABLEI3DPROC vtkwgl::GetGammaTableI3D = NULL;
vtkwgl::PFNWGLSETGAMMATABLEI3DPROC vtkwgl::SetGammaTableI3D = NULL;
//Functions for WGL_I3D_genlock
vtkwgl::PFNWGLENABLEGENLOCKI3DPROC vtkwgl::EnableGenlockI3D = NULL;
vtkwgl::PFNWGLDISABLEGENLOCKI3DPROC vtkwgl::DisableGenlockI3D = NULL;
vtkwgl::PFNWGLISENABLEDGENLOCKI3DPROC vtkwgl::IsEnabledGenlockI3D = NULL;
vtkwgl::PFNWGLGENLOCKSOURCEI3DPROC vtkwgl::GenlockSourceI3D = NULL;
vtkwgl::PFNWGLGETGENLOCKSOURCEI3DPROC vtkwgl::GetGenlockSourceI3D = NULL;
vtkwgl::PFNWGLGENLOCKSOURCEEDGEI3DPROC vtkwgl::GenlockSourceEdgeI3D = NULL;
vtkwgl::PFNWGLGETGENLOCKSOURCEEDGEI3DPROC vtkwgl::GetGenlockSourceEdgeI3D = NULL;
vtkwgl::PFNWGLGENLOCKSAMPLERATEI3DPROC vtkwgl::GenlockSampleRateI3D = NULL;
vtkwgl::PFNWGLGETGENLOCKSAMPLERATEI3DPROC vtkwgl::GetGenlockSampleRateI3D = NULL;
vtkwgl::PFNWGLGENLOCKSOURCEDELAYI3DPROC vtkwgl::GenlockSourceDelayI3D = NULL;
vtkwgl::PFNWGLGETGENLOCKSOURCEDELAYI3DPROC vtkwgl::GetGenlockSourceDelayI3D = NULL;
vtkwgl::PFNWGLQUERYGENLOCKMAXSOURCEDELAYI3DPROC vtkwgl::QueryGenlockMaxSourceDelayI3D = NULL;
//Functions for WGL_I3D_image_buffer
vtkwgl::PFNWGLCREATEIMAGEBUFFERI3DPROC vtkwgl::CreateImageBufferI3D = NULL;
vtkwgl::PFNWGLDESTROYIMAGEBUFFERI3DPROC vtkwgl::DestroyImageBufferI3D = NULL;
vtkwgl::PFNWGLASSOCIATEIMAGEBUFFEREVENTSI3DPROC vtkwgl::AssociateImageBufferEventsI3D = NULL;
vtkwgl::PFNWGLRELEASEIMAGEBUFFEREVENTSI3DPROC vtkwgl::ReleaseImageBufferEventsI3D = NULL;
//Functions for WGL_I3D_swap_frame_lock
vtkwgl::PFNWGLENABLEFRAMELOCKI3DPROC vtkwgl::EnableFrameLockI3D = NULL;
vtkwgl::PFNWGLDISABLEFRAMELOCKI3DPROC vtkwgl::DisableFrameLockI3D = NULL;
vtkwgl::PFNWGLISENABLEDFRAMELOCKI3DPROC vtkwgl::IsEnabledFrameLockI3D = NULL;
vtkwgl::PFNWGLQUERYFRAMELOCKMASTERI3DPROC vtkwgl::QueryFrameLockMasterI3D = NULL;
//Functions for WGL_I3D_swap_frame_usage
vtkwgl::PFNWGLGETFRAMEUSAGEI3DPROC vtkwgl::GetFrameUsageI3D = NULL;
vtkwgl::PFNWGLBEGINFRAMETRACKINGI3DPROC vtkwgl::BeginFrameTrackingI3D = NULL;
vtkwgl::PFNWGLENDFRAMETRACKINGI3DPROC vtkwgl::EndFrameTrackingI3D = NULL;
vtkwgl::PFNWGLQUERYFRAMETRACKINGI3DPROC vtkwgl::QueryFrameTrackingI3D = NULL;
//Functions for WGL_NV_vertex_array_range
vtkwgl::PFNWGLALLOCATEMEMORYNVPROC vtkwgl::AllocateMemoryNV = NULL;
vtkwgl::PFNWGLFREEMEMORYNVPROC vtkwgl::FreeMemoryNV = NULL;
//Functions for WGL_OML_sync_control
vtkwgl::PFNWGLGETSYNCVALUESOMLPROC vtkwgl::GetSyncValuesOML = NULL;
vtkwgl::PFNWGLGETMSCRATEOMLPROC vtkwgl::GetMscRateOML = NULL;
vtkwgl::PFNWGLSWAPBUFFERSMSCOMLPROC vtkwgl::SwapBuffersMscOML = NULL;
vtkwgl::PFNWGLSWAPLAYERBUFFERSMSCOMLPROC vtkwgl::SwapLayerBuffersMscOML = NULL;
vtkwgl::PFNWGLWAITFORMSCOMLPROC vtkwgl::WaitForMscOML = NULL;
vtkwgl::PFNWGLWAITFORSBCOMLPROC vtkwgl::WaitForSbcOML = NULL;
#endif

int vtkgl::LoadExtension(const char *name, vtkOpenGLExtensionManager *manager)
{
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_ARB_get_proc_address") == 0)
    {
    vtkglX::GetProcAddressARB = (vtkglX::PFNGLXGETPROCADDRESSARBPROC)manager->GetProcAddress("glXGetProcAddressARB");
    return 1 && (vtkglX::GetProcAddressARB != NULL);
    }
#endif
  if (strcmp(name, "GL_VERSION_1_2") == 0)
    {
    vtkgl::BlendColor = (vtkgl::PFNGLBLENDCOLORPROC)manager->GetProcAddress("glBlendColor");
    vtkgl::BlendEquation = (vtkgl::PFNGLBLENDEQUATIONPROC)manager->GetProcAddress("glBlendEquation");
    vtkgl::DrawRangeElements = (vtkgl::PFNGLDRAWRANGEELEMENTSPROC)manager->GetProcAddress("glDrawRangeElements");
    vtkgl::ColorTable = (vtkgl::PFNGLCOLORTABLEPROC)manager->GetProcAddress("glColorTable");
    vtkgl::ColorTableParameterfv = (vtkgl::PFNGLCOLORTABLEPARAMETERFVPROC)manager->GetProcAddress("glColorTableParameterfv");
    vtkgl::ColorTableParameteriv = (vtkgl::PFNGLCOLORTABLEPARAMETERIVPROC)manager->GetProcAddress("glColorTableParameteriv");
    vtkgl::CopyColorTable = (vtkgl::PFNGLCOPYCOLORTABLEPROC)manager->GetProcAddress("glCopyColorTable");
    vtkgl::GetColorTable = (vtkgl::PFNGLGETCOLORTABLEPROC)manager->GetProcAddress("glGetColorTable");
    vtkgl::GetColorTableParameterfv = (vtkgl::PFNGLGETCOLORTABLEPARAMETERFVPROC)manager->GetProcAddress("glGetColorTableParameterfv");
    vtkgl::GetColorTableParameteriv = (vtkgl::PFNGLGETCOLORTABLEPARAMETERIVPROC)manager->GetProcAddress("glGetColorTableParameteriv");
    vtkgl::ColorSubTable = (vtkgl::PFNGLCOLORSUBTABLEPROC)manager->GetProcAddress("glColorSubTable");
    vtkgl::CopyColorSubTable = (vtkgl::PFNGLCOPYCOLORSUBTABLEPROC)manager->GetProcAddress("glCopyColorSubTable");
    vtkgl::ConvolutionFilter1D = (vtkgl::PFNGLCONVOLUTIONFILTER1DPROC)manager->GetProcAddress("glConvolutionFilter1D");
    vtkgl::ConvolutionFilter2D = (vtkgl::PFNGLCONVOLUTIONFILTER2DPROC)manager->GetProcAddress("glConvolutionFilter2D");
    vtkgl::ConvolutionParameterf = (vtkgl::PFNGLCONVOLUTIONPARAMETERFPROC)manager->GetProcAddress("glConvolutionParameterf");
    vtkgl::ConvolutionParameterfv = (vtkgl::PFNGLCONVOLUTIONPARAMETERFVPROC)manager->GetProcAddress("glConvolutionParameterfv");
    vtkgl::ConvolutionParameteri = (vtkgl::PFNGLCONVOLUTIONPARAMETERIPROC)manager->GetProcAddress("glConvolutionParameteri");
    vtkgl::ConvolutionParameteriv = (vtkgl::PFNGLCONVOLUTIONPARAMETERIVPROC)manager->GetProcAddress("glConvolutionParameteriv");
    vtkgl::CopyConvolutionFilter1D = (vtkgl::PFNGLCOPYCONVOLUTIONFILTER1DPROC)manager->GetProcAddress("glCopyConvolutionFilter1D");
    vtkgl::CopyConvolutionFilter2D = (vtkgl::PFNGLCOPYCONVOLUTIONFILTER2DPROC)manager->GetProcAddress("glCopyConvolutionFilter2D");
    vtkgl::GetConvolutionFilter = (vtkgl::PFNGLGETCONVOLUTIONFILTERPROC)manager->GetProcAddress("glGetConvolutionFilter");
    vtkgl::GetConvolutionParameterfv = (vtkgl::PFNGLGETCONVOLUTIONPARAMETERFVPROC)manager->GetProcAddress("glGetConvolutionParameterfv");
    vtkgl::GetConvolutionParameteriv = (vtkgl::PFNGLGETCONVOLUTIONPARAMETERIVPROC)manager->GetProcAddress("glGetConvolutionParameteriv");
    vtkgl::GetSeparableFilter = (vtkgl::PFNGLGETSEPARABLEFILTERPROC)manager->GetProcAddress("glGetSeparableFilter");
    vtkgl::SeparableFilter2D = (vtkgl::PFNGLSEPARABLEFILTER2DPROC)manager->GetProcAddress("glSeparableFilter2D");
    vtkgl::GetHistogram = (vtkgl::PFNGLGETHISTOGRAMPROC)manager->GetProcAddress("glGetHistogram");
    vtkgl::GetHistogramParameterfv = (vtkgl::PFNGLGETHISTOGRAMPARAMETERFVPROC)manager->GetProcAddress("glGetHistogramParameterfv");
    vtkgl::GetHistogramParameteriv = (vtkgl::PFNGLGETHISTOGRAMPARAMETERIVPROC)manager->GetProcAddress("glGetHistogramParameteriv");
    vtkgl::GetMinmax = (vtkgl::PFNGLGETMINMAXPROC)manager->GetProcAddress("glGetMinmax");
    vtkgl::GetMinmaxParameterfv = (vtkgl::PFNGLGETMINMAXPARAMETERFVPROC)manager->GetProcAddress("glGetMinmaxParameterfv");
    vtkgl::GetMinmaxParameteriv = (vtkgl::PFNGLGETMINMAXPARAMETERIVPROC)manager->GetProcAddress("glGetMinmaxParameteriv");
    vtkgl::Histogram = (vtkgl::PFNGLHISTOGRAMPROC)manager->GetProcAddress("glHistogram");
    vtkgl::Minmax = (vtkgl::PFNGLMINMAXPROC)manager->GetProcAddress("glMinmax");
    vtkgl::ResetHistogram = (vtkgl::PFNGLRESETHISTOGRAMPROC)manager->GetProcAddress("glResetHistogram");
    vtkgl::ResetMinmax = (vtkgl::PFNGLRESETMINMAXPROC)manager->GetProcAddress("glResetMinmax");
    vtkgl::TexImage3D = (vtkgl::PFNGLTEXIMAGE3DPROC)manager->GetProcAddress("glTexImage3D");
    vtkgl::TexSubImage3D = (vtkgl::PFNGLTEXSUBIMAGE3DPROC)manager->GetProcAddress("glTexSubImage3D");
    vtkgl::CopyTexSubImage3D = (vtkgl::PFNGLCOPYTEXSUBIMAGE3DPROC)manager->GetProcAddress("glCopyTexSubImage3D");
    return 1 && (vtkgl::BlendColor != NULL) && (vtkgl::BlendEquation != NULL) && (vtkgl::DrawRangeElements != NULL) && (vtkgl::ColorTable != NULL) && (vtkgl::ColorTableParameterfv != NULL) && (vtkgl::ColorTableParameteriv != NULL) && (vtkgl::CopyColorTable != NULL) && (vtkgl::GetColorTable != NULL) && (vtkgl::GetColorTableParameterfv != NULL) && (vtkgl::GetColorTableParameteriv != NULL) && (vtkgl::ColorSubTable != NULL) && (vtkgl::CopyColorSubTable != NULL) && (vtkgl::ConvolutionFilter1D != NULL) && (vtkgl::ConvolutionFilter2D != NULL) && (vtkgl::ConvolutionParameterf != NULL) && (vtkgl::ConvolutionParameterfv != NULL) && (vtkgl::ConvolutionParameteri != NULL) && (vtkgl::ConvolutionParameteriv != NULL) && (vtkgl::CopyConvolutionFilter1D != NULL) && (vtkgl::CopyConvolutionFilter2D != NULL) && (vtkgl::GetConvolutionFilter != NULL) && (vtkgl::GetConvolutionParameterfv != NULL) && (vtkgl::GetConvolutionParameteriv != NULL) && (vtkgl::GetSeparableFilter != NULL) && (vtkgl::SeparableFilter2D != NULL) && (vtkgl::GetHistogram != NULL) && (vtkgl::GetHistogramParameterfv != NULL) && (vtkgl::GetHistogramParameteriv != NULL) && (vtkgl::GetMinmax != NULL) && (vtkgl::GetMinmaxParameterfv != NULL) && (vtkgl::GetMinmaxParameteriv != NULL) && (vtkgl::Histogram != NULL) && (vtkgl::Minmax != NULL) && (vtkgl::ResetHistogram != NULL) && (vtkgl::ResetMinmax != NULL) && (vtkgl::TexImage3D != NULL) && (vtkgl::TexSubImage3D != NULL) && (vtkgl::CopyTexSubImage3D != NULL);
    }
  if (strcmp(name, "GL_ARB_imaging") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_VERSION_1_3") == 0)
    {
    vtkgl::ActiveTexture = (vtkgl::PFNGLACTIVETEXTUREPROC)manager->GetProcAddress("glActiveTexture");
    vtkgl::ClientActiveTexture = (vtkgl::PFNGLCLIENTACTIVETEXTUREPROC)manager->GetProcAddress("glClientActiveTexture");
    vtkgl::MultiTexCoord1d = (vtkgl::PFNGLMULTITEXCOORD1DPROC)manager->GetProcAddress("glMultiTexCoord1d");
    vtkgl::MultiTexCoord1dv = (vtkgl::PFNGLMULTITEXCOORD1DVPROC)manager->GetProcAddress("glMultiTexCoord1dv");
    vtkgl::MultiTexCoord1f = (vtkgl::PFNGLMULTITEXCOORD1FPROC)manager->GetProcAddress("glMultiTexCoord1f");
    vtkgl::MultiTexCoord1fv = (vtkgl::PFNGLMULTITEXCOORD1FVPROC)manager->GetProcAddress("glMultiTexCoord1fv");
    vtkgl::MultiTexCoord1i = (vtkgl::PFNGLMULTITEXCOORD1IPROC)manager->GetProcAddress("glMultiTexCoord1i");
    vtkgl::MultiTexCoord1iv = (vtkgl::PFNGLMULTITEXCOORD1IVPROC)manager->GetProcAddress("glMultiTexCoord1iv");
    vtkgl::MultiTexCoord1s = (vtkgl::PFNGLMULTITEXCOORD1SPROC)manager->GetProcAddress("glMultiTexCoord1s");
    vtkgl::MultiTexCoord1sv = (vtkgl::PFNGLMULTITEXCOORD1SVPROC)manager->GetProcAddress("glMultiTexCoord1sv");
    vtkgl::MultiTexCoord2d = (vtkgl::PFNGLMULTITEXCOORD2DPROC)manager->GetProcAddress("glMultiTexCoord2d");
    vtkgl::MultiTexCoord2dv = (vtkgl::PFNGLMULTITEXCOORD2DVPROC)manager->GetProcAddress("glMultiTexCoord2dv");
    vtkgl::MultiTexCoord2f = (vtkgl::PFNGLMULTITEXCOORD2FPROC)manager->GetProcAddress("glMultiTexCoord2f");
    vtkgl::MultiTexCoord2fv = (vtkgl::PFNGLMULTITEXCOORD2FVPROC)manager->GetProcAddress("glMultiTexCoord2fv");
    vtkgl::MultiTexCoord2i = (vtkgl::PFNGLMULTITEXCOORD2IPROC)manager->GetProcAddress("glMultiTexCoord2i");
    vtkgl::MultiTexCoord2iv = (vtkgl::PFNGLMULTITEXCOORD2IVPROC)manager->GetProcAddress("glMultiTexCoord2iv");
    vtkgl::MultiTexCoord2s = (vtkgl::PFNGLMULTITEXCOORD2SPROC)manager->GetProcAddress("glMultiTexCoord2s");
    vtkgl::MultiTexCoord2sv = (vtkgl::PFNGLMULTITEXCOORD2SVPROC)manager->GetProcAddress("glMultiTexCoord2sv");
    vtkgl::MultiTexCoord3d = (vtkgl::PFNGLMULTITEXCOORD3DPROC)manager->GetProcAddress("glMultiTexCoord3d");
    vtkgl::MultiTexCoord3dv = (vtkgl::PFNGLMULTITEXCOORD3DVPROC)manager->GetProcAddress("glMultiTexCoord3dv");
    vtkgl::MultiTexCoord3f = (vtkgl::PFNGLMULTITEXCOORD3FPROC)manager->GetProcAddress("glMultiTexCoord3f");
    vtkgl::MultiTexCoord3fv = (vtkgl::PFNGLMULTITEXCOORD3FVPROC)manager->GetProcAddress("glMultiTexCoord3fv");
    vtkgl::MultiTexCoord3i = (vtkgl::PFNGLMULTITEXCOORD3IPROC)manager->GetProcAddress("glMultiTexCoord3i");
    vtkgl::MultiTexCoord3iv = (vtkgl::PFNGLMULTITEXCOORD3IVPROC)manager->GetProcAddress("glMultiTexCoord3iv");
    vtkgl::MultiTexCoord3s = (vtkgl::PFNGLMULTITEXCOORD3SPROC)manager->GetProcAddress("glMultiTexCoord3s");
    vtkgl::MultiTexCoord3sv = (vtkgl::PFNGLMULTITEXCOORD3SVPROC)manager->GetProcAddress("glMultiTexCoord3sv");
    vtkgl::MultiTexCoord4d = (vtkgl::PFNGLMULTITEXCOORD4DPROC)manager->GetProcAddress("glMultiTexCoord4d");
    vtkgl::MultiTexCoord4dv = (vtkgl::PFNGLMULTITEXCOORD4DVPROC)manager->GetProcAddress("glMultiTexCoord4dv");
    vtkgl::MultiTexCoord4f = (vtkgl::PFNGLMULTITEXCOORD4FPROC)manager->GetProcAddress("glMultiTexCoord4f");
    vtkgl::MultiTexCoord4fv = (vtkgl::PFNGLMULTITEXCOORD4FVPROC)manager->GetProcAddress("glMultiTexCoord4fv");
    vtkgl::MultiTexCoord4i = (vtkgl::PFNGLMULTITEXCOORD4IPROC)manager->GetProcAddress("glMultiTexCoord4i");
    vtkgl::MultiTexCoord4iv = (vtkgl::PFNGLMULTITEXCOORD4IVPROC)manager->GetProcAddress("glMultiTexCoord4iv");
    vtkgl::MultiTexCoord4s = (vtkgl::PFNGLMULTITEXCOORD4SPROC)manager->GetProcAddress("glMultiTexCoord4s");
    vtkgl::MultiTexCoord4sv = (vtkgl::PFNGLMULTITEXCOORD4SVPROC)manager->GetProcAddress("glMultiTexCoord4sv");
    vtkgl::LoadTransposeMatrixf = (vtkgl::PFNGLLOADTRANSPOSEMATRIXFPROC)manager->GetProcAddress("glLoadTransposeMatrixf");
    vtkgl::LoadTransposeMatrixd = (vtkgl::PFNGLLOADTRANSPOSEMATRIXDPROC)manager->GetProcAddress("glLoadTransposeMatrixd");
    vtkgl::MultTransposeMatrixf = (vtkgl::PFNGLMULTTRANSPOSEMATRIXFPROC)manager->GetProcAddress("glMultTransposeMatrixf");
    vtkgl::MultTransposeMatrixd = (vtkgl::PFNGLMULTTRANSPOSEMATRIXDPROC)manager->GetProcAddress("glMultTransposeMatrixd");
    vtkgl::SampleCoverage = (vtkgl::PFNGLSAMPLECOVERAGEPROC)manager->GetProcAddress("glSampleCoverage");
    vtkgl::CompressedTexImage3D = (vtkgl::PFNGLCOMPRESSEDTEXIMAGE3DPROC)manager->GetProcAddress("glCompressedTexImage3D");
    vtkgl::CompressedTexImage2D = (vtkgl::PFNGLCOMPRESSEDTEXIMAGE2DPROC)manager->GetProcAddress("glCompressedTexImage2D");
    vtkgl::CompressedTexImage1D = (vtkgl::PFNGLCOMPRESSEDTEXIMAGE1DPROC)manager->GetProcAddress("glCompressedTexImage1D");
    vtkgl::CompressedTexSubImage3D = (vtkgl::PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC)manager->GetProcAddress("glCompressedTexSubImage3D");
    vtkgl::CompressedTexSubImage2D = (vtkgl::PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC)manager->GetProcAddress("glCompressedTexSubImage2D");
    vtkgl::CompressedTexSubImage1D = (vtkgl::PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC)manager->GetProcAddress("glCompressedTexSubImage1D");
    vtkgl::GetCompressedTexImage = (vtkgl::PFNGLGETCOMPRESSEDTEXIMAGEPROC)manager->GetProcAddress("glGetCompressedTexImage");
    return 1 && (vtkgl::ActiveTexture != NULL) && (vtkgl::ClientActiveTexture != NULL) && (vtkgl::MultiTexCoord1d != NULL) && (vtkgl::MultiTexCoord1dv != NULL) && (vtkgl::MultiTexCoord1f != NULL) && (vtkgl::MultiTexCoord1fv != NULL) && (vtkgl::MultiTexCoord1i != NULL) && (vtkgl::MultiTexCoord1iv != NULL) && (vtkgl::MultiTexCoord1s != NULL) && (vtkgl::MultiTexCoord1sv != NULL) && (vtkgl::MultiTexCoord2d != NULL) && (vtkgl::MultiTexCoord2dv != NULL) && (vtkgl::MultiTexCoord2f != NULL) && (vtkgl::MultiTexCoord2fv != NULL) && (vtkgl::MultiTexCoord2i != NULL) && (vtkgl::MultiTexCoord2iv != NULL) && (vtkgl::MultiTexCoord2s != NULL) && (vtkgl::MultiTexCoord2sv != NULL) && (vtkgl::MultiTexCoord3d != NULL) && (vtkgl::MultiTexCoord3dv != NULL) && (vtkgl::MultiTexCoord3f != NULL) && (vtkgl::MultiTexCoord3fv != NULL) && (vtkgl::MultiTexCoord3i != NULL) && (vtkgl::MultiTexCoord3iv != NULL) && (vtkgl::MultiTexCoord3s != NULL) && (vtkgl::MultiTexCoord3sv != NULL) && (vtkgl::MultiTexCoord4d != NULL) && (vtkgl::MultiTexCoord4dv != NULL) && (vtkgl::MultiTexCoord4f != NULL) && (vtkgl::MultiTexCoord4fv != NULL) && (vtkgl::MultiTexCoord4i != NULL) && (vtkgl::MultiTexCoord4iv != NULL) && (vtkgl::MultiTexCoord4s != NULL) && (vtkgl::MultiTexCoord4sv != NULL) && (vtkgl::LoadTransposeMatrixf != NULL) && (vtkgl::LoadTransposeMatrixd != NULL) && (vtkgl::MultTransposeMatrixf != NULL) && (vtkgl::MultTransposeMatrixd != NULL) && (vtkgl::SampleCoverage != NULL) && (vtkgl::CompressedTexImage3D != NULL) && (vtkgl::CompressedTexImage2D != NULL) && (vtkgl::CompressedTexImage1D != NULL) && (vtkgl::CompressedTexSubImage3D != NULL) && (vtkgl::CompressedTexSubImage2D != NULL) && (vtkgl::CompressedTexSubImage1D != NULL) && (vtkgl::GetCompressedTexImage != NULL);
    }
  if (strcmp(name, "GL_VERSION_1_4") == 0)
    {
    vtkgl::BlendFuncSeparate = (vtkgl::PFNGLBLENDFUNCSEPARATEPROC)manager->GetProcAddress("glBlendFuncSeparate");
    vtkgl::FogCoordf = (vtkgl::PFNGLFOGCOORDFPROC)manager->GetProcAddress("glFogCoordf");
    vtkgl::FogCoordfv = (vtkgl::PFNGLFOGCOORDFVPROC)manager->GetProcAddress("glFogCoordfv");
    vtkgl::FogCoordd = (vtkgl::PFNGLFOGCOORDDPROC)manager->GetProcAddress("glFogCoordd");
    vtkgl::FogCoorddv = (vtkgl::PFNGLFOGCOORDDVPROC)manager->GetProcAddress("glFogCoorddv");
    vtkgl::FogCoordPointer = (vtkgl::PFNGLFOGCOORDPOINTERPROC)manager->GetProcAddress("glFogCoordPointer");
    vtkgl::MultiDrawArrays = (vtkgl::PFNGLMULTIDRAWARRAYSPROC)manager->GetProcAddress("glMultiDrawArrays");
    vtkgl::MultiDrawElements = (vtkgl::PFNGLMULTIDRAWELEMENTSPROC)manager->GetProcAddress("glMultiDrawElements");
    vtkgl::PointParameterf = (vtkgl::PFNGLPOINTPARAMETERFPROC)manager->GetProcAddress("glPointParameterf");
    vtkgl::PointParameterfv = (vtkgl::PFNGLPOINTPARAMETERFVPROC)manager->GetProcAddress("glPointParameterfv");
    vtkgl::PointParameteri = (vtkgl::PFNGLPOINTPARAMETERIPROC)manager->GetProcAddress("glPointParameteri");
    vtkgl::PointParameteriv = (vtkgl::PFNGLPOINTPARAMETERIVPROC)manager->GetProcAddress("glPointParameteriv");
    vtkgl::SecondaryColor3b = (vtkgl::PFNGLSECONDARYCOLOR3BPROC)manager->GetProcAddress("glSecondaryColor3b");
    vtkgl::SecondaryColor3bv = (vtkgl::PFNGLSECONDARYCOLOR3BVPROC)manager->GetProcAddress("glSecondaryColor3bv");
    vtkgl::SecondaryColor3d = (vtkgl::PFNGLSECONDARYCOLOR3DPROC)manager->GetProcAddress("glSecondaryColor3d");
    vtkgl::SecondaryColor3dv = (vtkgl::PFNGLSECONDARYCOLOR3DVPROC)manager->GetProcAddress("glSecondaryColor3dv");
    vtkgl::SecondaryColor3f = (vtkgl::PFNGLSECONDARYCOLOR3FPROC)manager->GetProcAddress("glSecondaryColor3f");
    vtkgl::SecondaryColor3fv = (vtkgl::PFNGLSECONDARYCOLOR3FVPROC)manager->GetProcAddress("glSecondaryColor3fv");
    vtkgl::SecondaryColor3i = (vtkgl::PFNGLSECONDARYCOLOR3IPROC)manager->GetProcAddress("glSecondaryColor3i");
    vtkgl::SecondaryColor3iv = (vtkgl::PFNGLSECONDARYCOLOR3IVPROC)manager->GetProcAddress("glSecondaryColor3iv");
    vtkgl::SecondaryColor3s = (vtkgl::PFNGLSECONDARYCOLOR3SPROC)manager->GetProcAddress("glSecondaryColor3s");
    vtkgl::SecondaryColor3sv = (vtkgl::PFNGLSECONDARYCOLOR3SVPROC)manager->GetProcAddress("glSecondaryColor3sv");
    vtkgl::SecondaryColor3ub = (vtkgl::PFNGLSECONDARYCOLOR3UBPROC)manager->GetProcAddress("glSecondaryColor3ub");
    vtkgl::SecondaryColor3ubv = (vtkgl::PFNGLSECONDARYCOLOR3UBVPROC)manager->GetProcAddress("glSecondaryColor3ubv");
    vtkgl::SecondaryColor3ui = (vtkgl::PFNGLSECONDARYCOLOR3UIPROC)manager->GetProcAddress("glSecondaryColor3ui");
    vtkgl::SecondaryColor3uiv = (vtkgl::PFNGLSECONDARYCOLOR3UIVPROC)manager->GetProcAddress("glSecondaryColor3uiv");
    vtkgl::SecondaryColor3us = (vtkgl::PFNGLSECONDARYCOLOR3USPROC)manager->GetProcAddress("glSecondaryColor3us");
    vtkgl::SecondaryColor3usv = (vtkgl::PFNGLSECONDARYCOLOR3USVPROC)manager->GetProcAddress("glSecondaryColor3usv");
    vtkgl::SecondaryColorPointer = (vtkgl::PFNGLSECONDARYCOLORPOINTERPROC)manager->GetProcAddress("glSecondaryColorPointer");
    vtkgl::WindowPos2d = (vtkgl::PFNGLWINDOWPOS2DPROC)manager->GetProcAddress("glWindowPos2d");
    vtkgl::WindowPos2dv = (vtkgl::PFNGLWINDOWPOS2DVPROC)manager->GetProcAddress("glWindowPos2dv");
    vtkgl::WindowPos2f = (vtkgl::PFNGLWINDOWPOS2FPROC)manager->GetProcAddress("glWindowPos2f");
    vtkgl::WindowPos2fv = (vtkgl::PFNGLWINDOWPOS2FVPROC)manager->GetProcAddress("glWindowPos2fv");
    vtkgl::WindowPos2i = (vtkgl::PFNGLWINDOWPOS2IPROC)manager->GetProcAddress("glWindowPos2i");
    vtkgl::WindowPos2iv = (vtkgl::PFNGLWINDOWPOS2IVPROC)manager->GetProcAddress("glWindowPos2iv");
    vtkgl::WindowPos2s = (vtkgl::PFNGLWINDOWPOS2SPROC)manager->GetProcAddress("glWindowPos2s");
    vtkgl::WindowPos2sv = (vtkgl::PFNGLWINDOWPOS2SVPROC)manager->GetProcAddress("glWindowPos2sv");
    vtkgl::WindowPos3d = (vtkgl::PFNGLWINDOWPOS3DPROC)manager->GetProcAddress("glWindowPos3d");
    vtkgl::WindowPos3dv = (vtkgl::PFNGLWINDOWPOS3DVPROC)manager->GetProcAddress("glWindowPos3dv");
    vtkgl::WindowPos3f = (vtkgl::PFNGLWINDOWPOS3FPROC)manager->GetProcAddress("glWindowPos3f");
    vtkgl::WindowPos3fv = (vtkgl::PFNGLWINDOWPOS3FVPROC)manager->GetProcAddress("glWindowPos3fv");
    vtkgl::WindowPos3i = (vtkgl::PFNGLWINDOWPOS3IPROC)manager->GetProcAddress("glWindowPos3i");
    vtkgl::WindowPos3iv = (vtkgl::PFNGLWINDOWPOS3IVPROC)manager->GetProcAddress("glWindowPos3iv");
    vtkgl::WindowPos3s = (vtkgl::PFNGLWINDOWPOS3SPROC)manager->GetProcAddress("glWindowPos3s");
    vtkgl::WindowPos3sv = (vtkgl::PFNGLWINDOWPOS3SVPROC)manager->GetProcAddress("glWindowPos3sv");
    return 1 && (vtkgl::BlendFuncSeparate != NULL) && (vtkgl::FogCoordf != NULL) && (vtkgl::FogCoordfv != NULL) && (vtkgl::FogCoordd != NULL) && (vtkgl::FogCoorddv != NULL) && (vtkgl::FogCoordPointer != NULL) && (vtkgl::MultiDrawArrays != NULL) && (vtkgl::MultiDrawElements != NULL) && (vtkgl::PointParameterf != NULL) && (vtkgl::PointParameterfv != NULL) && (vtkgl::PointParameteri != NULL) && (vtkgl::PointParameteriv != NULL) && (vtkgl::SecondaryColor3b != NULL) && (vtkgl::SecondaryColor3bv != NULL) && (vtkgl::SecondaryColor3d != NULL) && (vtkgl::SecondaryColor3dv != NULL) && (vtkgl::SecondaryColor3f != NULL) && (vtkgl::SecondaryColor3fv != NULL) && (vtkgl::SecondaryColor3i != NULL) && (vtkgl::SecondaryColor3iv != NULL) && (vtkgl::SecondaryColor3s != NULL) && (vtkgl::SecondaryColor3sv != NULL) && (vtkgl::SecondaryColor3ub != NULL) && (vtkgl::SecondaryColor3ubv != NULL) && (vtkgl::SecondaryColor3ui != NULL) && (vtkgl::SecondaryColor3uiv != NULL) && (vtkgl::SecondaryColor3us != NULL) && (vtkgl::SecondaryColor3usv != NULL) && (vtkgl::SecondaryColorPointer != NULL) && (vtkgl::WindowPos2d != NULL) && (vtkgl::WindowPos2dv != NULL) && (vtkgl::WindowPos2f != NULL) && (vtkgl::WindowPos2fv != NULL) && (vtkgl::WindowPos2i != NULL) && (vtkgl::WindowPos2iv != NULL) && (vtkgl::WindowPos2s != NULL) && (vtkgl::WindowPos2sv != NULL) && (vtkgl::WindowPos3d != NULL) && (vtkgl::WindowPos3dv != NULL) && (vtkgl::WindowPos3f != NULL) && (vtkgl::WindowPos3fv != NULL) && (vtkgl::WindowPos3i != NULL) && (vtkgl::WindowPos3iv != NULL) && (vtkgl::WindowPos3s != NULL) && (vtkgl::WindowPos3sv != NULL);
    }
  if (strcmp(name, "GL_VERSION_1_5") == 0)
    {
    vtkgl::GenQueries = (vtkgl::PFNGLGENQUERIESPROC)manager->GetProcAddress("glGenQueries");
    vtkgl::DeleteQueries = (vtkgl::PFNGLDELETEQUERIESPROC)manager->GetProcAddress("glDeleteQueries");
    vtkgl::IsQuery = (vtkgl::PFNGLISQUERYPROC)manager->GetProcAddress("glIsQuery");
    vtkgl::BeginQuery = (vtkgl::PFNGLBEGINQUERYPROC)manager->GetProcAddress("glBeginQuery");
    vtkgl::EndQuery = (vtkgl::PFNGLENDQUERYPROC)manager->GetProcAddress("glEndQuery");
    vtkgl::GetQueryiv = (vtkgl::PFNGLGETQUERYIVPROC)manager->GetProcAddress("glGetQueryiv");
    vtkgl::GetQueryObjectiv = (vtkgl::PFNGLGETQUERYOBJECTIVPROC)manager->GetProcAddress("glGetQueryObjectiv");
    vtkgl::GetQueryObjectuiv = (vtkgl::PFNGLGETQUERYOBJECTUIVPROC)manager->GetProcAddress("glGetQueryObjectuiv");
    vtkgl::BindBuffer = (vtkgl::PFNGLBINDBUFFERPROC)manager->GetProcAddress("glBindBuffer");
    vtkgl::DeleteBuffers = (vtkgl::PFNGLDELETEBUFFERSPROC)manager->GetProcAddress("glDeleteBuffers");
    vtkgl::GenBuffers = (vtkgl::PFNGLGENBUFFERSPROC)manager->GetProcAddress("glGenBuffers");
    vtkgl::IsBuffer = (vtkgl::PFNGLISBUFFERPROC)manager->GetProcAddress("glIsBuffer");
    vtkgl::BufferData = (vtkgl::PFNGLBUFFERDATAPROC)manager->GetProcAddress("glBufferData");
    vtkgl::BufferSubData = (vtkgl::PFNGLBUFFERSUBDATAPROC)manager->GetProcAddress("glBufferSubData");
    vtkgl::GetBufferSubData = (vtkgl::PFNGLGETBUFFERSUBDATAPROC)manager->GetProcAddress("glGetBufferSubData");
    vtkgl::MapBuffer = (vtkgl::PFNGLMAPBUFFERPROC)manager->GetProcAddress("glMapBuffer");
    vtkgl::UnmapBuffer = (vtkgl::PFNGLUNMAPBUFFERPROC)manager->GetProcAddress("glUnmapBuffer");
    vtkgl::GetBufferParameteriv = (vtkgl::PFNGLGETBUFFERPARAMETERIVPROC)manager->GetProcAddress("glGetBufferParameteriv");
    vtkgl::GetBufferPointerv = (vtkgl::PFNGLGETBUFFERPOINTERVPROC)manager->GetProcAddress("glGetBufferPointerv");
    return 1 && (vtkgl::GenQueries != NULL) && (vtkgl::DeleteQueries != NULL) && (vtkgl::IsQuery != NULL) && (vtkgl::BeginQuery != NULL) && (vtkgl::EndQuery != NULL) && (vtkgl::GetQueryiv != NULL) && (vtkgl::GetQueryObjectiv != NULL) && (vtkgl::GetQueryObjectuiv != NULL) && (vtkgl::BindBuffer != NULL) && (vtkgl::DeleteBuffers != NULL) && (vtkgl::GenBuffers != NULL) && (vtkgl::IsBuffer != NULL) && (vtkgl::BufferData != NULL) && (vtkgl::BufferSubData != NULL) && (vtkgl::GetBufferSubData != NULL) && (vtkgl::MapBuffer != NULL) && (vtkgl::UnmapBuffer != NULL) && (vtkgl::GetBufferParameteriv != NULL) && (vtkgl::GetBufferPointerv != NULL);
    }
  if (strcmp(name, "GL_VERSION_2_0") == 0)
    {
    vtkgl::BlendEquationSeparate = (vtkgl::PFNGLBLENDEQUATIONSEPARATEPROC)manager->GetProcAddress("glBlendEquationSeparate");
    vtkgl::DrawBuffers = (vtkgl::PFNGLDRAWBUFFERSPROC)manager->GetProcAddress("glDrawBuffers");
    vtkgl::StencilOpSeparate = (vtkgl::PFNGLSTENCILOPSEPARATEPROC)manager->GetProcAddress("glStencilOpSeparate");
    vtkgl::StencilFuncSeparate = (vtkgl::PFNGLSTENCILFUNCSEPARATEPROC)manager->GetProcAddress("glStencilFuncSeparate");
    vtkgl::StencilMaskSeparate = (vtkgl::PFNGLSTENCILMASKSEPARATEPROC)manager->GetProcAddress("glStencilMaskSeparate");
    vtkgl::AttachShader = (vtkgl::PFNGLATTACHSHADERPROC)manager->GetProcAddress("glAttachShader");
    vtkgl::BindAttribLocation = (vtkgl::PFNGLBINDATTRIBLOCATIONPROC)manager->GetProcAddress("glBindAttribLocation");
    vtkgl::CompileShader = (vtkgl::PFNGLCOMPILESHADERPROC)manager->GetProcAddress("glCompileShader");
    vtkgl::CreateProgram = (vtkgl::PFNGLCREATEPROGRAMPROC)manager->GetProcAddress("glCreateProgram");
    vtkgl::CreateShader = (vtkgl::PFNGLCREATESHADERPROC)manager->GetProcAddress("glCreateShader");
    vtkgl::DeleteProgram = (vtkgl::PFNGLDELETEPROGRAMPROC)manager->GetProcAddress("glDeleteProgram");
    vtkgl::DeleteShader = (vtkgl::PFNGLDELETESHADERPROC)manager->GetProcAddress("glDeleteShader");
    vtkgl::DetachShader = (vtkgl::PFNGLDETACHSHADERPROC)manager->GetProcAddress("glDetachShader");
    vtkgl::DisableVertexAttribArray = (vtkgl::PFNGLDISABLEVERTEXATTRIBARRAYPROC)manager->GetProcAddress("glDisableVertexAttribArray");
    vtkgl::EnableVertexAttribArray = (vtkgl::PFNGLENABLEVERTEXATTRIBARRAYPROC)manager->GetProcAddress("glEnableVertexAttribArray");
    vtkgl::GetActiveAttrib = (vtkgl::PFNGLGETACTIVEATTRIBPROC)manager->GetProcAddress("glGetActiveAttrib");
    vtkgl::GetActiveUniform = (vtkgl::PFNGLGETACTIVEUNIFORMPROC)manager->GetProcAddress("glGetActiveUniform");
    vtkgl::GetAttachedShaders = (vtkgl::PFNGLGETATTACHEDSHADERSPROC)manager->GetProcAddress("glGetAttachedShaders");
    vtkgl::GetAttribLocation = (vtkgl::PFNGLGETATTRIBLOCATIONPROC)manager->GetProcAddress("glGetAttribLocation");
    vtkgl::GetProgramiv = (vtkgl::PFNGLGETPROGRAMIVPROC)manager->GetProcAddress("glGetProgramiv");
    vtkgl::GetProgramInfoLog = (vtkgl::PFNGLGETPROGRAMINFOLOGPROC)manager->GetProcAddress("glGetProgramInfoLog");
    vtkgl::GetShaderiv = (vtkgl::PFNGLGETSHADERIVPROC)manager->GetProcAddress("glGetShaderiv");
    vtkgl::GetShaderInfoLog = (vtkgl::PFNGLGETSHADERINFOLOGPROC)manager->GetProcAddress("glGetShaderInfoLog");
    vtkgl::GetShaderSource = (vtkgl::PFNGLGETSHADERSOURCEPROC)manager->GetProcAddress("glGetShaderSource");
    vtkgl::GetUniformLocation = (vtkgl::PFNGLGETUNIFORMLOCATIONPROC)manager->GetProcAddress("glGetUniformLocation");
    vtkgl::GetUniformfv = (vtkgl::PFNGLGETUNIFORMFVPROC)manager->GetProcAddress("glGetUniformfv");
    vtkgl::GetUniformiv = (vtkgl::PFNGLGETUNIFORMIVPROC)manager->GetProcAddress("glGetUniformiv");
    vtkgl::GetVertexAttribdv = (vtkgl::PFNGLGETVERTEXATTRIBDVPROC)manager->GetProcAddress("glGetVertexAttribdv");
    vtkgl::GetVertexAttribfv = (vtkgl::PFNGLGETVERTEXATTRIBFVPROC)manager->GetProcAddress("glGetVertexAttribfv");
    vtkgl::GetVertexAttribiv = (vtkgl::PFNGLGETVERTEXATTRIBIVPROC)manager->GetProcAddress("glGetVertexAttribiv");
    vtkgl::GetVertexAttribPointerv = (vtkgl::PFNGLGETVERTEXATTRIBPOINTERVPROC)manager->GetProcAddress("glGetVertexAttribPointerv");
    vtkgl::IsProgram = (vtkgl::PFNGLISPROGRAMPROC)manager->GetProcAddress("glIsProgram");
    vtkgl::IsShader = (vtkgl::PFNGLISSHADERPROC)manager->GetProcAddress("glIsShader");
    vtkgl::LinkProgram = (vtkgl::PFNGLLINKPROGRAMPROC)manager->GetProcAddress("glLinkProgram");
    vtkgl::ShaderSource = (vtkgl::PFNGLSHADERSOURCEPROC)manager->GetProcAddress("glShaderSource");
    vtkgl::UseProgram = (vtkgl::PFNGLUSEPROGRAMPROC)manager->GetProcAddress("glUseProgram");
    vtkgl::Uniform1f = (vtkgl::PFNGLUNIFORM1FPROC)manager->GetProcAddress("glUniform1f");
    vtkgl::Uniform2f = (vtkgl::PFNGLUNIFORM2FPROC)manager->GetProcAddress("glUniform2f");
    vtkgl::Uniform3f = (vtkgl::PFNGLUNIFORM3FPROC)manager->GetProcAddress("glUniform3f");
    vtkgl::Uniform4f = (vtkgl::PFNGLUNIFORM4FPROC)manager->GetProcAddress("glUniform4f");
    vtkgl::Uniform1i = (vtkgl::PFNGLUNIFORM1IPROC)manager->GetProcAddress("glUniform1i");
    vtkgl::Uniform2i = (vtkgl::PFNGLUNIFORM2IPROC)manager->GetProcAddress("glUniform2i");
    vtkgl::Uniform3i = (vtkgl::PFNGLUNIFORM3IPROC)manager->GetProcAddress("glUniform3i");
    vtkgl::Uniform4i = (vtkgl::PFNGLUNIFORM4IPROC)manager->GetProcAddress("glUniform4i");
    vtkgl::Uniform1fv = (vtkgl::PFNGLUNIFORM1FVPROC)manager->GetProcAddress("glUniform1fv");
    vtkgl::Uniform2fv = (vtkgl::PFNGLUNIFORM2FVPROC)manager->GetProcAddress("glUniform2fv");
    vtkgl::Uniform3fv = (vtkgl::PFNGLUNIFORM3FVPROC)manager->GetProcAddress("glUniform3fv");
    vtkgl::Uniform4fv = (vtkgl::PFNGLUNIFORM4FVPROC)manager->GetProcAddress("glUniform4fv");
    vtkgl::Uniform1iv = (vtkgl::PFNGLUNIFORM1IVPROC)manager->GetProcAddress("glUniform1iv");
    vtkgl::Uniform2iv = (vtkgl::PFNGLUNIFORM2IVPROC)manager->GetProcAddress("glUniform2iv");
    vtkgl::Uniform3iv = (vtkgl::PFNGLUNIFORM3IVPROC)manager->GetProcAddress("glUniform3iv");
    vtkgl::Uniform4iv = (vtkgl::PFNGLUNIFORM4IVPROC)manager->GetProcAddress("glUniform4iv");
    vtkgl::UniformMatrix2fv = (vtkgl::PFNGLUNIFORMMATRIX2FVPROC)manager->GetProcAddress("glUniformMatrix2fv");
    vtkgl::UniformMatrix3fv = (vtkgl::PFNGLUNIFORMMATRIX3FVPROC)manager->GetProcAddress("glUniformMatrix3fv");
    vtkgl::UniformMatrix4fv = (vtkgl::PFNGLUNIFORMMATRIX4FVPROC)manager->GetProcAddress("glUniformMatrix4fv");
    vtkgl::ValidateProgram = (vtkgl::PFNGLVALIDATEPROGRAMPROC)manager->GetProcAddress("glValidateProgram");
    vtkgl::VertexAttrib1d = (vtkgl::PFNGLVERTEXATTRIB1DPROC)manager->GetProcAddress("glVertexAttrib1d");
    vtkgl::VertexAttrib1dv = (vtkgl::PFNGLVERTEXATTRIB1DVPROC)manager->GetProcAddress("glVertexAttrib1dv");
    vtkgl::VertexAttrib1f = (vtkgl::PFNGLVERTEXATTRIB1FPROC)manager->GetProcAddress("glVertexAttrib1f");
    vtkgl::VertexAttrib1fv = (vtkgl::PFNGLVERTEXATTRIB1FVPROC)manager->GetProcAddress("glVertexAttrib1fv");
    vtkgl::VertexAttrib1s = (vtkgl::PFNGLVERTEXATTRIB1SPROC)manager->GetProcAddress("glVertexAttrib1s");
    vtkgl::VertexAttrib1sv = (vtkgl::PFNGLVERTEXATTRIB1SVPROC)manager->GetProcAddress("glVertexAttrib1sv");
    vtkgl::VertexAttrib2d = (vtkgl::PFNGLVERTEXATTRIB2DPROC)manager->GetProcAddress("glVertexAttrib2d");
    vtkgl::VertexAttrib2dv = (vtkgl::PFNGLVERTEXATTRIB2DVPROC)manager->GetProcAddress("glVertexAttrib2dv");
    vtkgl::VertexAttrib2f = (vtkgl::PFNGLVERTEXATTRIB2FPROC)manager->GetProcAddress("glVertexAttrib2f");
    vtkgl::VertexAttrib2fv = (vtkgl::PFNGLVERTEXATTRIB2FVPROC)manager->GetProcAddress("glVertexAttrib2fv");
    vtkgl::VertexAttrib2s = (vtkgl::PFNGLVERTEXATTRIB2SPROC)manager->GetProcAddress("glVertexAttrib2s");
    vtkgl::VertexAttrib2sv = (vtkgl::PFNGLVERTEXATTRIB2SVPROC)manager->GetProcAddress("glVertexAttrib2sv");
    vtkgl::VertexAttrib3d = (vtkgl::PFNGLVERTEXATTRIB3DPROC)manager->GetProcAddress("glVertexAttrib3d");
    vtkgl::VertexAttrib3dv = (vtkgl::PFNGLVERTEXATTRIB3DVPROC)manager->GetProcAddress("glVertexAttrib3dv");
    vtkgl::VertexAttrib3f = (vtkgl::PFNGLVERTEXATTRIB3FPROC)manager->GetProcAddress("glVertexAttrib3f");
    vtkgl::VertexAttrib3fv = (vtkgl::PFNGLVERTEXATTRIB3FVPROC)manager->GetProcAddress("glVertexAttrib3fv");
    vtkgl::VertexAttrib3s = (vtkgl::PFNGLVERTEXATTRIB3SPROC)manager->GetProcAddress("glVertexAttrib3s");
    vtkgl::VertexAttrib3sv = (vtkgl::PFNGLVERTEXATTRIB3SVPROC)manager->GetProcAddress("glVertexAttrib3sv");
    vtkgl::VertexAttrib4Nbv = (vtkgl::PFNGLVERTEXATTRIB4NBVPROC)manager->GetProcAddress("glVertexAttrib4Nbv");
    vtkgl::VertexAttrib4Niv = (vtkgl::PFNGLVERTEXATTRIB4NIVPROC)manager->GetProcAddress("glVertexAttrib4Niv");
    vtkgl::VertexAttrib4Nsv = (vtkgl::PFNGLVERTEXATTRIB4NSVPROC)manager->GetProcAddress("glVertexAttrib4Nsv");
    vtkgl::VertexAttrib4Nub = (vtkgl::PFNGLVERTEXATTRIB4NUBPROC)manager->GetProcAddress("glVertexAttrib4Nub");
    vtkgl::VertexAttrib4Nubv = (vtkgl::PFNGLVERTEXATTRIB4NUBVPROC)manager->GetProcAddress("glVertexAttrib4Nubv");
    vtkgl::VertexAttrib4Nuiv = (vtkgl::PFNGLVERTEXATTRIB4NUIVPROC)manager->GetProcAddress("glVertexAttrib4Nuiv");
    vtkgl::VertexAttrib4Nusv = (vtkgl::PFNGLVERTEXATTRIB4NUSVPROC)manager->GetProcAddress("glVertexAttrib4Nusv");
    vtkgl::VertexAttrib4bv = (vtkgl::PFNGLVERTEXATTRIB4BVPROC)manager->GetProcAddress("glVertexAttrib4bv");
    vtkgl::VertexAttrib4d = (vtkgl::PFNGLVERTEXATTRIB4DPROC)manager->GetProcAddress("glVertexAttrib4d");
    vtkgl::VertexAttrib4dv = (vtkgl::PFNGLVERTEXATTRIB4DVPROC)manager->GetProcAddress("glVertexAttrib4dv");
    vtkgl::VertexAttrib4f = (vtkgl::PFNGLVERTEXATTRIB4FPROC)manager->GetProcAddress("glVertexAttrib4f");
    vtkgl::VertexAttrib4fv = (vtkgl::PFNGLVERTEXATTRIB4FVPROC)manager->GetProcAddress("glVertexAttrib4fv");
    vtkgl::VertexAttrib4iv = (vtkgl::PFNGLVERTEXATTRIB4IVPROC)manager->GetProcAddress("glVertexAttrib4iv");
    vtkgl::VertexAttrib4s = (vtkgl::PFNGLVERTEXATTRIB4SPROC)manager->GetProcAddress("glVertexAttrib4s");
    vtkgl::VertexAttrib4sv = (vtkgl::PFNGLVERTEXATTRIB4SVPROC)manager->GetProcAddress("glVertexAttrib4sv");
    vtkgl::VertexAttrib4ubv = (vtkgl::PFNGLVERTEXATTRIB4UBVPROC)manager->GetProcAddress("glVertexAttrib4ubv");
    vtkgl::VertexAttrib4uiv = (vtkgl::PFNGLVERTEXATTRIB4UIVPROC)manager->GetProcAddress("glVertexAttrib4uiv");
    vtkgl::VertexAttrib4usv = (vtkgl::PFNGLVERTEXATTRIB4USVPROC)manager->GetProcAddress("glVertexAttrib4usv");
    vtkgl::VertexAttribPointer = (vtkgl::PFNGLVERTEXATTRIBPOINTERPROC)manager->GetProcAddress("glVertexAttribPointer");
    return 1 && (vtkgl::BlendEquationSeparate != NULL) && (vtkgl::DrawBuffers != NULL) && (vtkgl::StencilOpSeparate != NULL) && (vtkgl::StencilFuncSeparate != NULL) && (vtkgl::StencilMaskSeparate != NULL) && (vtkgl::AttachShader != NULL) && (vtkgl::BindAttribLocation != NULL) && (vtkgl::CompileShader != NULL) && (vtkgl::CreateProgram != NULL) && (vtkgl::CreateShader != NULL) && (vtkgl::DeleteProgram != NULL) && (vtkgl::DeleteShader != NULL) && (vtkgl::DetachShader != NULL) && (vtkgl::DisableVertexAttribArray != NULL) && (vtkgl::EnableVertexAttribArray != NULL) && (vtkgl::GetActiveAttrib != NULL) && (vtkgl::GetActiveUniform != NULL) && (vtkgl::GetAttachedShaders != NULL) && (vtkgl::GetAttribLocation != NULL) && (vtkgl::GetProgramiv != NULL) && (vtkgl::GetProgramInfoLog != NULL) && (vtkgl::GetShaderiv != NULL) && (vtkgl::GetShaderInfoLog != NULL) && (vtkgl::GetShaderSource != NULL) && (vtkgl::GetUniformLocation != NULL) && (vtkgl::GetUniformfv != NULL) && (vtkgl::GetUniformiv != NULL) && (vtkgl::GetVertexAttribdv != NULL) && (vtkgl::GetVertexAttribfv != NULL) && (vtkgl::GetVertexAttribiv != NULL) && (vtkgl::GetVertexAttribPointerv != NULL) && (vtkgl::IsProgram != NULL) && (vtkgl::IsShader != NULL) && (vtkgl::LinkProgram != NULL) && (vtkgl::ShaderSource != NULL) && (vtkgl::UseProgram != NULL) && (vtkgl::Uniform1f != NULL) && (vtkgl::Uniform2f != NULL) && (vtkgl::Uniform3f != NULL) && (vtkgl::Uniform4f != NULL) && (vtkgl::Uniform1i != NULL) && (vtkgl::Uniform2i != NULL) && (vtkgl::Uniform3i != NULL) && (vtkgl::Uniform4i != NULL) && (vtkgl::Uniform1fv != NULL) && (vtkgl::Uniform2fv != NULL) && (vtkgl::Uniform3fv != NULL) && (vtkgl::Uniform4fv != NULL) && (vtkgl::Uniform1iv != NULL) && (vtkgl::Uniform2iv != NULL) && (vtkgl::Uniform3iv != NULL) && (vtkgl::Uniform4iv != NULL) && (vtkgl::UniformMatrix2fv != NULL) && (vtkgl::UniformMatrix3fv != NULL) && (vtkgl::UniformMatrix4fv != NULL) && (vtkgl::ValidateProgram != NULL) && (vtkgl::VertexAttrib1d != NULL) && (vtkgl::VertexAttrib1dv != NULL) && (vtkgl::VertexAttrib1f != NULL) && (vtkgl::VertexAttrib1fv != NULL) && (vtkgl::VertexAttrib1s != NULL) && (vtkgl::VertexAttrib1sv != NULL) && (vtkgl::VertexAttrib2d != NULL) && (vtkgl::VertexAttrib2dv != NULL) && (vtkgl::VertexAttrib2f != NULL) && (vtkgl::VertexAttrib2fv != NULL) && (vtkgl::VertexAttrib2s != NULL) && (vtkgl::VertexAttrib2sv != NULL) && (vtkgl::VertexAttrib3d != NULL) && (vtkgl::VertexAttrib3dv != NULL) && (vtkgl::VertexAttrib3f != NULL) && (vtkgl::VertexAttrib3fv != NULL) && (vtkgl::VertexAttrib3s != NULL) && (vtkgl::VertexAttrib3sv != NULL) && (vtkgl::VertexAttrib4Nbv != NULL) && (vtkgl::VertexAttrib4Niv != NULL) && (vtkgl::VertexAttrib4Nsv != NULL) && (vtkgl::VertexAttrib4Nub != NULL) && (vtkgl::VertexAttrib4Nubv != NULL) && (vtkgl::VertexAttrib4Nuiv != NULL) && (vtkgl::VertexAttrib4Nusv != NULL) && (vtkgl::VertexAttrib4bv != NULL) && (vtkgl::VertexAttrib4d != NULL) && (vtkgl::VertexAttrib4dv != NULL) && (vtkgl::VertexAttrib4f != NULL) && (vtkgl::VertexAttrib4fv != NULL) && (vtkgl::VertexAttrib4iv != NULL) && (vtkgl::VertexAttrib4s != NULL) && (vtkgl::VertexAttrib4sv != NULL) && (vtkgl::VertexAttrib4ubv != NULL) && (vtkgl::VertexAttrib4uiv != NULL) && (vtkgl::VertexAttrib4usv != NULL) && (vtkgl::VertexAttribPointer != NULL);
    }
  if (strcmp(name, "GL_ARB_multitexture") == 0)
    {
    vtkgl::ActiveTextureARB = (vtkgl::PFNGLACTIVETEXTUREARBPROC)manager->GetProcAddress("glActiveTextureARB");
    vtkgl::ClientActiveTextureARB = (vtkgl::PFNGLCLIENTACTIVETEXTUREARBPROC)manager->GetProcAddress("glClientActiveTextureARB");
    vtkgl::MultiTexCoord1dARB = (vtkgl::PFNGLMULTITEXCOORD1DARBPROC)manager->GetProcAddress("glMultiTexCoord1dARB");
    vtkgl::MultiTexCoord1dvARB = (vtkgl::PFNGLMULTITEXCOORD1DVARBPROC)manager->GetProcAddress("glMultiTexCoord1dvARB");
    vtkgl::MultiTexCoord1fARB = (vtkgl::PFNGLMULTITEXCOORD1FARBPROC)manager->GetProcAddress("glMultiTexCoord1fARB");
    vtkgl::MultiTexCoord1fvARB = (vtkgl::PFNGLMULTITEXCOORD1FVARBPROC)manager->GetProcAddress("glMultiTexCoord1fvARB");
    vtkgl::MultiTexCoord1iARB = (vtkgl::PFNGLMULTITEXCOORD1IARBPROC)manager->GetProcAddress("glMultiTexCoord1iARB");
    vtkgl::MultiTexCoord1ivARB = (vtkgl::PFNGLMULTITEXCOORD1IVARBPROC)manager->GetProcAddress("glMultiTexCoord1ivARB");
    vtkgl::MultiTexCoord1sARB = (vtkgl::PFNGLMULTITEXCOORD1SARBPROC)manager->GetProcAddress("glMultiTexCoord1sARB");
    vtkgl::MultiTexCoord1svARB = (vtkgl::PFNGLMULTITEXCOORD1SVARBPROC)manager->GetProcAddress("glMultiTexCoord1svARB");
    vtkgl::MultiTexCoord2dARB = (vtkgl::PFNGLMULTITEXCOORD2DARBPROC)manager->GetProcAddress("glMultiTexCoord2dARB");
    vtkgl::MultiTexCoord2dvARB = (vtkgl::PFNGLMULTITEXCOORD2DVARBPROC)manager->GetProcAddress("glMultiTexCoord2dvARB");
    vtkgl::MultiTexCoord2fARB = (vtkgl::PFNGLMULTITEXCOORD2FARBPROC)manager->GetProcAddress("glMultiTexCoord2fARB");
    vtkgl::MultiTexCoord2fvARB = (vtkgl::PFNGLMULTITEXCOORD2FVARBPROC)manager->GetProcAddress("glMultiTexCoord2fvARB");
    vtkgl::MultiTexCoord2iARB = (vtkgl::PFNGLMULTITEXCOORD2IARBPROC)manager->GetProcAddress("glMultiTexCoord2iARB");
    vtkgl::MultiTexCoord2ivARB = (vtkgl::PFNGLMULTITEXCOORD2IVARBPROC)manager->GetProcAddress("glMultiTexCoord2ivARB");
    vtkgl::MultiTexCoord2sARB = (vtkgl::PFNGLMULTITEXCOORD2SARBPROC)manager->GetProcAddress("glMultiTexCoord2sARB");
    vtkgl::MultiTexCoord2svARB = (vtkgl::PFNGLMULTITEXCOORD2SVARBPROC)manager->GetProcAddress("glMultiTexCoord2svARB");
    vtkgl::MultiTexCoord3dARB = (vtkgl::PFNGLMULTITEXCOORD3DARBPROC)manager->GetProcAddress("glMultiTexCoord3dARB");
    vtkgl::MultiTexCoord3dvARB = (vtkgl::PFNGLMULTITEXCOORD3DVARBPROC)manager->GetProcAddress("glMultiTexCoord3dvARB");
    vtkgl::MultiTexCoord3fARB = (vtkgl::PFNGLMULTITEXCOORD3FARBPROC)manager->GetProcAddress("glMultiTexCoord3fARB");
    vtkgl::MultiTexCoord3fvARB = (vtkgl::PFNGLMULTITEXCOORD3FVARBPROC)manager->GetProcAddress("glMultiTexCoord3fvARB");
    vtkgl::MultiTexCoord3iARB = (vtkgl::PFNGLMULTITEXCOORD3IARBPROC)manager->GetProcAddress("glMultiTexCoord3iARB");
    vtkgl::MultiTexCoord3ivARB = (vtkgl::PFNGLMULTITEXCOORD3IVARBPROC)manager->GetProcAddress("glMultiTexCoord3ivARB");
    vtkgl::MultiTexCoord3sARB = (vtkgl::PFNGLMULTITEXCOORD3SARBPROC)manager->GetProcAddress("glMultiTexCoord3sARB");
    vtkgl::MultiTexCoord3svARB = (vtkgl::PFNGLMULTITEXCOORD3SVARBPROC)manager->GetProcAddress("glMultiTexCoord3svARB");
    vtkgl::MultiTexCoord4dARB = (vtkgl::PFNGLMULTITEXCOORD4DARBPROC)manager->GetProcAddress("glMultiTexCoord4dARB");
    vtkgl::MultiTexCoord4dvARB = (vtkgl::PFNGLMULTITEXCOORD4DVARBPROC)manager->GetProcAddress("glMultiTexCoord4dvARB");
    vtkgl::MultiTexCoord4fARB = (vtkgl::PFNGLMULTITEXCOORD4FARBPROC)manager->GetProcAddress("glMultiTexCoord4fARB");
    vtkgl::MultiTexCoord4fvARB = (vtkgl::PFNGLMULTITEXCOORD4FVARBPROC)manager->GetProcAddress("glMultiTexCoord4fvARB");
    vtkgl::MultiTexCoord4iARB = (vtkgl::PFNGLMULTITEXCOORD4IARBPROC)manager->GetProcAddress("glMultiTexCoord4iARB");
    vtkgl::MultiTexCoord4ivARB = (vtkgl::PFNGLMULTITEXCOORD4IVARBPROC)manager->GetProcAddress("glMultiTexCoord4ivARB");
    vtkgl::MultiTexCoord4sARB = (vtkgl::PFNGLMULTITEXCOORD4SARBPROC)manager->GetProcAddress("glMultiTexCoord4sARB");
    vtkgl::MultiTexCoord4svARB = (vtkgl::PFNGLMULTITEXCOORD4SVARBPROC)manager->GetProcAddress("glMultiTexCoord4svARB");
    return 1 && (vtkgl::ActiveTextureARB != NULL) && (vtkgl::ClientActiveTextureARB != NULL) && (vtkgl::MultiTexCoord1dARB != NULL) && (vtkgl::MultiTexCoord1dvARB != NULL) && (vtkgl::MultiTexCoord1fARB != NULL) && (vtkgl::MultiTexCoord1fvARB != NULL) && (vtkgl::MultiTexCoord1iARB != NULL) && (vtkgl::MultiTexCoord1ivARB != NULL) && (vtkgl::MultiTexCoord1sARB != NULL) && (vtkgl::MultiTexCoord1svARB != NULL) && (vtkgl::MultiTexCoord2dARB != NULL) && (vtkgl::MultiTexCoord2dvARB != NULL) && (vtkgl::MultiTexCoord2fARB != NULL) && (vtkgl::MultiTexCoord2fvARB != NULL) && (vtkgl::MultiTexCoord2iARB != NULL) && (vtkgl::MultiTexCoord2ivARB != NULL) && (vtkgl::MultiTexCoord2sARB != NULL) && (vtkgl::MultiTexCoord2svARB != NULL) && (vtkgl::MultiTexCoord3dARB != NULL) && (vtkgl::MultiTexCoord3dvARB != NULL) && (vtkgl::MultiTexCoord3fARB != NULL) && (vtkgl::MultiTexCoord3fvARB != NULL) && (vtkgl::MultiTexCoord3iARB != NULL) && (vtkgl::MultiTexCoord3ivARB != NULL) && (vtkgl::MultiTexCoord3sARB != NULL) && (vtkgl::MultiTexCoord3svARB != NULL) && (vtkgl::MultiTexCoord4dARB != NULL) && (vtkgl::MultiTexCoord4dvARB != NULL) && (vtkgl::MultiTexCoord4fARB != NULL) && (vtkgl::MultiTexCoord4fvARB != NULL) && (vtkgl::MultiTexCoord4iARB != NULL) && (vtkgl::MultiTexCoord4ivARB != NULL) && (vtkgl::MultiTexCoord4sARB != NULL) && (vtkgl::MultiTexCoord4svARB != NULL);
    }
  if (strcmp(name, "GL_ARB_transpose_matrix") == 0)
    {
    vtkgl::LoadTransposeMatrixfARB = (vtkgl::PFNGLLOADTRANSPOSEMATRIXFARBPROC)manager->GetProcAddress("glLoadTransposeMatrixfARB");
    vtkgl::LoadTransposeMatrixdARB = (vtkgl::PFNGLLOADTRANSPOSEMATRIXDARBPROC)manager->GetProcAddress("glLoadTransposeMatrixdARB");
    vtkgl::MultTransposeMatrixfARB = (vtkgl::PFNGLMULTTRANSPOSEMATRIXFARBPROC)manager->GetProcAddress("glMultTransposeMatrixfARB");
    vtkgl::MultTransposeMatrixdARB = (vtkgl::PFNGLMULTTRANSPOSEMATRIXDARBPROC)manager->GetProcAddress("glMultTransposeMatrixdARB");
    return 1 && (vtkgl::LoadTransposeMatrixfARB != NULL) && (vtkgl::LoadTransposeMatrixdARB != NULL) && (vtkgl::MultTransposeMatrixfARB != NULL) && (vtkgl::MultTransposeMatrixdARB != NULL);
    }
  if (strcmp(name, "GL_ARB_multisample") == 0)
    {
    vtkgl::SampleCoverageARB = (vtkgl::PFNGLSAMPLECOVERAGEARBPROC)manager->GetProcAddress("glSampleCoverageARB");
    return 1 && (vtkgl::SampleCoverageARB != NULL);
    }
  if (strcmp(name, "GL_ARB_texture_env_add") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_texture_cube_map") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_texture_compression") == 0)
    {
    vtkgl::CompressedTexImage3DARB = (vtkgl::PFNGLCOMPRESSEDTEXIMAGE3DARBPROC)manager->GetProcAddress("glCompressedTexImage3DARB");
    vtkgl::CompressedTexImage2DARB = (vtkgl::PFNGLCOMPRESSEDTEXIMAGE2DARBPROC)manager->GetProcAddress("glCompressedTexImage2DARB");
    vtkgl::CompressedTexImage1DARB = (vtkgl::PFNGLCOMPRESSEDTEXIMAGE1DARBPROC)manager->GetProcAddress("glCompressedTexImage1DARB");
    vtkgl::CompressedTexSubImage3DARB = (vtkgl::PFNGLCOMPRESSEDTEXSUBIMAGE3DARBPROC)manager->GetProcAddress("glCompressedTexSubImage3DARB");
    vtkgl::CompressedTexSubImage2DARB = (vtkgl::PFNGLCOMPRESSEDTEXSUBIMAGE2DARBPROC)manager->GetProcAddress("glCompressedTexSubImage2DARB");
    vtkgl::CompressedTexSubImage1DARB = (vtkgl::PFNGLCOMPRESSEDTEXSUBIMAGE1DARBPROC)manager->GetProcAddress("glCompressedTexSubImage1DARB");
    vtkgl::GetCompressedTexImageARB = (vtkgl::PFNGLGETCOMPRESSEDTEXIMAGEARBPROC)manager->GetProcAddress("glGetCompressedTexImageARB");
    return 1 && (vtkgl::CompressedTexImage3DARB != NULL) && (vtkgl::CompressedTexImage2DARB != NULL) && (vtkgl::CompressedTexImage1DARB != NULL) && (vtkgl::CompressedTexSubImage3DARB != NULL) && (vtkgl::CompressedTexSubImage2DARB != NULL) && (vtkgl::CompressedTexSubImage1DARB != NULL) && (vtkgl::GetCompressedTexImageARB != NULL);
    }
  if (strcmp(name, "GL_ARB_texture_border_clamp") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_point_parameters") == 0)
    {
    vtkgl::PointParameterfARB = (vtkgl::PFNGLPOINTPARAMETERFARBPROC)manager->GetProcAddress("glPointParameterfARB");
    vtkgl::PointParameterfvARB = (vtkgl::PFNGLPOINTPARAMETERFVARBPROC)manager->GetProcAddress("glPointParameterfvARB");
    return 1 && (vtkgl::PointParameterfARB != NULL) && (vtkgl::PointParameterfvARB != NULL);
    }
  if (strcmp(name, "GL_ARB_vertex_blend") == 0)
    {
    vtkgl::WeightbvARB = (vtkgl::PFNGLWEIGHTBVARBPROC)manager->GetProcAddress("glWeightbvARB");
    vtkgl::WeightsvARB = (vtkgl::PFNGLWEIGHTSVARBPROC)manager->GetProcAddress("glWeightsvARB");
    vtkgl::WeightivARB = (vtkgl::PFNGLWEIGHTIVARBPROC)manager->GetProcAddress("glWeightivARB");
    vtkgl::WeightfvARB = (vtkgl::PFNGLWEIGHTFVARBPROC)manager->GetProcAddress("glWeightfvARB");
    vtkgl::WeightdvARB = (vtkgl::PFNGLWEIGHTDVARBPROC)manager->GetProcAddress("glWeightdvARB");
    vtkgl::WeightubvARB = (vtkgl::PFNGLWEIGHTUBVARBPROC)manager->GetProcAddress("glWeightubvARB");
    vtkgl::WeightusvARB = (vtkgl::PFNGLWEIGHTUSVARBPROC)manager->GetProcAddress("glWeightusvARB");
    vtkgl::WeightuivARB = (vtkgl::PFNGLWEIGHTUIVARBPROC)manager->GetProcAddress("glWeightuivARB");
    vtkgl::WeightPointerARB = (vtkgl::PFNGLWEIGHTPOINTERARBPROC)manager->GetProcAddress("glWeightPointerARB");
    vtkgl::VertexBlendARB = (vtkgl::PFNGLVERTEXBLENDARBPROC)manager->GetProcAddress("glVertexBlendARB");
    return 1 && (vtkgl::WeightbvARB != NULL) && (vtkgl::WeightsvARB != NULL) && (vtkgl::WeightivARB != NULL) && (vtkgl::WeightfvARB != NULL) && (vtkgl::WeightdvARB != NULL) && (vtkgl::WeightubvARB != NULL) && (vtkgl::WeightusvARB != NULL) && (vtkgl::WeightuivARB != NULL) && (vtkgl::WeightPointerARB != NULL) && (vtkgl::VertexBlendARB != NULL);
    }
  if (strcmp(name, "GL_ARB_matrix_palette") == 0)
    {
    vtkgl::CurrentPaletteMatrixARB = (vtkgl::PFNGLCURRENTPALETTEMATRIXARBPROC)manager->GetProcAddress("glCurrentPaletteMatrixARB");
    vtkgl::MatrixIndexubvARB = (vtkgl::PFNGLMATRIXINDEXUBVARBPROC)manager->GetProcAddress("glMatrixIndexubvARB");
    vtkgl::MatrixIndexusvARB = (vtkgl::PFNGLMATRIXINDEXUSVARBPROC)manager->GetProcAddress("glMatrixIndexusvARB");
    vtkgl::MatrixIndexuivARB = (vtkgl::PFNGLMATRIXINDEXUIVARBPROC)manager->GetProcAddress("glMatrixIndexuivARB");
    vtkgl::MatrixIndexPointerARB = (vtkgl::PFNGLMATRIXINDEXPOINTERARBPROC)manager->GetProcAddress("glMatrixIndexPointerARB");
    return 1 && (vtkgl::CurrentPaletteMatrixARB != NULL) && (vtkgl::MatrixIndexubvARB != NULL) && (vtkgl::MatrixIndexusvARB != NULL) && (vtkgl::MatrixIndexuivARB != NULL) && (vtkgl::MatrixIndexPointerARB != NULL);
    }
  if (strcmp(name, "GL_ARB_texture_env_combine") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_texture_env_crossbar") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_texture_env_dot3") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_texture_mirrored_repeat") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_depth_texture") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_shadow") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_shadow_ambient") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_window_pos") == 0)
    {
    vtkgl::WindowPos2dARB = (vtkgl::PFNGLWINDOWPOS2DARBPROC)manager->GetProcAddress("glWindowPos2dARB");
    vtkgl::WindowPos2dvARB = (vtkgl::PFNGLWINDOWPOS2DVARBPROC)manager->GetProcAddress("glWindowPos2dvARB");
    vtkgl::WindowPos2fARB = (vtkgl::PFNGLWINDOWPOS2FARBPROC)manager->GetProcAddress("glWindowPos2fARB");
    vtkgl::WindowPos2fvARB = (vtkgl::PFNGLWINDOWPOS2FVARBPROC)manager->GetProcAddress("glWindowPos2fvARB");
    vtkgl::WindowPos2iARB = (vtkgl::PFNGLWINDOWPOS2IARBPROC)manager->GetProcAddress("glWindowPos2iARB");
    vtkgl::WindowPos2ivARB = (vtkgl::PFNGLWINDOWPOS2IVARBPROC)manager->GetProcAddress("glWindowPos2ivARB");
    vtkgl::WindowPos2sARB = (vtkgl::PFNGLWINDOWPOS2SARBPROC)manager->GetProcAddress("glWindowPos2sARB");
    vtkgl::WindowPos2svARB = (vtkgl::PFNGLWINDOWPOS2SVARBPROC)manager->GetProcAddress("glWindowPos2svARB");
    vtkgl::WindowPos3dARB = (vtkgl::PFNGLWINDOWPOS3DARBPROC)manager->GetProcAddress("glWindowPos3dARB");
    vtkgl::WindowPos3dvARB = (vtkgl::PFNGLWINDOWPOS3DVARBPROC)manager->GetProcAddress("glWindowPos3dvARB");
    vtkgl::WindowPos3fARB = (vtkgl::PFNGLWINDOWPOS3FARBPROC)manager->GetProcAddress("glWindowPos3fARB");
    vtkgl::WindowPos3fvARB = (vtkgl::PFNGLWINDOWPOS3FVARBPROC)manager->GetProcAddress("glWindowPos3fvARB");
    vtkgl::WindowPos3iARB = (vtkgl::PFNGLWINDOWPOS3IARBPROC)manager->GetProcAddress("glWindowPos3iARB");
    vtkgl::WindowPos3ivARB = (vtkgl::PFNGLWINDOWPOS3IVARBPROC)manager->GetProcAddress("glWindowPos3ivARB");
    vtkgl::WindowPos3sARB = (vtkgl::PFNGLWINDOWPOS3SARBPROC)manager->GetProcAddress("glWindowPos3sARB");
    vtkgl::WindowPos3svARB = (vtkgl::PFNGLWINDOWPOS3SVARBPROC)manager->GetProcAddress("glWindowPos3svARB");
    return 1 && (vtkgl::WindowPos2dARB != NULL) && (vtkgl::WindowPos2dvARB != NULL) && (vtkgl::WindowPos2fARB != NULL) && (vtkgl::WindowPos2fvARB != NULL) && (vtkgl::WindowPos2iARB != NULL) && (vtkgl::WindowPos2ivARB != NULL) && (vtkgl::WindowPos2sARB != NULL) && (vtkgl::WindowPos2svARB != NULL) && (vtkgl::WindowPos3dARB != NULL) && (vtkgl::WindowPos3dvARB != NULL) && (vtkgl::WindowPos3fARB != NULL) && (vtkgl::WindowPos3fvARB != NULL) && (vtkgl::WindowPos3iARB != NULL) && (vtkgl::WindowPos3ivARB != NULL) && (vtkgl::WindowPos3sARB != NULL) && (vtkgl::WindowPos3svARB != NULL);
    }
  if (strcmp(name, "GL_ARB_vertex_program") == 0)
    {
    vtkgl::VertexAttrib1dARB = (vtkgl::PFNGLVERTEXATTRIB1DARBPROC)manager->GetProcAddress("glVertexAttrib1dARB");
    vtkgl::VertexAttrib1dvARB = (vtkgl::PFNGLVERTEXATTRIB1DVARBPROC)manager->GetProcAddress("glVertexAttrib1dvARB");
    vtkgl::VertexAttrib1fARB = (vtkgl::PFNGLVERTEXATTRIB1FARBPROC)manager->GetProcAddress("glVertexAttrib1fARB");
    vtkgl::VertexAttrib1fvARB = (vtkgl::PFNGLVERTEXATTRIB1FVARBPROC)manager->GetProcAddress("glVertexAttrib1fvARB");
    vtkgl::VertexAttrib1sARB = (vtkgl::PFNGLVERTEXATTRIB1SARBPROC)manager->GetProcAddress("glVertexAttrib1sARB");
    vtkgl::VertexAttrib1svARB = (vtkgl::PFNGLVERTEXATTRIB1SVARBPROC)manager->GetProcAddress("glVertexAttrib1svARB");
    vtkgl::VertexAttrib2dARB = (vtkgl::PFNGLVERTEXATTRIB2DARBPROC)manager->GetProcAddress("glVertexAttrib2dARB");
    vtkgl::VertexAttrib2dvARB = (vtkgl::PFNGLVERTEXATTRIB2DVARBPROC)manager->GetProcAddress("glVertexAttrib2dvARB");
    vtkgl::VertexAttrib2fARB = (vtkgl::PFNGLVERTEXATTRIB2FARBPROC)manager->GetProcAddress("glVertexAttrib2fARB");
    vtkgl::VertexAttrib2fvARB = (vtkgl::PFNGLVERTEXATTRIB2FVARBPROC)manager->GetProcAddress("glVertexAttrib2fvARB");
    vtkgl::VertexAttrib2sARB = (vtkgl::PFNGLVERTEXATTRIB2SARBPROC)manager->GetProcAddress("glVertexAttrib2sARB");
    vtkgl::VertexAttrib2svARB = (vtkgl::PFNGLVERTEXATTRIB2SVARBPROC)manager->GetProcAddress("glVertexAttrib2svARB");
    vtkgl::VertexAttrib3dARB = (vtkgl::PFNGLVERTEXATTRIB3DARBPROC)manager->GetProcAddress("glVertexAttrib3dARB");
    vtkgl::VertexAttrib3dvARB = (vtkgl::PFNGLVERTEXATTRIB3DVARBPROC)manager->GetProcAddress("glVertexAttrib3dvARB");
    vtkgl::VertexAttrib3fARB = (vtkgl::PFNGLVERTEXATTRIB3FARBPROC)manager->GetProcAddress("glVertexAttrib3fARB");
    vtkgl::VertexAttrib3fvARB = (vtkgl::PFNGLVERTEXATTRIB3FVARBPROC)manager->GetProcAddress("glVertexAttrib3fvARB");
    vtkgl::VertexAttrib3sARB = (vtkgl::PFNGLVERTEXATTRIB3SARBPROC)manager->GetProcAddress("glVertexAttrib3sARB");
    vtkgl::VertexAttrib3svARB = (vtkgl::PFNGLVERTEXATTRIB3SVARBPROC)manager->GetProcAddress("glVertexAttrib3svARB");
    vtkgl::VertexAttrib4NbvARB = (vtkgl::PFNGLVERTEXATTRIB4NBVARBPROC)manager->GetProcAddress("glVertexAttrib4NbvARB");
    vtkgl::VertexAttrib4NivARB = (vtkgl::PFNGLVERTEXATTRIB4NIVARBPROC)manager->GetProcAddress("glVertexAttrib4NivARB");
    vtkgl::VertexAttrib4NsvARB = (vtkgl::PFNGLVERTEXATTRIB4NSVARBPROC)manager->GetProcAddress("glVertexAttrib4NsvARB");
    vtkgl::VertexAttrib4NubARB = (vtkgl::PFNGLVERTEXATTRIB4NUBARBPROC)manager->GetProcAddress("glVertexAttrib4NubARB");
    vtkgl::VertexAttrib4NubvARB = (vtkgl::PFNGLVERTEXATTRIB4NUBVARBPROC)manager->GetProcAddress("glVertexAttrib4NubvARB");
    vtkgl::VertexAttrib4NuivARB = (vtkgl::PFNGLVERTEXATTRIB4NUIVARBPROC)manager->GetProcAddress("glVertexAttrib4NuivARB");
    vtkgl::VertexAttrib4NusvARB = (vtkgl::PFNGLVERTEXATTRIB4NUSVARBPROC)manager->GetProcAddress("glVertexAttrib4NusvARB");
    vtkgl::VertexAttrib4bvARB = (vtkgl::PFNGLVERTEXATTRIB4BVARBPROC)manager->GetProcAddress("glVertexAttrib4bvARB");
    vtkgl::VertexAttrib4dARB = (vtkgl::PFNGLVERTEXATTRIB4DARBPROC)manager->GetProcAddress("glVertexAttrib4dARB");
    vtkgl::VertexAttrib4dvARB = (vtkgl::PFNGLVERTEXATTRIB4DVARBPROC)manager->GetProcAddress("glVertexAttrib4dvARB");
    vtkgl::VertexAttrib4fARB = (vtkgl::PFNGLVERTEXATTRIB4FARBPROC)manager->GetProcAddress("glVertexAttrib4fARB");
    vtkgl::VertexAttrib4fvARB = (vtkgl::PFNGLVERTEXATTRIB4FVARBPROC)manager->GetProcAddress("glVertexAttrib4fvARB");
    vtkgl::VertexAttrib4ivARB = (vtkgl::PFNGLVERTEXATTRIB4IVARBPROC)manager->GetProcAddress("glVertexAttrib4ivARB");
    vtkgl::VertexAttrib4sARB = (vtkgl::PFNGLVERTEXATTRIB4SARBPROC)manager->GetProcAddress("glVertexAttrib4sARB");
    vtkgl::VertexAttrib4svARB = (vtkgl::PFNGLVERTEXATTRIB4SVARBPROC)manager->GetProcAddress("glVertexAttrib4svARB");
    vtkgl::VertexAttrib4ubvARB = (vtkgl::PFNGLVERTEXATTRIB4UBVARBPROC)manager->GetProcAddress("glVertexAttrib4ubvARB");
    vtkgl::VertexAttrib4uivARB = (vtkgl::PFNGLVERTEXATTRIB4UIVARBPROC)manager->GetProcAddress("glVertexAttrib4uivARB");
    vtkgl::VertexAttrib4usvARB = (vtkgl::PFNGLVERTEXATTRIB4USVARBPROC)manager->GetProcAddress("glVertexAttrib4usvARB");
    vtkgl::VertexAttribPointerARB = (vtkgl::PFNGLVERTEXATTRIBPOINTERARBPROC)manager->GetProcAddress("glVertexAttribPointerARB");
    vtkgl::EnableVertexAttribArrayARB = (vtkgl::PFNGLENABLEVERTEXATTRIBARRAYARBPROC)manager->GetProcAddress("glEnableVertexAttribArrayARB");
    vtkgl::DisableVertexAttribArrayARB = (vtkgl::PFNGLDISABLEVERTEXATTRIBARRAYARBPROC)manager->GetProcAddress("glDisableVertexAttribArrayARB");
    vtkgl::ProgramStringARB = (vtkgl::PFNGLPROGRAMSTRINGARBPROC)manager->GetProcAddress("glProgramStringARB");
    vtkgl::BindProgramARB = (vtkgl::PFNGLBINDPROGRAMARBPROC)manager->GetProcAddress("glBindProgramARB");
    vtkgl::DeleteProgramsARB = (vtkgl::PFNGLDELETEPROGRAMSARBPROC)manager->GetProcAddress("glDeleteProgramsARB");
    vtkgl::GenProgramsARB = (vtkgl::PFNGLGENPROGRAMSARBPROC)manager->GetProcAddress("glGenProgramsARB");
    vtkgl::ProgramEnvParameter4dARB = (vtkgl::PFNGLPROGRAMENVPARAMETER4DARBPROC)manager->GetProcAddress("glProgramEnvParameter4dARB");
    vtkgl::ProgramEnvParameter4dvARB = (vtkgl::PFNGLPROGRAMENVPARAMETER4DVARBPROC)manager->GetProcAddress("glProgramEnvParameter4dvARB");
    vtkgl::ProgramEnvParameter4fARB = (vtkgl::PFNGLPROGRAMENVPARAMETER4FARBPROC)manager->GetProcAddress("glProgramEnvParameter4fARB");
    vtkgl::ProgramEnvParameter4fvARB = (vtkgl::PFNGLPROGRAMENVPARAMETER4FVARBPROC)manager->GetProcAddress("glProgramEnvParameter4fvARB");
    vtkgl::ProgramLocalParameter4dARB = (vtkgl::PFNGLPROGRAMLOCALPARAMETER4DARBPROC)manager->GetProcAddress("glProgramLocalParameter4dARB");
    vtkgl::ProgramLocalParameter4dvARB = (vtkgl::PFNGLPROGRAMLOCALPARAMETER4DVARBPROC)manager->GetProcAddress("glProgramLocalParameter4dvARB");
    vtkgl::ProgramLocalParameter4fARB = (vtkgl::PFNGLPROGRAMLOCALPARAMETER4FARBPROC)manager->GetProcAddress("glProgramLocalParameter4fARB");
    vtkgl::ProgramLocalParameter4fvARB = (vtkgl::PFNGLPROGRAMLOCALPARAMETER4FVARBPROC)manager->GetProcAddress("glProgramLocalParameter4fvARB");
    vtkgl::GetProgramEnvParameterdvARB = (vtkgl::PFNGLGETPROGRAMENVPARAMETERDVARBPROC)manager->GetProcAddress("glGetProgramEnvParameterdvARB");
    vtkgl::GetProgramEnvParameterfvARB = (vtkgl::PFNGLGETPROGRAMENVPARAMETERFVARBPROC)manager->GetProcAddress("glGetProgramEnvParameterfvARB");
    vtkgl::GetProgramLocalParameterdvARB = (vtkgl::PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC)manager->GetProcAddress("glGetProgramLocalParameterdvARB");
    vtkgl::GetProgramLocalParameterfvARB = (vtkgl::PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC)manager->GetProcAddress("glGetProgramLocalParameterfvARB");
    vtkgl::GetProgramivARB = (vtkgl::PFNGLGETPROGRAMIVARBPROC)manager->GetProcAddress("glGetProgramivARB");
    vtkgl::GetProgramStringARB = (vtkgl::PFNGLGETPROGRAMSTRINGARBPROC)manager->GetProcAddress("glGetProgramStringARB");
    vtkgl::GetVertexAttribdvARB = (vtkgl::PFNGLGETVERTEXATTRIBDVARBPROC)manager->GetProcAddress("glGetVertexAttribdvARB");
    vtkgl::GetVertexAttribfvARB = (vtkgl::PFNGLGETVERTEXATTRIBFVARBPROC)manager->GetProcAddress("glGetVertexAttribfvARB");
    vtkgl::GetVertexAttribivARB = (vtkgl::PFNGLGETVERTEXATTRIBIVARBPROC)manager->GetProcAddress("glGetVertexAttribivARB");
    vtkgl::GetVertexAttribPointervARB = (vtkgl::PFNGLGETVERTEXATTRIBPOINTERVARBPROC)manager->GetProcAddress("glGetVertexAttribPointervARB");
    vtkgl::IsProgramARB = (vtkgl::PFNGLISPROGRAMARBPROC)manager->GetProcAddress("glIsProgramARB");
    return 1 && (vtkgl::VertexAttrib1dARB != NULL) && (vtkgl::VertexAttrib1dvARB != NULL) && (vtkgl::VertexAttrib1fARB != NULL) && (vtkgl::VertexAttrib1fvARB != NULL) && (vtkgl::VertexAttrib1sARB != NULL) && (vtkgl::VertexAttrib1svARB != NULL) && (vtkgl::VertexAttrib2dARB != NULL) && (vtkgl::VertexAttrib2dvARB != NULL) && (vtkgl::VertexAttrib2fARB != NULL) && (vtkgl::VertexAttrib2fvARB != NULL) && (vtkgl::VertexAttrib2sARB != NULL) && (vtkgl::VertexAttrib2svARB != NULL) && (vtkgl::VertexAttrib3dARB != NULL) && (vtkgl::VertexAttrib3dvARB != NULL) && (vtkgl::VertexAttrib3fARB != NULL) && (vtkgl::VertexAttrib3fvARB != NULL) && (vtkgl::VertexAttrib3sARB != NULL) && (vtkgl::VertexAttrib3svARB != NULL) && (vtkgl::VertexAttrib4NbvARB != NULL) && (vtkgl::VertexAttrib4NivARB != NULL) && (vtkgl::VertexAttrib4NsvARB != NULL) && (vtkgl::VertexAttrib4NubARB != NULL) && (vtkgl::VertexAttrib4NubvARB != NULL) && (vtkgl::VertexAttrib4NuivARB != NULL) && (vtkgl::VertexAttrib4NusvARB != NULL) && (vtkgl::VertexAttrib4bvARB != NULL) && (vtkgl::VertexAttrib4dARB != NULL) && (vtkgl::VertexAttrib4dvARB != NULL) && (vtkgl::VertexAttrib4fARB != NULL) && (vtkgl::VertexAttrib4fvARB != NULL) && (vtkgl::VertexAttrib4ivARB != NULL) && (vtkgl::VertexAttrib4sARB != NULL) && (vtkgl::VertexAttrib4svARB != NULL) && (vtkgl::VertexAttrib4ubvARB != NULL) && (vtkgl::VertexAttrib4uivARB != NULL) && (vtkgl::VertexAttrib4usvARB != NULL) && (vtkgl::VertexAttribPointerARB != NULL) && (vtkgl::EnableVertexAttribArrayARB != NULL) && (vtkgl::DisableVertexAttribArrayARB != NULL) && (vtkgl::ProgramStringARB != NULL) && (vtkgl::BindProgramARB != NULL) && (vtkgl::DeleteProgramsARB != NULL) && (vtkgl::GenProgramsARB != NULL) && (vtkgl::ProgramEnvParameter4dARB != NULL) && (vtkgl::ProgramEnvParameter4dvARB != NULL) && (vtkgl::ProgramEnvParameter4fARB != NULL) && (vtkgl::ProgramEnvParameter4fvARB != NULL) && (vtkgl::ProgramLocalParameter4dARB != NULL) && (vtkgl::ProgramLocalParameter4dvARB != NULL) && (vtkgl::ProgramLocalParameter4fARB != NULL) && (vtkgl::ProgramLocalParameter4fvARB != NULL) && (vtkgl::GetProgramEnvParameterdvARB != NULL) && (vtkgl::GetProgramEnvParameterfvARB != NULL) && (vtkgl::GetProgramLocalParameterdvARB != NULL) && (vtkgl::GetProgramLocalParameterfvARB != NULL) && (vtkgl::GetProgramivARB != NULL) && (vtkgl::GetProgramStringARB != NULL) && (vtkgl::GetVertexAttribdvARB != NULL) && (vtkgl::GetVertexAttribfvARB != NULL) && (vtkgl::GetVertexAttribivARB != NULL) && (vtkgl::GetVertexAttribPointervARB != NULL) && (vtkgl::IsProgramARB != NULL);
    }
  if (strcmp(name, "GL_ARB_fragment_program") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_vertex_buffer_object") == 0)
    {
    vtkgl::BindBufferARB = (vtkgl::PFNGLBINDBUFFERARBPROC)manager->GetProcAddress("glBindBufferARB");
    vtkgl::DeleteBuffersARB = (vtkgl::PFNGLDELETEBUFFERSARBPROC)manager->GetProcAddress("glDeleteBuffersARB");
    vtkgl::GenBuffersARB = (vtkgl::PFNGLGENBUFFERSARBPROC)manager->GetProcAddress("glGenBuffersARB");
    vtkgl::IsBufferARB = (vtkgl::PFNGLISBUFFERARBPROC)manager->GetProcAddress("glIsBufferARB");
    vtkgl::BufferDataARB = (vtkgl::PFNGLBUFFERDATAARBPROC)manager->GetProcAddress("glBufferDataARB");
    vtkgl::BufferSubDataARB = (vtkgl::PFNGLBUFFERSUBDATAARBPROC)manager->GetProcAddress("glBufferSubDataARB");
    vtkgl::GetBufferSubDataARB = (vtkgl::PFNGLGETBUFFERSUBDATAARBPROC)manager->GetProcAddress("glGetBufferSubDataARB");
    vtkgl::MapBufferARB = (vtkgl::PFNGLMAPBUFFERARBPROC)manager->GetProcAddress("glMapBufferARB");
    vtkgl::UnmapBufferARB = (vtkgl::PFNGLUNMAPBUFFERARBPROC)manager->GetProcAddress("glUnmapBufferARB");
    vtkgl::GetBufferParameterivARB = (vtkgl::PFNGLGETBUFFERPARAMETERIVARBPROC)manager->GetProcAddress("glGetBufferParameterivARB");
    vtkgl::GetBufferPointervARB = (vtkgl::PFNGLGETBUFFERPOINTERVARBPROC)manager->GetProcAddress("glGetBufferPointervARB");
    return 1 && (vtkgl::BindBufferARB != NULL) && (vtkgl::DeleteBuffersARB != NULL) && (vtkgl::GenBuffersARB != NULL) && (vtkgl::IsBufferARB != NULL) && (vtkgl::BufferDataARB != NULL) && (vtkgl::BufferSubDataARB != NULL) && (vtkgl::GetBufferSubDataARB != NULL) && (vtkgl::MapBufferARB != NULL) && (vtkgl::UnmapBufferARB != NULL) && (vtkgl::GetBufferParameterivARB != NULL) && (vtkgl::GetBufferPointervARB != NULL);
    }
  if (strcmp(name, "GL_ARB_occlusion_query") == 0)
    {
    vtkgl::GenQueriesARB = (vtkgl::PFNGLGENQUERIESARBPROC)manager->GetProcAddress("glGenQueriesARB");
    vtkgl::DeleteQueriesARB = (vtkgl::PFNGLDELETEQUERIESARBPROC)manager->GetProcAddress("glDeleteQueriesARB");
    vtkgl::IsQueryARB = (vtkgl::PFNGLISQUERYARBPROC)manager->GetProcAddress("glIsQueryARB");
    vtkgl::BeginQueryARB = (vtkgl::PFNGLBEGINQUERYARBPROC)manager->GetProcAddress("glBeginQueryARB");
    vtkgl::EndQueryARB = (vtkgl::PFNGLENDQUERYARBPROC)manager->GetProcAddress("glEndQueryARB");
    vtkgl::GetQueryivARB = (vtkgl::PFNGLGETQUERYIVARBPROC)manager->GetProcAddress("glGetQueryivARB");
    vtkgl::GetQueryObjectivARB = (vtkgl::PFNGLGETQUERYOBJECTIVARBPROC)manager->GetProcAddress("glGetQueryObjectivARB");
    vtkgl::GetQueryObjectuivARB = (vtkgl::PFNGLGETQUERYOBJECTUIVARBPROC)manager->GetProcAddress("glGetQueryObjectuivARB");
    return 1 && (vtkgl::GenQueriesARB != NULL) && (vtkgl::DeleteQueriesARB != NULL) && (vtkgl::IsQueryARB != NULL) && (vtkgl::BeginQueryARB != NULL) && (vtkgl::EndQueryARB != NULL) && (vtkgl::GetQueryivARB != NULL) && (vtkgl::GetQueryObjectivARB != NULL) && (vtkgl::GetQueryObjectuivARB != NULL);
    }
  if (strcmp(name, "GL_ARB_shader_objects") == 0)
    {
    vtkgl::DeleteObjectARB = (vtkgl::PFNGLDELETEOBJECTARBPROC)manager->GetProcAddress("glDeleteObjectARB");
    vtkgl::GetHandleARB = (vtkgl::PFNGLGETHANDLEARBPROC)manager->GetProcAddress("glGetHandleARB");
    vtkgl::DetachObjectARB = (vtkgl::PFNGLDETACHOBJECTARBPROC)manager->GetProcAddress("glDetachObjectARB");
    vtkgl::CreateShaderObjectARB = (vtkgl::PFNGLCREATESHADEROBJECTARBPROC)manager->GetProcAddress("glCreateShaderObjectARB");
    vtkgl::ShaderSourceARB = (vtkgl::PFNGLSHADERSOURCEARBPROC)manager->GetProcAddress("glShaderSourceARB");
    vtkgl::CompileShaderARB = (vtkgl::PFNGLCOMPILESHADERARBPROC)manager->GetProcAddress("glCompileShaderARB");
    vtkgl::CreateProgramObjectARB = (vtkgl::PFNGLCREATEPROGRAMOBJECTARBPROC)manager->GetProcAddress("glCreateProgramObjectARB");
    vtkgl::AttachObjectARB = (vtkgl::PFNGLATTACHOBJECTARBPROC)manager->GetProcAddress("glAttachObjectARB");
    vtkgl::LinkProgramARB = (vtkgl::PFNGLLINKPROGRAMARBPROC)manager->GetProcAddress("glLinkProgramARB");
    vtkgl::UseProgramObjectARB = (vtkgl::PFNGLUSEPROGRAMOBJECTARBPROC)manager->GetProcAddress("glUseProgramObjectARB");
    vtkgl::ValidateProgramARB = (vtkgl::PFNGLVALIDATEPROGRAMARBPROC)manager->GetProcAddress("glValidateProgramARB");
    vtkgl::Uniform1fARB = (vtkgl::PFNGLUNIFORM1FARBPROC)manager->GetProcAddress("glUniform1fARB");
    vtkgl::Uniform2fARB = (vtkgl::PFNGLUNIFORM2FARBPROC)manager->GetProcAddress("glUniform2fARB");
    vtkgl::Uniform3fARB = (vtkgl::PFNGLUNIFORM3FARBPROC)manager->GetProcAddress("glUniform3fARB");
    vtkgl::Uniform4fARB = (vtkgl::PFNGLUNIFORM4FARBPROC)manager->GetProcAddress("glUniform4fARB");
    vtkgl::Uniform1iARB = (vtkgl::PFNGLUNIFORM1IARBPROC)manager->GetProcAddress("glUniform1iARB");
    vtkgl::Uniform2iARB = (vtkgl::PFNGLUNIFORM2IARBPROC)manager->GetProcAddress("glUniform2iARB");
    vtkgl::Uniform3iARB = (vtkgl::PFNGLUNIFORM3IARBPROC)manager->GetProcAddress("glUniform3iARB");
    vtkgl::Uniform4iARB = (vtkgl::PFNGLUNIFORM4IARBPROC)manager->GetProcAddress("glUniform4iARB");
    vtkgl::Uniform1fvARB = (vtkgl::PFNGLUNIFORM1FVARBPROC)manager->GetProcAddress("glUniform1fvARB");
    vtkgl::Uniform2fvARB = (vtkgl::PFNGLUNIFORM2FVARBPROC)manager->GetProcAddress("glUniform2fvARB");
    vtkgl::Uniform3fvARB = (vtkgl::PFNGLUNIFORM3FVARBPROC)manager->GetProcAddress("glUniform3fvARB");
    vtkgl::Uniform4fvARB = (vtkgl::PFNGLUNIFORM4FVARBPROC)manager->GetProcAddress("glUniform4fvARB");
    vtkgl::Uniform1ivARB = (vtkgl::PFNGLUNIFORM1IVARBPROC)manager->GetProcAddress("glUniform1ivARB");
    vtkgl::Uniform2ivARB = (vtkgl::PFNGLUNIFORM2IVARBPROC)manager->GetProcAddress("glUniform2ivARB");
    vtkgl::Uniform3ivARB = (vtkgl::PFNGLUNIFORM3IVARBPROC)manager->GetProcAddress("glUniform3ivARB");
    vtkgl::Uniform4ivARB = (vtkgl::PFNGLUNIFORM4IVARBPROC)manager->GetProcAddress("glUniform4ivARB");
    vtkgl::UniformMatrix2fvARB = (vtkgl::PFNGLUNIFORMMATRIX2FVARBPROC)manager->GetProcAddress("glUniformMatrix2fvARB");
    vtkgl::UniformMatrix3fvARB = (vtkgl::PFNGLUNIFORMMATRIX3FVARBPROC)manager->GetProcAddress("glUniformMatrix3fvARB");
    vtkgl::UniformMatrix4fvARB = (vtkgl::PFNGLUNIFORMMATRIX4FVARBPROC)manager->GetProcAddress("glUniformMatrix4fvARB");
    vtkgl::GetObjectParameterfvARB = (vtkgl::PFNGLGETOBJECTPARAMETERFVARBPROC)manager->GetProcAddress("glGetObjectParameterfvARB");
    vtkgl::GetObjectParameterivARB = (vtkgl::PFNGLGETOBJECTPARAMETERIVARBPROC)manager->GetProcAddress("glGetObjectParameterivARB");
    vtkgl::GetInfoLogARB = (vtkgl::PFNGLGETINFOLOGARBPROC)manager->GetProcAddress("glGetInfoLogARB");
    vtkgl::GetAttachedObjectsARB = (vtkgl::PFNGLGETATTACHEDOBJECTSARBPROC)manager->GetProcAddress("glGetAttachedObjectsARB");
    vtkgl::GetUniformLocationARB = (vtkgl::PFNGLGETUNIFORMLOCATIONARBPROC)manager->GetProcAddress("glGetUniformLocationARB");
    vtkgl::GetActiveUniformARB = (vtkgl::PFNGLGETACTIVEUNIFORMARBPROC)manager->GetProcAddress("glGetActiveUniformARB");
    vtkgl::GetUniformfvARB = (vtkgl::PFNGLGETUNIFORMFVARBPROC)manager->GetProcAddress("glGetUniformfvARB");
    vtkgl::GetUniformivARB = (vtkgl::PFNGLGETUNIFORMIVARBPROC)manager->GetProcAddress("glGetUniformivARB");
    vtkgl::GetShaderSourceARB = (vtkgl::PFNGLGETSHADERSOURCEARBPROC)manager->GetProcAddress("glGetShaderSourceARB");
    return 1 && (vtkgl::DeleteObjectARB != NULL) && (vtkgl::GetHandleARB != NULL) && (vtkgl::DetachObjectARB != NULL) && (vtkgl::CreateShaderObjectARB != NULL) && (vtkgl::ShaderSourceARB != NULL) && (vtkgl::CompileShaderARB != NULL) && (vtkgl::CreateProgramObjectARB != NULL) && (vtkgl::AttachObjectARB != NULL) && (vtkgl::LinkProgramARB != NULL) && (vtkgl::UseProgramObjectARB != NULL) && (vtkgl::ValidateProgramARB != NULL) && (vtkgl::Uniform1fARB != NULL) && (vtkgl::Uniform2fARB != NULL) && (vtkgl::Uniform3fARB != NULL) && (vtkgl::Uniform4fARB != NULL) && (vtkgl::Uniform1iARB != NULL) && (vtkgl::Uniform2iARB != NULL) && (vtkgl::Uniform3iARB != NULL) && (vtkgl::Uniform4iARB != NULL) && (vtkgl::Uniform1fvARB != NULL) && (vtkgl::Uniform2fvARB != NULL) && (vtkgl::Uniform3fvARB != NULL) && (vtkgl::Uniform4fvARB != NULL) && (vtkgl::Uniform1ivARB != NULL) && (vtkgl::Uniform2ivARB != NULL) && (vtkgl::Uniform3ivARB != NULL) && (vtkgl::Uniform4ivARB != NULL) && (vtkgl::UniformMatrix2fvARB != NULL) && (vtkgl::UniformMatrix3fvARB != NULL) && (vtkgl::UniformMatrix4fvARB != NULL) && (vtkgl::GetObjectParameterfvARB != NULL) && (vtkgl::GetObjectParameterivARB != NULL) && (vtkgl::GetInfoLogARB != NULL) && (vtkgl::GetAttachedObjectsARB != NULL) && (vtkgl::GetUniformLocationARB != NULL) && (vtkgl::GetActiveUniformARB != NULL) && (vtkgl::GetUniformfvARB != NULL) && (vtkgl::GetUniformivARB != NULL) && (vtkgl::GetShaderSourceARB != NULL);
    }
  if (strcmp(name, "GL_ARB_vertex_shader") == 0)
    {
    vtkgl::BindAttribLocationARB = (vtkgl::PFNGLBINDATTRIBLOCATIONARBPROC)manager->GetProcAddress("glBindAttribLocationARB");
    vtkgl::GetActiveAttribARB = (vtkgl::PFNGLGETACTIVEATTRIBARBPROC)manager->GetProcAddress("glGetActiveAttribARB");
    vtkgl::GetAttribLocationARB = (vtkgl::PFNGLGETATTRIBLOCATIONARBPROC)manager->GetProcAddress("glGetAttribLocationARB");
    return 1 && (vtkgl::BindAttribLocationARB != NULL) && (vtkgl::GetActiveAttribARB != NULL) && (vtkgl::GetAttribLocationARB != NULL);
    }
  if (strcmp(name, "GL_ARB_fragment_shader") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_shading_language_100") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_texture_non_power_of_two") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_point_sprite") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_fragment_program_shadow") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_draw_buffers") == 0)
    {
    vtkgl::DrawBuffersARB = (vtkgl::PFNGLDRAWBUFFERSARBPROC)manager->GetProcAddress("glDrawBuffersARB");
    return 1 && (vtkgl::DrawBuffersARB != NULL);
    }
  if (strcmp(name, "GL_ARB_texture_rectangle") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_color_buffer_float") == 0)
    {
    vtkgl::ClampColorARB = (vtkgl::PFNGLCLAMPCOLORARBPROC)manager->GetProcAddress("glClampColorARB");
    return 1 && (vtkgl::ClampColorARB != NULL);
    }
  if (strcmp(name, "GL_ARB_half_float_pixel") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_texture_float") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ARB_pixel_buffer_object") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_abgr") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_blend_color") == 0)
    {
    vtkgl::BlendColorEXT = (vtkgl::PFNGLBLENDCOLOREXTPROC)manager->GetProcAddress("glBlendColorEXT");
    return 1 && (vtkgl::BlendColorEXT != NULL);
    }
  if (strcmp(name, "GL_EXT_polygon_offset") == 0)
    {
    vtkgl::PolygonOffsetEXT = (vtkgl::PFNGLPOLYGONOFFSETEXTPROC)manager->GetProcAddress("glPolygonOffsetEXT");
    return 1 && (vtkgl::PolygonOffsetEXT != NULL);
    }
  if (strcmp(name, "GL_EXT_texture") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_texture3D") == 0)
    {
    vtkgl::TexImage3DEXT = (vtkgl::PFNGLTEXIMAGE3DEXTPROC)manager->GetProcAddress("glTexImage3DEXT");
    vtkgl::TexSubImage3DEXT = (vtkgl::PFNGLTEXSUBIMAGE3DEXTPROC)manager->GetProcAddress("glTexSubImage3DEXT");
    return 1 && (vtkgl::TexImage3DEXT != NULL) && (vtkgl::TexSubImage3DEXT != NULL);
    }
  if (strcmp(name, "GL_SGIS_texture_filter4") == 0)
    {
    vtkgl::GetTexFilterFuncSGIS = (vtkgl::PFNGLGETTEXFILTERFUNCSGISPROC)manager->GetProcAddress("glGetTexFilterFuncSGIS");
    vtkgl::TexFilterFuncSGIS = (vtkgl::PFNGLTEXFILTERFUNCSGISPROC)manager->GetProcAddress("glTexFilterFuncSGIS");
    return 1 && (vtkgl::GetTexFilterFuncSGIS != NULL) && (vtkgl::TexFilterFuncSGIS != NULL);
    }
  if (strcmp(name, "GL_EXT_subtexture") == 0)
    {
    vtkgl::TexSubImage1DEXT = (vtkgl::PFNGLTEXSUBIMAGE1DEXTPROC)manager->GetProcAddress("glTexSubImage1DEXT");
    vtkgl::TexSubImage2DEXT = (vtkgl::PFNGLTEXSUBIMAGE2DEXTPROC)manager->GetProcAddress("glTexSubImage2DEXT");
    return 1 && (vtkgl::TexSubImage1DEXT != NULL) && (vtkgl::TexSubImage2DEXT != NULL);
    }
  if (strcmp(name, "GL_EXT_copy_texture") == 0)
    {
    vtkgl::CopyTexImage1DEXT = (vtkgl::PFNGLCOPYTEXIMAGE1DEXTPROC)manager->GetProcAddress("glCopyTexImage1DEXT");
    vtkgl::CopyTexImage2DEXT = (vtkgl::PFNGLCOPYTEXIMAGE2DEXTPROC)manager->GetProcAddress("glCopyTexImage2DEXT");
    vtkgl::CopyTexSubImage1DEXT = (vtkgl::PFNGLCOPYTEXSUBIMAGE1DEXTPROC)manager->GetProcAddress("glCopyTexSubImage1DEXT");
    vtkgl::CopyTexSubImage2DEXT = (vtkgl::PFNGLCOPYTEXSUBIMAGE2DEXTPROC)manager->GetProcAddress("glCopyTexSubImage2DEXT");
    vtkgl::CopyTexSubImage3DEXT = (vtkgl::PFNGLCOPYTEXSUBIMAGE3DEXTPROC)manager->GetProcAddress("glCopyTexSubImage3DEXT");
    return 1 && (vtkgl::CopyTexImage1DEXT != NULL) && (vtkgl::CopyTexImage2DEXT != NULL) && (vtkgl::CopyTexSubImage1DEXT != NULL) && (vtkgl::CopyTexSubImage2DEXT != NULL) && (vtkgl::CopyTexSubImage3DEXT != NULL);
    }
  if (strcmp(name, "GL_EXT_histogram") == 0)
    {
    vtkgl::GetHistogramEXT = (vtkgl::PFNGLGETHISTOGRAMEXTPROC)manager->GetProcAddress("glGetHistogramEXT");
    vtkgl::GetHistogramParameterfvEXT = (vtkgl::PFNGLGETHISTOGRAMPARAMETERFVEXTPROC)manager->GetProcAddress("glGetHistogramParameterfvEXT");
    vtkgl::GetHistogramParameterivEXT = (vtkgl::PFNGLGETHISTOGRAMPARAMETERIVEXTPROC)manager->GetProcAddress("glGetHistogramParameterivEXT");
    vtkgl::GetMinmaxEXT = (vtkgl::PFNGLGETMINMAXEXTPROC)manager->GetProcAddress("glGetMinmaxEXT");
    vtkgl::GetMinmaxParameterfvEXT = (vtkgl::PFNGLGETMINMAXPARAMETERFVEXTPROC)manager->GetProcAddress("glGetMinmaxParameterfvEXT");
    vtkgl::GetMinmaxParameterivEXT = (vtkgl::PFNGLGETMINMAXPARAMETERIVEXTPROC)manager->GetProcAddress("glGetMinmaxParameterivEXT");
    vtkgl::HistogramEXT = (vtkgl::PFNGLHISTOGRAMEXTPROC)manager->GetProcAddress("glHistogramEXT");
    vtkgl::MinmaxEXT = (vtkgl::PFNGLMINMAXEXTPROC)manager->GetProcAddress("glMinmaxEXT");
    vtkgl::ResetHistogramEXT = (vtkgl::PFNGLRESETHISTOGRAMEXTPROC)manager->GetProcAddress("glResetHistogramEXT");
    vtkgl::ResetMinmaxEXT = (vtkgl::PFNGLRESETMINMAXEXTPROC)manager->GetProcAddress("glResetMinmaxEXT");
    return 1 && (vtkgl::GetHistogramEXT != NULL) && (vtkgl::GetHistogramParameterfvEXT != NULL) && (vtkgl::GetHistogramParameterivEXT != NULL) && (vtkgl::GetMinmaxEXT != NULL) && (vtkgl::GetMinmaxParameterfvEXT != NULL) && (vtkgl::GetMinmaxParameterivEXT != NULL) && (vtkgl::HistogramEXT != NULL) && (vtkgl::MinmaxEXT != NULL) && (vtkgl::ResetHistogramEXT != NULL) && (vtkgl::ResetMinmaxEXT != NULL);
    }
  if (strcmp(name, "GL_EXT_convolution") == 0)
    {
    vtkgl::ConvolutionFilter1DEXT = (vtkgl::PFNGLCONVOLUTIONFILTER1DEXTPROC)manager->GetProcAddress("glConvolutionFilter1DEXT");
    vtkgl::ConvolutionFilter2DEXT = (vtkgl::PFNGLCONVOLUTIONFILTER2DEXTPROC)manager->GetProcAddress("glConvolutionFilter2DEXT");
    vtkgl::ConvolutionParameterfEXT = (vtkgl::PFNGLCONVOLUTIONPARAMETERFEXTPROC)manager->GetProcAddress("glConvolutionParameterfEXT");
    vtkgl::ConvolutionParameterfvEXT = (vtkgl::PFNGLCONVOLUTIONPARAMETERFVEXTPROC)manager->GetProcAddress("glConvolutionParameterfvEXT");
    vtkgl::ConvolutionParameteriEXT = (vtkgl::PFNGLCONVOLUTIONPARAMETERIEXTPROC)manager->GetProcAddress("glConvolutionParameteriEXT");
    vtkgl::ConvolutionParameterivEXT = (vtkgl::PFNGLCONVOLUTIONPARAMETERIVEXTPROC)manager->GetProcAddress("glConvolutionParameterivEXT");
    vtkgl::CopyConvolutionFilter1DEXT = (vtkgl::PFNGLCOPYCONVOLUTIONFILTER1DEXTPROC)manager->GetProcAddress("glCopyConvolutionFilter1DEXT");
    vtkgl::CopyConvolutionFilter2DEXT = (vtkgl::PFNGLCOPYCONVOLUTIONFILTER2DEXTPROC)manager->GetProcAddress("glCopyConvolutionFilter2DEXT");
    vtkgl::GetConvolutionFilterEXT = (vtkgl::PFNGLGETCONVOLUTIONFILTEREXTPROC)manager->GetProcAddress("glGetConvolutionFilterEXT");
    vtkgl::GetConvolutionParameterfvEXT = (vtkgl::PFNGLGETCONVOLUTIONPARAMETERFVEXTPROC)manager->GetProcAddress("glGetConvolutionParameterfvEXT");
    vtkgl::GetConvolutionParameterivEXT = (vtkgl::PFNGLGETCONVOLUTIONPARAMETERIVEXTPROC)manager->GetProcAddress("glGetConvolutionParameterivEXT");
    vtkgl::GetSeparableFilterEXT = (vtkgl::PFNGLGETSEPARABLEFILTEREXTPROC)manager->GetProcAddress("glGetSeparableFilterEXT");
    vtkgl::SeparableFilter2DEXT = (vtkgl::PFNGLSEPARABLEFILTER2DEXTPROC)manager->GetProcAddress("glSeparableFilter2DEXT");
    return 1 && (vtkgl::ConvolutionFilter1DEXT != NULL) && (vtkgl::ConvolutionFilter2DEXT != NULL) && (vtkgl::ConvolutionParameterfEXT != NULL) && (vtkgl::ConvolutionParameterfvEXT != NULL) && (vtkgl::ConvolutionParameteriEXT != NULL) && (vtkgl::ConvolutionParameterivEXT != NULL) && (vtkgl::CopyConvolutionFilter1DEXT != NULL) && (vtkgl::CopyConvolutionFilter2DEXT != NULL) && (vtkgl::GetConvolutionFilterEXT != NULL) && (vtkgl::GetConvolutionParameterfvEXT != NULL) && (vtkgl::GetConvolutionParameterivEXT != NULL) && (vtkgl::GetSeparableFilterEXT != NULL) && (vtkgl::SeparableFilter2DEXT != NULL);
    }
  if (strcmp(name, "GL_SGI_color_matrix") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGI_color_table") == 0)
    {
    vtkgl::ColorTableSGI = (vtkgl::PFNGLCOLORTABLESGIPROC)manager->GetProcAddress("glColorTableSGI");
    vtkgl::ColorTableParameterfvSGI = (vtkgl::PFNGLCOLORTABLEPARAMETERFVSGIPROC)manager->GetProcAddress("glColorTableParameterfvSGI");
    vtkgl::ColorTableParameterivSGI = (vtkgl::PFNGLCOLORTABLEPARAMETERIVSGIPROC)manager->GetProcAddress("glColorTableParameterivSGI");
    vtkgl::CopyColorTableSGI = (vtkgl::PFNGLCOPYCOLORTABLESGIPROC)manager->GetProcAddress("glCopyColorTableSGI");
    vtkgl::GetColorTableSGI = (vtkgl::PFNGLGETCOLORTABLESGIPROC)manager->GetProcAddress("glGetColorTableSGI");
    vtkgl::GetColorTableParameterfvSGI = (vtkgl::PFNGLGETCOLORTABLEPARAMETERFVSGIPROC)manager->GetProcAddress("glGetColorTableParameterfvSGI");
    vtkgl::GetColorTableParameterivSGI = (vtkgl::PFNGLGETCOLORTABLEPARAMETERIVSGIPROC)manager->GetProcAddress("glGetColorTableParameterivSGI");
    return 1 && (vtkgl::ColorTableSGI != NULL) && (vtkgl::ColorTableParameterfvSGI != NULL) && (vtkgl::ColorTableParameterivSGI != NULL) && (vtkgl::CopyColorTableSGI != NULL) && (vtkgl::GetColorTableSGI != NULL) && (vtkgl::GetColorTableParameterfvSGI != NULL) && (vtkgl::GetColorTableParameterivSGI != NULL);
    }
  if (strcmp(name, "GL_SGIS_pixel_texture") == 0)
    {
    vtkgl::PixelTexGenParameteriSGIS = (vtkgl::PFNGLPIXELTEXGENPARAMETERISGISPROC)manager->GetProcAddress("glPixelTexGenParameteriSGIS");
    vtkgl::PixelTexGenParameterivSGIS = (vtkgl::PFNGLPIXELTEXGENPARAMETERIVSGISPROC)manager->GetProcAddress("glPixelTexGenParameterivSGIS");
    vtkgl::PixelTexGenParameterfSGIS = (vtkgl::PFNGLPIXELTEXGENPARAMETERFSGISPROC)manager->GetProcAddress("glPixelTexGenParameterfSGIS");
    vtkgl::PixelTexGenParameterfvSGIS = (vtkgl::PFNGLPIXELTEXGENPARAMETERFVSGISPROC)manager->GetProcAddress("glPixelTexGenParameterfvSGIS");
    vtkgl::GetPixelTexGenParameterivSGIS = (vtkgl::PFNGLGETPIXELTEXGENPARAMETERIVSGISPROC)manager->GetProcAddress("glGetPixelTexGenParameterivSGIS");
    vtkgl::GetPixelTexGenParameterfvSGIS = (vtkgl::PFNGLGETPIXELTEXGENPARAMETERFVSGISPROC)manager->GetProcAddress("glGetPixelTexGenParameterfvSGIS");
    return 1 && (vtkgl::PixelTexGenParameteriSGIS != NULL) && (vtkgl::PixelTexGenParameterivSGIS != NULL) && (vtkgl::PixelTexGenParameterfSGIS != NULL) && (vtkgl::PixelTexGenParameterfvSGIS != NULL) && (vtkgl::GetPixelTexGenParameterivSGIS != NULL) && (vtkgl::GetPixelTexGenParameterfvSGIS != NULL);
    }
  if (strcmp(name, "GL_SGIX_pixel_texture") == 0)
    {
    vtkgl::PixelTexGenSGIX = (vtkgl::PFNGLPIXELTEXGENSGIXPROC)manager->GetProcAddress("glPixelTexGenSGIX");
    return 1 && (vtkgl::PixelTexGenSGIX != NULL);
    }
  if (strcmp(name, "GL_SGIS_texture4D") == 0)
    {
    vtkgl::TexImage4DSGIS = (vtkgl::PFNGLTEXIMAGE4DSGISPROC)manager->GetProcAddress("glTexImage4DSGIS");
    vtkgl::TexSubImage4DSGIS = (vtkgl::PFNGLTEXSUBIMAGE4DSGISPROC)manager->GetProcAddress("glTexSubImage4DSGIS");
    return 1 && (vtkgl::TexImage4DSGIS != NULL) && (vtkgl::TexSubImage4DSGIS != NULL);
    }
  if (strcmp(name, "GL_SGI_texture_color_table") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_cmyka") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_texture_object") == 0)
    {
    vtkgl::AreTexturesResidentEXT = (vtkgl::PFNGLARETEXTURESRESIDENTEXTPROC)manager->GetProcAddress("glAreTexturesResidentEXT");
    vtkgl::BindTextureEXT = (vtkgl::PFNGLBINDTEXTUREEXTPROC)manager->GetProcAddress("glBindTextureEXT");
    vtkgl::DeleteTexturesEXT = (vtkgl::PFNGLDELETETEXTURESEXTPROC)manager->GetProcAddress("glDeleteTexturesEXT");
    vtkgl::GenTexturesEXT = (vtkgl::PFNGLGENTEXTURESEXTPROC)manager->GetProcAddress("glGenTexturesEXT");
    vtkgl::IsTextureEXT = (vtkgl::PFNGLISTEXTUREEXTPROC)manager->GetProcAddress("glIsTextureEXT");
    vtkgl::PrioritizeTexturesEXT = (vtkgl::PFNGLPRIORITIZETEXTURESEXTPROC)manager->GetProcAddress("glPrioritizeTexturesEXT");
    return 1 && (vtkgl::AreTexturesResidentEXT != NULL) && (vtkgl::BindTextureEXT != NULL) && (vtkgl::DeleteTexturesEXT != NULL) && (vtkgl::GenTexturesEXT != NULL) && (vtkgl::IsTextureEXT != NULL) && (vtkgl::PrioritizeTexturesEXT != NULL);
    }
  if (strcmp(name, "GL_SGIS_detail_texture") == 0)
    {
    vtkgl::DetailTexFuncSGIS = (vtkgl::PFNGLDETAILTEXFUNCSGISPROC)manager->GetProcAddress("glDetailTexFuncSGIS");
    vtkgl::GetDetailTexFuncSGIS = (vtkgl::PFNGLGETDETAILTEXFUNCSGISPROC)manager->GetProcAddress("glGetDetailTexFuncSGIS");
    return 1 && (vtkgl::DetailTexFuncSGIS != NULL) && (vtkgl::GetDetailTexFuncSGIS != NULL);
    }
  if (strcmp(name, "GL_SGIS_sharpen_texture") == 0)
    {
    vtkgl::SharpenTexFuncSGIS = (vtkgl::PFNGLSHARPENTEXFUNCSGISPROC)manager->GetProcAddress("glSharpenTexFuncSGIS");
    vtkgl::GetSharpenTexFuncSGIS = (vtkgl::PFNGLGETSHARPENTEXFUNCSGISPROC)manager->GetProcAddress("glGetSharpenTexFuncSGIS");
    return 1 && (vtkgl::SharpenTexFuncSGIS != NULL) && (vtkgl::GetSharpenTexFuncSGIS != NULL);
    }
  if (strcmp(name, "GL_EXT_packed_pixels") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIS_texture_lod") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIS_multisample") == 0)
    {
    vtkgl::SampleMaskSGIS = (vtkgl::PFNGLSAMPLEMASKSGISPROC)manager->GetProcAddress("glSampleMaskSGIS");
    vtkgl::SamplePatternSGIS = (vtkgl::PFNGLSAMPLEPATTERNSGISPROC)manager->GetProcAddress("glSamplePatternSGIS");
    return 1 && (vtkgl::SampleMaskSGIS != NULL) && (vtkgl::SamplePatternSGIS != NULL);
    }
  if (strcmp(name, "GL_EXT_rescale_normal") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_vertex_array") == 0)
    {
    vtkgl::ArrayElementEXT = (vtkgl::PFNGLARRAYELEMENTEXTPROC)manager->GetProcAddress("glArrayElementEXT");
    vtkgl::ColorPointerEXT = (vtkgl::PFNGLCOLORPOINTEREXTPROC)manager->GetProcAddress("glColorPointerEXT");
    vtkgl::DrawArraysEXT = (vtkgl::PFNGLDRAWARRAYSEXTPROC)manager->GetProcAddress("glDrawArraysEXT");
    vtkgl::EdgeFlagPointerEXT = (vtkgl::PFNGLEDGEFLAGPOINTEREXTPROC)manager->GetProcAddress("glEdgeFlagPointerEXT");
    vtkgl::GetPointervEXT = (vtkgl::PFNGLGETPOINTERVEXTPROC)manager->GetProcAddress("glGetPointervEXT");
    vtkgl::IndexPointerEXT = (vtkgl::PFNGLINDEXPOINTEREXTPROC)manager->GetProcAddress("glIndexPointerEXT");
    vtkgl::NormalPointerEXT = (vtkgl::PFNGLNORMALPOINTEREXTPROC)manager->GetProcAddress("glNormalPointerEXT");
    vtkgl::TexCoordPointerEXT = (vtkgl::PFNGLTEXCOORDPOINTEREXTPROC)manager->GetProcAddress("glTexCoordPointerEXT");
    vtkgl::VertexPointerEXT = (vtkgl::PFNGLVERTEXPOINTEREXTPROC)manager->GetProcAddress("glVertexPointerEXT");
    return 1 && (vtkgl::ArrayElementEXT != NULL) && (vtkgl::ColorPointerEXT != NULL) && (vtkgl::DrawArraysEXT != NULL) && (vtkgl::EdgeFlagPointerEXT != NULL) && (vtkgl::GetPointervEXT != NULL) && (vtkgl::IndexPointerEXT != NULL) && (vtkgl::NormalPointerEXT != NULL) && (vtkgl::TexCoordPointerEXT != NULL) && (vtkgl::VertexPointerEXT != NULL);
    }
  if (strcmp(name, "GL_EXT_misc_attribute") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIS_generate_mipmap") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIX_clipmap") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIX_shadow") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIS_texture_edge_clamp") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIS_texture_border_clamp") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_blend_minmax") == 0)
    {
    vtkgl::BlendEquationEXT = (vtkgl::PFNGLBLENDEQUATIONEXTPROC)manager->GetProcAddress("glBlendEquationEXT");
    return 1 && (vtkgl::BlendEquationEXT != NULL);
    }
  if (strcmp(name, "GL_EXT_blend_subtract") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_blend_logic_op") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIX_interlace") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIX_pixel_tiles") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIS_texture_select") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIX_sprite") == 0)
    {
    vtkgl::SpriteParameterfSGIX = (vtkgl::PFNGLSPRITEPARAMETERFSGIXPROC)manager->GetProcAddress("glSpriteParameterfSGIX");
    vtkgl::SpriteParameterfvSGIX = (vtkgl::PFNGLSPRITEPARAMETERFVSGIXPROC)manager->GetProcAddress("glSpriteParameterfvSGIX");
    vtkgl::SpriteParameteriSGIX = (vtkgl::PFNGLSPRITEPARAMETERISGIXPROC)manager->GetProcAddress("glSpriteParameteriSGIX");
    vtkgl::SpriteParameterivSGIX = (vtkgl::PFNGLSPRITEPARAMETERIVSGIXPROC)manager->GetProcAddress("glSpriteParameterivSGIX");
    return 1 && (vtkgl::SpriteParameterfSGIX != NULL) && (vtkgl::SpriteParameterfvSGIX != NULL) && (vtkgl::SpriteParameteriSGIX != NULL) && (vtkgl::SpriteParameterivSGIX != NULL);
    }
  if (strcmp(name, "GL_SGIX_texture_multi_buffer") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_point_parameters") == 0)
    {
    vtkgl::PointParameterfEXT = (vtkgl::PFNGLPOINTPARAMETERFEXTPROC)manager->GetProcAddress("glPointParameterfEXT");
    vtkgl::PointParameterfvEXT = (vtkgl::PFNGLPOINTPARAMETERFVEXTPROC)manager->GetProcAddress("glPointParameterfvEXT");
    return 1 && (vtkgl::PointParameterfEXT != NULL) && (vtkgl::PointParameterfvEXT != NULL);
    }
  if (strcmp(name, "GL_SGIS_point_parameters") == 0)
    {
    vtkgl::PointParameterfSGIS = (vtkgl::PFNGLPOINTPARAMETERFSGISPROC)manager->GetProcAddress("glPointParameterfSGIS");
    vtkgl::PointParameterfvSGIS = (vtkgl::PFNGLPOINTPARAMETERFVSGISPROC)manager->GetProcAddress("glPointParameterfvSGIS");
    return 1 && (vtkgl::PointParameterfSGIS != NULL) && (vtkgl::PointParameterfvSGIS != NULL);
    }
  if (strcmp(name, "GL_SGIX_instruments") == 0)
    {
    vtkgl::GetInstrumentsSGIX = (vtkgl::PFNGLGETINSTRUMENTSSGIXPROC)manager->GetProcAddress("glGetInstrumentsSGIX");
    vtkgl::InstrumentsBufferSGIX = (vtkgl::PFNGLINSTRUMENTSBUFFERSGIXPROC)manager->GetProcAddress("glInstrumentsBufferSGIX");
    vtkgl::PollInstrumentsSGIX = (vtkgl::PFNGLPOLLINSTRUMENTSSGIXPROC)manager->GetProcAddress("glPollInstrumentsSGIX");
    vtkgl::ReadInstrumentsSGIX = (vtkgl::PFNGLREADINSTRUMENTSSGIXPROC)manager->GetProcAddress("glReadInstrumentsSGIX");
    vtkgl::StartInstrumentsSGIX = (vtkgl::PFNGLSTARTINSTRUMENTSSGIXPROC)manager->GetProcAddress("glStartInstrumentsSGIX");
    vtkgl::StopInstrumentsSGIX = (vtkgl::PFNGLSTOPINSTRUMENTSSGIXPROC)manager->GetProcAddress("glStopInstrumentsSGIX");
    return 1 && (vtkgl::GetInstrumentsSGIX != NULL) && (vtkgl::InstrumentsBufferSGIX != NULL) && (vtkgl::PollInstrumentsSGIX != NULL) && (vtkgl::ReadInstrumentsSGIX != NULL) && (vtkgl::StartInstrumentsSGIX != NULL) && (vtkgl::StopInstrumentsSGIX != NULL);
    }
  if (strcmp(name, "GL_SGIX_texture_scale_bias") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIX_framezoom") == 0)
    {
    vtkgl::FrameZoomSGIX = (vtkgl::PFNGLFRAMEZOOMSGIXPROC)manager->GetProcAddress("glFrameZoomSGIX");
    return 1 && (vtkgl::FrameZoomSGIX != NULL);
    }
  if (strcmp(name, "GL_SGIX_tag_sample_buffer") == 0)
    {
    vtkgl::TagSampleBufferSGIX = (vtkgl::PFNGLTAGSAMPLEBUFFERSGIXPROC)manager->GetProcAddress("glTagSampleBufferSGIX");
    return 1 && (vtkgl::TagSampleBufferSGIX != NULL);
    }
  if (strcmp(name, "GL_FfdMaskSGIX") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIX_polynomial_ffd") == 0)
    {
    vtkgl::DeformationMap3dSGIX = (vtkgl::PFNGLDEFORMATIONMAP3DSGIXPROC)manager->GetProcAddress("glDeformationMap3dSGIX");
    vtkgl::DeformationMap3fSGIX = (vtkgl::PFNGLDEFORMATIONMAP3FSGIXPROC)manager->GetProcAddress("glDeformationMap3fSGIX");
    vtkgl::DeformSGIX = (vtkgl::PFNGLDEFORMSGIXPROC)manager->GetProcAddress("glDeformSGIX");
    vtkgl::LoadIdentityDeformationMapSGIX = (vtkgl::PFNGLLOADIDENTITYDEFORMATIONMAPSGIXPROC)manager->GetProcAddress("glLoadIdentityDeformationMapSGIX");
    return 1 && (vtkgl::DeformationMap3dSGIX != NULL) && (vtkgl::DeformationMap3fSGIX != NULL) && (vtkgl::DeformSGIX != NULL) && (vtkgl::LoadIdentityDeformationMapSGIX != NULL);
    }
  if (strcmp(name, "GL_SGIX_reference_plane") == 0)
    {
    vtkgl::ReferencePlaneSGIX = (vtkgl::PFNGLREFERENCEPLANESGIXPROC)manager->GetProcAddress("glReferencePlaneSGIX");
    return 1 && (vtkgl::ReferencePlaneSGIX != NULL);
    }
  if (strcmp(name, "GL_SGIX_flush_raster") == 0)
    {
    vtkgl::FlushRasterSGIX = (vtkgl::PFNGLFLUSHRASTERSGIXPROC)manager->GetProcAddress("glFlushRasterSGIX");
    return 1 && (vtkgl::FlushRasterSGIX != NULL);
    }
  if (strcmp(name, "GL_SGIX_depth_texture") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIS_fog_function") == 0)
    {
    vtkgl::FogFuncSGIS = (vtkgl::PFNGLFOGFUNCSGISPROC)manager->GetProcAddress("glFogFuncSGIS");
    vtkgl::GetFogFuncSGIS = (vtkgl::PFNGLGETFOGFUNCSGISPROC)manager->GetProcAddress("glGetFogFuncSGIS");
    return 1 && (vtkgl::FogFuncSGIS != NULL) && (vtkgl::GetFogFuncSGIS != NULL);
    }
  if (strcmp(name, "GL_SGIX_fog_offset") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_HP_image_transform") == 0)
    {
    vtkgl::ImageTransformParameteriHP = (vtkgl::PFNGLIMAGETRANSFORMPARAMETERIHPPROC)manager->GetProcAddress("glImageTransformParameteriHP");
    vtkgl::ImageTransformParameterfHP = (vtkgl::PFNGLIMAGETRANSFORMPARAMETERFHPPROC)manager->GetProcAddress("glImageTransformParameterfHP");
    vtkgl::ImageTransformParameterivHP = (vtkgl::PFNGLIMAGETRANSFORMPARAMETERIVHPPROC)manager->GetProcAddress("glImageTransformParameterivHP");
    vtkgl::ImageTransformParameterfvHP = (vtkgl::PFNGLIMAGETRANSFORMPARAMETERFVHPPROC)manager->GetProcAddress("glImageTransformParameterfvHP");
    vtkgl::GetImageTransformParameterivHP = (vtkgl::PFNGLGETIMAGETRANSFORMPARAMETERIVHPPROC)manager->GetProcAddress("glGetImageTransformParameterivHP");
    vtkgl::GetImageTransformParameterfvHP = (vtkgl::PFNGLGETIMAGETRANSFORMPARAMETERFVHPPROC)manager->GetProcAddress("glGetImageTransformParameterfvHP");
    return 1 && (vtkgl::ImageTransformParameteriHP != NULL) && (vtkgl::ImageTransformParameterfHP != NULL) && (vtkgl::ImageTransformParameterivHP != NULL) && (vtkgl::ImageTransformParameterfvHP != NULL) && (vtkgl::GetImageTransformParameterivHP != NULL) && (vtkgl::GetImageTransformParameterfvHP != NULL);
    }
  if (strcmp(name, "GL_HP_convolution_border_modes") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_INGR_palette_buffer") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIX_texture_add_env") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_color_subtable") == 0)
    {
    vtkgl::ColorSubTableEXT = (vtkgl::PFNGLCOLORSUBTABLEEXTPROC)manager->GetProcAddress("glColorSubTableEXT");
    vtkgl::CopyColorSubTableEXT = (vtkgl::PFNGLCOPYCOLORSUBTABLEEXTPROC)manager->GetProcAddress("glCopyColorSubTableEXT");
    return 1 && (vtkgl::ColorSubTableEXT != NULL) && (vtkgl::CopyColorSubTableEXT != NULL);
    }
  if (strcmp(name, "GL_PGI_vertex_hints") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_PGI_misc_hints") == 0)
    {
    vtkgl::HintPGI = (vtkgl::PFNGLHINTPGIPROC)manager->GetProcAddress("glHintPGI");
    return 1 && (vtkgl::HintPGI != NULL);
    }
  if (strcmp(name, "GL_EXT_paletted_texture") == 0)
    {
    vtkgl::ColorTableEXT = (vtkgl::PFNGLCOLORTABLEEXTPROC)manager->GetProcAddress("glColorTableEXT");
    vtkgl::GetColorTableEXT = (vtkgl::PFNGLGETCOLORTABLEEXTPROC)manager->GetProcAddress("glGetColorTableEXT");
    vtkgl::GetColorTableParameterivEXT = (vtkgl::PFNGLGETCOLORTABLEPARAMETERIVEXTPROC)manager->GetProcAddress("glGetColorTableParameterivEXT");
    vtkgl::GetColorTableParameterfvEXT = (vtkgl::PFNGLGETCOLORTABLEPARAMETERFVEXTPROC)manager->GetProcAddress("glGetColorTableParameterfvEXT");
    return 1 && (vtkgl::ColorTableEXT != NULL) && (vtkgl::GetColorTableEXT != NULL) && (vtkgl::GetColorTableParameterivEXT != NULL) && (vtkgl::GetColorTableParameterfvEXT != NULL);
    }
  if (strcmp(name, "GL_EXT_clip_volume_hint") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIX_list_priority") == 0)
    {
    vtkgl::GetListParameterfvSGIX = (vtkgl::PFNGLGETLISTPARAMETERFVSGIXPROC)manager->GetProcAddress("glGetListParameterfvSGIX");
    vtkgl::GetListParameterivSGIX = (vtkgl::PFNGLGETLISTPARAMETERIVSGIXPROC)manager->GetProcAddress("glGetListParameterivSGIX");
    vtkgl::ListParameterfSGIX = (vtkgl::PFNGLLISTPARAMETERFSGIXPROC)manager->GetProcAddress("glListParameterfSGIX");
    vtkgl::ListParameterfvSGIX = (vtkgl::PFNGLLISTPARAMETERFVSGIXPROC)manager->GetProcAddress("glListParameterfvSGIX");
    vtkgl::ListParameteriSGIX = (vtkgl::PFNGLLISTPARAMETERISGIXPROC)manager->GetProcAddress("glListParameteriSGIX");
    vtkgl::ListParameterivSGIX = (vtkgl::PFNGLLISTPARAMETERIVSGIXPROC)manager->GetProcAddress("glListParameterivSGIX");
    return 1 && (vtkgl::GetListParameterfvSGIX != NULL) && (vtkgl::GetListParameterivSGIX != NULL) && (vtkgl::ListParameterfSGIX != NULL) && (vtkgl::ListParameterfvSGIX != NULL) && (vtkgl::ListParameteriSGIX != NULL) && (vtkgl::ListParameterivSGIX != NULL);
    }
  if (strcmp(name, "GL_SGIX_ir_instrument1") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIX_calligraphic_fragment") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIX_texture_lod_bias") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIX_shadow_ambient") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_index_texture") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_index_material") == 0)
    {
    vtkgl::IndexMaterialEXT = (vtkgl::PFNGLINDEXMATERIALEXTPROC)manager->GetProcAddress("glIndexMaterialEXT");
    return 1 && (vtkgl::IndexMaterialEXT != NULL);
    }
  if (strcmp(name, "GL_EXT_index_func") == 0)
    {
    vtkgl::IndexFuncEXT = (vtkgl::PFNGLINDEXFUNCEXTPROC)manager->GetProcAddress("glIndexFuncEXT");
    return 1 && (vtkgl::IndexFuncEXT != NULL);
    }
  if (strcmp(name, "GL_EXT_index_array_formats") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_compiled_vertex_array") == 0)
    {
    vtkgl::LockArraysEXT = (vtkgl::PFNGLLOCKARRAYSEXTPROC)manager->GetProcAddress("glLockArraysEXT");
    vtkgl::UnlockArraysEXT = (vtkgl::PFNGLUNLOCKARRAYSEXTPROC)manager->GetProcAddress("glUnlockArraysEXT");
    return 1 && (vtkgl::LockArraysEXT != NULL) && (vtkgl::UnlockArraysEXT != NULL);
    }
  if (strcmp(name, "GL_EXT_cull_vertex") == 0)
    {
    vtkgl::CullParameterdvEXT = (vtkgl::PFNGLCULLPARAMETERDVEXTPROC)manager->GetProcAddress("glCullParameterdvEXT");
    vtkgl::CullParameterfvEXT = (vtkgl::PFNGLCULLPARAMETERFVEXTPROC)manager->GetProcAddress("glCullParameterfvEXT");
    return 1 && (vtkgl::CullParameterdvEXT != NULL) && (vtkgl::CullParameterfvEXT != NULL);
    }
  if (strcmp(name, "GL_SGIX_ycrcb") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIX_fragment_lighting") == 0)
    {
    vtkgl::FragmentColorMaterialSGIX = (vtkgl::PFNGLFRAGMENTCOLORMATERIALSGIXPROC)manager->GetProcAddress("glFragmentColorMaterialSGIX");
    vtkgl::FragmentLightfSGIX = (vtkgl::PFNGLFRAGMENTLIGHTFSGIXPROC)manager->GetProcAddress("glFragmentLightfSGIX");
    vtkgl::FragmentLightfvSGIX = (vtkgl::PFNGLFRAGMENTLIGHTFVSGIXPROC)manager->GetProcAddress("glFragmentLightfvSGIX");
    vtkgl::FragmentLightiSGIX = (vtkgl::PFNGLFRAGMENTLIGHTISGIXPROC)manager->GetProcAddress("glFragmentLightiSGIX");
    vtkgl::FragmentLightivSGIX = (vtkgl::PFNGLFRAGMENTLIGHTIVSGIXPROC)manager->GetProcAddress("glFragmentLightivSGIX");
    vtkgl::FragmentLightModelfSGIX = (vtkgl::PFNGLFRAGMENTLIGHTMODELFSGIXPROC)manager->GetProcAddress("glFragmentLightModelfSGIX");
    vtkgl::FragmentLightModelfvSGIX = (vtkgl::PFNGLFRAGMENTLIGHTMODELFVSGIXPROC)manager->GetProcAddress("glFragmentLightModelfvSGIX");
    vtkgl::FragmentLightModeliSGIX = (vtkgl::PFNGLFRAGMENTLIGHTMODELISGIXPROC)manager->GetProcAddress("glFragmentLightModeliSGIX");
    vtkgl::FragmentLightModelivSGIX = (vtkgl::PFNGLFRAGMENTLIGHTMODELIVSGIXPROC)manager->GetProcAddress("glFragmentLightModelivSGIX");
    vtkgl::FragmentMaterialfSGIX = (vtkgl::PFNGLFRAGMENTMATERIALFSGIXPROC)manager->GetProcAddress("glFragmentMaterialfSGIX");
    vtkgl::FragmentMaterialfvSGIX = (vtkgl::PFNGLFRAGMENTMATERIALFVSGIXPROC)manager->GetProcAddress("glFragmentMaterialfvSGIX");
    vtkgl::FragmentMaterialiSGIX = (vtkgl::PFNGLFRAGMENTMATERIALISGIXPROC)manager->GetProcAddress("glFragmentMaterialiSGIX");
    vtkgl::FragmentMaterialivSGIX = (vtkgl::PFNGLFRAGMENTMATERIALIVSGIXPROC)manager->GetProcAddress("glFragmentMaterialivSGIX");
    vtkgl::GetFragmentLightfvSGIX = (vtkgl::PFNGLGETFRAGMENTLIGHTFVSGIXPROC)manager->GetProcAddress("glGetFragmentLightfvSGIX");
    vtkgl::GetFragmentLightivSGIX = (vtkgl::PFNGLGETFRAGMENTLIGHTIVSGIXPROC)manager->GetProcAddress("glGetFragmentLightivSGIX");
    vtkgl::GetFragmentMaterialfvSGIX = (vtkgl::PFNGLGETFRAGMENTMATERIALFVSGIXPROC)manager->GetProcAddress("glGetFragmentMaterialfvSGIX");
    vtkgl::GetFragmentMaterialivSGIX = (vtkgl::PFNGLGETFRAGMENTMATERIALIVSGIXPROC)manager->GetProcAddress("glGetFragmentMaterialivSGIX");
    vtkgl::LightEnviSGIX = (vtkgl::PFNGLLIGHTENVISGIXPROC)manager->GetProcAddress("glLightEnviSGIX");
    return 1 && (vtkgl::FragmentColorMaterialSGIX != NULL) && (vtkgl::FragmentLightfSGIX != NULL) && (vtkgl::FragmentLightfvSGIX != NULL) && (vtkgl::FragmentLightiSGIX != NULL) && (vtkgl::FragmentLightivSGIX != NULL) && (vtkgl::FragmentLightModelfSGIX != NULL) && (vtkgl::FragmentLightModelfvSGIX != NULL) && (vtkgl::FragmentLightModeliSGIX != NULL) && (vtkgl::FragmentLightModelivSGIX != NULL) && (vtkgl::FragmentMaterialfSGIX != NULL) && (vtkgl::FragmentMaterialfvSGIX != NULL) && (vtkgl::FragmentMaterialiSGIX != NULL) && (vtkgl::FragmentMaterialivSGIX != NULL) && (vtkgl::GetFragmentLightfvSGIX != NULL) && (vtkgl::GetFragmentLightivSGIX != NULL) && (vtkgl::GetFragmentMaterialfvSGIX != NULL) && (vtkgl::GetFragmentMaterialivSGIX != NULL) && (vtkgl::LightEnviSGIX != NULL);
    }
  if (strcmp(name, "GL_IBM_rasterpos_clip") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_HP_texture_lighting") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_draw_range_elements") == 0)
    {
    vtkgl::DrawRangeElementsEXT = (vtkgl::PFNGLDRAWRANGEELEMENTSEXTPROC)manager->GetProcAddress("glDrawRangeElementsEXT");
    return 1 && (vtkgl::DrawRangeElementsEXT != NULL);
    }
  if (strcmp(name, "GL_WIN_phong_shading") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_WIN_specular_fog") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_light_texture") == 0)
    {
    vtkgl::ApplyTextureEXT = (vtkgl::PFNGLAPPLYTEXTUREEXTPROC)manager->GetProcAddress("glApplyTextureEXT");
    vtkgl::TextureLightEXT = (vtkgl::PFNGLTEXTURELIGHTEXTPROC)manager->GetProcAddress("glTextureLightEXT");
    vtkgl::TextureMaterialEXT = (vtkgl::PFNGLTEXTUREMATERIALEXTPROC)manager->GetProcAddress("glTextureMaterialEXT");
    return 1 && (vtkgl::ApplyTextureEXT != NULL) && (vtkgl::TextureLightEXT != NULL) && (vtkgl::TextureMaterialEXT != NULL);
    }
  if (strcmp(name, "GL_SGIX_blend_alpha_minmax") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIX_impact_pixel_texture") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_bgra") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIX_async") == 0)
    {
    vtkgl::AsyncMarkerSGIX = (vtkgl::PFNGLASYNCMARKERSGIXPROC)manager->GetProcAddress("glAsyncMarkerSGIX");
    vtkgl::FinishAsyncSGIX = (vtkgl::PFNGLFINISHASYNCSGIXPROC)manager->GetProcAddress("glFinishAsyncSGIX");
    vtkgl::PollAsyncSGIX = (vtkgl::PFNGLPOLLASYNCSGIXPROC)manager->GetProcAddress("glPollAsyncSGIX");
    vtkgl::GenAsyncMarkersSGIX = (vtkgl::PFNGLGENASYNCMARKERSSGIXPROC)manager->GetProcAddress("glGenAsyncMarkersSGIX");
    vtkgl::DeleteAsyncMarkersSGIX = (vtkgl::PFNGLDELETEASYNCMARKERSSGIXPROC)manager->GetProcAddress("glDeleteAsyncMarkersSGIX");
    vtkgl::IsAsyncMarkerSGIX = (vtkgl::PFNGLISASYNCMARKERSGIXPROC)manager->GetProcAddress("glIsAsyncMarkerSGIX");
    return 1 && (vtkgl::AsyncMarkerSGIX != NULL) && (vtkgl::FinishAsyncSGIX != NULL) && (vtkgl::PollAsyncSGIX != NULL) && (vtkgl::GenAsyncMarkersSGIX != NULL) && (vtkgl::DeleteAsyncMarkersSGIX != NULL) && (vtkgl::IsAsyncMarkerSGIX != NULL);
    }
  if (strcmp(name, "GL_SGIX_async_pixel") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIX_async_histogram") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_INTEL_texture_scissor") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_INTEL_parallel_arrays") == 0)
    {
    vtkgl::VertexPointervINTEL = (vtkgl::PFNGLVERTEXPOINTERVINTELPROC)manager->GetProcAddress("glVertexPointervINTEL");
    vtkgl::NormalPointervINTEL = (vtkgl::PFNGLNORMALPOINTERVINTELPROC)manager->GetProcAddress("glNormalPointervINTEL");
    vtkgl::ColorPointervINTEL = (vtkgl::PFNGLCOLORPOINTERVINTELPROC)manager->GetProcAddress("glColorPointervINTEL");
    vtkgl::TexCoordPointervINTEL = (vtkgl::PFNGLTEXCOORDPOINTERVINTELPROC)manager->GetProcAddress("glTexCoordPointervINTEL");
    return 1 && (vtkgl::VertexPointervINTEL != NULL) && (vtkgl::NormalPointervINTEL != NULL) && (vtkgl::ColorPointervINTEL != NULL) && (vtkgl::TexCoordPointervINTEL != NULL);
    }
  if (strcmp(name, "GL_HP_occlusion_test") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_pixel_transform") == 0)
    {
    vtkgl::PixelTransformParameteriEXT = (vtkgl::PFNGLPIXELTRANSFORMPARAMETERIEXTPROC)manager->GetProcAddress("glPixelTransformParameteriEXT");
    vtkgl::PixelTransformParameterfEXT = (vtkgl::PFNGLPIXELTRANSFORMPARAMETERFEXTPROC)manager->GetProcAddress("glPixelTransformParameterfEXT");
    vtkgl::PixelTransformParameterivEXT = (vtkgl::PFNGLPIXELTRANSFORMPARAMETERIVEXTPROC)manager->GetProcAddress("glPixelTransformParameterivEXT");
    vtkgl::PixelTransformParameterfvEXT = (vtkgl::PFNGLPIXELTRANSFORMPARAMETERFVEXTPROC)manager->GetProcAddress("glPixelTransformParameterfvEXT");
    return 1 && (vtkgl::PixelTransformParameteriEXT != NULL) && (vtkgl::PixelTransformParameterfEXT != NULL) && (vtkgl::PixelTransformParameterivEXT != NULL) && (vtkgl::PixelTransformParameterfvEXT != NULL);
    }
  if (strcmp(name, "GL_EXT_pixel_transform_color_table") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_shared_texture_palette") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_separate_specular_color") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_secondary_color") == 0)
    {
    vtkgl::SecondaryColor3bEXT = (vtkgl::PFNGLSECONDARYCOLOR3BEXTPROC)manager->GetProcAddress("glSecondaryColor3bEXT");
    vtkgl::SecondaryColor3bvEXT = (vtkgl::PFNGLSECONDARYCOLOR3BVEXTPROC)manager->GetProcAddress("glSecondaryColor3bvEXT");
    vtkgl::SecondaryColor3dEXT = (vtkgl::PFNGLSECONDARYCOLOR3DEXTPROC)manager->GetProcAddress("glSecondaryColor3dEXT");
    vtkgl::SecondaryColor3dvEXT = (vtkgl::PFNGLSECONDARYCOLOR3DVEXTPROC)manager->GetProcAddress("glSecondaryColor3dvEXT");
    vtkgl::SecondaryColor3fEXT = (vtkgl::PFNGLSECONDARYCOLOR3FEXTPROC)manager->GetProcAddress("glSecondaryColor3fEXT");
    vtkgl::SecondaryColor3fvEXT = (vtkgl::PFNGLSECONDARYCOLOR3FVEXTPROC)manager->GetProcAddress("glSecondaryColor3fvEXT");
    vtkgl::SecondaryColor3iEXT = (vtkgl::PFNGLSECONDARYCOLOR3IEXTPROC)manager->GetProcAddress("glSecondaryColor3iEXT");
    vtkgl::SecondaryColor3ivEXT = (vtkgl::PFNGLSECONDARYCOLOR3IVEXTPROC)manager->GetProcAddress("glSecondaryColor3ivEXT");
    vtkgl::SecondaryColor3sEXT = (vtkgl::PFNGLSECONDARYCOLOR3SEXTPROC)manager->GetProcAddress("glSecondaryColor3sEXT");
    vtkgl::SecondaryColor3svEXT = (vtkgl::PFNGLSECONDARYCOLOR3SVEXTPROC)manager->GetProcAddress("glSecondaryColor3svEXT");
    vtkgl::SecondaryColor3ubEXT = (vtkgl::PFNGLSECONDARYCOLOR3UBEXTPROC)manager->GetProcAddress("glSecondaryColor3ubEXT");
    vtkgl::SecondaryColor3ubvEXT = (vtkgl::PFNGLSECONDARYCOLOR3UBVEXTPROC)manager->GetProcAddress("glSecondaryColor3ubvEXT");
    vtkgl::SecondaryColor3uiEXT = (vtkgl::PFNGLSECONDARYCOLOR3UIEXTPROC)manager->GetProcAddress("glSecondaryColor3uiEXT");
    vtkgl::SecondaryColor3uivEXT = (vtkgl::PFNGLSECONDARYCOLOR3UIVEXTPROC)manager->GetProcAddress("glSecondaryColor3uivEXT");
    vtkgl::SecondaryColor3usEXT = (vtkgl::PFNGLSECONDARYCOLOR3USEXTPROC)manager->GetProcAddress("glSecondaryColor3usEXT");
    vtkgl::SecondaryColor3usvEXT = (vtkgl::PFNGLSECONDARYCOLOR3USVEXTPROC)manager->GetProcAddress("glSecondaryColor3usvEXT");
    vtkgl::SecondaryColorPointerEXT = (vtkgl::PFNGLSECONDARYCOLORPOINTEREXTPROC)manager->GetProcAddress("glSecondaryColorPointerEXT");
    return 1 && (vtkgl::SecondaryColor3bEXT != NULL) && (vtkgl::SecondaryColor3bvEXT != NULL) && (vtkgl::SecondaryColor3dEXT != NULL) && (vtkgl::SecondaryColor3dvEXT != NULL) && (vtkgl::SecondaryColor3fEXT != NULL) && (vtkgl::SecondaryColor3fvEXT != NULL) && (vtkgl::SecondaryColor3iEXT != NULL) && (vtkgl::SecondaryColor3ivEXT != NULL) && (vtkgl::SecondaryColor3sEXT != NULL) && (vtkgl::SecondaryColor3svEXT != NULL) && (vtkgl::SecondaryColor3ubEXT != NULL) && (vtkgl::SecondaryColor3ubvEXT != NULL) && (vtkgl::SecondaryColor3uiEXT != NULL) && (vtkgl::SecondaryColor3uivEXT != NULL) && (vtkgl::SecondaryColor3usEXT != NULL) && (vtkgl::SecondaryColor3usvEXT != NULL) && (vtkgl::SecondaryColorPointerEXT != NULL);
    }
  if (strcmp(name, "GL_EXT_texture_perturb_normal") == 0)
    {
    vtkgl::TextureNormalEXT = (vtkgl::PFNGLTEXTURENORMALEXTPROC)manager->GetProcAddress("glTextureNormalEXT");
    return 1 && (vtkgl::TextureNormalEXT != NULL);
    }
  if (strcmp(name, "GL_EXT_multi_draw_arrays") == 0)
    {
    vtkgl::MultiDrawArraysEXT = (vtkgl::PFNGLMULTIDRAWARRAYSEXTPROC)manager->GetProcAddress("glMultiDrawArraysEXT");
    vtkgl::MultiDrawElementsEXT = (vtkgl::PFNGLMULTIDRAWELEMENTSEXTPROC)manager->GetProcAddress("glMultiDrawElementsEXT");
    return 1 && (vtkgl::MultiDrawArraysEXT != NULL) && (vtkgl::MultiDrawElementsEXT != NULL);
    }
  if (strcmp(name, "GL_EXT_fog_coord") == 0)
    {
    vtkgl::FogCoordfEXT = (vtkgl::PFNGLFOGCOORDFEXTPROC)manager->GetProcAddress("glFogCoordfEXT");
    vtkgl::FogCoordfvEXT = (vtkgl::PFNGLFOGCOORDFVEXTPROC)manager->GetProcAddress("glFogCoordfvEXT");
    vtkgl::FogCoorddEXT = (vtkgl::PFNGLFOGCOORDDEXTPROC)manager->GetProcAddress("glFogCoorddEXT");
    vtkgl::FogCoorddvEXT = (vtkgl::PFNGLFOGCOORDDVEXTPROC)manager->GetProcAddress("glFogCoorddvEXT");
    vtkgl::FogCoordPointerEXT = (vtkgl::PFNGLFOGCOORDPOINTEREXTPROC)manager->GetProcAddress("glFogCoordPointerEXT");
    return 1 && (vtkgl::FogCoordfEXT != NULL) && (vtkgl::FogCoordfvEXT != NULL) && (vtkgl::FogCoorddEXT != NULL) && (vtkgl::FogCoorddvEXT != NULL) && (vtkgl::FogCoordPointerEXT != NULL);
    }
  if (strcmp(name, "GL_REND_screen_coordinates") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_coordinate_frame") == 0)
    {
    vtkgl::Tangent3bEXT = (vtkgl::PFNGLTANGENT3BEXTPROC)manager->GetProcAddress("glTangent3bEXT");
    vtkgl::Tangent3bvEXT = (vtkgl::PFNGLTANGENT3BVEXTPROC)manager->GetProcAddress("glTangent3bvEXT");
    vtkgl::Tangent3dEXT = (vtkgl::PFNGLTANGENT3DEXTPROC)manager->GetProcAddress("glTangent3dEXT");
    vtkgl::Tangent3dvEXT = (vtkgl::PFNGLTANGENT3DVEXTPROC)manager->GetProcAddress("glTangent3dvEXT");
    vtkgl::Tangent3fEXT = (vtkgl::PFNGLTANGENT3FEXTPROC)manager->GetProcAddress("glTangent3fEXT");
    vtkgl::Tangent3fvEXT = (vtkgl::PFNGLTANGENT3FVEXTPROC)manager->GetProcAddress("glTangent3fvEXT");
    vtkgl::Tangent3iEXT = (vtkgl::PFNGLTANGENT3IEXTPROC)manager->GetProcAddress("glTangent3iEXT");
    vtkgl::Tangent3ivEXT = (vtkgl::PFNGLTANGENT3IVEXTPROC)manager->GetProcAddress("glTangent3ivEXT");
    vtkgl::Tangent3sEXT = (vtkgl::PFNGLTANGENT3SEXTPROC)manager->GetProcAddress("glTangent3sEXT");
    vtkgl::Tangent3svEXT = (vtkgl::PFNGLTANGENT3SVEXTPROC)manager->GetProcAddress("glTangent3svEXT");
    vtkgl::Binormal3bEXT = (vtkgl::PFNGLBINORMAL3BEXTPROC)manager->GetProcAddress("glBinormal3bEXT");
    vtkgl::Binormal3bvEXT = (vtkgl::PFNGLBINORMAL3BVEXTPROC)manager->GetProcAddress("glBinormal3bvEXT");
    vtkgl::Binormal3dEXT = (vtkgl::PFNGLBINORMAL3DEXTPROC)manager->GetProcAddress("glBinormal3dEXT");
    vtkgl::Binormal3dvEXT = (vtkgl::PFNGLBINORMAL3DVEXTPROC)manager->GetProcAddress("glBinormal3dvEXT");
    vtkgl::Binormal3fEXT = (vtkgl::PFNGLBINORMAL3FEXTPROC)manager->GetProcAddress("glBinormal3fEXT");
    vtkgl::Binormal3fvEXT = (vtkgl::PFNGLBINORMAL3FVEXTPROC)manager->GetProcAddress("glBinormal3fvEXT");
    vtkgl::Binormal3iEXT = (vtkgl::PFNGLBINORMAL3IEXTPROC)manager->GetProcAddress("glBinormal3iEXT");
    vtkgl::Binormal3ivEXT = (vtkgl::PFNGLBINORMAL3IVEXTPROC)manager->GetProcAddress("glBinormal3ivEXT");
    vtkgl::Binormal3sEXT = (vtkgl::PFNGLBINORMAL3SEXTPROC)manager->GetProcAddress("glBinormal3sEXT");
    vtkgl::Binormal3svEXT = (vtkgl::PFNGLBINORMAL3SVEXTPROC)manager->GetProcAddress("glBinormal3svEXT");
    vtkgl::TangentPointerEXT = (vtkgl::PFNGLTANGENTPOINTEREXTPROC)manager->GetProcAddress("glTangentPointerEXT");
    vtkgl::BinormalPointerEXT = (vtkgl::PFNGLBINORMALPOINTEREXTPROC)manager->GetProcAddress("glBinormalPointerEXT");
    return 1 && (vtkgl::Tangent3bEXT != NULL) && (vtkgl::Tangent3bvEXT != NULL) && (vtkgl::Tangent3dEXT != NULL) && (vtkgl::Tangent3dvEXT != NULL) && (vtkgl::Tangent3fEXT != NULL) && (vtkgl::Tangent3fvEXT != NULL) && (vtkgl::Tangent3iEXT != NULL) && (vtkgl::Tangent3ivEXT != NULL) && (vtkgl::Tangent3sEXT != NULL) && (vtkgl::Tangent3svEXT != NULL) && (vtkgl::Binormal3bEXT != NULL) && (vtkgl::Binormal3bvEXT != NULL) && (vtkgl::Binormal3dEXT != NULL) && (vtkgl::Binormal3dvEXT != NULL) && (vtkgl::Binormal3fEXT != NULL) && (vtkgl::Binormal3fvEXT != NULL) && (vtkgl::Binormal3iEXT != NULL) && (vtkgl::Binormal3ivEXT != NULL) && (vtkgl::Binormal3sEXT != NULL) && (vtkgl::Binormal3svEXT != NULL) && (vtkgl::TangentPointerEXT != NULL) && (vtkgl::BinormalPointerEXT != NULL);
    }
  if (strcmp(name, "GL_EXT_texture_env_combine") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_APPLE_specular_vector") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_APPLE_transform_hint") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIX_fog_scale") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SUNX_constant_data") == 0)
    {
    vtkgl::FinishTextureSUNX = (vtkgl::PFNGLFINISHTEXTURESUNXPROC)manager->GetProcAddress("glFinishTextureSUNX");
    return 1 && (vtkgl::FinishTextureSUNX != NULL);
    }
  if (strcmp(name, "GL_SUN_global_alpha") == 0)
    {
    vtkgl::GlobalAlphaFactorbSUN = (vtkgl::PFNGLGLOBALALPHAFACTORBSUNPROC)manager->GetProcAddress("glGlobalAlphaFactorbSUN");
    vtkgl::GlobalAlphaFactorsSUN = (vtkgl::PFNGLGLOBALALPHAFACTORSSUNPROC)manager->GetProcAddress("glGlobalAlphaFactorsSUN");
    vtkgl::GlobalAlphaFactoriSUN = (vtkgl::PFNGLGLOBALALPHAFACTORISUNPROC)manager->GetProcAddress("glGlobalAlphaFactoriSUN");
    vtkgl::GlobalAlphaFactorfSUN = (vtkgl::PFNGLGLOBALALPHAFACTORFSUNPROC)manager->GetProcAddress("glGlobalAlphaFactorfSUN");
    vtkgl::GlobalAlphaFactordSUN = (vtkgl::PFNGLGLOBALALPHAFACTORDSUNPROC)manager->GetProcAddress("glGlobalAlphaFactordSUN");
    vtkgl::GlobalAlphaFactorubSUN = (vtkgl::PFNGLGLOBALALPHAFACTORUBSUNPROC)manager->GetProcAddress("glGlobalAlphaFactorubSUN");
    vtkgl::GlobalAlphaFactorusSUN = (vtkgl::PFNGLGLOBALALPHAFACTORUSSUNPROC)manager->GetProcAddress("glGlobalAlphaFactorusSUN");
    vtkgl::GlobalAlphaFactoruiSUN = (vtkgl::PFNGLGLOBALALPHAFACTORUISUNPROC)manager->GetProcAddress("glGlobalAlphaFactoruiSUN");
    return 1 && (vtkgl::GlobalAlphaFactorbSUN != NULL) && (vtkgl::GlobalAlphaFactorsSUN != NULL) && (vtkgl::GlobalAlphaFactoriSUN != NULL) && (vtkgl::GlobalAlphaFactorfSUN != NULL) && (vtkgl::GlobalAlphaFactordSUN != NULL) && (vtkgl::GlobalAlphaFactorubSUN != NULL) && (vtkgl::GlobalAlphaFactorusSUN != NULL) && (vtkgl::GlobalAlphaFactoruiSUN != NULL);
    }
  if (strcmp(name, "GL_SUN_triangle_list") == 0)
    {
    vtkgl::ReplacementCodeuiSUN = (vtkgl::PFNGLREPLACEMENTCODEUISUNPROC)manager->GetProcAddress("glReplacementCodeuiSUN");
    vtkgl::ReplacementCodeusSUN = (vtkgl::PFNGLREPLACEMENTCODEUSSUNPROC)manager->GetProcAddress("glReplacementCodeusSUN");
    vtkgl::ReplacementCodeubSUN = (vtkgl::PFNGLREPLACEMENTCODEUBSUNPROC)manager->GetProcAddress("glReplacementCodeubSUN");
    vtkgl::ReplacementCodeuivSUN = (vtkgl::PFNGLREPLACEMENTCODEUIVSUNPROC)manager->GetProcAddress("glReplacementCodeuivSUN");
    vtkgl::ReplacementCodeusvSUN = (vtkgl::PFNGLREPLACEMENTCODEUSVSUNPROC)manager->GetProcAddress("glReplacementCodeusvSUN");
    vtkgl::ReplacementCodeubvSUN = (vtkgl::PFNGLREPLACEMENTCODEUBVSUNPROC)manager->GetProcAddress("glReplacementCodeubvSUN");
    vtkgl::ReplacementCodePointerSUN = (vtkgl::PFNGLREPLACEMENTCODEPOINTERSUNPROC)manager->GetProcAddress("glReplacementCodePointerSUN");
    return 1 && (vtkgl::ReplacementCodeuiSUN != NULL) && (vtkgl::ReplacementCodeusSUN != NULL) && (vtkgl::ReplacementCodeubSUN != NULL) && (vtkgl::ReplacementCodeuivSUN != NULL) && (vtkgl::ReplacementCodeusvSUN != NULL) && (vtkgl::ReplacementCodeubvSUN != NULL) && (vtkgl::ReplacementCodePointerSUN != NULL);
    }
  if (strcmp(name, "GL_SUN_vertex") == 0)
    {
    vtkgl::Color4ubVertex2fSUN = (vtkgl::PFNGLCOLOR4UBVERTEX2FSUNPROC)manager->GetProcAddress("glColor4ubVertex2fSUN");
    vtkgl::Color4ubVertex2fvSUN = (vtkgl::PFNGLCOLOR4UBVERTEX2FVSUNPROC)manager->GetProcAddress("glColor4ubVertex2fvSUN");
    vtkgl::Color4ubVertex3fSUN = (vtkgl::PFNGLCOLOR4UBVERTEX3FSUNPROC)manager->GetProcAddress("glColor4ubVertex3fSUN");
    vtkgl::Color4ubVertex3fvSUN = (vtkgl::PFNGLCOLOR4UBVERTEX3FVSUNPROC)manager->GetProcAddress("glColor4ubVertex3fvSUN");
    vtkgl::Color3fVertex3fSUN = (vtkgl::PFNGLCOLOR3FVERTEX3FSUNPROC)manager->GetProcAddress("glColor3fVertex3fSUN");
    vtkgl::Color3fVertex3fvSUN = (vtkgl::PFNGLCOLOR3FVERTEX3FVSUNPROC)manager->GetProcAddress("glColor3fVertex3fvSUN");
    vtkgl::Normal3fVertex3fSUN = (vtkgl::PFNGLNORMAL3FVERTEX3FSUNPROC)manager->GetProcAddress("glNormal3fVertex3fSUN");
    vtkgl::Normal3fVertex3fvSUN = (vtkgl::PFNGLNORMAL3FVERTEX3FVSUNPROC)manager->GetProcAddress("glNormal3fVertex3fvSUN");
    vtkgl::Color4fNormal3fVertex3fSUN = (vtkgl::PFNGLCOLOR4FNORMAL3FVERTEX3FSUNPROC)manager->GetProcAddress("glColor4fNormal3fVertex3fSUN");
    vtkgl::Color4fNormal3fVertex3fvSUN = (vtkgl::PFNGLCOLOR4FNORMAL3FVERTEX3FVSUNPROC)manager->GetProcAddress("glColor4fNormal3fVertex3fvSUN");
    vtkgl::TexCoord2fVertex3fSUN = (vtkgl::PFNGLTEXCOORD2FVERTEX3FSUNPROC)manager->GetProcAddress("glTexCoord2fVertex3fSUN");
    vtkgl::TexCoord2fVertex3fvSUN = (vtkgl::PFNGLTEXCOORD2FVERTEX3FVSUNPROC)manager->GetProcAddress("glTexCoord2fVertex3fvSUN");
    vtkgl::TexCoord4fVertex4fSUN = (vtkgl::PFNGLTEXCOORD4FVERTEX4FSUNPROC)manager->GetProcAddress("glTexCoord4fVertex4fSUN");
    vtkgl::TexCoord4fVertex4fvSUN = (vtkgl::PFNGLTEXCOORD4FVERTEX4FVSUNPROC)manager->GetProcAddress("glTexCoord4fVertex4fvSUN");
    vtkgl::TexCoord2fColor4ubVertex3fSUN = (vtkgl::PFNGLTEXCOORD2FCOLOR4UBVERTEX3FSUNPROC)manager->GetProcAddress("glTexCoord2fColor4ubVertex3fSUN");
    vtkgl::TexCoord2fColor4ubVertex3fvSUN = (vtkgl::PFNGLTEXCOORD2FCOLOR4UBVERTEX3FVSUNPROC)manager->GetProcAddress("glTexCoord2fColor4ubVertex3fvSUN");
    vtkgl::TexCoord2fColor3fVertex3fSUN = (vtkgl::PFNGLTEXCOORD2FCOLOR3FVERTEX3FSUNPROC)manager->GetProcAddress("glTexCoord2fColor3fVertex3fSUN");
    vtkgl::TexCoord2fColor3fVertex3fvSUN = (vtkgl::PFNGLTEXCOORD2FCOLOR3FVERTEX3FVSUNPROC)manager->GetProcAddress("glTexCoord2fColor3fVertex3fvSUN");
    vtkgl::TexCoord2fNormal3fVertex3fSUN = (vtkgl::PFNGLTEXCOORD2FNORMAL3FVERTEX3FSUNPROC)manager->GetProcAddress("glTexCoord2fNormal3fVertex3fSUN");
    vtkgl::TexCoord2fNormal3fVertex3fvSUN = (vtkgl::PFNGLTEXCOORD2FNORMAL3FVERTEX3FVSUNPROC)manager->GetProcAddress("glTexCoord2fNormal3fVertex3fvSUN");
    vtkgl::TexCoord2fColor4fNormal3fVertex3fSUN = (vtkgl::PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC)manager->GetProcAddress("glTexCoord2fColor4fNormal3fVertex3fSUN");
    vtkgl::TexCoord2fColor4fNormal3fVertex3fvSUN = (vtkgl::PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC)manager->GetProcAddress("glTexCoord2fColor4fNormal3fVertex3fvSUN");
    vtkgl::TexCoord4fColor4fNormal3fVertex4fSUN = (vtkgl::PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FSUNPROC)manager->GetProcAddress("glTexCoord4fColor4fNormal3fVertex4fSUN");
    vtkgl::TexCoord4fColor4fNormal3fVertex4fvSUN = (vtkgl::PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FVSUNPROC)manager->GetProcAddress("glTexCoord4fColor4fNormal3fVertex4fvSUN");
    vtkgl::ReplacementCodeuiVertex3fSUN = (vtkgl::PFNGLREPLACEMENTCODEUIVERTEX3FSUNPROC)manager->GetProcAddress("glReplacementCodeuiVertex3fSUN");
    vtkgl::ReplacementCodeuiVertex3fvSUN = (vtkgl::PFNGLREPLACEMENTCODEUIVERTEX3FVSUNPROC)manager->GetProcAddress("glReplacementCodeuiVertex3fvSUN");
    vtkgl::ReplacementCodeuiColor4ubVertex3fSUN = (vtkgl::PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FSUNPROC)manager->GetProcAddress("glReplacementCodeuiColor4ubVertex3fSUN");
    vtkgl::ReplacementCodeuiColor4ubVertex3fvSUN = (vtkgl::PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FVSUNPROC)manager->GetProcAddress("glReplacementCodeuiColor4ubVertex3fvSUN");
    vtkgl::ReplacementCodeuiColor3fVertex3fSUN = (vtkgl::PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FSUNPROC)manager->GetProcAddress("glReplacementCodeuiColor3fVertex3fSUN");
    vtkgl::ReplacementCodeuiColor3fVertex3fvSUN = (vtkgl::PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FVSUNPROC)manager->GetProcAddress("glReplacementCodeuiColor3fVertex3fvSUN");
    vtkgl::ReplacementCodeuiNormal3fVertex3fSUN = (vtkgl::PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FSUNPROC)manager->GetProcAddress("glReplacementCodeuiNormal3fVertex3fSUN");
    vtkgl::ReplacementCodeuiNormal3fVertex3fvSUN = (vtkgl::PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FVSUNPROC)manager->GetProcAddress("glReplacementCodeuiNormal3fVertex3fvSUN");
    vtkgl::ReplacementCodeuiColor4fNormal3fVertex3fSUN = (vtkgl::PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FSUNPROC)manager->GetProcAddress("glReplacementCodeuiColor4fNormal3fVertex3fSUN");
    vtkgl::ReplacementCodeuiColor4fNormal3fVertex3fvSUN = (vtkgl::PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FVSUNPROC)manager->GetProcAddress("glReplacementCodeuiColor4fNormal3fVertex3fvSUN");
    vtkgl::ReplacementCodeuiTexCoord2fVertex3fSUN = (vtkgl::PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FSUNPROC)manager->GetProcAddress("glReplacementCodeuiTexCoord2fVertex3fSUN");
    vtkgl::ReplacementCodeuiTexCoord2fVertex3fvSUN = (vtkgl::PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FVSUNPROC)manager->GetProcAddress("glReplacementCodeuiTexCoord2fVertex3fvSUN");
    vtkgl::ReplacementCodeuiTexCoord2fNormal3fVertex3fSUN = (vtkgl::PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FSUNPROC)manager->GetProcAddress("glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN");
    vtkgl::ReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN = (vtkgl::PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FVSUNPROC)manager->GetProcAddress("glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN");
    vtkgl::ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN = (vtkgl::PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC)manager->GetProcAddress("glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN");
    vtkgl::ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN = (vtkgl::PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC)manager->GetProcAddress("glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN");
    return 1 && (vtkgl::Color4ubVertex2fSUN != NULL) && (vtkgl::Color4ubVertex2fvSUN != NULL) && (vtkgl::Color4ubVertex3fSUN != NULL) && (vtkgl::Color4ubVertex3fvSUN != NULL) && (vtkgl::Color3fVertex3fSUN != NULL) && (vtkgl::Color3fVertex3fvSUN != NULL) && (vtkgl::Normal3fVertex3fSUN != NULL) && (vtkgl::Normal3fVertex3fvSUN != NULL) && (vtkgl::Color4fNormal3fVertex3fSUN != NULL) && (vtkgl::Color4fNormal3fVertex3fvSUN != NULL) && (vtkgl::TexCoord2fVertex3fSUN != NULL) && (vtkgl::TexCoord2fVertex3fvSUN != NULL) && (vtkgl::TexCoord4fVertex4fSUN != NULL) && (vtkgl::TexCoord4fVertex4fvSUN != NULL) && (vtkgl::TexCoord2fColor4ubVertex3fSUN != NULL) && (vtkgl::TexCoord2fColor4ubVertex3fvSUN != NULL) && (vtkgl::TexCoord2fColor3fVertex3fSUN != NULL) && (vtkgl::TexCoord2fColor3fVertex3fvSUN != NULL) && (vtkgl::TexCoord2fNormal3fVertex3fSUN != NULL) && (vtkgl::TexCoord2fNormal3fVertex3fvSUN != NULL) && (vtkgl::TexCoord2fColor4fNormal3fVertex3fSUN != NULL) && (vtkgl::TexCoord2fColor4fNormal3fVertex3fvSUN != NULL) && (vtkgl::TexCoord4fColor4fNormal3fVertex4fSUN != NULL) && (vtkgl::TexCoord4fColor4fNormal3fVertex4fvSUN != NULL) && (vtkgl::ReplacementCodeuiVertex3fSUN != NULL) && (vtkgl::ReplacementCodeuiVertex3fvSUN != NULL) && (vtkgl::ReplacementCodeuiColor4ubVertex3fSUN != NULL) && (vtkgl::ReplacementCodeuiColor4ubVertex3fvSUN != NULL) && (vtkgl::ReplacementCodeuiColor3fVertex3fSUN != NULL) && (vtkgl::ReplacementCodeuiColor3fVertex3fvSUN != NULL) && (vtkgl::ReplacementCodeuiNormal3fVertex3fSUN != NULL) && (vtkgl::ReplacementCodeuiNormal3fVertex3fvSUN != NULL) && (vtkgl::ReplacementCodeuiColor4fNormal3fVertex3fSUN != NULL) && (vtkgl::ReplacementCodeuiColor4fNormal3fVertex3fvSUN != NULL) && (vtkgl::ReplacementCodeuiTexCoord2fVertex3fSUN != NULL) && (vtkgl::ReplacementCodeuiTexCoord2fVertex3fvSUN != NULL) && (vtkgl::ReplacementCodeuiTexCoord2fNormal3fVertex3fSUN != NULL) && (vtkgl::ReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN != NULL) && (vtkgl::ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN != NULL) && (vtkgl::ReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN != NULL);
    }
  if (strcmp(name, "GL_EXT_blend_func_separate") == 0)
    {
    vtkgl::BlendFuncSeparateEXT = (vtkgl::PFNGLBLENDFUNCSEPARATEEXTPROC)manager->GetProcAddress("glBlendFuncSeparateEXT");
    return 1 && (vtkgl::BlendFuncSeparateEXT != NULL);
    }
  if (strcmp(name, "GL_INGR_color_clamp") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_INGR_interlace_read") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_stencil_wrap") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_422_pixels") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_texgen_reflection") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_texture_cube_map") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SUN_convolution_border_modes") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_texture_env_add") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_texture_lod_bias") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_texture_filter_anisotropic") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_vertex_weighting") == 0)
    {
    vtkgl::VertexWeightfEXT = (vtkgl::PFNGLVERTEXWEIGHTFEXTPROC)manager->GetProcAddress("glVertexWeightfEXT");
    vtkgl::VertexWeightfvEXT = (vtkgl::PFNGLVERTEXWEIGHTFVEXTPROC)manager->GetProcAddress("glVertexWeightfvEXT");
    vtkgl::VertexWeightPointerEXT = (vtkgl::PFNGLVERTEXWEIGHTPOINTEREXTPROC)manager->GetProcAddress("glVertexWeightPointerEXT");
    return 1 && (vtkgl::VertexWeightfEXT != NULL) && (vtkgl::VertexWeightfvEXT != NULL) && (vtkgl::VertexWeightPointerEXT != NULL);
    }
  if (strcmp(name, "GL_NV_light_max_exponent") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_vertex_array_range") == 0)
    {
    vtkgl::FlushVertexArrayRangeNV = (vtkgl::PFNGLFLUSHVERTEXARRAYRANGENVPROC)manager->GetProcAddress("glFlushVertexArrayRangeNV");
    vtkgl::VertexArrayRangeNV = (vtkgl::PFNGLVERTEXARRAYRANGENVPROC)manager->GetProcAddress("glVertexArrayRangeNV");
    return 1 && (vtkgl::FlushVertexArrayRangeNV != NULL) && (vtkgl::VertexArrayRangeNV != NULL);
    }
  if (strcmp(name, "GL_NV_register_combiners") == 0)
    {
    vtkgl::CombinerParameterfvNV = (vtkgl::PFNGLCOMBINERPARAMETERFVNVPROC)manager->GetProcAddress("glCombinerParameterfvNV");
    vtkgl::CombinerParameterfNV = (vtkgl::PFNGLCOMBINERPARAMETERFNVPROC)manager->GetProcAddress("glCombinerParameterfNV");
    vtkgl::CombinerParameterivNV = (vtkgl::PFNGLCOMBINERPARAMETERIVNVPROC)manager->GetProcAddress("glCombinerParameterivNV");
    vtkgl::CombinerParameteriNV = (vtkgl::PFNGLCOMBINERPARAMETERINVPROC)manager->GetProcAddress("glCombinerParameteriNV");
    vtkgl::CombinerInputNV = (vtkgl::PFNGLCOMBINERINPUTNVPROC)manager->GetProcAddress("glCombinerInputNV");
    vtkgl::CombinerOutputNV = (vtkgl::PFNGLCOMBINEROUTPUTNVPROC)manager->GetProcAddress("glCombinerOutputNV");
    vtkgl::FinalCombinerInputNV = (vtkgl::PFNGLFINALCOMBINERINPUTNVPROC)manager->GetProcAddress("glFinalCombinerInputNV");
    vtkgl::GetCombinerInputParameterfvNV = (vtkgl::PFNGLGETCOMBINERINPUTPARAMETERFVNVPROC)manager->GetProcAddress("glGetCombinerInputParameterfvNV");
    vtkgl::GetCombinerInputParameterivNV = (vtkgl::PFNGLGETCOMBINERINPUTPARAMETERIVNVPROC)manager->GetProcAddress("glGetCombinerInputParameterivNV");
    vtkgl::GetCombinerOutputParameterfvNV = (vtkgl::PFNGLGETCOMBINEROUTPUTPARAMETERFVNVPROC)manager->GetProcAddress("glGetCombinerOutputParameterfvNV");
    vtkgl::GetCombinerOutputParameterivNV = (vtkgl::PFNGLGETCOMBINEROUTPUTPARAMETERIVNVPROC)manager->GetProcAddress("glGetCombinerOutputParameterivNV");
    vtkgl::GetFinalCombinerInputParameterfvNV = (vtkgl::PFNGLGETFINALCOMBINERINPUTPARAMETERFVNVPROC)manager->GetProcAddress("glGetFinalCombinerInputParameterfvNV");
    vtkgl::GetFinalCombinerInputParameterivNV = (vtkgl::PFNGLGETFINALCOMBINERINPUTPARAMETERIVNVPROC)manager->GetProcAddress("glGetFinalCombinerInputParameterivNV");
    return 1 && (vtkgl::CombinerParameterfvNV != NULL) && (vtkgl::CombinerParameterfNV != NULL) && (vtkgl::CombinerParameterivNV != NULL) && (vtkgl::CombinerParameteriNV != NULL) && (vtkgl::CombinerInputNV != NULL) && (vtkgl::CombinerOutputNV != NULL) && (vtkgl::FinalCombinerInputNV != NULL) && (vtkgl::GetCombinerInputParameterfvNV != NULL) && (vtkgl::GetCombinerInputParameterivNV != NULL) && (vtkgl::GetCombinerOutputParameterfvNV != NULL) && (vtkgl::GetCombinerOutputParameterivNV != NULL) && (vtkgl::GetFinalCombinerInputParameterfvNV != NULL) && (vtkgl::GetFinalCombinerInputParameterivNV != NULL);
    }
  if (strcmp(name, "GL_NV_fog_distance") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_texgen_emboss") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_blend_square") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_texture_env_combine4") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_MESA_resize_buffers") == 0)
    {
    vtkgl::ResizeBuffersMESA = (vtkgl::PFNGLRESIZEBUFFERSMESAPROC)manager->GetProcAddress("glResizeBuffersMESA");
    return 1 && (vtkgl::ResizeBuffersMESA != NULL);
    }
  if (strcmp(name, "GL_MESA_window_pos") == 0)
    {
    vtkgl::WindowPos2dMESA = (vtkgl::PFNGLWINDOWPOS2DMESAPROC)manager->GetProcAddress("glWindowPos2dMESA");
    vtkgl::WindowPos2dvMESA = (vtkgl::PFNGLWINDOWPOS2DVMESAPROC)manager->GetProcAddress("glWindowPos2dvMESA");
    vtkgl::WindowPos2fMESA = (vtkgl::PFNGLWINDOWPOS2FMESAPROC)manager->GetProcAddress("glWindowPos2fMESA");
    vtkgl::WindowPos2fvMESA = (vtkgl::PFNGLWINDOWPOS2FVMESAPROC)manager->GetProcAddress("glWindowPos2fvMESA");
    vtkgl::WindowPos2iMESA = (vtkgl::PFNGLWINDOWPOS2IMESAPROC)manager->GetProcAddress("glWindowPos2iMESA");
    vtkgl::WindowPos2ivMESA = (vtkgl::PFNGLWINDOWPOS2IVMESAPROC)manager->GetProcAddress("glWindowPos2ivMESA");
    vtkgl::WindowPos2sMESA = (vtkgl::PFNGLWINDOWPOS2SMESAPROC)manager->GetProcAddress("glWindowPos2sMESA");
    vtkgl::WindowPos2svMESA = (vtkgl::PFNGLWINDOWPOS2SVMESAPROC)manager->GetProcAddress("glWindowPos2svMESA");
    vtkgl::WindowPos3dMESA = (vtkgl::PFNGLWINDOWPOS3DMESAPROC)manager->GetProcAddress("glWindowPos3dMESA");
    vtkgl::WindowPos3dvMESA = (vtkgl::PFNGLWINDOWPOS3DVMESAPROC)manager->GetProcAddress("glWindowPos3dvMESA");
    vtkgl::WindowPos3fMESA = (vtkgl::PFNGLWINDOWPOS3FMESAPROC)manager->GetProcAddress("glWindowPos3fMESA");
    vtkgl::WindowPos3fvMESA = (vtkgl::PFNGLWINDOWPOS3FVMESAPROC)manager->GetProcAddress("glWindowPos3fvMESA");
    vtkgl::WindowPos3iMESA = (vtkgl::PFNGLWINDOWPOS3IMESAPROC)manager->GetProcAddress("glWindowPos3iMESA");
    vtkgl::WindowPos3ivMESA = (vtkgl::PFNGLWINDOWPOS3IVMESAPROC)manager->GetProcAddress("glWindowPos3ivMESA");
    vtkgl::WindowPos3sMESA = (vtkgl::PFNGLWINDOWPOS3SMESAPROC)manager->GetProcAddress("glWindowPos3sMESA");
    vtkgl::WindowPos3svMESA = (vtkgl::PFNGLWINDOWPOS3SVMESAPROC)manager->GetProcAddress("glWindowPos3svMESA");
    vtkgl::WindowPos4dMESA = (vtkgl::PFNGLWINDOWPOS4DMESAPROC)manager->GetProcAddress("glWindowPos4dMESA");
    vtkgl::WindowPos4dvMESA = (vtkgl::PFNGLWINDOWPOS4DVMESAPROC)manager->GetProcAddress("glWindowPos4dvMESA");
    vtkgl::WindowPos4fMESA = (vtkgl::PFNGLWINDOWPOS4FMESAPROC)manager->GetProcAddress("glWindowPos4fMESA");
    vtkgl::WindowPos4fvMESA = (vtkgl::PFNGLWINDOWPOS4FVMESAPROC)manager->GetProcAddress("glWindowPos4fvMESA");
    vtkgl::WindowPos4iMESA = (vtkgl::PFNGLWINDOWPOS4IMESAPROC)manager->GetProcAddress("glWindowPos4iMESA");
    vtkgl::WindowPos4ivMESA = (vtkgl::PFNGLWINDOWPOS4IVMESAPROC)manager->GetProcAddress("glWindowPos4ivMESA");
    vtkgl::WindowPos4sMESA = (vtkgl::PFNGLWINDOWPOS4SMESAPROC)manager->GetProcAddress("glWindowPos4sMESA");
    vtkgl::WindowPos4svMESA = (vtkgl::PFNGLWINDOWPOS4SVMESAPROC)manager->GetProcAddress("glWindowPos4svMESA");
    return 1 && (vtkgl::WindowPos2dMESA != NULL) && (vtkgl::WindowPos2dvMESA != NULL) && (vtkgl::WindowPos2fMESA != NULL) && (vtkgl::WindowPos2fvMESA != NULL) && (vtkgl::WindowPos2iMESA != NULL) && (vtkgl::WindowPos2ivMESA != NULL) && (vtkgl::WindowPos2sMESA != NULL) && (vtkgl::WindowPos2svMESA != NULL) && (vtkgl::WindowPos3dMESA != NULL) && (vtkgl::WindowPos3dvMESA != NULL) && (vtkgl::WindowPos3fMESA != NULL) && (vtkgl::WindowPos3fvMESA != NULL) && (vtkgl::WindowPos3iMESA != NULL) && (vtkgl::WindowPos3ivMESA != NULL) && (vtkgl::WindowPos3sMESA != NULL) && (vtkgl::WindowPos3svMESA != NULL) && (vtkgl::WindowPos4dMESA != NULL) && (vtkgl::WindowPos4dvMESA != NULL) && (vtkgl::WindowPos4fMESA != NULL) && (vtkgl::WindowPos4fvMESA != NULL) && (vtkgl::WindowPos4iMESA != NULL) && (vtkgl::WindowPos4ivMESA != NULL) && (vtkgl::WindowPos4sMESA != NULL) && (vtkgl::WindowPos4svMESA != NULL);
    }
  if (strcmp(name, "GL_EXT_texture_compression_s3tc") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_IBM_cull_vertex") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_IBM_multimode_draw_arrays") == 0)
    {
    vtkgl::MultiModeDrawArraysIBM = (vtkgl::PFNGLMULTIMODEDRAWARRAYSIBMPROC)manager->GetProcAddress("glMultiModeDrawArraysIBM");
    vtkgl::MultiModeDrawElementsIBM = (vtkgl::PFNGLMULTIMODEDRAWELEMENTSIBMPROC)manager->GetProcAddress("glMultiModeDrawElementsIBM");
    return 1 && (vtkgl::MultiModeDrawArraysIBM != NULL) && (vtkgl::MultiModeDrawElementsIBM != NULL);
    }
  if (strcmp(name, "GL_IBM_vertex_array_lists") == 0)
    {
    vtkgl::ColorPointerListIBM = (vtkgl::PFNGLCOLORPOINTERLISTIBMPROC)manager->GetProcAddress("glColorPointerListIBM");
    vtkgl::SecondaryColorPointerListIBM = (vtkgl::PFNGLSECONDARYCOLORPOINTERLISTIBMPROC)manager->GetProcAddress("glSecondaryColorPointerListIBM");
    vtkgl::EdgeFlagPointerListIBM = (vtkgl::PFNGLEDGEFLAGPOINTERLISTIBMPROC)manager->GetProcAddress("glEdgeFlagPointerListIBM");
    vtkgl::FogCoordPointerListIBM = (vtkgl::PFNGLFOGCOORDPOINTERLISTIBMPROC)manager->GetProcAddress("glFogCoordPointerListIBM");
    vtkgl::IndexPointerListIBM = (vtkgl::PFNGLINDEXPOINTERLISTIBMPROC)manager->GetProcAddress("glIndexPointerListIBM");
    vtkgl::NormalPointerListIBM = (vtkgl::PFNGLNORMALPOINTERLISTIBMPROC)manager->GetProcAddress("glNormalPointerListIBM");
    vtkgl::TexCoordPointerListIBM = (vtkgl::PFNGLTEXCOORDPOINTERLISTIBMPROC)manager->GetProcAddress("glTexCoordPointerListIBM");
    vtkgl::VertexPointerListIBM = (vtkgl::PFNGLVERTEXPOINTERLISTIBMPROC)manager->GetProcAddress("glVertexPointerListIBM");
    return 1 && (vtkgl::ColorPointerListIBM != NULL) && (vtkgl::SecondaryColorPointerListIBM != NULL) && (vtkgl::EdgeFlagPointerListIBM != NULL) && (vtkgl::FogCoordPointerListIBM != NULL) && (vtkgl::IndexPointerListIBM != NULL) && (vtkgl::NormalPointerListIBM != NULL) && (vtkgl::TexCoordPointerListIBM != NULL) && (vtkgl::VertexPointerListIBM != NULL);
    }
  if (strcmp(name, "GL_SGIX_subsample") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIX_ycrcb_subsample") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIX_ycrcba") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGI_depth_pass_instrument") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_3DFX_texture_compression_FXT1") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_3DFX_multisample") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_3DFX_tbuffer") == 0)
    {
    vtkgl::TbufferMask3DFX = (vtkgl::PFNGLTBUFFERMASK3DFXPROC)manager->GetProcAddress("glTbufferMask3DFX");
    return 1 && (vtkgl::TbufferMask3DFX != NULL);
    }
  if (strcmp(name, "GL_EXT_multisample") == 0)
    {
    vtkgl::SampleMaskEXT = (vtkgl::PFNGLSAMPLEMASKEXTPROC)manager->GetProcAddress("glSampleMaskEXT");
    vtkgl::SamplePatternEXT = (vtkgl::PFNGLSAMPLEPATTERNEXTPROC)manager->GetProcAddress("glSamplePatternEXT");
    return 1 && (vtkgl::SampleMaskEXT != NULL) && (vtkgl::SamplePatternEXT != NULL);
    }
  if (strcmp(name, "GL_SGIX_vertex_preclip") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIX_convolution_accuracy") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIX_resample") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIS_point_line_texgen") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIS_texture_color_mask") == 0)
    {
    vtkgl::TextureColorMaskSGIS = (vtkgl::PFNGLTEXTURECOLORMASKSGISPROC)manager->GetProcAddress("glTextureColorMaskSGIS");
    return 1 && (vtkgl::TextureColorMaskSGIS != NULL);
    }
  if (strcmp(name, "GL_EXT_texture_env_dot3") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ATI_texture_mirror_once") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_fence") == 0)
    {
    vtkgl::DeleteFencesNV = (vtkgl::PFNGLDELETEFENCESNVPROC)manager->GetProcAddress("glDeleteFencesNV");
    vtkgl::GenFencesNV = (vtkgl::PFNGLGENFENCESNVPROC)manager->GetProcAddress("glGenFencesNV");
    vtkgl::IsFenceNV = (vtkgl::PFNGLISFENCENVPROC)manager->GetProcAddress("glIsFenceNV");
    vtkgl::TestFenceNV = (vtkgl::PFNGLTESTFENCENVPROC)manager->GetProcAddress("glTestFenceNV");
    vtkgl::GetFenceivNV = (vtkgl::PFNGLGETFENCEIVNVPROC)manager->GetProcAddress("glGetFenceivNV");
    vtkgl::FinishFenceNV = (vtkgl::PFNGLFINISHFENCENVPROC)manager->GetProcAddress("glFinishFenceNV");
    vtkgl::SetFenceNV = (vtkgl::PFNGLSETFENCENVPROC)manager->GetProcAddress("glSetFenceNV");
    return 1 && (vtkgl::DeleteFencesNV != NULL) && (vtkgl::GenFencesNV != NULL) && (vtkgl::IsFenceNV != NULL) && (vtkgl::TestFenceNV != NULL) && (vtkgl::GetFenceivNV != NULL) && (vtkgl::FinishFenceNV != NULL) && (vtkgl::SetFenceNV != NULL);
    }
  if (strcmp(name, "GL_IBM_texture_mirrored_repeat") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_evaluators") == 0)
    {
    vtkgl::MapControlPointsNV = (vtkgl::PFNGLMAPCONTROLPOINTSNVPROC)manager->GetProcAddress("glMapControlPointsNV");
    vtkgl::MapParameterivNV = (vtkgl::PFNGLMAPPARAMETERIVNVPROC)manager->GetProcAddress("glMapParameterivNV");
    vtkgl::MapParameterfvNV = (vtkgl::PFNGLMAPPARAMETERFVNVPROC)manager->GetProcAddress("glMapParameterfvNV");
    vtkgl::GetMapControlPointsNV = (vtkgl::PFNGLGETMAPCONTROLPOINTSNVPROC)manager->GetProcAddress("glGetMapControlPointsNV");
    vtkgl::GetMapParameterivNV = (vtkgl::PFNGLGETMAPPARAMETERIVNVPROC)manager->GetProcAddress("glGetMapParameterivNV");
    vtkgl::GetMapParameterfvNV = (vtkgl::PFNGLGETMAPPARAMETERFVNVPROC)manager->GetProcAddress("glGetMapParameterfvNV");
    vtkgl::GetMapAttribParameterivNV = (vtkgl::PFNGLGETMAPATTRIBPARAMETERIVNVPROC)manager->GetProcAddress("glGetMapAttribParameterivNV");
    vtkgl::GetMapAttribParameterfvNV = (vtkgl::PFNGLGETMAPATTRIBPARAMETERFVNVPROC)manager->GetProcAddress("glGetMapAttribParameterfvNV");
    vtkgl::EvalMapsNV = (vtkgl::PFNGLEVALMAPSNVPROC)manager->GetProcAddress("glEvalMapsNV");
    return 1 && (vtkgl::MapControlPointsNV != NULL) && (vtkgl::MapParameterivNV != NULL) && (vtkgl::MapParameterfvNV != NULL) && (vtkgl::GetMapControlPointsNV != NULL) && (vtkgl::GetMapParameterivNV != NULL) && (vtkgl::GetMapParameterfvNV != NULL) && (vtkgl::GetMapAttribParameterivNV != NULL) && (vtkgl::GetMapAttribParameterfvNV != NULL) && (vtkgl::EvalMapsNV != NULL);
    }
  if (strcmp(name, "GL_NV_packed_depth_stencil") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_register_combiners2") == 0)
    {
    vtkgl::CombinerStageParameterfvNV = (vtkgl::PFNGLCOMBINERSTAGEPARAMETERFVNVPROC)manager->GetProcAddress("glCombinerStageParameterfvNV");
    vtkgl::GetCombinerStageParameterfvNV = (vtkgl::PFNGLGETCOMBINERSTAGEPARAMETERFVNVPROC)manager->GetProcAddress("glGetCombinerStageParameterfvNV");
    return 1 && (vtkgl::CombinerStageParameterfvNV != NULL) && (vtkgl::GetCombinerStageParameterfvNV != NULL);
    }
  if (strcmp(name, "GL_NV_texture_compression_vtc") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_texture_rectangle") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_texture_shader") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_texture_shader2") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_vertex_array_range2") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_vertex_program") == 0)
    {
    vtkgl::AreProgramsResidentNV = (vtkgl::PFNGLAREPROGRAMSRESIDENTNVPROC)manager->GetProcAddress("glAreProgramsResidentNV");
    vtkgl::BindProgramNV = (vtkgl::PFNGLBINDPROGRAMNVPROC)manager->GetProcAddress("glBindProgramNV");
    vtkgl::DeleteProgramsNV = (vtkgl::PFNGLDELETEPROGRAMSNVPROC)manager->GetProcAddress("glDeleteProgramsNV");
    vtkgl::ExecuteProgramNV = (vtkgl::PFNGLEXECUTEPROGRAMNVPROC)manager->GetProcAddress("glExecuteProgramNV");
    vtkgl::GenProgramsNV = (vtkgl::PFNGLGENPROGRAMSNVPROC)manager->GetProcAddress("glGenProgramsNV");
    vtkgl::GetProgramParameterdvNV = (vtkgl::PFNGLGETPROGRAMPARAMETERDVNVPROC)manager->GetProcAddress("glGetProgramParameterdvNV");
    vtkgl::GetProgramParameterfvNV = (vtkgl::PFNGLGETPROGRAMPARAMETERFVNVPROC)manager->GetProcAddress("glGetProgramParameterfvNV");
    vtkgl::GetProgramivNV = (vtkgl::PFNGLGETPROGRAMIVNVPROC)manager->GetProcAddress("glGetProgramivNV");
    vtkgl::GetProgramStringNV = (vtkgl::PFNGLGETPROGRAMSTRINGNVPROC)manager->GetProcAddress("glGetProgramStringNV");
    vtkgl::GetTrackMatrixivNV = (vtkgl::PFNGLGETTRACKMATRIXIVNVPROC)manager->GetProcAddress("glGetTrackMatrixivNV");
    vtkgl::GetVertexAttribdvNV = (vtkgl::PFNGLGETVERTEXATTRIBDVNVPROC)manager->GetProcAddress("glGetVertexAttribdvNV");
    vtkgl::GetVertexAttribfvNV = (vtkgl::PFNGLGETVERTEXATTRIBFVNVPROC)manager->GetProcAddress("glGetVertexAttribfvNV");
    vtkgl::GetVertexAttribivNV = (vtkgl::PFNGLGETVERTEXATTRIBIVNVPROC)manager->GetProcAddress("glGetVertexAttribivNV");
    vtkgl::GetVertexAttribPointervNV = (vtkgl::PFNGLGETVERTEXATTRIBPOINTERVNVPROC)manager->GetProcAddress("glGetVertexAttribPointervNV");
    vtkgl::IsProgramNV = (vtkgl::PFNGLISPROGRAMNVPROC)manager->GetProcAddress("glIsProgramNV");
    vtkgl::LoadProgramNV = (vtkgl::PFNGLLOADPROGRAMNVPROC)manager->GetProcAddress("glLoadProgramNV");
    vtkgl::ProgramParameter4dNV = (vtkgl::PFNGLPROGRAMPARAMETER4DNVPROC)manager->GetProcAddress("glProgramParameter4dNV");
    vtkgl::ProgramParameter4dvNV = (vtkgl::PFNGLPROGRAMPARAMETER4DVNVPROC)manager->GetProcAddress("glProgramParameter4dvNV");
    vtkgl::ProgramParameter4fNV = (vtkgl::PFNGLPROGRAMPARAMETER4FNVPROC)manager->GetProcAddress("glProgramParameter4fNV");
    vtkgl::ProgramParameter4fvNV = (vtkgl::PFNGLPROGRAMPARAMETER4FVNVPROC)manager->GetProcAddress("glProgramParameter4fvNV");
    vtkgl::ProgramParameters4dvNV = (vtkgl::PFNGLPROGRAMPARAMETERS4DVNVPROC)manager->GetProcAddress("glProgramParameters4dvNV");
    vtkgl::ProgramParameters4fvNV = (vtkgl::PFNGLPROGRAMPARAMETERS4FVNVPROC)manager->GetProcAddress("glProgramParameters4fvNV");
    vtkgl::RequestResidentProgramsNV = (vtkgl::PFNGLREQUESTRESIDENTPROGRAMSNVPROC)manager->GetProcAddress("glRequestResidentProgramsNV");
    vtkgl::TrackMatrixNV = (vtkgl::PFNGLTRACKMATRIXNVPROC)manager->GetProcAddress("glTrackMatrixNV");
    vtkgl::VertexAttribPointerNV = (vtkgl::PFNGLVERTEXATTRIBPOINTERNVPROC)manager->GetProcAddress("glVertexAttribPointerNV");
    vtkgl::VertexAttrib1dNV = (vtkgl::PFNGLVERTEXATTRIB1DNVPROC)manager->GetProcAddress("glVertexAttrib1dNV");
    vtkgl::VertexAttrib1dvNV = (vtkgl::PFNGLVERTEXATTRIB1DVNVPROC)manager->GetProcAddress("glVertexAttrib1dvNV");
    vtkgl::VertexAttrib1fNV = (vtkgl::PFNGLVERTEXATTRIB1FNVPROC)manager->GetProcAddress("glVertexAttrib1fNV");
    vtkgl::VertexAttrib1fvNV = (vtkgl::PFNGLVERTEXATTRIB1FVNVPROC)manager->GetProcAddress("glVertexAttrib1fvNV");
    vtkgl::VertexAttrib1sNV = (vtkgl::PFNGLVERTEXATTRIB1SNVPROC)manager->GetProcAddress("glVertexAttrib1sNV");
    vtkgl::VertexAttrib1svNV = (vtkgl::PFNGLVERTEXATTRIB1SVNVPROC)manager->GetProcAddress("glVertexAttrib1svNV");
    vtkgl::VertexAttrib2dNV = (vtkgl::PFNGLVERTEXATTRIB2DNVPROC)manager->GetProcAddress("glVertexAttrib2dNV");
    vtkgl::VertexAttrib2dvNV = (vtkgl::PFNGLVERTEXATTRIB2DVNVPROC)manager->GetProcAddress("glVertexAttrib2dvNV");
    vtkgl::VertexAttrib2fNV = (vtkgl::PFNGLVERTEXATTRIB2FNVPROC)manager->GetProcAddress("glVertexAttrib2fNV");
    vtkgl::VertexAttrib2fvNV = (vtkgl::PFNGLVERTEXATTRIB2FVNVPROC)manager->GetProcAddress("glVertexAttrib2fvNV");
    vtkgl::VertexAttrib2sNV = (vtkgl::PFNGLVERTEXATTRIB2SNVPROC)manager->GetProcAddress("glVertexAttrib2sNV");
    vtkgl::VertexAttrib2svNV = (vtkgl::PFNGLVERTEXATTRIB2SVNVPROC)manager->GetProcAddress("glVertexAttrib2svNV");
    vtkgl::VertexAttrib3dNV = (vtkgl::PFNGLVERTEXATTRIB3DNVPROC)manager->GetProcAddress("glVertexAttrib3dNV");
    vtkgl::VertexAttrib3dvNV = (vtkgl::PFNGLVERTEXATTRIB3DVNVPROC)manager->GetProcAddress("glVertexAttrib3dvNV");
    vtkgl::VertexAttrib3fNV = (vtkgl::PFNGLVERTEXATTRIB3FNVPROC)manager->GetProcAddress("glVertexAttrib3fNV");
    vtkgl::VertexAttrib3fvNV = (vtkgl::PFNGLVERTEXATTRIB3FVNVPROC)manager->GetProcAddress("glVertexAttrib3fvNV");
    vtkgl::VertexAttrib3sNV = (vtkgl::PFNGLVERTEXATTRIB3SNVPROC)manager->GetProcAddress("glVertexAttrib3sNV");
    vtkgl::VertexAttrib3svNV = (vtkgl::PFNGLVERTEXATTRIB3SVNVPROC)manager->GetProcAddress("glVertexAttrib3svNV");
    vtkgl::VertexAttrib4dNV = (vtkgl::PFNGLVERTEXATTRIB4DNVPROC)manager->GetProcAddress("glVertexAttrib4dNV");
    vtkgl::VertexAttrib4dvNV = (vtkgl::PFNGLVERTEXATTRIB4DVNVPROC)manager->GetProcAddress("glVertexAttrib4dvNV");
    vtkgl::VertexAttrib4fNV = (vtkgl::PFNGLVERTEXATTRIB4FNVPROC)manager->GetProcAddress("glVertexAttrib4fNV");
    vtkgl::VertexAttrib4fvNV = (vtkgl::PFNGLVERTEXATTRIB4FVNVPROC)manager->GetProcAddress("glVertexAttrib4fvNV");
    vtkgl::VertexAttrib4sNV = (vtkgl::PFNGLVERTEXATTRIB4SNVPROC)manager->GetProcAddress("glVertexAttrib4sNV");
    vtkgl::VertexAttrib4svNV = (vtkgl::PFNGLVERTEXATTRIB4SVNVPROC)manager->GetProcAddress("glVertexAttrib4svNV");
    vtkgl::VertexAttrib4ubNV = (vtkgl::PFNGLVERTEXATTRIB4UBNVPROC)manager->GetProcAddress("glVertexAttrib4ubNV");
    vtkgl::VertexAttrib4ubvNV = (vtkgl::PFNGLVERTEXATTRIB4UBVNVPROC)manager->GetProcAddress("glVertexAttrib4ubvNV");
    vtkgl::VertexAttribs1dvNV = (vtkgl::PFNGLVERTEXATTRIBS1DVNVPROC)manager->GetProcAddress("glVertexAttribs1dvNV");
    vtkgl::VertexAttribs1fvNV = (vtkgl::PFNGLVERTEXATTRIBS1FVNVPROC)manager->GetProcAddress("glVertexAttribs1fvNV");
    vtkgl::VertexAttribs1svNV = (vtkgl::PFNGLVERTEXATTRIBS1SVNVPROC)manager->GetProcAddress("glVertexAttribs1svNV");
    vtkgl::VertexAttribs2dvNV = (vtkgl::PFNGLVERTEXATTRIBS2DVNVPROC)manager->GetProcAddress("glVertexAttribs2dvNV");
    vtkgl::VertexAttribs2fvNV = (vtkgl::PFNGLVERTEXATTRIBS2FVNVPROC)manager->GetProcAddress("glVertexAttribs2fvNV");
    vtkgl::VertexAttribs2svNV = (vtkgl::PFNGLVERTEXATTRIBS2SVNVPROC)manager->GetProcAddress("glVertexAttribs2svNV");
    vtkgl::VertexAttribs3dvNV = (vtkgl::PFNGLVERTEXATTRIBS3DVNVPROC)manager->GetProcAddress("glVertexAttribs3dvNV");
    vtkgl::VertexAttribs3fvNV = (vtkgl::PFNGLVERTEXATTRIBS3FVNVPROC)manager->GetProcAddress("glVertexAttribs3fvNV");
    vtkgl::VertexAttribs3svNV = (vtkgl::PFNGLVERTEXATTRIBS3SVNVPROC)manager->GetProcAddress("glVertexAttribs3svNV");
    vtkgl::VertexAttribs4dvNV = (vtkgl::PFNGLVERTEXATTRIBS4DVNVPROC)manager->GetProcAddress("glVertexAttribs4dvNV");
    vtkgl::VertexAttribs4fvNV = (vtkgl::PFNGLVERTEXATTRIBS4FVNVPROC)manager->GetProcAddress("glVertexAttribs4fvNV");
    vtkgl::VertexAttribs4svNV = (vtkgl::PFNGLVERTEXATTRIBS4SVNVPROC)manager->GetProcAddress("glVertexAttribs4svNV");
    vtkgl::VertexAttribs4ubvNV = (vtkgl::PFNGLVERTEXATTRIBS4UBVNVPROC)manager->GetProcAddress("glVertexAttribs4ubvNV");
    return 1 && (vtkgl::AreProgramsResidentNV != NULL) && (vtkgl::BindProgramNV != NULL) && (vtkgl::DeleteProgramsNV != NULL) && (vtkgl::ExecuteProgramNV != NULL) && (vtkgl::GenProgramsNV != NULL) && (vtkgl::GetProgramParameterdvNV != NULL) && (vtkgl::GetProgramParameterfvNV != NULL) && (vtkgl::GetProgramivNV != NULL) && (vtkgl::GetProgramStringNV != NULL) && (vtkgl::GetTrackMatrixivNV != NULL) && (vtkgl::GetVertexAttribdvNV != NULL) && (vtkgl::GetVertexAttribfvNV != NULL) && (vtkgl::GetVertexAttribivNV != NULL) && (vtkgl::GetVertexAttribPointervNV != NULL) && (vtkgl::IsProgramNV != NULL) && (vtkgl::LoadProgramNV != NULL) && (vtkgl::ProgramParameter4dNV != NULL) && (vtkgl::ProgramParameter4dvNV != NULL) && (vtkgl::ProgramParameter4fNV != NULL) && (vtkgl::ProgramParameter4fvNV != NULL) && (vtkgl::ProgramParameters4dvNV != NULL) && (vtkgl::ProgramParameters4fvNV != NULL) && (vtkgl::RequestResidentProgramsNV != NULL) && (vtkgl::TrackMatrixNV != NULL) && (vtkgl::VertexAttribPointerNV != NULL) && (vtkgl::VertexAttrib1dNV != NULL) && (vtkgl::VertexAttrib1dvNV != NULL) && (vtkgl::VertexAttrib1fNV != NULL) && (vtkgl::VertexAttrib1fvNV != NULL) && (vtkgl::VertexAttrib1sNV != NULL) && (vtkgl::VertexAttrib1svNV != NULL) && (vtkgl::VertexAttrib2dNV != NULL) && (vtkgl::VertexAttrib2dvNV != NULL) && (vtkgl::VertexAttrib2fNV != NULL) && (vtkgl::VertexAttrib2fvNV != NULL) && (vtkgl::VertexAttrib2sNV != NULL) && (vtkgl::VertexAttrib2svNV != NULL) && (vtkgl::VertexAttrib3dNV != NULL) && (vtkgl::VertexAttrib3dvNV != NULL) && (vtkgl::VertexAttrib3fNV != NULL) && (vtkgl::VertexAttrib3fvNV != NULL) && (vtkgl::VertexAttrib3sNV != NULL) && (vtkgl::VertexAttrib3svNV != NULL) && (vtkgl::VertexAttrib4dNV != NULL) && (vtkgl::VertexAttrib4dvNV != NULL) && (vtkgl::VertexAttrib4fNV != NULL) && (vtkgl::VertexAttrib4fvNV != NULL) && (vtkgl::VertexAttrib4sNV != NULL) && (vtkgl::VertexAttrib4svNV != NULL) && (vtkgl::VertexAttrib4ubNV != NULL) && (vtkgl::VertexAttrib4ubvNV != NULL) && (vtkgl::VertexAttribs1dvNV != NULL) && (vtkgl::VertexAttribs1fvNV != NULL) && (vtkgl::VertexAttribs1svNV != NULL) && (vtkgl::VertexAttribs2dvNV != NULL) && (vtkgl::VertexAttribs2fvNV != NULL) && (vtkgl::VertexAttribs2svNV != NULL) && (vtkgl::VertexAttribs3dvNV != NULL) && (vtkgl::VertexAttribs3fvNV != NULL) && (vtkgl::VertexAttribs3svNV != NULL) && (vtkgl::VertexAttribs4dvNV != NULL) && (vtkgl::VertexAttribs4fvNV != NULL) && (vtkgl::VertexAttribs4svNV != NULL) && (vtkgl::VertexAttribs4ubvNV != NULL);
    }
  if (strcmp(name, "GL_SGIX_texture_coordinate_clamp") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIX_scalebias_hint") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_OML_interlace") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_OML_subsample") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_OML_resample") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_copy_depth_to_color") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ATI_envmap_bumpmap") == 0)
    {
    vtkgl::TexBumpParameterivATI = (vtkgl::PFNGLTEXBUMPPARAMETERIVATIPROC)manager->GetProcAddress("glTexBumpParameterivATI");
    vtkgl::TexBumpParameterfvATI = (vtkgl::PFNGLTEXBUMPPARAMETERFVATIPROC)manager->GetProcAddress("glTexBumpParameterfvATI");
    vtkgl::GetTexBumpParameterivATI = (vtkgl::PFNGLGETTEXBUMPPARAMETERIVATIPROC)manager->GetProcAddress("glGetTexBumpParameterivATI");
    vtkgl::GetTexBumpParameterfvATI = (vtkgl::PFNGLGETTEXBUMPPARAMETERFVATIPROC)manager->GetProcAddress("glGetTexBumpParameterfvATI");
    return 1 && (vtkgl::TexBumpParameterivATI != NULL) && (vtkgl::TexBumpParameterfvATI != NULL) && (vtkgl::GetTexBumpParameterivATI != NULL) && (vtkgl::GetTexBumpParameterfvATI != NULL);
    }
  if (strcmp(name, "GL_ATI_fragment_shader") == 0)
    {
    vtkgl::GenFragmentShadersATI = (vtkgl::PFNGLGENFRAGMENTSHADERSATIPROC)manager->GetProcAddress("glGenFragmentShadersATI");
    vtkgl::BindFragmentShaderATI = (vtkgl::PFNGLBINDFRAGMENTSHADERATIPROC)manager->GetProcAddress("glBindFragmentShaderATI");
    vtkgl::DeleteFragmentShaderATI = (vtkgl::PFNGLDELETEFRAGMENTSHADERATIPROC)manager->GetProcAddress("glDeleteFragmentShaderATI");
    vtkgl::BeginFragmentShaderATI = (vtkgl::PFNGLBEGINFRAGMENTSHADERATIPROC)manager->GetProcAddress("glBeginFragmentShaderATI");
    vtkgl::EndFragmentShaderATI = (vtkgl::PFNGLENDFRAGMENTSHADERATIPROC)manager->GetProcAddress("glEndFragmentShaderATI");
    vtkgl::PassTexCoordATI = (vtkgl::PFNGLPASSTEXCOORDATIPROC)manager->GetProcAddress("glPassTexCoordATI");
    vtkgl::SampleMapATI = (vtkgl::PFNGLSAMPLEMAPATIPROC)manager->GetProcAddress("glSampleMapATI");
    vtkgl::ColorFragmentOp1ATI = (vtkgl::PFNGLCOLORFRAGMENTOP1ATIPROC)manager->GetProcAddress("glColorFragmentOp1ATI");
    vtkgl::ColorFragmentOp2ATI = (vtkgl::PFNGLCOLORFRAGMENTOP2ATIPROC)manager->GetProcAddress("glColorFragmentOp2ATI");
    vtkgl::ColorFragmentOp3ATI = (vtkgl::PFNGLCOLORFRAGMENTOP3ATIPROC)manager->GetProcAddress("glColorFragmentOp3ATI");
    vtkgl::AlphaFragmentOp1ATI = (vtkgl::PFNGLALPHAFRAGMENTOP1ATIPROC)manager->GetProcAddress("glAlphaFragmentOp1ATI");
    vtkgl::AlphaFragmentOp2ATI = (vtkgl::PFNGLALPHAFRAGMENTOP2ATIPROC)manager->GetProcAddress("glAlphaFragmentOp2ATI");
    vtkgl::AlphaFragmentOp3ATI = (vtkgl::PFNGLALPHAFRAGMENTOP3ATIPROC)manager->GetProcAddress("glAlphaFragmentOp3ATI");
    vtkgl::SetFragmentShaderConstantATI = (vtkgl::PFNGLSETFRAGMENTSHADERCONSTANTATIPROC)manager->GetProcAddress("glSetFragmentShaderConstantATI");
    return 1 && (vtkgl::GenFragmentShadersATI != NULL) && (vtkgl::BindFragmentShaderATI != NULL) && (vtkgl::DeleteFragmentShaderATI != NULL) && (vtkgl::BeginFragmentShaderATI != NULL) && (vtkgl::EndFragmentShaderATI != NULL) && (vtkgl::PassTexCoordATI != NULL) && (vtkgl::SampleMapATI != NULL) && (vtkgl::ColorFragmentOp1ATI != NULL) && (vtkgl::ColorFragmentOp2ATI != NULL) && (vtkgl::ColorFragmentOp3ATI != NULL) && (vtkgl::AlphaFragmentOp1ATI != NULL) && (vtkgl::AlphaFragmentOp2ATI != NULL) && (vtkgl::AlphaFragmentOp3ATI != NULL) && (vtkgl::SetFragmentShaderConstantATI != NULL);
    }
  if (strcmp(name, "GL_ATI_pn_triangles") == 0)
    {
    vtkgl::PNTrianglesiATI = (vtkgl::PFNGLPNTRIANGLESIATIPROC)manager->GetProcAddress("glPNTrianglesiATI");
    vtkgl::PNTrianglesfATI = (vtkgl::PFNGLPNTRIANGLESFATIPROC)manager->GetProcAddress("glPNTrianglesfATI");
    return 1 && (vtkgl::PNTrianglesiATI != NULL) && (vtkgl::PNTrianglesfATI != NULL);
    }
  if (strcmp(name, "GL_ATI_vertex_array_object") == 0)
    {
    vtkgl::NewObjectBufferATI = (vtkgl::PFNGLNEWOBJECTBUFFERATIPROC)manager->GetProcAddress("glNewObjectBufferATI");
    vtkgl::IsObjectBufferATI = (vtkgl::PFNGLISOBJECTBUFFERATIPROC)manager->GetProcAddress("glIsObjectBufferATI");
    vtkgl::UpdateObjectBufferATI = (vtkgl::PFNGLUPDATEOBJECTBUFFERATIPROC)manager->GetProcAddress("glUpdateObjectBufferATI");
    vtkgl::GetObjectBufferfvATI = (vtkgl::PFNGLGETOBJECTBUFFERFVATIPROC)manager->GetProcAddress("glGetObjectBufferfvATI");
    vtkgl::GetObjectBufferivATI = (vtkgl::PFNGLGETOBJECTBUFFERIVATIPROC)manager->GetProcAddress("glGetObjectBufferivATI");
    vtkgl::FreeObjectBufferATI = (vtkgl::PFNGLFREEOBJECTBUFFERATIPROC)manager->GetProcAddress("glFreeObjectBufferATI");
    vtkgl::ArrayObjectATI = (vtkgl::PFNGLARRAYOBJECTATIPROC)manager->GetProcAddress("glArrayObjectATI");
    vtkgl::GetArrayObjectfvATI = (vtkgl::PFNGLGETARRAYOBJECTFVATIPROC)manager->GetProcAddress("glGetArrayObjectfvATI");
    vtkgl::GetArrayObjectivATI = (vtkgl::PFNGLGETARRAYOBJECTIVATIPROC)manager->GetProcAddress("glGetArrayObjectivATI");
    vtkgl::VariantArrayObjectATI = (vtkgl::PFNGLVARIANTARRAYOBJECTATIPROC)manager->GetProcAddress("glVariantArrayObjectATI");
    vtkgl::GetVariantArrayObjectfvATI = (vtkgl::PFNGLGETVARIANTARRAYOBJECTFVATIPROC)manager->GetProcAddress("glGetVariantArrayObjectfvATI");
    vtkgl::GetVariantArrayObjectivATI = (vtkgl::PFNGLGETVARIANTARRAYOBJECTIVATIPROC)manager->GetProcAddress("glGetVariantArrayObjectivATI");
    return 1 && (vtkgl::NewObjectBufferATI != NULL) && (vtkgl::IsObjectBufferATI != NULL) && (vtkgl::UpdateObjectBufferATI != NULL) && (vtkgl::GetObjectBufferfvATI != NULL) && (vtkgl::GetObjectBufferivATI != NULL) && (vtkgl::FreeObjectBufferATI != NULL) && (vtkgl::ArrayObjectATI != NULL) && (vtkgl::GetArrayObjectfvATI != NULL) && (vtkgl::GetArrayObjectivATI != NULL) && (vtkgl::VariantArrayObjectATI != NULL) && (vtkgl::GetVariantArrayObjectfvATI != NULL) && (vtkgl::GetVariantArrayObjectivATI != NULL);
    }
  if (strcmp(name, "GL_EXT_vertex_shader") == 0)
    {
    vtkgl::BeginVertexShaderEXT = (vtkgl::PFNGLBEGINVERTEXSHADEREXTPROC)manager->GetProcAddress("glBeginVertexShaderEXT");
    vtkgl::EndVertexShaderEXT = (vtkgl::PFNGLENDVERTEXSHADEREXTPROC)manager->GetProcAddress("glEndVertexShaderEXT");
    vtkgl::BindVertexShaderEXT = (vtkgl::PFNGLBINDVERTEXSHADEREXTPROC)manager->GetProcAddress("glBindVertexShaderEXT");
    vtkgl::GenVertexShadersEXT = (vtkgl::PFNGLGENVERTEXSHADERSEXTPROC)manager->GetProcAddress("glGenVertexShadersEXT");
    vtkgl::DeleteVertexShaderEXT = (vtkgl::PFNGLDELETEVERTEXSHADEREXTPROC)manager->GetProcAddress("glDeleteVertexShaderEXT");
    vtkgl::ShaderOp1EXT = (vtkgl::PFNGLSHADEROP1EXTPROC)manager->GetProcAddress("glShaderOp1EXT");
    vtkgl::ShaderOp2EXT = (vtkgl::PFNGLSHADEROP2EXTPROC)manager->GetProcAddress("glShaderOp2EXT");
    vtkgl::ShaderOp3EXT = (vtkgl::PFNGLSHADEROP3EXTPROC)manager->GetProcAddress("glShaderOp3EXT");
    vtkgl::SwizzleEXT = (vtkgl::PFNGLSWIZZLEEXTPROC)manager->GetProcAddress("glSwizzleEXT");
    vtkgl::WriteMaskEXT = (vtkgl::PFNGLWRITEMASKEXTPROC)manager->GetProcAddress("glWriteMaskEXT");
    vtkgl::InsertComponentEXT = (vtkgl::PFNGLINSERTCOMPONENTEXTPROC)manager->GetProcAddress("glInsertComponentEXT");
    vtkgl::ExtractComponentEXT = (vtkgl::PFNGLEXTRACTCOMPONENTEXTPROC)manager->GetProcAddress("glExtractComponentEXT");
    vtkgl::GenSymbolsEXT = (vtkgl::PFNGLGENSYMBOLSEXTPROC)manager->GetProcAddress("glGenSymbolsEXT");
    vtkgl::SetInvariantEXT = (vtkgl::PFNGLSETINVARIANTEXTPROC)manager->GetProcAddress("glSetInvariantEXT");
    vtkgl::SetLocalConstantEXT = (vtkgl::PFNGLSETLOCALCONSTANTEXTPROC)manager->GetProcAddress("glSetLocalConstantEXT");
    vtkgl::VariantbvEXT = (vtkgl::PFNGLVARIANTBVEXTPROC)manager->GetProcAddress("glVariantbvEXT");
    vtkgl::VariantsvEXT = (vtkgl::PFNGLVARIANTSVEXTPROC)manager->GetProcAddress("glVariantsvEXT");
    vtkgl::VariantivEXT = (vtkgl::PFNGLVARIANTIVEXTPROC)manager->GetProcAddress("glVariantivEXT");
    vtkgl::VariantfvEXT = (vtkgl::PFNGLVARIANTFVEXTPROC)manager->GetProcAddress("glVariantfvEXT");
    vtkgl::VariantdvEXT = (vtkgl::PFNGLVARIANTDVEXTPROC)manager->GetProcAddress("glVariantdvEXT");
    vtkgl::VariantubvEXT = (vtkgl::PFNGLVARIANTUBVEXTPROC)manager->GetProcAddress("glVariantubvEXT");
    vtkgl::VariantusvEXT = (vtkgl::PFNGLVARIANTUSVEXTPROC)manager->GetProcAddress("glVariantusvEXT");
    vtkgl::VariantuivEXT = (vtkgl::PFNGLVARIANTUIVEXTPROC)manager->GetProcAddress("glVariantuivEXT");
    vtkgl::VariantPointerEXT = (vtkgl::PFNGLVARIANTPOINTEREXTPROC)manager->GetProcAddress("glVariantPointerEXT");
    vtkgl::EnableVariantClientStateEXT = (vtkgl::PFNGLENABLEVARIANTCLIENTSTATEEXTPROC)manager->GetProcAddress("glEnableVariantClientStateEXT");
    vtkgl::DisableVariantClientStateEXT = (vtkgl::PFNGLDISABLEVARIANTCLIENTSTATEEXTPROC)manager->GetProcAddress("glDisableVariantClientStateEXT");
    vtkgl::BindLightParameterEXT = (vtkgl::PFNGLBINDLIGHTPARAMETEREXTPROC)manager->GetProcAddress("glBindLightParameterEXT");
    vtkgl::BindMaterialParameterEXT = (vtkgl::PFNGLBINDMATERIALPARAMETEREXTPROC)manager->GetProcAddress("glBindMaterialParameterEXT");
    vtkgl::BindTexGenParameterEXT = (vtkgl::PFNGLBINDTEXGENPARAMETEREXTPROC)manager->GetProcAddress("glBindTexGenParameterEXT");
    vtkgl::BindTextureUnitParameterEXT = (vtkgl::PFNGLBINDTEXTUREUNITPARAMETEREXTPROC)manager->GetProcAddress("glBindTextureUnitParameterEXT");
    vtkgl::BindParameterEXT = (vtkgl::PFNGLBINDPARAMETEREXTPROC)manager->GetProcAddress("glBindParameterEXT");
    vtkgl::IsVariantEnabledEXT = (vtkgl::PFNGLISVARIANTENABLEDEXTPROC)manager->GetProcAddress("glIsVariantEnabledEXT");
    vtkgl::GetVariantBooleanvEXT = (vtkgl::PFNGLGETVARIANTBOOLEANVEXTPROC)manager->GetProcAddress("glGetVariantBooleanvEXT");
    vtkgl::GetVariantIntegervEXT = (vtkgl::PFNGLGETVARIANTINTEGERVEXTPROC)manager->GetProcAddress("glGetVariantIntegervEXT");
    vtkgl::GetVariantFloatvEXT = (vtkgl::PFNGLGETVARIANTFLOATVEXTPROC)manager->GetProcAddress("glGetVariantFloatvEXT");
    vtkgl::GetVariantPointervEXT = (vtkgl::PFNGLGETVARIANTPOINTERVEXTPROC)manager->GetProcAddress("glGetVariantPointervEXT");
    vtkgl::GetInvariantBooleanvEXT = (vtkgl::PFNGLGETINVARIANTBOOLEANVEXTPROC)manager->GetProcAddress("glGetInvariantBooleanvEXT");
    vtkgl::GetInvariantIntegervEXT = (vtkgl::PFNGLGETINVARIANTINTEGERVEXTPROC)manager->GetProcAddress("glGetInvariantIntegervEXT");
    vtkgl::GetInvariantFloatvEXT = (vtkgl::PFNGLGETINVARIANTFLOATVEXTPROC)manager->GetProcAddress("glGetInvariantFloatvEXT");
    vtkgl::GetLocalConstantBooleanvEXT = (vtkgl::PFNGLGETLOCALCONSTANTBOOLEANVEXTPROC)manager->GetProcAddress("glGetLocalConstantBooleanvEXT");
    vtkgl::GetLocalConstantIntegervEXT = (vtkgl::PFNGLGETLOCALCONSTANTINTEGERVEXTPROC)manager->GetProcAddress("glGetLocalConstantIntegervEXT");
    vtkgl::GetLocalConstantFloatvEXT = (vtkgl::PFNGLGETLOCALCONSTANTFLOATVEXTPROC)manager->GetProcAddress("glGetLocalConstantFloatvEXT");
    return 1 && (vtkgl::BeginVertexShaderEXT != NULL) && (vtkgl::EndVertexShaderEXT != NULL) && (vtkgl::BindVertexShaderEXT != NULL) && (vtkgl::GenVertexShadersEXT != NULL) && (vtkgl::DeleteVertexShaderEXT != NULL) && (vtkgl::ShaderOp1EXT != NULL) && (vtkgl::ShaderOp2EXT != NULL) && (vtkgl::ShaderOp3EXT != NULL) && (vtkgl::SwizzleEXT != NULL) && (vtkgl::WriteMaskEXT != NULL) && (vtkgl::InsertComponentEXT != NULL) && (vtkgl::ExtractComponentEXT != NULL) && (vtkgl::GenSymbolsEXT != NULL) && (vtkgl::SetInvariantEXT != NULL) && (vtkgl::SetLocalConstantEXT != NULL) && (vtkgl::VariantbvEXT != NULL) && (vtkgl::VariantsvEXT != NULL) && (vtkgl::VariantivEXT != NULL) && (vtkgl::VariantfvEXT != NULL) && (vtkgl::VariantdvEXT != NULL) && (vtkgl::VariantubvEXT != NULL) && (vtkgl::VariantusvEXT != NULL) && (vtkgl::VariantuivEXT != NULL) && (vtkgl::VariantPointerEXT != NULL) && (vtkgl::EnableVariantClientStateEXT != NULL) && (vtkgl::DisableVariantClientStateEXT != NULL) && (vtkgl::BindLightParameterEXT != NULL) && (vtkgl::BindMaterialParameterEXT != NULL) && (vtkgl::BindTexGenParameterEXT != NULL) && (vtkgl::BindTextureUnitParameterEXT != NULL) && (vtkgl::BindParameterEXT != NULL) && (vtkgl::IsVariantEnabledEXT != NULL) && (vtkgl::GetVariantBooleanvEXT != NULL) && (vtkgl::GetVariantIntegervEXT != NULL) && (vtkgl::GetVariantFloatvEXT != NULL) && (vtkgl::GetVariantPointervEXT != NULL) && (vtkgl::GetInvariantBooleanvEXT != NULL) && (vtkgl::GetInvariantIntegervEXT != NULL) && (vtkgl::GetInvariantFloatvEXT != NULL) && (vtkgl::GetLocalConstantBooleanvEXT != NULL) && (vtkgl::GetLocalConstantIntegervEXT != NULL) && (vtkgl::GetLocalConstantFloatvEXT != NULL);
    }
  if (strcmp(name, "GL_ATI_vertex_streams") == 0)
    {
    vtkgl::VertexStream1sATI = (vtkgl::PFNGLVERTEXSTREAM1SATIPROC)manager->GetProcAddress("glVertexStream1sATI");
    vtkgl::VertexStream1svATI = (vtkgl::PFNGLVERTEXSTREAM1SVATIPROC)manager->GetProcAddress("glVertexStream1svATI");
    vtkgl::VertexStream1iATI = (vtkgl::PFNGLVERTEXSTREAM1IATIPROC)manager->GetProcAddress("glVertexStream1iATI");
    vtkgl::VertexStream1ivATI = (vtkgl::PFNGLVERTEXSTREAM1IVATIPROC)manager->GetProcAddress("glVertexStream1ivATI");
    vtkgl::VertexStream1fATI = (vtkgl::PFNGLVERTEXSTREAM1FATIPROC)manager->GetProcAddress("glVertexStream1fATI");
    vtkgl::VertexStream1fvATI = (vtkgl::PFNGLVERTEXSTREAM1FVATIPROC)manager->GetProcAddress("glVertexStream1fvATI");
    vtkgl::VertexStream1dATI = (vtkgl::PFNGLVERTEXSTREAM1DATIPROC)manager->GetProcAddress("glVertexStream1dATI");
    vtkgl::VertexStream1dvATI = (vtkgl::PFNGLVERTEXSTREAM1DVATIPROC)manager->GetProcAddress("glVertexStream1dvATI");
    vtkgl::VertexStream2sATI = (vtkgl::PFNGLVERTEXSTREAM2SATIPROC)manager->GetProcAddress("glVertexStream2sATI");
    vtkgl::VertexStream2svATI = (vtkgl::PFNGLVERTEXSTREAM2SVATIPROC)manager->GetProcAddress("glVertexStream2svATI");
    vtkgl::VertexStream2iATI = (vtkgl::PFNGLVERTEXSTREAM2IATIPROC)manager->GetProcAddress("glVertexStream2iATI");
    vtkgl::VertexStream2ivATI = (vtkgl::PFNGLVERTEXSTREAM2IVATIPROC)manager->GetProcAddress("glVertexStream2ivATI");
    vtkgl::VertexStream2fATI = (vtkgl::PFNGLVERTEXSTREAM2FATIPROC)manager->GetProcAddress("glVertexStream2fATI");
    vtkgl::VertexStream2fvATI = (vtkgl::PFNGLVERTEXSTREAM2FVATIPROC)manager->GetProcAddress("glVertexStream2fvATI");
    vtkgl::VertexStream2dATI = (vtkgl::PFNGLVERTEXSTREAM2DATIPROC)manager->GetProcAddress("glVertexStream2dATI");
    vtkgl::VertexStream2dvATI = (vtkgl::PFNGLVERTEXSTREAM2DVATIPROC)manager->GetProcAddress("glVertexStream2dvATI");
    vtkgl::VertexStream3sATI = (vtkgl::PFNGLVERTEXSTREAM3SATIPROC)manager->GetProcAddress("glVertexStream3sATI");
    vtkgl::VertexStream3svATI = (vtkgl::PFNGLVERTEXSTREAM3SVATIPROC)manager->GetProcAddress("glVertexStream3svATI");
    vtkgl::VertexStream3iATI = (vtkgl::PFNGLVERTEXSTREAM3IATIPROC)manager->GetProcAddress("glVertexStream3iATI");
    vtkgl::VertexStream3ivATI = (vtkgl::PFNGLVERTEXSTREAM3IVATIPROC)manager->GetProcAddress("glVertexStream3ivATI");
    vtkgl::VertexStream3fATI = (vtkgl::PFNGLVERTEXSTREAM3FATIPROC)manager->GetProcAddress("glVertexStream3fATI");
    vtkgl::VertexStream3fvATI = (vtkgl::PFNGLVERTEXSTREAM3FVATIPROC)manager->GetProcAddress("glVertexStream3fvATI");
    vtkgl::VertexStream3dATI = (vtkgl::PFNGLVERTEXSTREAM3DATIPROC)manager->GetProcAddress("glVertexStream3dATI");
    vtkgl::VertexStream3dvATI = (vtkgl::PFNGLVERTEXSTREAM3DVATIPROC)manager->GetProcAddress("glVertexStream3dvATI");
    vtkgl::VertexStream4sATI = (vtkgl::PFNGLVERTEXSTREAM4SATIPROC)manager->GetProcAddress("glVertexStream4sATI");
    vtkgl::VertexStream4svATI = (vtkgl::PFNGLVERTEXSTREAM4SVATIPROC)manager->GetProcAddress("glVertexStream4svATI");
    vtkgl::VertexStream4iATI = (vtkgl::PFNGLVERTEXSTREAM4IATIPROC)manager->GetProcAddress("glVertexStream4iATI");
    vtkgl::VertexStream4ivATI = (vtkgl::PFNGLVERTEXSTREAM4IVATIPROC)manager->GetProcAddress("glVertexStream4ivATI");
    vtkgl::VertexStream4fATI = (vtkgl::PFNGLVERTEXSTREAM4FATIPROC)manager->GetProcAddress("glVertexStream4fATI");
    vtkgl::VertexStream4fvATI = (vtkgl::PFNGLVERTEXSTREAM4FVATIPROC)manager->GetProcAddress("glVertexStream4fvATI");
    vtkgl::VertexStream4dATI = (vtkgl::PFNGLVERTEXSTREAM4DATIPROC)manager->GetProcAddress("glVertexStream4dATI");
    vtkgl::VertexStream4dvATI = (vtkgl::PFNGLVERTEXSTREAM4DVATIPROC)manager->GetProcAddress("glVertexStream4dvATI");
    vtkgl::NormalStream3bATI = (vtkgl::PFNGLNORMALSTREAM3BATIPROC)manager->GetProcAddress("glNormalStream3bATI");
    vtkgl::NormalStream3bvATI = (vtkgl::PFNGLNORMALSTREAM3BVATIPROC)manager->GetProcAddress("glNormalStream3bvATI");
    vtkgl::NormalStream3sATI = (vtkgl::PFNGLNORMALSTREAM3SATIPROC)manager->GetProcAddress("glNormalStream3sATI");
    vtkgl::NormalStream3svATI = (vtkgl::PFNGLNORMALSTREAM3SVATIPROC)manager->GetProcAddress("glNormalStream3svATI");
    vtkgl::NormalStream3iATI = (vtkgl::PFNGLNORMALSTREAM3IATIPROC)manager->GetProcAddress("glNormalStream3iATI");
    vtkgl::NormalStream3ivATI = (vtkgl::PFNGLNORMALSTREAM3IVATIPROC)manager->GetProcAddress("glNormalStream3ivATI");
    vtkgl::NormalStream3fATI = (vtkgl::PFNGLNORMALSTREAM3FATIPROC)manager->GetProcAddress("glNormalStream3fATI");
    vtkgl::NormalStream3fvATI = (vtkgl::PFNGLNORMALSTREAM3FVATIPROC)manager->GetProcAddress("glNormalStream3fvATI");
    vtkgl::NormalStream3dATI = (vtkgl::PFNGLNORMALSTREAM3DATIPROC)manager->GetProcAddress("glNormalStream3dATI");
    vtkgl::NormalStream3dvATI = (vtkgl::PFNGLNORMALSTREAM3DVATIPROC)manager->GetProcAddress("glNormalStream3dvATI");
    vtkgl::ClientActiveVertexStreamATI = (vtkgl::PFNGLCLIENTACTIVEVERTEXSTREAMATIPROC)manager->GetProcAddress("glClientActiveVertexStreamATI");
    vtkgl::VertexBlendEnviATI = (vtkgl::PFNGLVERTEXBLENDENVIATIPROC)manager->GetProcAddress("glVertexBlendEnviATI");
    vtkgl::VertexBlendEnvfATI = (vtkgl::PFNGLVERTEXBLENDENVFATIPROC)manager->GetProcAddress("glVertexBlendEnvfATI");
    return 1 && (vtkgl::VertexStream1sATI != NULL) && (vtkgl::VertexStream1svATI != NULL) && (vtkgl::VertexStream1iATI != NULL) && (vtkgl::VertexStream1ivATI != NULL) && (vtkgl::VertexStream1fATI != NULL) && (vtkgl::VertexStream1fvATI != NULL) && (vtkgl::VertexStream1dATI != NULL) && (vtkgl::VertexStream1dvATI != NULL) && (vtkgl::VertexStream2sATI != NULL) && (vtkgl::VertexStream2svATI != NULL) && (vtkgl::VertexStream2iATI != NULL) && (vtkgl::VertexStream2ivATI != NULL) && (vtkgl::VertexStream2fATI != NULL) && (vtkgl::VertexStream2fvATI != NULL) && (vtkgl::VertexStream2dATI != NULL) && (vtkgl::VertexStream2dvATI != NULL) && (vtkgl::VertexStream3sATI != NULL) && (vtkgl::VertexStream3svATI != NULL) && (vtkgl::VertexStream3iATI != NULL) && (vtkgl::VertexStream3ivATI != NULL) && (vtkgl::VertexStream3fATI != NULL) && (vtkgl::VertexStream3fvATI != NULL) && (vtkgl::VertexStream3dATI != NULL) && (vtkgl::VertexStream3dvATI != NULL) && (vtkgl::VertexStream4sATI != NULL) && (vtkgl::VertexStream4svATI != NULL) && (vtkgl::VertexStream4iATI != NULL) && (vtkgl::VertexStream4ivATI != NULL) && (vtkgl::VertexStream4fATI != NULL) && (vtkgl::VertexStream4fvATI != NULL) && (vtkgl::VertexStream4dATI != NULL) && (vtkgl::VertexStream4dvATI != NULL) && (vtkgl::NormalStream3bATI != NULL) && (vtkgl::NormalStream3bvATI != NULL) && (vtkgl::NormalStream3sATI != NULL) && (vtkgl::NormalStream3svATI != NULL) && (vtkgl::NormalStream3iATI != NULL) && (vtkgl::NormalStream3ivATI != NULL) && (vtkgl::NormalStream3fATI != NULL) && (vtkgl::NormalStream3fvATI != NULL) && (vtkgl::NormalStream3dATI != NULL) && (vtkgl::NormalStream3dvATI != NULL) && (vtkgl::ClientActiveVertexStreamATI != NULL) && (vtkgl::VertexBlendEnviATI != NULL) && (vtkgl::VertexBlendEnvfATI != NULL);
    }
  if (strcmp(name, "GL_ATI_element_array") == 0)
    {
    vtkgl::ElementPointerATI = (vtkgl::PFNGLELEMENTPOINTERATIPROC)manager->GetProcAddress("glElementPointerATI");
    vtkgl::DrawElementArrayATI = (vtkgl::PFNGLDRAWELEMENTARRAYATIPROC)manager->GetProcAddress("glDrawElementArrayATI");
    vtkgl::DrawRangeElementArrayATI = (vtkgl::PFNGLDRAWRANGEELEMENTARRAYATIPROC)manager->GetProcAddress("glDrawRangeElementArrayATI");
    return 1 && (vtkgl::ElementPointerATI != NULL) && (vtkgl::DrawElementArrayATI != NULL) && (vtkgl::DrawRangeElementArrayATI != NULL);
    }
  if (strcmp(name, "GL_SUN_mesh_array") == 0)
    {
    vtkgl::DrawMeshArraysSUN = (vtkgl::PFNGLDRAWMESHARRAYSSUNPROC)manager->GetProcAddress("glDrawMeshArraysSUN");
    return 1 && (vtkgl::DrawMeshArraysSUN != NULL);
    }
  if (strcmp(name, "GL_SUN_slice_accum") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_multisample_filter_hint") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_depth_clamp") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_occlusion_query") == 0)
    {
    vtkgl::GenOcclusionQueriesNV = (vtkgl::PFNGLGENOCCLUSIONQUERIESNVPROC)manager->GetProcAddress("glGenOcclusionQueriesNV");
    vtkgl::DeleteOcclusionQueriesNV = (vtkgl::PFNGLDELETEOCCLUSIONQUERIESNVPROC)manager->GetProcAddress("glDeleteOcclusionQueriesNV");
    vtkgl::IsOcclusionQueryNV = (vtkgl::PFNGLISOCCLUSIONQUERYNVPROC)manager->GetProcAddress("glIsOcclusionQueryNV");
    vtkgl::BeginOcclusionQueryNV = (vtkgl::PFNGLBEGINOCCLUSIONQUERYNVPROC)manager->GetProcAddress("glBeginOcclusionQueryNV");
    vtkgl::EndOcclusionQueryNV = (vtkgl::PFNGLENDOCCLUSIONQUERYNVPROC)manager->GetProcAddress("glEndOcclusionQueryNV");
    vtkgl::GetOcclusionQueryivNV = (vtkgl::PFNGLGETOCCLUSIONQUERYIVNVPROC)manager->GetProcAddress("glGetOcclusionQueryivNV");
    vtkgl::GetOcclusionQueryuivNV = (vtkgl::PFNGLGETOCCLUSIONQUERYUIVNVPROC)manager->GetProcAddress("glGetOcclusionQueryuivNV");
    return 1 && (vtkgl::GenOcclusionQueriesNV != NULL) && (vtkgl::DeleteOcclusionQueriesNV != NULL) && (vtkgl::IsOcclusionQueryNV != NULL) && (vtkgl::BeginOcclusionQueryNV != NULL) && (vtkgl::EndOcclusionQueryNV != NULL) && (vtkgl::GetOcclusionQueryivNV != NULL) && (vtkgl::GetOcclusionQueryuivNV != NULL);
    }
  if (strcmp(name, "GL_NV_point_sprite") == 0)
    {
    vtkgl::PointParameteriNV = (vtkgl::PFNGLPOINTPARAMETERINVPROC)manager->GetProcAddress("glPointParameteriNV");
    vtkgl::PointParameterivNV = (vtkgl::PFNGLPOINTPARAMETERIVNVPROC)manager->GetProcAddress("glPointParameterivNV");
    return 1 && (vtkgl::PointParameteriNV != NULL) && (vtkgl::PointParameterivNV != NULL);
    }
  if (strcmp(name, "GL_NV_texture_shader3") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_vertex_program1_1") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_shadow_funcs") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_stencil_two_side") == 0)
    {
    vtkgl::ActiveStencilFaceEXT = (vtkgl::PFNGLACTIVESTENCILFACEEXTPROC)manager->GetProcAddress("glActiveStencilFaceEXT");
    return 1 && (vtkgl::ActiveStencilFaceEXT != NULL);
    }
  if (strcmp(name, "GL_ATI_text_fragment_shader") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_APPLE_client_storage") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_APPLE_element_array") == 0)
    {
    vtkgl::ElementPointerAPPLE = (vtkgl::PFNGLELEMENTPOINTERAPPLEPROC)manager->GetProcAddress("glElementPointerAPPLE");
    vtkgl::DrawElementArrayAPPLE = (vtkgl::PFNGLDRAWELEMENTARRAYAPPLEPROC)manager->GetProcAddress("glDrawElementArrayAPPLE");
    vtkgl::DrawRangeElementArrayAPPLE = (vtkgl::PFNGLDRAWRANGEELEMENTARRAYAPPLEPROC)manager->GetProcAddress("glDrawRangeElementArrayAPPLE");
    vtkgl::MultiDrawElementArrayAPPLE = (vtkgl::PFNGLMULTIDRAWELEMENTARRAYAPPLEPROC)manager->GetProcAddress("glMultiDrawElementArrayAPPLE");
    vtkgl::MultiDrawRangeElementArrayAPPLE = (vtkgl::PFNGLMULTIDRAWRANGEELEMENTARRAYAPPLEPROC)manager->GetProcAddress("glMultiDrawRangeElementArrayAPPLE");
    return 1 && (vtkgl::ElementPointerAPPLE != NULL) && (vtkgl::DrawElementArrayAPPLE != NULL) && (vtkgl::DrawRangeElementArrayAPPLE != NULL) && (vtkgl::MultiDrawElementArrayAPPLE != NULL) && (vtkgl::MultiDrawRangeElementArrayAPPLE != NULL);
    }
  if (strcmp(name, "GL_APPLE_fence") == 0)
    {
    vtkgl::GenFencesAPPLE = (vtkgl::PFNGLGENFENCESAPPLEPROC)manager->GetProcAddress("glGenFencesAPPLE");
    vtkgl::DeleteFencesAPPLE = (vtkgl::PFNGLDELETEFENCESAPPLEPROC)manager->GetProcAddress("glDeleteFencesAPPLE");
    vtkgl::SetFenceAPPLE = (vtkgl::PFNGLSETFENCEAPPLEPROC)manager->GetProcAddress("glSetFenceAPPLE");
    vtkgl::IsFenceAPPLE = (vtkgl::PFNGLISFENCEAPPLEPROC)manager->GetProcAddress("glIsFenceAPPLE");
    vtkgl::TestFenceAPPLE = (vtkgl::PFNGLTESTFENCEAPPLEPROC)manager->GetProcAddress("glTestFenceAPPLE");
    vtkgl::FinishFenceAPPLE = (vtkgl::PFNGLFINISHFENCEAPPLEPROC)manager->GetProcAddress("glFinishFenceAPPLE");
    vtkgl::TestObjectAPPLE = (vtkgl::PFNGLTESTOBJECTAPPLEPROC)manager->GetProcAddress("glTestObjectAPPLE");
    vtkgl::FinishObjectAPPLE = (vtkgl::PFNGLFINISHOBJECTAPPLEPROC)manager->GetProcAddress("glFinishObjectAPPLE");
    return 1 && (vtkgl::GenFencesAPPLE != NULL) && (vtkgl::DeleteFencesAPPLE != NULL) && (vtkgl::SetFenceAPPLE != NULL) && (vtkgl::IsFenceAPPLE != NULL) && (vtkgl::TestFenceAPPLE != NULL) && (vtkgl::FinishFenceAPPLE != NULL) && (vtkgl::TestObjectAPPLE != NULL) && (vtkgl::FinishObjectAPPLE != NULL);
    }
  if (strcmp(name, "GL_APPLE_vertex_array_object") == 0)
    {
    vtkgl::BindVertexArrayAPPLE = (vtkgl::PFNGLBINDVERTEXARRAYAPPLEPROC)manager->GetProcAddress("glBindVertexArrayAPPLE");
    vtkgl::DeleteVertexArraysAPPLE = (vtkgl::PFNGLDELETEVERTEXARRAYSAPPLEPROC)manager->GetProcAddress("glDeleteVertexArraysAPPLE");
    vtkgl::GenVertexArraysAPPLE = (vtkgl::PFNGLGENVERTEXARRAYSAPPLEPROC)manager->GetProcAddress("glGenVertexArraysAPPLE");
    vtkgl::IsVertexArrayAPPLE = (vtkgl::PFNGLISVERTEXARRAYAPPLEPROC)manager->GetProcAddress("glIsVertexArrayAPPLE");
    return 1 && (vtkgl::BindVertexArrayAPPLE != NULL) && (vtkgl::DeleteVertexArraysAPPLE != NULL) && (vtkgl::GenVertexArraysAPPLE != NULL) && (vtkgl::IsVertexArrayAPPLE != NULL);
    }
  if (strcmp(name, "GL_APPLE_vertex_array_range") == 0)
    {
    vtkgl::VertexArrayRangeAPPLE = (vtkgl::PFNGLVERTEXARRAYRANGEAPPLEPROC)manager->GetProcAddress("glVertexArrayRangeAPPLE");
    vtkgl::FlushVertexArrayRangeAPPLE = (vtkgl::PFNGLFLUSHVERTEXARRAYRANGEAPPLEPROC)manager->GetProcAddress("glFlushVertexArrayRangeAPPLE");
    vtkgl::VertexArrayParameteriAPPLE = (vtkgl::PFNGLVERTEXARRAYPARAMETERIAPPLEPROC)manager->GetProcAddress("glVertexArrayParameteriAPPLE");
    return 1 && (vtkgl::VertexArrayRangeAPPLE != NULL) && (vtkgl::FlushVertexArrayRangeAPPLE != NULL) && (vtkgl::VertexArrayParameteriAPPLE != NULL);
    }
  if (strcmp(name, "GL_APPLE_ycbcr_422") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_S3_s3tc") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ATI_draw_buffers") == 0)
    {
    vtkgl::DrawBuffersATI = (vtkgl::PFNGLDRAWBUFFERSATIPROC)manager->GetProcAddress("glDrawBuffersATI");
    return 1 && (vtkgl::DrawBuffersATI != NULL);
    }
  if (strcmp(name, "GL_ATI_pixel_format_float") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ATI_texture_env_combine3") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ATI_texture_float") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_float_buffer") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_fragment_program") == 0)
    {
    vtkgl::ProgramNamedParameter4fNV = (vtkgl::PFNGLPROGRAMNAMEDPARAMETER4FNVPROC)manager->GetProcAddress("glProgramNamedParameter4fNV");
    vtkgl::ProgramNamedParameter4dNV = (vtkgl::PFNGLPROGRAMNAMEDPARAMETER4DNVPROC)manager->GetProcAddress("glProgramNamedParameter4dNV");
    vtkgl::ProgramNamedParameter4fvNV = (vtkgl::PFNGLPROGRAMNAMEDPARAMETER4FVNVPROC)manager->GetProcAddress("glProgramNamedParameter4fvNV");
    vtkgl::ProgramNamedParameter4dvNV = (vtkgl::PFNGLPROGRAMNAMEDPARAMETER4DVNVPROC)manager->GetProcAddress("glProgramNamedParameter4dvNV");
    vtkgl::GetProgramNamedParameterfvNV = (vtkgl::PFNGLGETPROGRAMNAMEDPARAMETERFVNVPROC)manager->GetProcAddress("glGetProgramNamedParameterfvNV");
    vtkgl::GetProgramNamedParameterdvNV = (vtkgl::PFNGLGETPROGRAMNAMEDPARAMETERDVNVPROC)manager->GetProcAddress("glGetProgramNamedParameterdvNV");
    return 1 && (vtkgl::ProgramNamedParameter4fNV != NULL) && (vtkgl::ProgramNamedParameter4dNV != NULL) && (vtkgl::ProgramNamedParameter4fvNV != NULL) && (vtkgl::ProgramNamedParameter4dvNV != NULL) && (vtkgl::GetProgramNamedParameterfvNV != NULL) && (vtkgl::GetProgramNamedParameterdvNV != NULL);
    }
  if (strcmp(name, "GL_NV_half_float") == 0)
    {
    vtkgl::Vertex2hNV = (vtkgl::PFNGLVERTEX2HNVPROC)manager->GetProcAddress("glVertex2hNV");
    vtkgl::Vertex2hvNV = (vtkgl::PFNGLVERTEX2HVNVPROC)manager->GetProcAddress("glVertex2hvNV");
    vtkgl::Vertex3hNV = (vtkgl::PFNGLVERTEX3HNVPROC)manager->GetProcAddress("glVertex3hNV");
    vtkgl::Vertex3hvNV = (vtkgl::PFNGLVERTEX3HVNVPROC)manager->GetProcAddress("glVertex3hvNV");
    vtkgl::Vertex4hNV = (vtkgl::PFNGLVERTEX4HNVPROC)manager->GetProcAddress("glVertex4hNV");
    vtkgl::Vertex4hvNV = (vtkgl::PFNGLVERTEX4HVNVPROC)manager->GetProcAddress("glVertex4hvNV");
    vtkgl::Normal3hNV = (vtkgl::PFNGLNORMAL3HNVPROC)manager->GetProcAddress("glNormal3hNV");
    vtkgl::Normal3hvNV = (vtkgl::PFNGLNORMAL3HVNVPROC)manager->GetProcAddress("glNormal3hvNV");
    vtkgl::Color3hNV = (vtkgl::PFNGLCOLOR3HNVPROC)manager->GetProcAddress("glColor3hNV");
    vtkgl::Color3hvNV = (vtkgl::PFNGLCOLOR3HVNVPROC)manager->GetProcAddress("glColor3hvNV");
    vtkgl::Color4hNV = (vtkgl::PFNGLCOLOR4HNVPROC)manager->GetProcAddress("glColor4hNV");
    vtkgl::Color4hvNV = (vtkgl::PFNGLCOLOR4HVNVPROC)manager->GetProcAddress("glColor4hvNV");
    vtkgl::TexCoord1hNV = (vtkgl::PFNGLTEXCOORD1HNVPROC)manager->GetProcAddress("glTexCoord1hNV");
    vtkgl::TexCoord1hvNV = (vtkgl::PFNGLTEXCOORD1HVNVPROC)manager->GetProcAddress("glTexCoord1hvNV");
    vtkgl::TexCoord2hNV = (vtkgl::PFNGLTEXCOORD2HNVPROC)manager->GetProcAddress("glTexCoord2hNV");
    vtkgl::TexCoord2hvNV = (vtkgl::PFNGLTEXCOORD2HVNVPROC)manager->GetProcAddress("glTexCoord2hvNV");
    vtkgl::TexCoord3hNV = (vtkgl::PFNGLTEXCOORD3HNVPROC)manager->GetProcAddress("glTexCoord3hNV");
    vtkgl::TexCoord3hvNV = (vtkgl::PFNGLTEXCOORD3HVNVPROC)manager->GetProcAddress("glTexCoord3hvNV");
    vtkgl::TexCoord4hNV = (vtkgl::PFNGLTEXCOORD4HNVPROC)manager->GetProcAddress("glTexCoord4hNV");
    vtkgl::TexCoord4hvNV = (vtkgl::PFNGLTEXCOORD4HVNVPROC)manager->GetProcAddress("glTexCoord4hvNV");
    vtkgl::MultiTexCoord1hNV = (vtkgl::PFNGLMULTITEXCOORD1HNVPROC)manager->GetProcAddress("glMultiTexCoord1hNV");
    vtkgl::MultiTexCoord1hvNV = (vtkgl::PFNGLMULTITEXCOORD1HVNVPROC)manager->GetProcAddress("glMultiTexCoord1hvNV");
    vtkgl::MultiTexCoord2hNV = (vtkgl::PFNGLMULTITEXCOORD2HNVPROC)manager->GetProcAddress("glMultiTexCoord2hNV");
    vtkgl::MultiTexCoord2hvNV = (vtkgl::PFNGLMULTITEXCOORD2HVNVPROC)manager->GetProcAddress("glMultiTexCoord2hvNV");
    vtkgl::MultiTexCoord3hNV = (vtkgl::PFNGLMULTITEXCOORD3HNVPROC)manager->GetProcAddress("glMultiTexCoord3hNV");
    vtkgl::MultiTexCoord3hvNV = (vtkgl::PFNGLMULTITEXCOORD3HVNVPROC)manager->GetProcAddress("glMultiTexCoord3hvNV");
    vtkgl::MultiTexCoord4hNV = (vtkgl::PFNGLMULTITEXCOORD4HNVPROC)manager->GetProcAddress("glMultiTexCoord4hNV");
    vtkgl::MultiTexCoord4hvNV = (vtkgl::PFNGLMULTITEXCOORD4HVNVPROC)manager->GetProcAddress("glMultiTexCoord4hvNV");
    vtkgl::FogCoordhNV = (vtkgl::PFNGLFOGCOORDHNVPROC)manager->GetProcAddress("glFogCoordhNV");
    vtkgl::FogCoordhvNV = (vtkgl::PFNGLFOGCOORDHVNVPROC)manager->GetProcAddress("glFogCoordhvNV");
    vtkgl::SecondaryColor3hNV = (vtkgl::PFNGLSECONDARYCOLOR3HNVPROC)manager->GetProcAddress("glSecondaryColor3hNV");
    vtkgl::SecondaryColor3hvNV = (vtkgl::PFNGLSECONDARYCOLOR3HVNVPROC)manager->GetProcAddress("glSecondaryColor3hvNV");
    vtkgl::VertexWeighthNV = (vtkgl::PFNGLVERTEXWEIGHTHNVPROC)manager->GetProcAddress("glVertexWeighthNV");
    vtkgl::VertexWeighthvNV = (vtkgl::PFNGLVERTEXWEIGHTHVNVPROC)manager->GetProcAddress("glVertexWeighthvNV");
    vtkgl::VertexAttrib1hNV = (vtkgl::PFNGLVERTEXATTRIB1HNVPROC)manager->GetProcAddress("glVertexAttrib1hNV");
    vtkgl::VertexAttrib1hvNV = (vtkgl::PFNGLVERTEXATTRIB1HVNVPROC)manager->GetProcAddress("glVertexAttrib1hvNV");
    vtkgl::VertexAttrib2hNV = (vtkgl::PFNGLVERTEXATTRIB2HNVPROC)manager->GetProcAddress("glVertexAttrib2hNV");
    vtkgl::VertexAttrib2hvNV = (vtkgl::PFNGLVERTEXATTRIB2HVNVPROC)manager->GetProcAddress("glVertexAttrib2hvNV");
    vtkgl::VertexAttrib3hNV = (vtkgl::PFNGLVERTEXATTRIB3HNVPROC)manager->GetProcAddress("glVertexAttrib3hNV");
    vtkgl::VertexAttrib3hvNV = (vtkgl::PFNGLVERTEXATTRIB3HVNVPROC)manager->GetProcAddress("glVertexAttrib3hvNV");
    vtkgl::VertexAttrib4hNV = (vtkgl::PFNGLVERTEXATTRIB4HNVPROC)manager->GetProcAddress("glVertexAttrib4hNV");
    vtkgl::VertexAttrib4hvNV = (vtkgl::PFNGLVERTEXATTRIB4HVNVPROC)manager->GetProcAddress("glVertexAttrib4hvNV");
    vtkgl::VertexAttribs1hvNV = (vtkgl::PFNGLVERTEXATTRIBS1HVNVPROC)manager->GetProcAddress("glVertexAttribs1hvNV");
    vtkgl::VertexAttribs2hvNV = (vtkgl::PFNGLVERTEXATTRIBS2HVNVPROC)manager->GetProcAddress("glVertexAttribs2hvNV");
    vtkgl::VertexAttribs3hvNV = (vtkgl::PFNGLVERTEXATTRIBS3HVNVPROC)manager->GetProcAddress("glVertexAttribs3hvNV");
    vtkgl::VertexAttribs4hvNV = (vtkgl::PFNGLVERTEXATTRIBS4HVNVPROC)manager->GetProcAddress("glVertexAttribs4hvNV");
    return 1 && (vtkgl::Vertex2hNV != NULL) && (vtkgl::Vertex2hvNV != NULL) && (vtkgl::Vertex3hNV != NULL) && (vtkgl::Vertex3hvNV != NULL) && (vtkgl::Vertex4hNV != NULL) && (vtkgl::Vertex4hvNV != NULL) && (vtkgl::Normal3hNV != NULL) && (vtkgl::Normal3hvNV != NULL) && (vtkgl::Color3hNV != NULL) && (vtkgl::Color3hvNV != NULL) && (vtkgl::Color4hNV != NULL) && (vtkgl::Color4hvNV != NULL) && (vtkgl::TexCoord1hNV != NULL) && (vtkgl::TexCoord1hvNV != NULL) && (vtkgl::TexCoord2hNV != NULL) && (vtkgl::TexCoord2hvNV != NULL) && (vtkgl::TexCoord3hNV != NULL) && (vtkgl::TexCoord3hvNV != NULL) && (vtkgl::TexCoord4hNV != NULL) && (vtkgl::TexCoord4hvNV != NULL) && (vtkgl::MultiTexCoord1hNV != NULL) && (vtkgl::MultiTexCoord1hvNV != NULL) && (vtkgl::MultiTexCoord2hNV != NULL) && (vtkgl::MultiTexCoord2hvNV != NULL) && (vtkgl::MultiTexCoord3hNV != NULL) && (vtkgl::MultiTexCoord3hvNV != NULL) && (vtkgl::MultiTexCoord4hNV != NULL) && (vtkgl::MultiTexCoord4hvNV != NULL) && (vtkgl::FogCoordhNV != NULL) && (vtkgl::FogCoordhvNV != NULL) && (vtkgl::SecondaryColor3hNV != NULL) && (vtkgl::SecondaryColor3hvNV != NULL) && (vtkgl::VertexWeighthNV != NULL) && (vtkgl::VertexWeighthvNV != NULL) && (vtkgl::VertexAttrib1hNV != NULL) && (vtkgl::VertexAttrib1hvNV != NULL) && (vtkgl::VertexAttrib2hNV != NULL) && (vtkgl::VertexAttrib2hvNV != NULL) && (vtkgl::VertexAttrib3hNV != NULL) && (vtkgl::VertexAttrib3hvNV != NULL) && (vtkgl::VertexAttrib4hNV != NULL) && (vtkgl::VertexAttrib4hvNV != NULL) && (vtkgl::VertexAttribs1hvNV != NULL) && (vtkgl::VertexAttribs2hvNV != NULL) && (vtkgl::VertexAttribs3hvNV != NULL) && (vtkgl::VertexAttribs4hvNV != NULL);
    }
  if (strcmp(name, "GL_NV_pixel_data_range") == 0)
    {
    vtkgl::PixelDataRangeNV = (vtkgl::PFNGLPIXELDATARANGENVPROC)manager->GetProcAddress("glPixelDataRangeNV");
    vtkgl::FlushPixelDataRangeNV = (vtkgl::PFNGLFLUSHPIXELDATARANGENVPROC)manager->GetProcAddress("glFlushPixelDataRangeNV");
    return 1 && (vtkgl::PixelDataRangeNV != NULL) && (vtkgl::FlushPixelDataRangeNV != NULL);
    }
  if (strcmp(name, "GL_NV_primitive_restart") == 0)
    {
    vtkgl::PrimitiveRestartNV = (vtkgl::PFNGLPRIMITIVERESTARTNVPROC)manager->GetProcAddress("glPrimitiveRestartNV");
    vtkgl::PrimitiveRestartIndexNV = (vtkgl::PFNGLPRIMITIVERESTARTINDEXNVPROC)manager->GetProcAddress("glPrimitiveRestartIndexNV");
    return 1 && (vtkgl::PrimitiveRestartNV != NULL) && (vtkgl::PrimitiveRestartIndexNV != NULL);
    }
  if (strcmp(name, "GL_NV_texture_expand_normal") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_vertex_program2") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_ATI_map_object_buffer") == 0)
    {
    vtkgl::MapObjectBufferATI = (vtkgl::PFNGLMAPOBJECTBUFFERATIPROC)manager->GetProcAddress("glMapObjectBufferATI");
    vtkgl::UnmapObjectBufferATI = (vtkgl::PFNGLUNMAPOBJECTBUFFERATIPROC)manager->GetProcAddress("glUnmapObjectBufferATI");
    return 1 && (vtkgl::MapObjectBufferATI != NULL) && (vtkgl::UnmapObjectBufferATI != NULL);
    }
  if (strcmp(name, "GL_ATI_separate_stencil") == 0)
    {
    vtkgl::StencilOpSeparateATI = (vtkgl::PFNGLSTENCILOPSEPARATEATIPROC)manager->GetProcAddress("glStencilOpSeparateATI");
    vtkgl::StencilFuncSeparateATI = (vtkgl::PFNGLSTENCILFUNCSEPARATEATIPROC)manager->GetProcAddress("glStencilFuncSeparateATI");
    return 1 && (vtkgl::StencilOpSeparateATI != NULL) && (vtkgl::StencilFuncSeparateATI != NULL);
    }
  if (strcmp(name, "GL_ATI_vertex_attrib_array_object") == 0)
    {
    vtkgl::VertexAttribArrayObjectATI = (vtkgl::PFNGLVERTEXATTRIBARRAYOBJECTATIPROC)manager->GetProcAddress("glVertexAttribArrayObjectATI");
    vtkgl::GetVertexAttribArrayObjectfvATI = (vtkgl::PFNGLGETVERTEXATTRIBARRAYOBJECTFVATIPROC)manager->GetProcAddress("glGetVertexAttribArrayObjectfvATI");
    vtkgl::GetVertexAttribArrayObjectivATI = (vtkgl::PFNGLGETVERTEXATTRIBARRAYOBJECTIVATIPROC)manager->GetProcAddress("glGetVertexAttribArrayObjectivATI");
    return 1 && (vtkgl::VertexAttribArrayObjectATI != NULL) && (vtkgl::GetVertexAttribArrayObjectfvATI != NULL) && (vtkgl::GetVertexAttribArrayObjectivATI != NULL);
    }
  if (strcmp(name, "GL_OES_read_format") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_depth_bounds_test") == 0)
    {
    vtkgl::DepthBoundsEXT = (vtkgl::PFNGLDEPTHBOUNDSEXTPROC)manager->GetProcAddress("glDepthBoundsEXT");
    return 1 && (vtkgl::DepthBoundsEXT != NULL);
    }
  if (strcmp(name, "GL_EXT_texture_mirror_clamp") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_blend_equation_separate") == 0)
    {
    vtkgl::BlendEquationSeparateEXT = (vtkgl::PFNGLBLENDEQUATIONSEPARATEEXTPROC)manager->GetProcAddress("glBlendEquationSeparateEXT");
    return 1 && (vtkgl::BlendEquationSeparateEXT != NULL);
    }
  if (strcmp(name, "GL_MESA_pack_invert") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_MESA_ycbcr_texture") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_pixel_buffer_object") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_fragment_program_option") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_fragment_program2") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_vertex_program2_option") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_NV_vertex_program3") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_EXT_color_matrix") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIX_texture_select") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_INGR_blend_func_separate") == 0)
    {
    vtkgl::BlendFuncSeparateINGR = (vtkgl::PFNGLBLENDFUNCSEPARATEINGRPROC)manager->GetProcAddress("glBlendFuncSeparateINGR");
    return 1 && (vtkgl::BlendFuncSeparateINGR != NULL);
    }
  if (strcmp(name, "GL_SGIX_depth_pass_instrument") == 0)
    {
    return 1;
    }
  if (strcmp(name, "GL_SGIX_igloo_interface") == 0)
    {
    vtkgl::IglooInterfaceSGIX = (vtkgl::PFNGLIGLOOINTERFACESGIXPROC)manager->GetProcAddress("glIglooInterfaceSGIX");
    return 1 && (vtkgl::IglooInterfaceSGIX != NULL);
    }
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_VERSION_1_3") == 0)
    {
    vtkglX::GetFBConfigs = (vtkglX::PFNGLXGETFBCONFIGSPROC)manager->GetProcAddress("glXGetFBConfigs");
    vtkglX::ChooseFBConfig = (vtkglX::PFNGLXCHOOSEFBCONFIGPROC)manager->GetProcAddress("glXChooseFBConfig");
    vtkglX::GetFBConfigAttrib = (vtkglX::PFNGLXGETFBCONFIGATTRIBPROC)manager->GetProcAddress("glXGetFBConfigAttrib");
    vtkglX::GetVisualFromFBConfig = (vtkglX::PFNGLXGETVISUALFROMFBCONFIGPROC)manager->GetProcAddress("glXGetVisualFromFBConfig");
    vtkglX::CreateWindow = (vtkglX::PFNGLXCREATEWINDOWPROC)manager->GetProcAddress("glXCreateWindow");
    vtkglX::DestroyWindow = (vtkglX::PFNGLXDESTROYWINDOWPROC)manager->GetProcAddress("glXDestroyWindow");
    vtkglX::CreatePixmap = (vtkglX::PFNGLXCREATEPIXMAPPROC)manager->GetProcAddress("glXCreatePixmap");
    vtkglX::DestroyPixmap = (vtkglX::PFNGLXDESTROYPIXMAPPROC)manager->GetProcAddress("glXDestroyPixmap");
    vtkglX::CreatePbuffer = (vtkglX::PFNGLXCREATEPBUFFERPROC)manager->GetProcAddress("glXCreatePbuffer");
    vtkglX::DestroyPbuffer = (vtkglX::PFNGLXDESTROYPBUFFERPROC)manager->GetProcAddress("glXDestroyPbuffer");
    vtkglX::QueryDrawable = (vtkglX::PFNGLXQUERYDRAWABLEPROC)manager->GetProcAddress("glXQueryDrawable");
    vtkglX::CreateNewContext = (vtkglX::PFNGLXCREATENEWCONTEXTPROC)manager->GetProcAddress("glXCreateNewContext");
    vtkglX::MakeContextCurrent = (vtkglX::PFNGLXMAKECONTEXTCURRENTPROC)manager->GetProcAddress("glXMakeContextCurrent");
    vtkglX::GetCurrentReadDrawable = (vtkglX::PFNGLXGETCURRENTREADDRAWABLEPROC)manager->GetProcAddress("glXGetCurrentReadDrawable");
    vtkglX::GetCurrentDisplay = (vtkglX::PFNGLXGETCURRENTDISPLAYPROC)manager->GetProcAddress("glXGetCurrentDisplay");
    vtkglX::QueryContext = (vtkglX::PFNGLXQUERYCONTEXTPROC)manager->GetProcAddress("glXQueryContext");
    vtkglX::SelectEvent = (vtkglX::PFNGLXSELECTEVENTPROC)manager->GetProcAddress("glXSelectEvent");
    vtkglX::GetSelectedEvent = (vtkglX::PFNGLXGETSELECTEDEVENTPROC)manager->GetProcAddress("glXGetSelectedEvent");
    return 1 && (vtkglX::GetFBConfigs != NULL) && (vtkglX::ChooseFBConfig != NULL) && (vtkglX::GetFBConfigAttrib != NULL) && (vtkglX::GetVisualFromFBConfig != NULL) && (vtkglX::CreateWindow != NULL) && (vtkglX::DestroyWindow != NULL) && (vtkglX::CreatePixmap != NULL) && (vtkglX::DestroyPixmap != NULL) && (vtkglX::CreatePbuffer != NULL) && (vtkglX::DestroyPbuffer != NULL) && (vtkglX::QueryDrawable != NULL) && (vtkglX::CreateNewContext != NULL) && (vtkglX::MakeContextCurrent != NULL) && (vtkglX::GetCurrentReadDrawable != NULL) && (vtkglX::GetCurrentDisplay != NULL) && (vtkglX::QueryContext != NULL) && (vtkglX::SelectEvent != NULL) && (vtkglX::GetSelectedEvent != NULL);
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_VERSION_1_4") == 0)
    {
    vtkglX::GetProcAddress = (vtkglX::PFNGLXGETPROCADDRESSPROC)manager->GetProcAddress("glXGetProcAddress");
    return 1 && (vtkglX::GetProcAddress != NULL);
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_ARB_multisample") == 0)
    {
    return 1;
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_ARB_fbconfig_float") == 0)
    {
    return 1;
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_SGIS_multisample") == 0)
    {
    return 1;
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_EXT_visual_info") == 0)
    {
    return 1;
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_SGI_swap_control") == 0)
    {
    vtkglX::SwapIntervalSGI = (vtkglX::PFNGLXSWAPINTERVALSGIPROC)manager->GetProcAddress("glXSwapIntervalSGI");
    return 1 && (vtkglX::SwapIntervalSGI != NULL);
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_SGI_video_sync") == 0)
    {
    vtkglX::GetVideoSyncSGI = (vtkglX::PFNGLXGETVIDEOSYNCSGIPROC)manager->GetProcAddress("glXGetVideoSyncSGI");
    vtkglX::WaitVideoSyncSGI = (vtkglX::PFNGLXWAITVIDEOSYNCSGIPROC)manager->GetProcAddress("glXWaitVideoSyncSGI");
    return 1 && (vtkglX::GetVideoSyncSGI != NULL) && (vtkglX::WaitVideoSyncSGI != NULL);
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_SGI_make_current_read") == 0)
    {
    vtkglX::MakeCurrentReadSGI = (vtkglX::PFNGLXMAKECURRENTREADSGIPROC)manager->GetProcAddress("glXMakeCurrentReadSGI");
    vtkglX::GetCurrentReadDrawableSGI = (vtkglX::PFNGLXGETCURRENTREADDRAWABLESGIPROC)manager->GetProcAddress("glXGetCurrentReadDrawableSGI");
    return 1 && (vtkglX::MakeCurrentReadSGI != NULL) && (vtkglX::GetCurrentReadDrawableSGI != NULL);
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_EXT_visual_rating") == 0)
    {
    return 1;
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_EXT_import_context") == 0)
    {
    vtkglX::GetCurrentDisplayEXT = (vtkglX::PFNGLXGETCURRENTDISPLAYEXTPROC)manager->GetProcAddress("glXGetCurrentDisplayEXT");
    vtkglX::QueryContextInfoEXT = (vtkglX::PFNGLXQUERYCONTEXTINFOEXTPROC)manager->GetProcAddress("glXQueryContextInfoEXT");
    vtkglX::GetContextIDEXT = (vtkglX::PFNGLXGETCONTEXTIDEXTPROC)manager->GetProcAddress("glXGetContextIDEXT");
    vtkglX::ImportContextEXT = (vtkglX::PFNGLXIMPORTCONTEXTEXTPROC)manager->GetProcAddress("glXImportContextEXT");
    vtkglX::FreeContextEXT = (vtkglX::PFNGLXFREECONTEXTEXTPROC)manager->GetProcAddress("glXFreeContextEXT");
    return 1 && (vtkglX::GetCurrentDisplayEXT != NULL) && (vtkglX::QueryContextInfoEXT != NULL) && (vtkglX::GetContextIDEXT != NULL) && (vtkglX::ImportContextEXT != NULL) && (vtkglX::FreeContextEXT != NULL);
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_SGIX_fbconfig") == 0)
    {
    vtkglX::GetFBConfigAttribSGIX = (vtkglX::PFNGLXGETFBCONFIGATTRIBSGIXPROC)manager->GetProcAddress("glXGetFBConfigAttribSGIX");
    vtkglX::ChooseFBConfigSGIX = (vtkglX::PFNGLXCHOOSEFBCONFIGSGIXPROC)manager->GetProcAddress("glXChooseFBConfigSGIX");
    vtkglX::CreateGLXPixmapWithConfigSGIX = (vtkglX::PFNGLXCREATEGLXPIXMAPWITHCONFIGSGIXPROC)manager->GetProcAddress("glXCreateGLXPixmapWithConfigSGIX");
    vtkglX::CreateContextWithConfigSGIX = (vtkglX::PFNGLXCREATECONTEXTWITHCONFIGSGIXPROC)manager->GetProcAddress("glXCreateContextWithConfigSGIX");
    vtkglX::GetVisualFromFBConfigSGIX = (vtkglX::PFNGLXGETVISUALFROMFBCONFIGSGIXPROC)manager->GetProcAddress("glXGetVisualFromFBConfigSGIX");
    vtkglX::GetFBConfigFromVisualSGIX = (vtkglX::PFNGLXGETFBCONFIGFROMVISUALSGIXPROC)manager->GetProcAddress("glXGetFBConfigFromVisualSGIX");
    return 1 && (vtkglX::GetFBConfigAttribSGIX != NULL) && (vtkglX::ChooseFBConfigSGIX != NULL) && (vtkglX::CreateGLXPixmapWithConfigSGIX != NULL) && (vtkglX::CreateContextWithConfigSGIX != NULL) && (vtkglX::GetVisualFromFBConfigSGIX != NULL) && (vtkglX::GetFBConfigFromVisualSGIX != NULL);
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_SGIX_pbuffer") == 0)
    {
    vtkglX::CreateGLXPbufferSGIX = (vtkglX::PFNGLXCREATEGLXPBUFFERSGIXPROC)manager->GetProcAddress("glXCreateGLXPbufferSGIX");
    vtkglX::DestroyGLXPbufferSGIX = (vtkglX::PFNGLXDESTROYGLXPBUFFERSGIXPROC)manager->GetProcAddress("glXDestroyGLXPbufferSGIX");
    vtkglX::QueryGLXPbufferSGIX = (vtkglX::PFNGLXQUERYGLXPBUFFERSGIXPROC)manager->GetProcAddress("glXQueryGLXPbufferSGIX");
    vtkglX::SelectEventSGIX = (vtkglX::PFNGLXSELECTEVENTSGIXPROC)manager->GetProcAddress("glXSelectEventSGIX");
    vtkglX::GetSelectedEventSGIX = (vtkglX::PFNGLXGETSELECTEDEVENTSGIXPROC)manager->GetProcAddress("glXGetSelectedEventSGIX");
    return 1 && (vtkglX::CreateGLXPbufferSGIX != NULL) && (vtkglX::DestroyGLXPbufferSGIX != NULL) && (vtkglX::QueryGLXPbufferSGIX != NULL) && (vtkglX::SelectEventSGIX != NULL) && (vtkglX::GetSelectedEventSGIX != NULL);
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_SGI_cushion") == 0)
    {
    vtkglX::CushionSGI = (vtkglX::PFNGLXCUSHIONSGIPROC)manager->GetProcAddress("glXCushionSGI");
    return 1 && (vtkglX::CushionSGI != NULL);
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_SGIX_video_resize") == 0)
    {
    vtkglX::BindChannelToWindowSGIX = (vtkglX::PFNGLXBINDCHANNELTOWINDOWSGIXPROC)manager->GetProcAddress("glXBindChannelToWindowSGIX");
    vtkglX::ChannelRectSGIX = (vtkglX::PFNGLXCHANNELRECTSGIXPROC)manager->GetProcAddress("glXChannelRectSGIX");
    vtkglX::QueryChannelRectSGIX = (vtkglX::PFNGLXQUERYCHANNELRECTSGIXPROC)manager->GetProcAddress("glXQueryChannelRectSGIX");
    vtkglX::QueryChannelDeltasSGIX = (vtkglX::PFNGLXQUERYCHANNELDELTASSGIXPROC)manager->GetProcAddress("glXQueryChannelDeltasSGIX");
    vtkglX::ChannelRectSyncSGIX = (vtkglX::PFNGLXCHANNELRECTSYNCSGIXPROC)manager->GetProcAddress("glXChannelRectSyncSGIX");
    return 1 && (vtkglX::BindChannelToWindowSGIX != NULL) && (vtkglX::ChannelRectSGIX != NULL) && (vtkglX::QueryChannelRectSGIX != NULL) && (vtkglX::QueryChannelDeltasSGIX != NULL) && (vtkglX::ChannelRectSyncSGIX != NULL);
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_SGIX_swap_group") == 0)
    {
    vtkglX::JoinSwapGroupSGIX = (vtkglX::PFNGLXJOINSWAPGROUPSGIXPROC)manager->GetProcAddress("glXJoinSwapGroupSGIX");
    return 1 && (vtkglX::JoinSwapGroupSGIX != NULL);
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_SGIX_swap_barrier") == 0)
    {
    vtkglX::BindSwapBarrierSGIX = (vtkglX::PFNGLXBINDSWAPBARRIERSGIXPROC)manager->GetProcAddress("glXBindSwapBarrierSGIX");
    vtkglX::QueryMaxSwapBarriersSGIX = (vtkglX::PFNGLXQUERYMAXSWAPBARRIERSSGIXPROC)manager->GetProcAddress("glXQueryMaxSwapBarriersSGIX");
    return 1 && (vtkglX::BindSwapBarrierSGIX != NULL) && (vtkglX::QueryMaxSwapBarriersSGIX != NULL);
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_SGIS_blended_overlay") == 0)
    {
    return 1;
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_SGIS_shared_multisample") == 0)
    {
    return 1;
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_SUN_get_transparent_index") == 0)
    {
    vtkglX::GetTransparentIndexSUN = (vtkglX::PFNGLXGETTRANSPARENTINDEXSUNPROC)manager->GetProcAddress("glXGetTransparentIndexSUN");
    return 1 && (vtkglX::GetTransparentIndexSUN != NULL);
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_3DFX_multisample") == 0)
    {
    return 1;
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_MESA_copy_sub_buffer") == 0)
    {
    vtkglX::CopySubBufferMESA = (vtkglX::PFNGLXCOPYSUBBUFFERMESAPROC)manager->GetProcAddress("glXCopySubBufferMESA");
    return 1 && (vtkglX::CopySubBufferMESA != NULL);
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_MESA_pixmap_colormap") == 0)
    {
    vtkglX::CreateGLXPixmapMESA = (vtkglX::PFNGLXCREATEGLXPIXMAPMESAPROC)manager->GetProcAddress("glXCreateGLXPixmapMESA");
    return 1 && (vtkglX::CreateGLXPixmapMESA != NULL);
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_MESA_release_buffers") == 0)
    {
    vtkglX::ReleaseBuffersMESA = (vtkglX::PFNGLXRELEASEBUFFERSMESAPROC)manager->GetProcAddress("glXReleaseBuffersMESA");
    return 1 && (vtkglX::ReleaseBuffersMESA != NULL);
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_MESA_set_3dfx_mode") == 0)
    {
    vtkglX::Set3DfxModeMESA = (vtkglX::PFNGLXSET3DFXMODEMESAPROC)manager->GetProcAddress("glXSet3DfxModeMESA");
    return 1 && (vtkglX::Set3DfxModeMESA != NULL);
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_SGIX_visual_select_group") == 0)
    {
    return 1;
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_OML_swap_method") == 0)
    {
    return 1;
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_OML_sync_control") == 0)
    {
    vtkglX::GetSyncValuesOML = (vtkglX::PFNGLXGETSYNCVALUESOMLPROC)manager->GetProcAddress("glXGetSyncValuesOML");
    vtkglX::GetMscRateOML = (vtkglX::PFNGLXGETMSCRATEOMLPROC)manager->GetProcAddress("glXGetMscRateOML");
    vtkglX::SwapBuffersMscOML = (vtkglX::PFNGLXSWAPBUFFERSMSCOMLPROC)manager->GetProcAddress("glXSwapBuffersMscOML");
    vtkglX::WaitForMscOML = (vtkglX::PFNGLXWAITFORMSCOMLPROC)manager->GetProcAddress("glXWaitForMscOML");
    vtkglX::WaitForSbcOML = (vtkglX::PFNGLXWAITFORSBCOMLPROC)manager->GetProcAddress("glXWaitForSbcOML");
    return 1 && (vtkglX::GetSyncValuesOML != NULL) && (vtkglX::GetMscRateOML != NULL) && (vtkglX::SwapBuffersMscOML != NULL) && (vtkglX::WaitForMscOML != NULL) && (vtkglX::WaitForSbcOML != NULL);
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_NV_float_buffer") == 0)
    {
    return 1;
    }
#endif
#ifdef VTK_USE_X
  if (strcmp(name, "GLX_MESA_agp_offset") == 0)
    {
    vtkglX::GetAGPOffsetMESA = (vtkglX::PFNGLXGETAGPOFFSETMESAPROC)manager->GetProcAddress("glXGetAGPOffsetMESA");
    return 1 && (vtkglX::GetAGPOffsetMESA != NULL);
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_ARB_buffer_region") == 0)
    {
    vtkwgl::CreateBufferRegionARB = (vtkwgl::PFNWGLCREATEBUFFERREGIONARBPROC)manager->GetProcAddress("wglCreateBufferRegionARB");
    vtkwgl::DeleteBufferRegionARB = (vtkwgl::PFNWGLDELETEBUFFERREGIONARBPROC)manager->GetProcAddress("wglDeleteBufferRegionARB");
    vtkwgl::SaveBufferRegionARB = (vtkwgl::PFNWGLSAVEBUFFERREGIONARBPROC)manager->GetProcAddress("wglSaveBufferRegionARB");
    vtkwgl::RestoreBufferRegionARB = (vtkwgl::PFNWGLRESTOREBUFFERREGIONARBPROC)manager->GetProcAddress("wglRestoreBufferRegionARB");
    return 1 && (vtkwgl::CreateBufferRegionARB != NULL) && (vtkwgl::DeleteBufferRegionARB != NULL) && (vtkwgl::SaveBufferRegionARB != NULL) && (vtkwgl::RestoreBufferRegionARB != NULL);
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_ARB_multisample") == 0)
    {
    return 1;
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_ARB_extensions_string") == 0)
    {
    vtkwgl::GetExtensionsStringARB = (vtkwgl::PFNWGLGETEXTENSIONSSTRINGARBPROC)manager->GetProcAddress("wglGetExtensionsStringARB");
    return 1 && (vtkwgl::GetExtensionsStringARB != NULL);
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_ARB_pixel_format") == 0)
    {
    vtkwgl::GetPixelFormatAttribivARB = (vtkwgl::PFNWGLGETPIXELFORMATATTRIBIVARBPROC)manager->GetProcAddress("wglGetPixelFormatAttribivARB");
    vtkwgl::GetPixelFormatAttribfvARB = (vtkwgl::PFNWGLGETPIXELFORMATATTRIBFVARBPROC)manager->GetProcAddress("wglGetPixelFormatAttribfvARB");
    vtkwgl::ChoosePixelFormatARB = (vtkwgl::PFNWGLCHOOSEPIXELFORMATARBPROC)manager->GetProcAddress("wglChoosePixelFormatARB");
    return 1 && (vtkwgl::GetPixelFormatAttribivARB != NULL) && (vtkwgl::GetPixelFormatAttribfvARB != NULL) && (vtkwgl::ChoosePixelFormatARB != NULL);
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_ARB_make_current_read") == 0)
    {
    vtkwgl::MakeContextCurrentARB = (vtkwgl::PFNWGLMAKECONTEXTCURRENTARBPROC)manager->GetProcAddress("wglMakeContextCurrentARB");
    vtkwgl::GetCurrentReadDCARB = (vtkwgl::PFNWGLGETCURRENTREADDCARBPROC)manager->GetProcAddress("wglGetCurrentReadDCARB");
    return 1 && (vtkwgl::MakeContextCurrentARB != NULL) && (vtkwgl::GetCurrentReadDCARB != NULL);
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_ARB_pbuffer") == 0)
    {
    vtkwgl::CreatePbufferARB = (vtkwgl::PFNWGLCREATEPBUFFERARBPROC)manager->GetProcAddress("wglCreatePbufferARB");
    vtkwgl::GetPbufferDCARB = (vtkwgl::PFNWGLGETPBUFFERDCARBPROC)manager->GetProcAddress("wglGetPbufferDCARB");
    vtkwgl::ReleasePbufferDCARB = (vtkwgl::PFNWGLRELEASEPBUFFERDCARBPROC)manager->GetProcAddress("wglReleasePbufferDCARB");
    vtkwgl::DestroyPbufferARB = (vtkwgl::PFNWGLDESTROYPBUFFERARBPROC)manager->GetProcAddress("wglDestroyPbufferARB");
    vtkwgl::QueryPbufferARB = (vtkwgl::PFNWGLQUERYPBUFFERARBPROC)manager->GetProcAddress("wglQueryPbufferARB");
    return 1 && (vtkwgl::CreatePbufferARB != NULL) && (vtkwgl::GetPbufferDCARB != NULL) && (vtkwgl::ReleasePbufferDCARB != NULL) && (vtkwgl::DestroyPbufferARB != NULL) && (vtkwgl::QueryPbufferARB != NULL);
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_ARB_render_texture") == 0)
    {
    vtkwgl::BindTexImageARB = (vtkwgl::PFNWGLBINDTEXIMAGEARBPROC)manager->GetProcAddress("wglBindTexImageARB");
    vtkwgl::ReleaseTexImageARB = (vtkwgl::PFNWGLRELEASETEXIMAGEARBPROC)manager->GetProcAddress("wglReleaseTexImageARB");
    vtkwgl::SetPbufferAttribARB = (vtkwgl::PFNWGLSETPBUFFERATTRIBARBPROC)manager->GetProcAddress("wglSetPbufferAttribARB");
    return 1 && (vtkwgl::BindTexImageARB != NULL) && (vtkwgl::ReleaseTexImageARB != NULL) && (vtkwgl::SetPbufferAttribARB != NULL);
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_ARB_pixel_format_float") == 0)
    {
    return 1;
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_EXT_make_current_read") == 0)
    {
    vtkwgl::MakeContextCurrentEXT = (vtkwgl::PFNWGLMAKECONTEXTCURRENTEXTPROC)manager->GetProcAddress("wglMakeContextCurrentEXT");
    vtkwgl::GetCurrentReadDCEXT = (vtkwgl::PFNWGLGETCURRENTREADDCEXTPROC)manager->GetProcAddress("wglGetCurrentReadDCEXT");
    return 1 && (vtkwgl::MakeContextCurrentEXT != NULL) && (vtkwgl::GetCurrentReadDCEXT != NULL);
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_EXT_pixel_format") == 0)
    {
    vtkwgl::GetPixelFormatAttribivEXT = (vtkwgl::PFNWGLGETPIXELFORMATATTRIBIVEXTPROC)manager->GetProcAddress("wglGetPixelFormatAttribivEXT");
    vtkwgl::GetPixelFormatAttribfvEXT = (vtkwgl::PFNWGLGETPIXELFORMATATTRIBFVEXTPROC)manager->GetProcAddress("wglGetPixelFormatAttribfvEXT");
    vtkwgl::ChoosePixelFormatEXT = (vtkwgl::PFNWGLCHOOSEPIXELFORMATEXTPROC)manager->GetProcAddress("wglChoosePixelFormatEXT");
    return 1 && (vtkwgl::GetPixelFormatAttribivEXT != NULL) && (vtkwgl::GetPixelFormatAttribfvEXT != NULL) && (vtkwgl::ChoosePixelFormatEXT != NULL);
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_EXT_pbuffer") == 0)
    {
    vtkwgl::CreatePbufferEXT = (vtkwgl::PFNWGLCREATEPBUFFEREXTPROC)manager->GetProcAddress("wglCreatePbufferEXT");
    vtkwgl::GetPbufferDCEXT = (vtkwgl::PFNWGLGETPBUFFERDCEXTPROC)manager->GetProcAddress("wglGetPbufferDCEXT");
    vtkwgl::ReleasePbufferDCEXT = (vtkwgl::PFNWGLRELEASEPBUFFERDCEXTPROC)manager->GetProcAddress("wglReleasePbufferDCEXT");
    vtkwgl::DestroyPbufferEXT = (vtkwgl::PFNWGLDESTROYPBUFFEREXTPROC)manager->GetProcAddress("wglDestroyPbufferEXT");
    vtkwgl::QueryPbufferEXT = (vtkwgl::PFNWGLQUERYPBUFFEREXTPROC)manager->GetProcAddress("wglQueryPbufferEXT");
    return 1 && (vtkwgl::CreatePbufferEXT != NULL) && (vtkwgl::GetPbufferDCEXT != NULL) && (vtkwgl::ReleasePbufferDCEXT != NULL) && (vtkwgl::DestroyPbufferEXT != NULL) && (vtkwgl::QueryPbufferEXT != NULL);
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_EXT_depth_float") == 0)
    {
    return 1;
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_3DFX_multisample") == 0)
    {
    return 1;
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_EXT_multisample") == 0)
    {
    return 1;
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_I3D_digital_video_control") == 0)
    {
    vtkwgl::GetDigitalVideoParametersI3D = (vtkwgl::PFNWGLGETDIGITALVIDEOPARAMETERSI3DPROC)manager->GetProcAddress("wglGetDigitalVideoParametersI3D");
    vtkwgl::SetDigitalVideoParametersI3D = (vtkwgl::PFNWGLSETDIGITALVIDEOPARAMETERSI3DPROC)manager->GetProcAddress("wglSetDigitalVideoParametersI3D");
    return 1 && (vtkwgl::GetDigitalVideoParametersI3D != NULL) && (vtkwgl::SetDigitalVideoParametersI3D != NULL);
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_I3D_gamma") == 0)
    {
    vtkwgl::GetGammaTableParametersI3D = (vtkwgl::PFNWGLGETGAMMATABLEPARAMETERSI3DPROC)manager->GetProcAddress("wglGetGammaTableParametersI3D");
    vtkwgl::SetGammaTableParametersI3D = (vtkwgl::PFNWGLSETGAMMATABLEPARAMETERSI3DPROC)manager->GetProcAddress("wglSetGammaTableParametersI3D");
    vtkwgl::GetGammaTableI3D = (vtkwgl::PFNWGLGETGAMMATABLEI3DPROC)manager->GetProcAddress("wglGetGammaTableI3D");
    vtkwgl::SetGammaTableI3D = (vtkwgl::PFNWGLSETGAMMATABLEI3DPROC)manager->GetProcAddress("wglSetGammaTableI3D");
    return 1 && (vtkwgl::GetGammaTableParametersI3D != NULL) && (vtkwgl::SetGammaTableParametersI3D != NULL) && (vtkwgl::GetGammaTableI3D != NULL) && (vtkwgl::SetGammaTableI3D != NULL);
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_I3D_genlock") == 0)
    {
    vtkwgl::EnableGenlockI3D = (vtkwgl::PFNWGLENABLEGENLOCKI3DPROC)manager->GetProcAddress("wglEnableGenlockI3D");
    vtkwgl::DisableGenlockI3D = (vtkwgl::PFNWGLDISABLEGENLOCKI3DPROC)manager->GetProcAddress("wglDisableGenlockI3D");
    vtkwgl::IsEnabledGenlockI3D = (vtkwgl::PFNWGLISENABLEDGENLOCKI3DPROC)manager->GetProcAddress("wglIsEnabledGenlockI3D");
    vtkwgl::GenlockSourceI3D = (vtkwgl::PFNWGLGENLOCKSOURCEI3DPROC)manager->GetProcAddress("wglGenlockSourceI3D");
    vtkwgl::GetGenlockSourceI3D = (vtkwgl::PFNWGLGETGENLOCKSOURCEI3DPROC)manager->GetProcAddress("wglGetGenlockSourceI3D");
    vtkwgl::GenlockSourceEdgeI3D = (vtkwgl::PFNWGLGENLOCKSOURCEEDGEI3DPROC)manager->GetProcAddress("wglGenlockSourceEdgeI3D");
    vtkwgl::GetGenlockSourceEdgeI3D = (vtkwgl::PFNWGLGETGENLOCKSOURCEEDGEI3DPROC)manager->GetProcAddress("wglGetGenlockSourceEdgeI3D");
    vtkwgl::GenlockSampleRateI3D = (vtkwgl::PFNWGLGENLOCKSAMPLERATEI3DPROC)manager->GetProcAddress("wglGenlockSampleRateI3D");
    vtkwgl::GetGenlockSampleRateI3D = (vtkwgl::PFNWGLGETGENLOCKSAMPLERATEI3DPROC)manager->GetProcAddress("wglGetGenlockSampleRateI3D");
    vtkwgl::GenlockSourceDelayI3D = (vtkwgl::PFNWGLGENLOCKSOURCEDELAYI3DPROC)manager->GetProcAddress("wglGenlockSourceDelayI3D");
    vtkwgl::GetGenlockSourceDelayI3D = (vtkwgl::PFNWGLGETGENLOCKSOURCEDELAYI3DPROC)manager->GetProcAddress("wglGetGenlockSourceDelayI3D");
    vtkwgl::QueryGenlockMaxSourceDelayI3D = (vtkwgl::PFNWGLQUERYGENLOCKMAXSOURCEDELAYI3DPROC)manager->GetProcAddress("wglQueryGenlockMaxSourceDelayI3D");
    return 1 && (vtkwgl::EnableGenlockI3D != NULL) && (vtkwgl::DisableGenlockI3D != NULL) && (vtkwgl::IsEnabledGenlockI3D != NULL) && (vtkwgl::GenlockSourceI3D != NULL) && (vtkwgl::GetGenlockSourceI3D != NULL) && (vtkwgl::GenlockSourceEdgeI3D != NULL) && (vtkwgl::GetGenlockSourceEdgeI3D != NULL) && (vtkwgl::GenlockSampleRateI3D != NULL) && (vtkwgl::GetGenlockSampleRateI3D != NULL) && (vtkwgl::GenlockSourceDelayI3D != NULL) && (vtkwgl::GetGenlockSourceDelayI3D != NULL) && (vtkwgl::QueryGenlockMaxSourceDelayI3D != NULL);
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_I3D_image_buffer") == 0)
    {
    vtkwgl::CreateImageBufferI3D = (vtkwgl::PFNWGLCREATEIMAGEBUFFERI3DPROC)manager->GetProcAddress("wglCreateImageBufferI3D");
    vtkwgl::DestroyImageBufferI3D = (vtkwgl::PFNWGLDESTROYIMAGEBUFFERI3DPROC)manager->GetProcAddress("wglDestroyImageBufferI3D");
    vtkwgl::AssociateImageBufferEventsI3D = (vtkwgl::PFNWGLASSOCIATEIMAGEBUFFEREVENTSI3DPROC)manager->GetProcAddress("wglAssociateImageBufferEventsI3D");
    vtkwgl::ReleaseImageBufferEventsI3D = (vtkwgl::PFNWGLRELEASEIMAGEBUFFEREVENTSI3DPROC)manager->GetProcAddress("wglReleaseImageBufferEventsI3D");
    return 1 && (vtkwgl::CreateImageBufferI3D != NULL) && (vtkwgl::DestroyImageBufferI3D != NULL) && (vtkwgl::AssociateImageBufferEventsI3D != NULL) && (vtkwgl::ReleaseImageBufferEventsI3D != NULL);
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_I3D_swap_frame_lock") == 0)
    {
    vtkwgl::EnableFrameLockI3D = (vtkwgl::PFNWGLENABLEFRAMELOCKI3DPROC)manager->GetProcAddress("wglEnableFrameLockI3D");
    vtkwgl::DisableFrameLockI3D = (vtkwgl::PFNWGLDISABLEFRAMELOCKI3DPROC)manager->GetProcAddress("wglDisableFrameLockI3D");
    vtkwgl::IsEnabledFrameLockI3D = (vtkwgl::PFNWGLISENABLEDFRAMELOCKI3DPROC)manager->GetProcAddress("wglIsEnabledFrameLockI3D");
    vtkwgl::QueryFrameLockMasterI3D = (vtkwgl::PFNWGLQUERYFRAMELOCKMASTERI3DPROC)manager->GetProcAddress("wglQueryFrameLockMasterI3D");
    return 1 && (vtkwgl::EnableFrameLockI3D != NULL) && (vtkwgl::DisableFrameLockI3D != NULL) && (vtkwgl::IsEnabledFrameLockI3D != NULL) && (vtkwgl::QueryFrameLockMasterI3D != NULL);
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_NV_render_depth_texture") == 0)
    {
    return 1;
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_NV_render_texture_rectangle") == 0)
    {
    return 1;
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_ATI_pixel_format_float") == 0)
    {
    return 1;
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_NV_float_buffer") == 0)
    {
    return 1;
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_EXT_display_color_table") == 0)
    {
    vtkwgl::CreateDisplayColorTableEXT = (vtkwgl::PFNWGLCREATEDISPLAYCOLORTABLEEXTPROC)manager->GetProcAddress("wglCreateDisplayColorTableEXT");
    vtkwgl::LoadDisplayColorTableEXT = (vtkwgl::PFNWGLLOADDISPLAYCOLORTABLEEXTPROC)manager->GetProcAddress("wglLoadDisplayColorTableEXT");
    vtkwgl::BindDisplayColorTableEXT = (vtkwgl::PFNWGLBINDDISPLAYCOLORTABLEEXTPROC)manager->GetProcAddress("wglBindDisplayColorTableEXT");
    vtkwgl::DestroyDisplayColorTableEXT = (vtkwgl::PFNWGLDESTROYDISPLAYCOLORTABLEEXTPROC)manager->GetProcAddress("wglDestroyDisplayColorTableEXT");
    return 1 && (vtkwgl::CreateDisplayColorTableEXT != NULL) && (vtkwgl::LoadDisplayColorTableEXT != NULL) && (vtkwgl::BindDisplayColorTableEXT != NULL) && (vtkwgl::DestroyDisplayColorTableEXT != NULL);
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_EXT_extensions_string") == 0)
    {
    vtkwgl::GetExtensionsStringEXT = (vtkwgl::PFNWGLGETEXTENSIONSSTRINGEXTPROC)manager->GetProcAddress("wglGetExtensionsStringEXT");
    return 1 && (vtkwgl::GetExtensionsStringEXT != NULL);
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_EXT_swap_control") == 0)
    {
    vtkwgl::SwapIntervalEXT = (vtkwgl::PFNWGLSWAPINTERVALEXTPROC)manager->GetProcAddress("wglSwapIntervalEXT");
    vtkwgl::GetSwapIntervalEXT = (vtkwgl::PFNWGLGETSWAPINTERVALEXTPROC)manager->GetProcAddress("wglGetSwapIntervalEXT");
    return 1 && (vtkwgl::SwapIntervalEXT != NULL) && (vtkwgl::GetSwapIntervalEXT != NULL);
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_NV_vertex_array_range") == 0)
    {
    vtkwgl::AllocateMemoryNV = (vtkwgl::PFNWGLALLOCATEMEMORYNVPROC)manager->GetProcAddress("wglAllocateMemoryNV");
    vtkwgl::FreeMemoryNV = (vtkwgl::PFNWGLFREEMEMORYNVPROC)manager->GetProcAddress("wglFreeMemoryNV");
    return 1 && (vtkwgl::AllocateMemoryNV != NULL) && (vtkwgl::FreeMemoryNV != NULL);
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_OML_sync_control") == 0)
    {
    vtkwgl::GetSyncValuesOML = (vtkwgl::PFNWGLGETSYNCVALUESOMLPROC)manager->GetProcAddress("wglGetSyncValuesOML");
    vtkwgl::GetMscRateOML = (vtkwgl::PFNWGLGETMSCRATEOMLPROC)manager->GetProcAddress("wglGetMscRateOML");
    vtkwgl::SwapBuffersMscOML = (vtkwgl::PFNWGLSWAPBUFFERSMSCOMLPROC)manager->GetProcAddress("wglSwapBuffersMscOML");
    vtkwgl::SwapLayerBuffersMscOML = (vtkwgl::PFNWGLSWAPLAYERBUFFERSMSCOMLPROC)manager->GetProcAddress("wglSwapLayerBuffersMscOML");
    vtkwgl::WaitForMscOML = (vtkwgl::PFNWGLWAITFORMSCOMLPROC)manager->GetProcAddress("wglWaitForMscOML");
    vtkwgl::WaitForSbcOML = (vtkwgl::PFNWGLWAITFORSBCOMLPROC)manager->GetProcAddress("wglWaitForSbcOML");
    return 1 && (vtkwgl::GetSyncValuesOML != NULL) && (vtkwgl::GetMscRateOML != NULL) && (vtkwgl::SwapBuffersMscOML != NULL) && (vtkwgl::SwapLayerBuffersMscOML != NULL) && (vtkwgl::WaitForMscOML != NULL) && (vtkwgl::WaitForSbcOML != NULL);
    }
#endif
#ifdef WIN32
  if (strcmp(name, "WGL_I3D_swap_frame_usage") == 0)
    {
    vtkwgl::GetFrameUsageI3D = (vtkwgl::PFNWGLGETFRAMEUSAGEI3DPROC)manager->GetProcAddress("wglGetFrameUsageI3D");
    vtkwgl::BeginFrameTrackingI3D = (vtkwgl::PFNWGLBEGINFRAMETRACKINGI3DPROC)manager->GetProcAddress("wglBeginFrameTrackingI3D");
    vtkwgl::EndFrameTrackingI3D = (vtkwgl::PFNWGLENDFRAMETRACKINGI3DPROC)manager->GetProcAddress("wglEndFrameTrackingI3D");
    vtkwgl::QueryFrameTrackingI3D = (vtkwgl::PFNWGLQUERYFRAMETRACKINGI3DPROC)manager->GetProcAddress("wglQueryFrameTrackingI3D");
    return 1 && (vtkwgl::GetFrameUsageI3D != NULL) && (vtkwgl::BeginFrameTrackingI3D != NULL) && (vtkwgl::EndFrameTrackingI3D != NULL) && (vtkwgl::QueryFrameTrackingI3D != NULL);
    }
#endif
  vtkGenericWarningMacro(<< "Nothing known about extension " << name
                         << ".  vtkgl may need to be updated.");
  return 0;
}

const char *vtkgl::GLVersionExtensionsString()
{
  return "GL_VERSION_1_2 GL_VERSION_1_3 GL_VERSION_1_4 GL_VERSION_1_5 GL_VERSION_2_0 ";
}

const char *vtkgl::GLXVersionExtensionsString()
{
  return "GLX_VERSION_1_3 GLX_VERSION_1_4 ";
}
