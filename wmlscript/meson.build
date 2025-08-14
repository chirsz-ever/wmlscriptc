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

# generate wsopcodes.h:
# sed 1p make-op-table.in | perl - wsasm.h > wsopcodes.h

# generate wsgram.{h,c}:
# bison -d -p ws_yy_ -o wsgram.c wsgram.y

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
