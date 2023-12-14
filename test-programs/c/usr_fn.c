
#include <stdio.h>

typedef int hello;
typedef int (*callbackFn)(int);

void local(){
	printf("LOCAL CALLED \n");
	printf("local timestamp : \t"__TIMESTAMP__ );
}

int doubleValue(int value){
	return value;
}

void callfn(int value, callbackFn fn){
	printf("Call Value: %d\n", value);
	value = fn (2*value);
	printf("Callback Value: %d\n", value);
}



