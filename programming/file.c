#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

void prog_exit(){
		printf("\nTerminating program ...\n");
		exit(1); }

int main(){
	FILE* fp = fopen("file.txt","r+");
	/* fprintf(fp,"hll\nehy\n"); */
	char count = 0;
	char c;
		printf("PID: %d\n",getpid());
	while(c = getc(fp), c != EOF){
		/* printf("%c",c); */
		if (c == '\n'){
			count++;
			/* printf("\n"); */
		}

		if ( count ==2 ){
			/* fprintf(fp,"helloi"); */
			fputs("hello",fp);
			fflush(fp);
		}
	}


	printf("\n.....%ld.......\n",ftell(fp));
	rewind(fp);
	printf("\n.....%ld.......\n",ftell(fp));
	signal(SIGINT,prog_exit);

	while( c = getc(fp) , c != EOF ){
		printf("%c",c);
		/* putc(c,stdin); */
	}
	/* fprintf(fp,"hello\nhey\n"); */
	fclose(fp);
	while(1);
	return 0;
}
