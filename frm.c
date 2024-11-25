#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
char dest[30];
char src[30] = "badr gamal ahmed";

int main()
{
	int lenght;
	lenght = strxfrm(dest, src, 30);
	printf("The Length of the string {%s} is :  [%d]", dest, lenght);
	
	return 0;
}*/





int My_strxfrm(char *destenation, const char *source, unsigned int len);

char dest[30];
char src[] = "badr gamal ahmed";

int main()
{
	int lenght;
	lenght = My_strxfrm(dest, src, 30);
	printf("The Length of the string {%s} is :  [%d]", dest, lenght);
	
	return 0;
}

int My_strxfrm(char *destenation, const char *source, unsigned int len){
	int sourcelen = strlen(source);
	int destenationlen = sourcelen;
	int copylen;
	
	
	
	if((NULL == destenation) || ((NULL == source))){
		printf("The function failed due to a NULL poointer !! \n");
	}
	else{
		if( len > 0){
			copylen = (sourcelen < len - 1) ? sourcelen : len - 1;
			memcpy(destenation, source, copylen);
			destenationlen = copylen;
		}
		if( len > 0){
			destenation[destenationlen] = '\0';
		}
		return sourcelen;
	}
}

