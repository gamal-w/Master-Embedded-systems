#ifndef PLATFORM_TYPES
#define PLATFORM_TYPES
#include <stdio.h>
#include <stdbool.h>


typedef _Bool                    boolean;
typedef char                     char_t;
typedef signed char              sint8_t;
typedef unsigned char            uint8_t;
typedef signed short             sint16_t;
typedef unsigned short           uint16_t;
typedef short                    short_t;
typedef signed int               sint32_t;
typedef unsigned int             uint32_t;
typedef signed long long int     sint64_t;
typedef unsigned long long int   uint64_t;

typedef volatile sint8_t         vsint8_t;
typedef volatile uint8_t         vuint8_t;
typedef volatile sint16_t        vsint16_t;
typedef volatile uint16_t        vuint16_t;
typedef volatile sint32_t        vsint32_t;
typedef volatile uint32_t        vuint32_t;
typedef volatile sint64_t        vsint64_t;
typedef volatile uint64_t        vuint64_t;

#ifndef FALSE
#define FALSE     (boolean)0
#endif

#ifndef TRUE
#define TRUE      (boolean)1
#endif


#endif