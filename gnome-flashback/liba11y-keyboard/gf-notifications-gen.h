/*
 * Generated by gdbus-codegen 2.59.0 from org.freedesktop.Notifications.xml. DO NOT EDIT.
 *
 * The license of this code is the same as for the D-Bus interface description
 * it was derived from.
 */

#ifndef __GF_NOTIFICATIONS_GEN_H__
#define __GF_NOTIFICATIONS_GEN_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.freedesktop.Notifications */

#define GF_TYPE_NOTIFICATIONS_GEN (gf_notifications_gen_get_type ())
#define GF_NOTIFICATIONS_GEN(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GF_TYPE_NOTIFICATIONS_GEN, GfNotificationsGen))
#define GF_IS_NOTIFICATIONS_GEN(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GF_TYPE_NOTIFICATIONS_GEN))
#define GF_NOTIFICATIONS_GEN_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), GF_TYPE_NOTIFICATIONS_GEN, GfNotificationsGenIface))

struct _GfNotificationsGen;
typedef struct _GfNotificationsGen GfNotificationsGen;
typedef struct _GfNotificationsGenIface GfNotificationsGenIface;

struct _GfNotificationsGenIface
{
  GTypeInterface parent_iface;


  gboolean (*handle_close_notification) (
    GfNotificationsGen *object,
    GDBusMethodInvocation *invocation,
    guint arg_id);

  gboolean (*handle_get_capabilities) (
    GfNotificationsGen *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_get_server_information) (
    GfNotificationsGen *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_notify) (
    GfNotificationsGen *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_app_name,
    guint arg_replaces_id,
    const gchar *arg_app_icon,
    const gchar *arg_summary,
    const gchar *arg_body,
    const gchar *const *arg_actions,
    GVariant *arg_hints,
    gint arg_expire_timeout);

  void (*action_invoked) (
    GfNotificationsGen *object,
    guint arg_id,
    const gchar *arg_action_key);

  void (*notification_closed) (
    GfNotificationsGen *object,
    guint arg_id,
    guint arg_reason);

};

GType gf_notifications_gen_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *gf_notifications_gen_interface_info (void);
guint gf_notifications_gen_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void gf_notifications_gen_complete_close_notification (
    GfNotificationsGen *object,
    GDBusMethodInvocation *invocation);

void gf_notifications_gen_complete_get_capabilities (
    GfNotificationsGen *object,
    GDBusMethodInvocation *invocation,
    const gchar *const *capabilities);

void gf_notifications_gen_complete_get_server_information (
    GfNotificationsGen *object,
    GDBusMethodInvocation *invocation,
    const gchar *name,
    const gchar *vendor,
    const gchar *version,
    const gchar *spec_version);

void gf_notifications_gen_complete_notify (
    GfNotificationsGen *object,
    GDBusMethodInvocation *invocation,
    guint id);



/* D-Bus signal emissions functions: */
void gf_notifications_gen_emit_action_invoked (
    GfNotificationsGen *object,
    guint arg_id,
    const gchar *arg_action_key);

void gf_notifications_gen_emit_notification_closed (
    GfNotificationsGen *object,
    guint arg_id,
    guint arg_reason);



/* D-Bus method calls: */
void gf_notifications_gen_call_close_notification (
    GfNotificationsGen *proxy,
    guint arg_id,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gf_notifications_gen_call_close_notification_finish (
    GfNotificationsGen *proxy,
    GAsyncResult *res,
    GError **error);

gboolean gf_notifications_gen_call_close_notification_sync (
    GfNotificationsGen *proxy,
    guint arg_id,
    GCancellable *cancellable,
    GError **error);

void gf_notifications_gen_call_get_capabilities (
    GfNotificationsGen *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gf_notifications_gen_call_get_capabilities_finish (
    GfNotificationsGen *proxy,
    gchar ***out_capabilities,
    GAsyncResult *res,
    GError **error);

gboolean gf_notifications_gen_call_get_capabilities_sync (
    GfNotificationsGen *proxy,
    gchar ***out_capabilities,
    GCancellable *cancellable,
    GError **error);

void gf_notifications_gen_call_get_server_information (
    GfNotificationsGen *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gf_notifications_gen_call_get_server_information_finish (
    GfNotificationsGen *proxy,
    gchar **out_name,
    gchar **out_vendor,
    gchar **out_version,
    gchar **out_spec_version,
    GAsyncResult *res,
    GError **error);

gboolean gf_notifications_gen_call_get_server_information_sync (
    GfNotificationsGen *proxy,
    gchar **out_name,
    gchar **out_vendor,
    gchar **out_version,
    gchar **out_spec_version,
    GCancellable *cancellable,
    GError **error);

void gf_notifications_gen_call_notify (
    GfNotificationsGen *proxy,
    const gchar *arg_app_name,
    guint arg_replaces_id,
    const gchar *arg_app_icon,
    const gchar *arg_summary,
    const gchar *arg_body,
    const gchar *const *arg_actions,
    GVariant *arg_hints,
    gint arg_expire_timeout,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gf_notifications_gen_call_notify_finish (
    GfNotificationsGen *proxy,
    guint *out_id,
    GAsyncResult *res,
    GError **error);

gboolean gf_notifications_gen_call_notify_sync (
    GfNotificationsGen *proxy,
    const gchar *arg_app_name,
    guint arg_replaces_id,
    const gchar *arg_app_icon,
    const gchar *arg_summary,
    const gchar *arg_body,
    const gchar *const *arg_actions,
    GVariant *arg_hints,
    gint arg_expire_timeout,
    guint *out_id,
    GCancellable *cancellable,
    GError **error);



/* ---- */

#define GF_TYPE_NOTIFICATIONS_GEN_PROXY (gf_notifications_gen_proxy_get_type ())
#define GF_NOTIFICATIONS_GEN_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GF_TYPE_NOTIFICATIONS_GEN_PROXY, GfNotificationsGenProxy))
#define GF_NOTIFICATIONS_GEN_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), GF_TYPE_NOTIFICATIONS_GEN_PROXY, GfNotificationsGenProxyClass))
#define GF_NOTIFICATIONS_GEN_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), GF_TYPE_NOTIFICATIONS_GEN_PROXY, GfNotificationsGenProxyClass))
#define GF_IS_NOTIFICATIONS_GEN_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GF_TYPE_NOTIFICATIONS_GEN_PROXY))
#define GF_IS_NOTIFICATIONS_GEN_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), GF_TYPE_NOTIFICATIONS_GEN_PROXY))

typedef struct _GfNotificationsGenProxy GfNotificationsGenProxy;
typedef struct _GfNotificationsGenProxyClass GfNotificationsGenProxyClass;
typedef struct _GfNotificationsGenProxyPrivate GfNotificationsGenProxyPrivate;

struct _GfNotificationsGenProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  GfNotificationsGenProxyPrivate *priv;
};

struct _GfNotificationsGenProxyClass
{
  GDBusProxyClass parent_class;
};

GType gf_notifications_gen_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (GfNotificationsGenProxy, g_object_unref)
#endif

void gf_notifications_gen_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
GfNotificationsGen *gf_notifications_gen_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
GfNotificationsGen *gf_notifications_gen_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void gf_notifications_gen_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
GfNotificationsGen *gf_notifications_gen_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
GfNotificationsGen *gf_notifications_gen_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define GF_TYPE_NOTIFICATIONS_GEN_SKELETON (gf_notifications_gen_skeleton_get_type ())
#define GF_NOTIFICATIONS_GEN_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GF_TYPE_NOTIFICATIONS_GEN_SKELETON, GfNotificationsGenSkeleton))
#define GF_NOTIFICATIONS_GEN_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), GF_TYPE_NOTIFICATIONS_GEN_SKELETON, GfNotificationsGenSkeletonClass))
#define GF_NOTIFICATIONS_GEN_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), GF_TYPE_NOTIFICATIONS_GEN_SKELETON, GfNotificationsGenSkeletonClass))
#define GF_IS_NOTIFICATIONS_GEN_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GF_TYPE_NOTIFICATIONS_GEN_SKELETON))
#define GF_IS_NOTIFICATIONS_GEN_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), GF_TYPE_NOTIFICATIONS_GEN_SKELETON))

typedef struct _GfNotificationsGenSkeleton GfNotificationsGenSkeleton;
typedef struct _GfNotificationsGenSkeletonClass GfNotificationsGenSkeletonClass;
typedef struct _GfNotificationsGenSkeletonPrivate GfNotificationsGenSkeletonPrivate;

struct _GfNotificationsGenSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  GfNotificationsGenSkeletonPrivate *priv;
};

struct _GfNotificationsGenSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType gf_notifications_gen_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (GfNotificationsGenSkeleton, g_object_unref)
#endif

GfNotificationsGen *gf_notifications_gen_skeleton_new (void);


G_END_DECLS

#endif /* __GF_NOTIFICATIONS_GEN_H__ */
