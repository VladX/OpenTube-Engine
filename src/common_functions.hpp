/*
 * This file is part of Opentube - Open video hosting engine
 *
 * Copyright (C) 2011 - Xpast; http://xpast.me/; <vvladxx@gmail.com>
 *
 * Opentube is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * Opentube is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Opentube.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __COMMON_FUNCTIONS_H_
#define __COMMON_FUNCTIONS_H_ 1

#include "common.hpp"

inline const char * cbasename (const char * path)
{
	const char * p = path + std::strlen(path) - 1;
	for (; p > path && * p != '/' && * p != '\\'; p--);
	if (* p == '/' || * p == '\\')
		p++;
	return p;
}

#ifndef WIN32
inline int getlasterror ()
{
	return errno;
}
#else
int getlasterror (); 
#endif

#endif
