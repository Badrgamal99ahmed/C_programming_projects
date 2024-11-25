#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>



/*
int main()
{
	FILE *fp;
	
	fp = fopen("file.text","r");
	if(fp == NULL){
		printf("Error : %s\n", strerror(errno));
	}
	
	return 0;
}*/


char *My_strerror(int errnum);

int main()
{
	char *errptr;
	int ErrorNumber;
	printf("enter the error number : ");
	scanf("%d", &ErrorNumber);
	errptr = My_strerror(ErrorNumber);
	printf("Error message : %s", errptr);
	
	return 0;
}

char *My_strerror(int errnum){
	switch(errnum){
		case 0:
		return "No Error";
		case 1:
		return "Operation not permitted";
		case 2:
		return " No such file or directory";
		default:
		return "Unknown error";
	}
	
}
