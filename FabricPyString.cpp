//
// Copyright (c) 2014, Nile Hylton <nile@chunkified.com> All rights reserved.
//


#include <Fabric/EDK/EDK.h>
#include <pystring.h>
#include <string>
#include <vector>

using namespace Fabric::EDK;
IMPLEMENT_FABRIC_EDK_ENTRIES( FabricPyString )

#define MAX_32BIT_INT 2147483647




FABRIC_EXT_EXPORT KL::String FabricPyString_capitalize( const KL::String &str ) {
	KL::String result;
	result = pystring::capitalize( str.c_str() );
	return result;
}

FABRIC_EXT_EXPORT KL::String FabricPyString_center( const KL::String &str, const KL::Integer width ) {
	KL::String result;
	result = pystring::center( str.c_str(), width );
	return result;
}

FABRIC_EXT_EXPORT KL::Integer FabricPyString_count( const KL::String &str, const KL::String &substr ) {
	KL::Integer result;
	result = pystring::count( str.c_str(), substr.c_str(), 0, MAX_32BIT_INT );
	return result;
}

FABRIC_EXT_EXPORT KL::Boolean FabricPyString_endswith( const KL::String &str, const KL::String &suffix ) {
	KL::Boolean result;
	result = pystring::endswith( str.c_str(), suffix.c_str(), 0, MAX_32BIT_INT );
	return result;
}

FABRIC_EXT_EXPORT KL::String FabricPyString_expandtabs( const KL::String &str ) {
	KL::String result;
	result = pystring::expandtabs( str.c_str() );
	return result;
}

FABRIC_EXT_EXPORT KL::Integer FabricPyString_find( const KL::String &str, const KL::String &substr ) {
	KL::Integer result;
	result = pystring::find( str.c_str(), substr.c_str(), 0, MAX_32BIT_INT );
	return result;
}

FABRIC_EXT_EXPORT KL::Boolean FabricPyString_isalpha( const KL::String &str ) {
	KL::Boolean result;
	result = pystring::isalpha( str.c_str() );
	return result;
}

FABRIC_EXT_EXPORT KL::Boolean FabricPyString_isdigit( const KL::String &str ) {
	KL::Boolean result;
	result = pystring::isdigit( str.c_str() );
	return result;
}

FABRIC_EXT_EXPORT KL::Boolean FabricPyString_islower( const KL::String &str ) {
	KL::Boolean result;
	result = pystring::islower( str.c_str() );
	return result;
}

FABRIC_EXT_EXPORT KL::Boolean FabricPyString_isspace( const KL::String &str ) {
	KL::Boolean result;
	result = pystring::isspace( str.c_str() );
	return result;
}

FABRIC_EXT_EXPORT KL::Boolean FabricPyString_istitle( const KL::String &str ) {
	KL::Boolean result;
	result = pystring::istitle( str.c_str() );
	return result;
}

//FABRIC_EXT_EXPORT KL::String FabricPyString_join( const KL::String &str, const std::vector< KL::String > &seq ) {
//	KL::String result;
//	result = pystring::join( str.c_str(), seq );
//	return result;
//}

FABRIC_EXT_EXPORT KL::String FabricPyString_ljust( const KL::String &str, const KL::Integer width ) {
	KL::String result;
	result = pystring::ljust( str.c_str(), width );
	return result;
}

FABRIC_EXT_EXPORT KL::String FabricPyString_lower( const KL::String &str ) {
	KL::String result;
	result = pystring::lower( str.c_str() );
	return result;
}

FABRIC_EXT_EXPORT KL::String FabricPyString_lstrip( const KL::String &str, const KL::String &chars ) {
	KL::String result;
	result = pystring::lstrip( str.c_str(), chars.c_str() );
	return result;
}

FABRIC_EXT_EXPORT KL::String FabricPyString_mul( const KL::String &str, const KL::Integer n ) {
	KL::String result;
	result = pystring::mul( str.c_str(), n );
	return result;
}

FABRIC_EXT_EXPORT KL::String FabricPyString_replace( const KL::String &str,
		const KL::String &oldstr, const KL::String &newstr ) {

	KL::String result;
	result = pystring::replace( str.c_str(), oldstr.c_str(), newstr.c_str() );
	return result;
}

FABRIC_EXT_EXPORT KL::Integer FabricPyString_rfind( const KL::String &str, const KL::String &sub ) {
	KL::Integer result;
	result = pystring::rfind( str.c_str(), sub.c_str() );
	return result;
}

FABRIC_EXT_EXPORT KL::String FabricPyString_rjust( const KL::String &str, const KL::Integer width ) {
	KL::String result;
	result = pystring::rjust( str.c_str(), width );
	return result;
}

FABRIC_EXT_EXPORT KL::String FabricPyString_rstrip( const KL::String &str, const KL::String &chars ) {
	KL::String result;
	result = pystring::rstrip( str.c_str(), chars.c_str() );
	return result;
}

//////////////////////////////////////////////////////////////////////////////////////////////
/// TO DO: The below two functions haven't been implemented yet
///

/*
FABRIC_EXT_EXPORT void FabricPyString_split( std::vector< KL::String > &kl,
		const KL::String &str, const KL::String &sep="" ) {

	std::vector<std::string> stdResult;
	pystring::split( str.c_str(), stdResult, sep.c_str() );

}
*/

/*
FABRIC_EXT_EXPORT void FabricPyString_splitlines( std::vector< KL::String > &kl,
		const KL::String &str, const KL::Boolean keepends ) {

	std::vector<std::string> stdResult;
	pystring::splitlines( str.c_str(), stdResult, keepends );

}
*/
//////////////////////////////////////////////////////////////////////////////////////////////


FABRIC_EXT_EXPORT KL::Boolean FabricPyString_startswith( const KL::String &str, const KL::String &prefix ) {
	KL::Boolean result;
	result = pystring::startswith( str.c_str(), prefix.c_str(), 0, MAX_32BIT_INT );
	return result;
}

FABRIC_EXT_EXPORT KL::String FabricPyString_strip( const KL::String &str, const KL::String &chars ) {
	KL::String result;
	result = pystring::strip( str.c_str(), chars.c_str() );
	return result;
}

FABRIC_EXT_EXPORT KL::String FabricPyString_swapcase( const KL::String &str ) {
	KL::String result;
	result = pystring::swapcase( str.c_str() );
	return result;
}

FABRIC_EXT_EXPORT KL::String FabricPyString_title( const KL::String &str ) {
	KL::String result;
	result = pystring::title( str.c_str() );
	return result;
}

FABRIC_EXT_EXPORT KL::String FabricPyString_upper( const KL::String &str ) {
	KL::String result;
	result = pystring::upper( str.c_str() );
	return result;
}

FABRIC_EXT_EXPORT KL::String FabricPyString_zfill( const KL::String &str, const KL::Integer width ) {
	KL::String result;
	result = pystring::zfill( str.c_str(), width );
	return result;
}

FABRIC_EXT_EXPORT KL::String FabricPyString_slice( const KL::String &str,
		const KL::Integer start=0, const KL::Integer end=MAX_32BIT_INT ) {

	KL::String result;
	result = pystring::slice( str.c_str(), start, end );
	return result;
}


