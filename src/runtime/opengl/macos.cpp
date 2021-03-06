// AUTOGENERATED. DO NOT EDIT.
// RUN `bin/blitz3d config` TO UPDATE.

#include <bb/stub/stub.h>


#include "../../stdutil/stdutil.h"

BBMODULE_DECL( blitz );
BBMODULE_DECL( hook );
BBMODULE_DECL( event );
BBMODULE_DECL( math );
BBMODULE_DECL( string );
BBMODULE_DECL( stdio );
BBMODULE_DECL( enet );
BBMODULE_DECL( runtime );
BBMODULE_DECL( system );
BBMODULE_DECL( system_macos );
BBMODULE_DECL( stream );
BBMODULE_DECL( filesystem );
BBMODULE_DECL( filesystem_posix );
BBMODULE_DECL( bank );
BBMODULE_DECL( audio );
BBMODULE_DECL( audio_openal );
BBMODULE_DECL( input );
BBMODULE_DECL( pixmap );
BBMODULE_DECL( blitz2d );
BBMODULE_DECL( graphics );
BBMODULE_DECL( blitz3d );
BBMODULE_DECL( blitz2d_gl );
BBMODULE_DECL( blitz3d_gl );
BBMODULE_DECL( timer );
BBMODULE_DECL( runtime_glfw3 );

class BBRuntime;
BBRuntime *bbCreateOpenGLRuntime();
BBRuntime *bbCreateRuntime(){
	return bbCreateOpenGLRuntime();
}

#ifdef WIN32
void bbruntime_link( void (*link)( const char *sym,void *pc ) ){
	blitz_link( link );
	math_link( link );
	string_link( link );
	stdio_link( link );
	enet_link( link );
	runtime_link( link );
	system_link( link );
	stream_link( link );
	filesystem_link( link );
	bank_link( link );
	audio_link( link );
	input_link( link );
	blitz2d_link( link );
	graphics_link( link );
	blitz3d_link( link );
	timer_link( link );
}
#endif
bool bbruntime_create(){
	if( blitz_create() ){
				if( hook_create() ){
						if( event_create() ){
								if( math_create() ){
										if( string_create() ){
												if( stdio_create() ){
														if( enet_create() ){
																if( runtime_create() ){
																		if( system_create() ){
																				if( system_macos_create() ){
																						if( stream_create() ){
																								if( filesystem_create() ){
																										if( filesystem_posix_create() ){
																												if( bank_create() ){
																														if( audio_create() ){
																																if( audio_openal_create() ){
																																		if( input_create() ){
																																				if( pixmap_create() ){
																																						if( blitz2d_create() ){
																																								if( graphics_create() ){
																																										if( blitz3d_create() ){
																																												if( blitz2d_gl_create() ){
																																														if( blitz3d_gl_create() ){
																																																if( timer_create() ){
																																																		if( runtime_glfw3_create() ){
																																																				return true;
																									}else sue( "runtime_glfw3_create failed" );
																									timer_destroy();
																								}else sue( "timer_create failed" );
																								blitz3d_gl_destroy();
																							}else sue( "blitz3d_gl_create failed" );
																							blitz2d_gl_destroy();
																						}else sue( "blitz2d_gl_create failed" );
																						blitz3d_destroy();
																					}else sue( "blitz3d_create failed" );
																					graphics_destroy();
																				}else sue( "graphics_create failed" );
																				blitz2d_destroy();
																			}else sue( "blitz2d_create failed" );
																			pixmap_destroy();
																		}else sue( "pixmap_create failed" );
																		input_destroy();
																	}else sue( "input_create failed" );
																	audio_openal_destroy();
																}else sue( "audio_openal_create failed" );
																audio_destroy();
															}else sue( "audio_create failed" );
															bank_destroy();
														}else sue( "bank_create failed" );
														filesystem_posix_destroy();
													}else sue( "filesystem_posix_create failed" );
													filesystem_destroy();
												}else sue( "filesystem_create failed" );
												stream_destroy();
											}else sue( "stream_create failed" );
											system_macos_destroy();
										}else sue( "system_macos_create failed" );
										system_destroy();
									}else sue( "system_create failed" );
									runtime_destroy();
								}else sue( "runtime_create failed" );
								enet_destroy();
							}else sue( "enet_create failed" );
							stdio_destroy();
						}else sue( "stdio_create failed" );
						string_destroy();
					}else sue( "string_create failed" );
					math_destroy();
				}else sue( "math_create failed" );
				event_destroy();
			}else sue( "event_create failed" );
			hook_destroy();
		}else sue( "hook_create failed" );
		blitz_destroy();
	}else sue( "blitz_create failed" );
	return false;
}

bool bbruntime_destroy(){
	runtime_glfw3_destroy();
	timer_destroy();
	blitz3d_gl_destroy();
	blitz2d_gl_destroy();
	blitz3d_destroy();
	graphics_destroy();
	blitz2d_destroy();
	pixmap_destroy();
	input_destroy();
	audio_openal_destroy();
	audio_destroy();
	bank_destroy();
	filesystem_posix_destroy();
	filesystem_destroy();
	stream_destroy();
	system_macos_destroy();
	system_destroy();
	runtime_destroy();
	enet_destroy();
	stdio_destroy();
	string_destroy();
	math_destroy();
	event_destroy();
	hook_destroy();
	blitz_destroy();
	return true;
}
