IF(BB_MOBILE)
  bin2h(SOURCE_FILE simple.frag HEADER_FILE simple.frag.h VARIABLE_NAME SIMPLE_FRAG)
  bin2h(SOURCE_FILE simple.vert HEADER_FILE simple.vert.h VARIABLE_NAME SIMPLE_VERT)
  bin2h(SOURCE_FILE texture.frag HEADER_FILE texture.frag.h VARIABLE_NAME TEXTURE_FRAG)
  bin2h(SOURCE_FILE texture.vert HEADER_FILE texture.vert.h VARIABLE_NAME TEXTURE_VERT)

  bb_start_module(blitz2d.gles2)
  set(DEPENDS_ON bb.blitz2d)
  set(SOURCES blitz2d.gles2.cpp blitz2d.gles2.h simple.frag.h simple.vert.h texture.frag.h texture.vert.h)
  bb_end_module()

ENDIF()
