/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.2.0.18) *
 *******************************************************************/
#ifndef __wrappedlibvaTYPES_H_
#define __wrappedlibvaTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void* (*pFppp_t)(void*, void*, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(vaSetErrorCallback, pFppp_t) \
	GO(vaSetInfoCallback, pFppp_t)

#endif // __wrappedlibvaTYPES_H_
