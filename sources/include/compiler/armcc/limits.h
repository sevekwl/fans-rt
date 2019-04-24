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

#ifndef __INCLUDE_ARMCC_LIMITS_H
#define __INCLUDE_ARMCC_LIMITS_H

#define CHAR_BIT        8
#define SCHAR_MAX       127
#define SCHAR_MIN       (-SCHAR_MAX-1)
#define UCHAR_MAX       255U

#ifdef __FEATURE_SIGNED_CHAR
# define CHAR_MIN       SCHAR_MIN
# define CHAR_MAX       SCHAR_MAX
#else
# define CHAR_MIN       0
# define CHAR_MAX       UCHAR_MAX
#endif

#define MB_LEN_MAX      2

#define SHRT_MAX        32767
#define SHRT_MIN        (-SHRT_MAX-1)
#define USHRT_MAX       65535U

#define INT_MAX         2147483647
#define INT_MIN         (-INT_MAX-1)
#define UINT_MAX        4294967295U

#define LONG_MAX        2147483647L
#define LONG_MIN        (-LONG_MAX-1L)
#define ULONG_MAX       4294967295UL

#if defined (__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
#define LLONG_MAX       9223372036854775807ll
#define LLONG_MIN       (-INT64_MAX - 1ll)
#define ULLONG_MAX      18446744073709551615ull
#endif

#endif

/* end of limits.h */

