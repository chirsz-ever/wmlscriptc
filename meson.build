project(
	'wmlscriptc',
	'c',
	version : '1.4.6-r5336',
	license : 'BSD-4-Clause',
	license_files : 'LICENSE',
	default_options : [
		'c_std=c89',
	],
)

cc = meson.get_compiler('c')
if cc.check_header('unistd.h')
	add_global_arguments('-DHAVE_UNISTD_H=1', language : 'c')
endif

add_global_arguments('-D_POSIX_C_SOURCE=2', '-D_ISOC99_SOURCE=1', language : 'c')

subdir('wmlscript')
