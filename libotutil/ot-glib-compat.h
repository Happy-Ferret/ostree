/* -*- mode: C; c-file-style: "gnu"; indent-tabs-mode: nil; -*-
 *
 * Copyright (C) 2011 Colin Walters <walters@verbum.org>.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 *
 * Author: Colin Walters <walters@verbum.org>
 */

#ifndef __OSTREE_GLIB_COMPAT_H__
#define __OSTREE_GLIB_COMPAT_H__

#include <gio/gio.h>

G_BEGIN_DECLS

#if GLIB_CHECK_VERSION(2,32,0)
#define ot_g_environ_getenv g_environ_getenv
#define ot_g_environ_setenv g_environ_setenv
#define ot_g_environ_unsetenv g_environ_unsetenv
#else
const gchar *
ot_g_environ_getenv (gchar       **envp,
                     const gchar  *variable);

gchar **
ot_g_environ_setenv (gchar       **envp,
                     const gchar  *variable,
                     const gchar  *value,
                     gboolean      overwrite);

gchar **
ot_g_environ_unsetenv (gchar       **envp,
                       const gchar  *variable);
#endif


G_END_DECLS

#endif
