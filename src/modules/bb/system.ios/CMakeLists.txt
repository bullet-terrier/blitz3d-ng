if(BB_IOS)
  bb_start_module(system.ios)
  set(DEPENDS_ON bb.system)
  set(SOURCES system.ios.cpp system.ios.h)
  bb_end_module()
endif()
