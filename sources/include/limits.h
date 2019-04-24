/*
 *    Copyright(C) 2013-2018, Fans-rt development team.
 *
 *    All rights reserved.
 *
 *    This is open source software.
 *    Learning and research can be unrestricted to  modification, use and dissemination.
 *    If you need for commercial purposes, you should get the author's permission.
 *
 *    date           author          notes
 *    2018-12-02     JiangYong       new file
 */

#ifndef __INCLUDE_LIMITS_H
#define __INCLUDE_LIMITS_H

#ifdef (__GUNC__)
#include <compiler/gcc/limits.h>
#endif

#ifdef (__CC_ARM)
#include <compiler/armcc/limits.h>
#endif

#endif

/* end of limits.h */

