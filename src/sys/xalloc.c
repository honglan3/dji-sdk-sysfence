/*
 
  copyright (c) 2004, Michal Salaban <michal@salaban.info>

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License, version 2 as
  published by the Free Software Foundation (see file COPYING for details).

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
  
  $Id: xalloc.c,v 1.1 2004/05/26 17:30:42 mkoperto Exp $
 
*/

#include <stdlib.h>
#include <stdio.h>
#include "exit.h"

void * xalloc (void * ptr, size_t size)
{
    void    *res;
    
    res = (void *) realloc (ptr, size);
    if (!res) 
        bail_out (EXIT_MEM, NULL);

    return res;

}

/* $Id: xalloc.c,v 1.1 2004/05/26 17:30:42 mkoperto Exp $ */
