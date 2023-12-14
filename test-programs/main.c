#include <stdio.h>
#include "new.h"

/* #undef __TIMESTAMP__ */
int main(){
	printf("\ncompiled date : \t");
	local();
	printf("\nmain timestamp : \t "__TIMESTAMP__ );
	printf("\n");
	callfn( 4, doubleValue );
	return 0;
}
