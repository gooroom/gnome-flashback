NULL =

overridedir = $(datadir)/glib-2.0/schemas
override_DATA = 00_gnome-flashback.gschema.override

gsettings_SCHEMAS = \
	org.gnome.gnome-flashback.gschema.xml \
	org.gnome.gnome-flashback.desktop-background.gschema.xml \
	org.gnome.gnome-flashback.input-sources.gschema.xml \
	org.gnome.gnome-flashback.workarounds.gschema.xml \
	$(NULL)

@GSETTINGS_RULES@

EXTRA_DIST = \
	$(override_DATA) \
	$(gsettings_SCHEMAS) \
	$(NULL)

CLEANFILES = \
	*.gschema.valid \
	$(NULL)

-include $(top_srcdir)/git.mk
