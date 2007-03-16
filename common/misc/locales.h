/* (c) 2007 by Michal Cihar */

/** \file locales.h
 * Gettext wrapper.
 *
 * @author Michal Cihar
 * @{
 */

#ifndef __LOCALES_H
#define __LOCALES_H

#include "../config.h"

#include <locale.h>

#ifdef GETTEXTLIBS_FOUND
#include <libintl.h>
#define _(x) gettext(x)
#else
#define _(x) (x)
#define gettext(x) (x)
#endif

#define N_(x) (x)

#endif
