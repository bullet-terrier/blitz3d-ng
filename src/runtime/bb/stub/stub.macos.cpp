
#include <bb/stub/stub.h>
#include <bb/runtime/runtime.h>
#include <bb/blitz/blitz.h>

#include <iostream>
#include <cstdlib>
using namespace std;

void sue( const char *t ){
  cerr<<t<<endl;
  exit(1);
}

class StdioDebugger : public Debugger{
private:
  string file;
  int row,col;
public:
	void debugRun(){
	}
	void debugStop(){
	}
	void debugStmt( int srcpos,const char *f ){
		file=string(f);
		row=(srcpos>>16)&0xffff;
		col=srcpos&0xffff;
		// cout<<file<<":"<<"["<<row+1<<":"<<col<<"]"<<endl;
	}
	void debugEnter( void *frame,void *env,const char *func ){
	}
	void debugLeave(){
	}
	void debugLog( const char *msg ){
    cout<<file<<":"<<"["<<row+1<<":"<<col<<"] "<<msg<<endl;
	}
	void debugMsg( const char *msg,bool serious ){
	}
	void debugSys( void *msg ){
	}
};

extern "C" void bbMain();

int main( int argc,char *argv[] ){
#ifdef DEBUG
  bb_env.debug=true;
#else
  bb_env.debug=false;
#endif

	string cmd_line;
	for( int i=1;i<argc;i++ ) cmd_line+=argv[i];
  bbStartup( argv[0],cmd_line.c_str() );

	StdioDebugger debugger;
  bbAttachDebugger( &debugger );

  if( !(bbRuntime=bbCreateRuntime()) ){
    cerr<<"Failed to create runtime"<<endl;
    return 1;
  }

  int retcode=0;
  try{
    if( !bbruntime_create() ) return 1;
    bbMain();
  }catch( bbEx &ex ){
    if( ex.err ) cerr<<ex.err<<endl;
    retcode=1;
  }
  bbruntime_destroy();
  return retcode;
}
