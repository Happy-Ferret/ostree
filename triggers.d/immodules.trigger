#!/bin/sh
# Post-installation hook for GTK+ input method modules.  -*- mode: sh -*-
#
# Written by Matthias Clasen <mclasen@redhat.com>
#
# This library is free software; you can redistribute it and/or
# modify it under the terms of the GNU Lesser General Public
# License as published by the Free Software Foundation; either
# version 2 of the License, or (at your option) any later version.
#
# This library is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# Lesser General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public
# License along with this library; if not, write to the
# Free Software Foundation, Inc., 59 Temple Place - Suite 330,
# Boston, MA 02111-1307, USA.

# IfExecutable: gtk-query-immodules-3.0
# REMatch: /lib.*/gtk-3\.0/3\.0\.0/immodules/.*\.so

gtk-query-immodules-3.0 --update-cache
