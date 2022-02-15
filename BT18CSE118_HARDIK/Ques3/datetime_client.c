/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
  HARDIK
 BT18CSE118
 */

#include "datetime.h"


void
datetime_prog_1(char *host)
{
	CLIENT *clnt;
	char * *result_1;
	char *datetime_1_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, DATETIME_PROG, DATETIME_VERS, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
	
#endif	/* DEBUG */

	result_1 = datetime_1((void*)&datetime_1_arg, clnt);
	if (result_1 == (char **) NULL) {
		clnt_perror (clnt, "call failed");
	}
	else{
		printf("\nCurrent date and time from server is : %s\n\n",*result_1);
	}
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];
	datetime_prog_1 (host);
exit (0);
}