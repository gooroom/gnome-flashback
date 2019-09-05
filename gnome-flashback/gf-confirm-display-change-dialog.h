/*
 * Copyright (C) 2017 Alberts Muktupāvels
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef GF_CONFIRM_DISPLAY_CHANGE_DIALOG_H
#define GF_CONFIRM_DISPLAY_CHANGE_DIALOG_H

#include <gtk/gtk.h>

G_BEGIN_DECLS

#define GF_TYPE_CONFIRM_DISPLAY_CHANGE_DIALOG (gf_confirm_display_change_dialog_get_type ())
G_DECLARE_FINAL_TYPE (GfConfirmDisplayChangeDialog, gf_confirm_display_change_dialog,
                      GF, CONFIRM_DISPLAY_CHANGE_DIALOG, GtkWindow)

GtkWidget *gf_confirm_display_change_dialog_new (gint timeout);

G_END_DECLS

#endif
