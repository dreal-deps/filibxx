EXTRA_DIST = reconf configure
SUBDIRS = 
AM_CPPFLAGS = -I$(top_srcdir)

lib_LTLIBRARIES = libprim.la

libprim_la_SOURCES = \
	../ieee/primitive.cpp \
	../interval/stdfun/filib_consts.cpp \
	../fp_traits/fp_traits_double_setup.cpp \
	../fp_traits/fp_traits_float_setup.cpp \
	../fp_traits/fp_traits_base_double_setup.cpp \
	../fp_traits/fp_traits_base_float_setup.cpp \
	../fp_traits/fp_traits_sse_const.cpp 

if HAVE_X87
libprim_la_SOURCES += ../fp_traits/fp_traits_x87_const.cpp
endif
