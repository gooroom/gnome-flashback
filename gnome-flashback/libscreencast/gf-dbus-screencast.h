/*
 * Generated by gdbus-codegen 2.59.0 from org.gnome.Shell.Screencast.xml. DO NOT EDIT.
 *
 * The license of this code is the same as for the D-Bus interface description
 * it was derived from.
 */

#ifndef __GF_DBUS_SCREENCAST_H__
#define __GF_DBUS_SCREENCAST_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.gnome.Shell.Screencast */

#define GF_TYPE_DBUS_SCREENCAST (gf_dbus_screencast_get_type ())
#define GF_DBUS_SCREENCAST(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GF_TYPE_DBUS_SCREENCAST, GfDBusScreencast))
#define GF_IS_DBUS_SCREENCAST(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GF_TYPE_DBUS_SCREENCAST))
#define GF_DBUS_SCREENCAST_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), GF_TYPE_DBUS_SCREENCAST, GfDBusScreencastIface))

struct _GfDBusScreencast;
typedef struct _GfDBusScreencast GfDBusScreencast;
typedef struct _GfDBusScreencastIface GfDBusScreencastIface;

struct _GfDBusScreencastIface
{
  GTypeInterface parent_iface;

  gboolean (*handle_screencast) (
    GfDBusScreencast *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_file_template,
    GVariant *arg_options);

  gboolean (*handle_screencast_area) (
    GfDBusScreencast *object,
    GDBusMethodInvocation *invocation,
    gint arg_x,
    gint arg_y,
    gint arg_width,
    gint arg_height,
    const gchar *arg_file_template,
    GVariant *arg_options);

  gboolean (*handle_stop_screencast) (
    GfDBusScreencast *object,
    GDBusMethodInvocation *invocation);

};

GType gf_dbus_screencast_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *gf_dbus_screencast_interface_info (void);
guint gf_dbus_screencast_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void gf_dbus_screencast_complete_screencast (
    GfDBusScreencast *object,
    GDBusMethodInvocation *invocation,
    gboolean success,
    const gchar *filename_used);

void gf_dbus_screencast_complete_screencast_area (
    GfDBusScreencast *object,
    GDBusMethodInvocation *invocation,
    gboolean success,
    const gchar *filename_used);

void gf_dbus_screencast_complete_stop_screencast (
    GfDBusScreencast *object,
    GDBusMethodInvocation *invocation,
    gboolean success);



/* D-Bus method calls: */
void gf_dbus_screencast_call_screencast (
    GfDBusScreencast *proxy,
    const gchar *arg_file_template,
    GVariant *arg_options,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gf_dbus_screencast_call_screencast_finish (
    GfDBusScreencast *proxy,
    gboolean *out_success,
    gchar **out_filename_used,
    GAsyncResult *res,
    GError **error);

gboolean gf_dbus_screencast_call_screencast_sync (
    GfDBusScreencast *proxy,
    const gchar *arg_file_template,
    GVariant *arg_options,
    gboolean *out_success,
    gchar **out_filename_used,
    GCancellable *cancellable,
    GError **error);

void gf_dbus_screencast_call_screencast_area (
    GfDBusScreencast *proxy,
    gint arg_x,
    gint arg_y,
    gint arg_width,
    gint arg_height,
    const gchar *arg_file_template,
    GVariant *arg_options,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gf_dbus_screencast_call_screencast_area_finish (
    GfDBusScreencast *proxy,
    gboolean *out_success,
    gchar **out_filename_used,
    GAsyncResult *res,
    GError **error);

gboolean gf_dbus_screencast_call_screencast_area_sync (
    GfDBusScreencast *proxy,
    gint arg_x,
    gint arg_y,
    gint arg_width,
    gint arg_height,
    const gchar *arg_file_template,
    GVariant *arg_options,
    gboolean *out_success,
    gchar **out_filename_used,
    GCancellable *cancellable,
    GError **error);

void gf_dbus_screencast_call_stop_screencast (
    GfDBusScreencast *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gf_dbus_screencast_call_stop_screencast_finish (
    GfDBusScreencast *proxy,
    gboolean *out_success,
    GAsyncResult *res,
    GError **error);

gboolean gf_dbus_screencast_call_stop_screencast_sync (
    GfDBusScreencast *proxy,
    gboolean *out_success,
    GCancellable *cancellable,
    GError **error);



/* ---- */

#define GF_TYPE_DBUS_SCREENCAST_PROXY (gf_dbus_screencast_proxy_get_type ())
#define GF_DBUS_SCREENCAST_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GF_TYPE_DBUS_SCREENCAST_PROXY, GfDBusScreencastProxy))
#define GF_DBUS_SCREENCAST_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), GF_TYPE_DBUS_SCREENCAST_PROXY, GfDBusScreencastProxyClass))
#define GF_DBUS_SCREENCAST_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), GF_TYPE_DBUS_SCREENCAST_PROXY, GfDBusScreencastProxyClass))
#define GF_IS_DBUS_SCREENCAST_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GF_TYPE_DBUS_SCREENCAST_PROXY))
#define GF_IS_DBUS_SCREENCAST_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), GF_TYPE_DBUS_SCREENCAST_PROXY))

typedef struct _GfDBusScreencastProxy GfDBusScreencastProxy;
typedef struct _GfDBusScreencastProxyClass GfDBusScreencastProxyClass;
typedef struct _GfDBusScreencastProxyPrivate GfDBusScreencastProxyPrivate;

struct _GfDBusScreencastProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  GfDBusScreencastProxyPrivate *priv;
};

struct _GfDBusScreencastProxyClass
{
  GDBusProxyClass parent_class;
};

GType gf_dbus_screencast_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (GfDBusScreencastProxy, g_object_unref)
#endif

void gf_dbus_screencast_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
GfDBusScreencast *gf_dbus_screencast_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
GfDBusScreencast *gf_dbus_screencast_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void gf_dbus_screencast_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
GfDBusScreencast *gf_dbus_screencast_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
GfDBusScreencast *gf_dbus_screencast_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define GF_TYPE_DBUS_SCREENCAST_SKELETON (gf_dbus_screencast_skeleton_get_type ())
#define GF_DBUS_SCREENCAST_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GF_TYPE_DBUS_SCREENCAST_SKELETON, GfDBusScreencastSkeleton))
#define GF_DBUS_SCREENCAST_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), GF_TYPE_DBUS_SCREENCAST_SKELETON, GfDBusScreencastSkeletonClass))
#define GF_DBUS_SCREENCAST_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), GF_TYPE_DBUS_SCREENCAST_SKELETON, GfDBusScreencastSkeletonClass))
#define GF_IS_DBUS_SCREENCAST_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GF_TYPE_DBUS_SCREENCAST_SKELETON))
#define GF_IS_DBUS_SCREENCAST_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), GF_TYPE_DBUS_SCREENCAST_SKELETON))

typedef struct _GfDBusScreencastSkeleton GfDBusScreencastSkeleton;
typedef struct _GfDBusScreencastSkeletonClass GfDBusScreencastSkeletonClass;
typedef struct _GfDBusScreencastSkeletonPrivate GfDBusScreencastSkeletonPrivate;

struct _GfDBusScreencastSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  GfDBusScreencastSkeletonPrivate *priv;
};

struct _GfDBusScreencastSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType gf_dbus_screencast_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (GfDBusScreencastSkeleton, g_object_unref)
#endif

GfDBusScreencast *gf_dbus_screencast_skeleton_new (void);


G_END_DECLS

#endif /* __GF_DBUS_SCREENCAST_H__ */
