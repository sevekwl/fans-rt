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


#ifndef __INCLUDE_STDINT_H
#define __INCLUDE_STDINT_H

#include <limits.h>

typedef signed char         int8_t;
typedef unsigned char       uint8_t;

typedef signed short        int16_t;
typedef unsigned short      uint16_t;

typedef signed int          int32_t;
typedef unsigned int        uint32_t;

#ifdef LLONG_MAX
#if (LLONG_MAX == 0x7FFFFFFFFFFFFFFFLL)
#define __INT64_DEFINED__
typedef signed long long int64_t;
typedef unsigned long long uint64_t;
#endif
#endif

typedef int8_t              int_least8_t;
typedef uint8_t             uint_least8_t;

typedef int16_t             int_least16_t;
typedef uint16_t            uint_least16_t;

typedef int32_t             int_least32_t;
typedef uint32_t            uint_least32_t;

#ifdef __INT64_DEFINED__
typedef int64_t             int_least64_t;
typedef uint64_t            uint_least64_t;
#endif

typedef int8_t              int_fast8_t;
typedef uint8_t             uint_fast8_t;

typedef int                 int_fast16_t;
typedef unsigned int        uint_fast16_t;

typedef int32_t             int_fast32_t;
typedef uint32_t            uint_fast32_t;

#ifdef __INT64_DEFINED__
typedef int64_t             int_fast64_t;
typedef uint64_t            uint_fast64_t;
#endif

typedef int                 intptr_t;
typedef unsigned int        uintptr_t;

#ifdef __INT64_DEFINED__
typedef long long           intmax_t;
typedef unsigned long long  uintmax_t;
#endif

#define INT8_MIN            (-INT8_MAX - 1)
#define INT8_MAX            127
#define UINT8_MAX           255

#define INT16_MIN           (-INT16_MAX - 1)
#define INT16_MAX           32767
#define UINT16_MAX          65535u

#ifdef __INT24_DEFINED
#  define INT24_MIN         (-INT24_MAX - 1)
#  define INT24_MAX         8388607
#  define UINT24_MAX        16777215u
#endif

#define INT32_MIN           (-INT32_MAX - 1)
#define INT32_MAX           2147483647
#define UINT32_MAX          4294967295u

#ifdef __INT64_DEFINED__
#  define INT64_MIN         (-INT64_MAX - 1ll)
#  define INT64_MAX         9223372036854775807ll
#  define UINT64_MAX        18446744073709551615ull
#endif

#define INT_LEAST8_MIN      INT8_MIN
#define INT_LEAST8_MAX      INT8_MAX
#define UINT_LEAST8_MAX     UINT8_MAX

#define INT_LEAST16_MIN     INT16_MIN
#define INT_LEAST16_MAX     INT16_MAX
#define UINT_LEAST16_MAX    UINT16_MAX

#define INT_LEAST32_MIN     INT32_MIN
#define INT_LEAST32_MAX     INT32_MAX
#define UINT_LEAST32_MAX    UINT32_MAX

#ifdef __INT64_DEFINED__
#  define INT_LEAST64_MIN   INT64_MIN
#  define INT_LEAST64_MAX   INT64_MAX
#  define UINT_LEAST64_MAX  UINT64_MAX
#endif

#define INT_FAST8_MIN       INT8_MIN
#define INT_FAST8_MAX       INT8_MAX
#define UINT_FAST8_MAX      UINT8_MAX

#define INT_FAST16_MIN      INT16_MIN
#define INT_FAST16_MAX      INT16_MAX
#define UINT_FAST16_MAX     UINT16_MAX

#define INT_FAST32_MIN      INT32_MIN
#define INT_FAST32_MAX      INT32_MAX
#define UINT_FAST32_MAX     UINT32_MAX

#ifdef __INT64_DEFINED__
#  define INT_FAST64_MIN    INT64_MIN
#  define INT_FAST64_MAX    INT64_MAX
#  define UINT_FAST64_MAX   UINT64_MAX
#endif

#define INTPTR_MIN          INT32_MIN
#define INTPTR_MAX          INT32_MAX
#define UINTPTR_MAX         UINT32_MAX

#ifdef __INT64_DEFINED__
#  define INTMAX_MIN        INT64_MIN
#  define INTMAX_MAX        INT64_MAX

#  define UINTMAX_MAX       UINT64_MAX
#else
#  define INTMAX_MIN        INT32_MIN
#  define INTMAX_MAX        INT32_MAX

#  define UINTMAX_MAX       UINT32_MAX
#endif


#endif
