// AUTOGENERATED. DO NOT EDIT.
// RUN `bin/blitz3d config` TO UPDATE.

#include <bb/blitz/module.h>
#include <bb/unit-test/unit-test.h>

#ifdef WIN32
BBMODULE_LINK( unit_test ){
	rtSym( "Context$mesg",bbContext );
	rtSym( "Expect%condition$mesg",bbExpect );
	rtSym( "ExpectFloatEq#a#b$mesg",bbExpectFloatEq );
	rtSym( "ExpectIntEq%a%b$mesg",bbExpectIntEq );
}
#endif
