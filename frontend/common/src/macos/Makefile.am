# Process this file with automake to produce Makefile.in
#
# Copyright (C) 2002, 2003, 2004, 2006, 2007, 2008 Rob Caelers & Raymond Penners
#

MAINTAINERCLEANFILES =	Makefile.in

EXTRA_DIST = 		$(wildcard $(srcdir)/*.hh) $(wildcard $(srcdir)/*.cc) \
			$(wildcard $(srcdir)/*.c) $(wildcard $(srcdir)/*.h)  $(wildcard $(srcdir)/*.icc)

if PLATFORM_OS_MACOS

noinst_LTLIBRARIES = 	libworkrave-frontend-common-macos.la

libworkrave_frontend_common_macos_la_SOURCES = \
			Sound.cc \
			MacOSSoundPlayer.cc

libworkrave_frontend_common_macos_la_CXXFLAGS = \
			-DWORKRAVE_PKGDATADIR="\"${pkgdatadir}\"" \
			-D_XOPEN_SOURCE=600 \
			-W -I$(top_srcdir)/frontend/common/src -I$(top_srcdir)/frontend/common/include \
			-x objective-c++ \
			@WR_COMMON_INCLUDES@ @WR_BACKEND_INCLUDES@ \
			@GTK_CFLAGS@ @GLIB_CFLAGS@ 

endif