import os, sys

extEnv = Environment()

if sys.platform == 'win32':
  buildOS = 'Windows'
elif sys.platform == 'linux2':
  buildOS = 'Linux'

buildArch = 'x86_64'


try:
  fabricEDKPath = os.environ['FABRIC_EDK_DIR']
except:
  print "You must set FABRIC_EDK_DIR in your environment."
  print "Refer to README.txt for more information."
  sys.exit( 1 )


PYSTRING_SRC = '/home/nile.hylton/dev/libs/cpp/imageworks/pystring/src'
PYSTRING_LIB = '/home/nile.hylton/dev/libs/env/lib/libpystring.so'


extEnv.Append( CPPPATH=[os.path.join( fabricEDKPath, 'include' )] )
extEnv.Append( CPPPATH=[ PYSTRING_SRC ] )
extEnv.Append( LIBS=File( PYSTRING_LIB ) )

extFiles = []
extFiles += Glob( '*.kl' )
extFiles += Glob( '*.json' )

edkLibrary = extEnv.SharedLibrary( 'FabricPyString' + '-' + buildOS + '-' + buildArch, Glob( 'FabricPyString.cpp' ) )
extFiles += edkLibrary

extAlias = extEnv.Alias( 'ext', extFiles )
