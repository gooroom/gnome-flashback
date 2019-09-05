/*
 * Copyright (C) 2014 - 2015 Alberts Muktupāvels
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

#ifndef GF_DESKTOP_BACKGROUND_H
#define GF_DESKTOP_BACKGROUND_H

#include <glib-object.h>

G_BEGIN_DECLS

#define GF_TYPE_DESKTOP_BACKGROUND gf_desktop_background_get_type ()
G_DECLARE_FINAL_TYPE (GfDesktopBackground, gf_desktop_background,
                      GF, DESKTOP_BACKGROUND, GObject)

GfDesktopBackground *gf_desktop_background_new (void);

G_END_DECLS

#endif
