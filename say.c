#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char **argv[]){
	for(int i=1;i<=argc;i++){
		if(argv[i]!=NULL){
			printf("%s ",argv[i]);
		}
		else{
			break;
		}
	}
	printf("\n");
}
