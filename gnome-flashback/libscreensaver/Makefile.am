NULL =

noinst_LTLIBRARIES = \
	libscreensaver.la \
	$(NULL)

libscreensaver_la_CPPFLAGS = \
	-DG_LOG_DOMAIN=\"screensaver\" \
	-DG_LOG_USE_STRUCTURED=1 \
	-I$(top_builddir)/gnome-flashback/libscreensaver \
	$(NULL)

libscreensaver_la_CFLAGS = \
	$(SCREENSAVER_CFLAGS) \
	$(WARN_CFLAGS) \
	$(AM_CFLAGS) \
	$(NULL)

libscreensaver_la_SOURCES = \
	gf-listener.c \
	gf-listener.h \
	gf-screensaver.c \
	gf-screensaver.h \
	gf-settings.c \
	gf-settings.h \
	gf-watcher.c \
	gf-watcher.h \
	$(BUILT_SOURCES) \
	$(NULL)

libscreensaver_la_LDFLAGS = \
	$(WARN_LDFLAGS) \
	$(AM_LDFLAGS) \
	$(NULL)

libscreensaver_la_LIBADD = \
	$(SCREENSAVER_LIBS) \
	$(NULL)

gf-login-manager-gen.h:
gf-login-manager-gen.c: org.freedesktop.login1.Manager.xml
	$(AM_V_GEN) $(GDBUS_CODEGEN) \
		--interface-prefix org.freedesktop.login1.Manager. \
		--generate-c-code gf-login-manager-gen \
		--c-namespace Gf \
		--annotate "org.freedesktop.login1.Manager" \
		           "org.gtk.GDBus.C.Name" LoginManagerGen \
		$(srcdir)/org.freedesktop.login1.Manager.xml

gf-login-session-gen.h:
gf-login-session-gen.c: org.freedesktop.login1.Session.xml
	$(AM_V_GEN) $(GDBUS_CODEGEN) \
		--interface-prefix org.freedesktop.login1.Session. \
		--generate-c-code gf-login-session-gen \
		--c-namespace Gf \
		--annotate "org.freedesktop.login1.Session" \
		           "org.gtk.GDBus.C.Name" LoginSessionGen \
		$(srcdir)/org.freedesktop.login1.Session.xml

gf-screensaver-gen.h:
gf-screensaver-gen.c: org.gnome.ScreenSaver.xml
	$(AM_V_GEN) $(GDBUS_CODEGEN) \
		--interface-prefix org.gnome.ScreenSaver. \
		--generate-c-code gf-screensaver-gen \
		--c-namespace Gf \
		--annotate "org.gnome.ScreenSaver" \
		           "org.gtk.GDBus.C.Name" ScreensaverGen \
		$(srcdir)/org.gnome.ScreenSaver.xml

gf-sm-presence-gen.h:
gf-sm-presence-gen.c: org.gnome.SessionManager.Presence.xml
	$(AM_V_GEN) $(GDBUS_CODEGEN) \
		--interface-prefix org.gnome.SessionManager.Presence. \
		--generate-c-code gf-sm-presence-gen \
		--c-namespace Gf \
		--annotate "org.gnome.SessionManager.Presence" \
		           "org.gtk.GDBus.C.Name" SmPresenceGen \
		$(srcdir)/org.gnome.SessionManager.Presence.xml

BUILT_SOURCES = \
	gf-login-manager-gen.c \
	gf-login-manager-gen.h \
	gf-login-session-gen.c \
	gf-login-session-gen.h \
	gf-screensaver-gen.c \
	gf-screensaver-gen.h \
	gf-sm-presence-gen.c \
	gf-sm-presence-gen.h \
	$(NULL)

EXTRA_DIST = \
	org.freedesktop.login1.Manager.xml \
	org.freedesktop.login1.Session.xml \
	org.gnome.ScreenSaver.xml \
	org.gnome.SessionManager.Presence.xml \
	$(NULL)

CLEANFILES = \
	$(BUILT_SOURCES) \
	$(NULL)

-include $(top_srcdir)/git.mk
