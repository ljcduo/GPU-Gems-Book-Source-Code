
// --------------------------------------------------------
// Generated by glux perl script (Wed Mar 31 17:19:34 2004)
// 
// Sylvain Lefebvre - 2002 - Sylvain.Lefebvre@imag.fr
// --------------------------------------------------------
#include "glux_no_redefine.h"
#include "glux_ext_defs.h"
#include "gluxLoader.h"
#include "gluxPlugin.h"
// --------------------------------------------------------
//         Plugin creation
// --------------------------------------------------------

#ifndef __GLUX_GL_ATI_vertex_array_object__
#define __GLUX_GL_ATI_vertex_array_object__

GLUX_NEW_PLUGIN(GL_ATI_vertex_array_object);
// --------------------------------------------------------
//           Extension conditions
// --------------------------------------------------------
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#ifndef GL_STATIC_ATI
#  define GL_STATIC_ATI 0x8760
#endif
#ifndef GL_DYNAMIC_ATI
#  define GL_DYNAMIC_ATI 0x8761
#endif
#ifndef GL_PRESERVE_ATI
#  define GL_PRESERVE_ATI 0x8762
#endif
#ifndef GL_DISCARD_ATI
#  define GL_DISCARD_ATI 0x8763
#endif
#ifndef GL_OBJECT_BUFFER_SIZE_ATI
#  define GL_OBJECT_BUFFER_SIZE_ATI 0x8764
#endif
#ifndef GL_OBJECT_BUFFER_USAGE_ATI
#  define GL_OBJECT_BUFFER_USAGE_ATI 0x8765
#endif
#ifndef GL_ARRAY_OBJECT_BUFFER_ATI
#  define GL_ARRAY_OBJECT_BUFFER_ATI 0x8766
#endif
#ifndef GL_ARRAY_OBJECT_OFFSET_ATI
#  define GL_ARRAY_OBJECT_OFFSET_ATI 0x8767
#endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glNewObjectBufferATI
typedef GLuint (APIENTRYP PFNGLUXNEWOBJECTBUFFERATIPROC) (GLsizei size, const GLvoid *pointer, GLenum usage);
#endif
#ifndef __GLUX__GLFCT_glIsObjectBufferATI
typedef GLboolean (APIENTRYP PFNGLUXISOBJECTBUFFERATIPROC) (GLuint buffer);
#endif
#ifndef __GLUX__GLFCT_glUpdateObjectBufferATI
typedef void (APIENTRYP PFNGLUXUPDATEOBJECTBUFFERATIPROC) (GLuint buffer, GLuint offset, GLsizei size, const GLvoid *pointer, GLenum preserve);
#endif
#ifndef __GLUX__GLFCT_glGetObjectBufferfvATI
typedef void (APIENTRYP PFNGLUXGETOBJECTBUFFERFVATIPROC) (GLuint buffer, GLenum pname, GLfloat *params);
#endif
#ifndef __GLUX__GLFCT_glGetObjectBufferivATI
typedef void (APIENTRYP PFNGLUXGETOBJECTBUFFERIVATIPROC) (GLuint buffer, GLenum pname, GLint *params);
#endif
#ifndef __GLUX__GLFCT_glFreeObjectBufferATI
typedef void (APIENTRYP PFNGLUXFREEOBJECTBUFFERATIPROC) (GLuint buffer);
#endif
#ifndef __GLUX__GLFCT_glArrayObjectATI
typedef void (APIENTRYP PFNGLUXARRAYOBJECTATIPROC) (GLenum array, GLint size, GLenum type, GLsizei stride, GLuint buffer, GLuint offset);
#endif
#ifndef __GLUX__GLFCT_glGetArrayObjectfvATI
typedef void (APIENTRYP PFNGLUXGETARRAYOBJECTFVATIPROC) (GLenum array, GLenum pname, GLfloat *params);
#endif
#ifndef __GLUX__GLFCT_glGetArrayObjectivATI
typedef void (APIENTRYP PFNGLUXGETARRAYOBJECTIVATIPROC) (GLenum array, GLenum pname, GLint *params);
#endif
#ifndef __GLUX__GLFCT_glVariantArrayObjectATI
typedef void (APIENTRYP PFNGLUXVARIANTARRAYOBJECTATIPROC) (GLuint id, GLenum type, GLsizei stride, GLuint buffer, GLuint offset);
#endif
#ifndef __GLUX__GLFCT_glGetVariantArrayObjectfvATI
typedef void (APIENTRYP PFNGLUXGETVARIANTARRAYOBJECTFVATIPROC) (GLuint id, GLenum pname, GLfloat *params);
#endif
#ifndef __GLUX__GLFCT_glGetVariantArrayObjectivATI
typedef void (APIENTRYP PFNGLUXGETVARIANTARRAYOBJECTIVATIPROC) (GLuint id, GLenum pname, GLint *params);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glNewObjectBufferATI
extern PFNGLUXNEWOBJECTBUFFERATIPROC glNewObjectBufferATI;
#endif
#ifndef __GLUX__GLFCT_glIsObjectBufferATI
extern PFNGLUXISOBJECTBUFFERATIPROC glIsObjectBufferATI;
#endif
#ifndef __GLUX__GLFCT_glUpdateObjectBufferATI
extern PFNGLUXUPDATEOBJECTBUFFERATIPROC glUpdateObjectBufferATI;
#endif
#ifndef __GLUX__GLFCT_glGetObjectBufferfvATI
extern PFNGLUXGETOBJECTBUFFERFVATIPROC glGetObjectBufferfvATI;
#endif
#ifndef __GLUX__GLFCT_glGetObjectBufferivATI
extern PFNGLUXGETOBJECTBUFFERIVATIPROC glGetObjectBufferivATI;
#endif
#ifndef __GLUX__GLFCT_glFreeObjectBufferATI
extern PFNGLUXFREEOBJECTBUFFERATIPROC glFreeObjectBufferATI;
#endif
#ifndef __GLUX__GLFCT_glArrayObjectATI
extern PFNGLUXARRAYOBJECTATIPROC glArrayObjectATI;
#endif
#ifndef __GLUX__GLFCT_glGetArrayObjectfvATI
extern PFNGLUXGETARRAYOBJECTFVATIPROC glGetArrayObjectfvATI;
#endif
#ifndef __GLUX__GLFCT_glGetArrayObjectivATI
extern PFNGLUXGETARRAYOBJECTIVATIPROC glGetArrayObjectivATI;
#endif
#ifndef __GLUX__GLFCT_glVariantArrayObjectATI
extern PFNGLUXVARIANTARRAYOBJECTATIPROC glVariantArrayObjectATI;
#endif
#ifndef __GLUX__GLFCT_glGetVariantArrayObjectfvATI
extern PFNGLUXGETVARIANTARRAYOBJECTFVATIPROC glGetVariantArrayObjectfvATI;
#endif
#ifndef __GLUX__GLFCT_glGetVariantArrayObjectivATI
extern PFNGLUXGETVARIANTARRAYOBJECTIVATIPROC glGetVariantArrayObjectivATI;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
