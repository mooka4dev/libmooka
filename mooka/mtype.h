#ifndef _mooka_type_h_
#define _mooka_type_h_

#if !defined(_WIN32) && !defined(_WIN64)

#include <stdint.h>
#include <inttypes.h>

typedef int8_t 		int8;
typedef int16_t 	int16;
typedef int32_t 	int32;
typedef int64_t 	int64;
typedef uint8_t  	uint8;
typedef uint16_t 	uint16;
typedef uint32_t	uint32;
typedef uint64_t 	uint64;


#else /*if !defined(_WIN32) && !defined(_WIN64)*/

//The stdint declaras
typedef  signed char  	int8;
typedef  short 			int16;
typedef  int   			int32;
typedef unsigned char  	uint8;
typedef unsigned short 	uint16;
typedef unsigned int   	uint32;

#if _MSC_VER >= 1300
typedef unsigned long long 	uint64;
typedef long long 			int64;
#else /* _MSC_VER */
typedef unsigned __int64	uint64_t;
typedef __int64				int64_t;
#endif /* _MSC_VER */

#endif /*if !defined(_WIN32) && !defined(_WIN64)*/

#endif // _mooka_type_h_

