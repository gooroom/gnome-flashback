NULL =

noinst_LTLIBRARIES = \
	libcommon.la \
	$(NULL)

libcommon_la_CPPFLAGS = \
	-DG_LOG_DOMAIN=\"common\" \
	-DG_LOG_USE_STRUCTURED=1 \
	$(NULL)

libcommon_la_CFLAGS = \
	$(COMMON_CFLAGS) \
	$(WARN_CFLAGS) \
	$(AM_CFLAGS) \
	-I$(top_builddir)/gnome-flashback/libcommon \
	$(NULL)

libcommon_la_SOURCES = \
  gf-keybindings.c \
	gf-keybindings.h \
	gf-popup-window.c \
	gf-popup-window.h \
	$(NULL)

libcommon_la_LDFLAGS = \
	$(WARN_LDFLAGS) \
	$(AM_LDFLAGS) \
	$(NULL)

libcommon_la_LIBADD = \
	$(COMMON_LIBS) \
	$(NULL)

-include $(top_srcdir)/git.mk
