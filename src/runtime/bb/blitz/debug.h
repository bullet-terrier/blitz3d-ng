#ifndef BLITZ_DEBUG_H
#define BLITZ_DEBUG_H

#include "basic.h"

class Debugger{
public:
	virtual void debugRun()=0;
	virtual void debugStop()=0;
	virtual void debugStmt( int srcpos,const char *file )=0;
	virtual void debugEnter( void *frame,void *env,const char *func )=0;
	virtual void debugLeave()=0;
	virtual void debugLog( const char *msg )=0;
	virtual void debugMsg( const char *msg,bool serious )=0;
	virtual void debugSys( void *msg )=0;
};

void BBCALL bbAttachDebugger( Debugger *d );

void BBCALL _bbDebugLog( const char *t );
void BBCALL _bbDebugInfo( const char *e );
void BBCALL _bbDebugError( const char *e );
void BBCALL _bbDebugStmt( int pos,const char *file );
void BBCALL _bbDebugEnter( void *frame,void *env,const char *func );
void BBCALL _bbDebugLeave();

void BBCALL bbDebugStop();
void BBCALL bbDebugLog( BBStr *t );

#endif
