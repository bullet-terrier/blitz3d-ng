if(NOT BB_DESKTOP)
  bb_start_module(runtime.glfm)
  set(DEPENDS_ON bb.runtime bb.system bb.input bb.graphics bb.blitz3d.gles2)
  set(SOURCES runtime.glfm.cpp runtime.glfm.h main.cpp sample.c file_compat.h)
  set(LIBS glfm "-framework OpenGLES" "-framework UIKit" "-framework CoreGraphics" "-framework QuartzCore")
  bb_end_module()
endif()
