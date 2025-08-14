incdir = include_directories('..', '../include')

wmlscript = static_library(
	'wmlscript',
	sources: [
		'ws.c',
		'wsalloc.c',
		'wsasm.c',
		'wsbc.c',
		'wsbuffer.c',
		'wsencode.c',
		'wserror.c',
		'wsfalloc.c',
		'wsgram.c',
		'wshash.c',
		'wsieee754.c',
		'wslexer.c',
		'wsopt.c',
		'wsstdlib.c',
		'wsstream.c',
		'wsstream_data.c',
		'wsstream_file.c',
		'wsstree.c',
		'wsutf8.c',
	],
	include_directories: incdir,
)

# TODO: generate wsopcodes.h by make-op-table wsasm.h

# TODO: generate wsgram.{h,c} from wsgram.y,
# YFLAGS = -d -p ws_yy_

executable(
	'wmlsc',
	sources: [
		'wmlsc.c',
	],
	link_with: [
		wmlscript,
	],
	include_directories: incdir,
	install : true,
)

executable(
	'wmlsdasm',
	sources: [
		'wmlsdasm.c',
	],
	link_with: [
		wmlscript,
	],
	include_directories: incdir,
	install : true,
)

install_man('wmlsc.1', 'wmlsdasm.1')
