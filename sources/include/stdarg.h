/******************************************************************************
  * Copyright(C) 2016-2018 UAV Robotics Corporation. All rights reserved.
  * - http://www.uavcro.com
  * file:     include/armcc/stdarg.h
  * version:  0.1
  * brief:    UAV Robotics Micro Device Development Platform defines.
  *
  * historyï¼?
  *
  *   date            author             Modification
  * 1.2017.06.26  JiangYong(00000022)    first version
  ***************************************************************************/

#ifndef __INCLUDE_STDARG_H
#define __INCLUDE_STDARG_H

typedef char *va_list;

#define va_start(ap,last) ap = ((char *)&(last)) + ((sizeof(last)+3)&~3)
#define va_arg(ap,type) (ap += (sizeof(type)+3)&~3, *(type *)(ap - ((sizeof(type)+3)&~3)))
#define va_copy(dest, src) (dest) = (src)
#define va_end(ap)

#endif

