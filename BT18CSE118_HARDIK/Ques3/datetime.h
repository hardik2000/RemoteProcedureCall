/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _DATETIME_H_RPCGEN
#define _DATETIME_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


#define DATETIME_PROG 0x23451111
#define DATETIME_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define datetime 1
extern  char ** datetime_1(void *, CLIENT *);
extern  char ** datetime_1_svc(void *, struct svc_req *);
extern int datetime_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define datetime 1
extern  char ** datetime_1();
extern  char ** datetime_1_svc();
extern int datetime_prog_1_freeresult ();
#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_DATETIME_H_RPCGEN */