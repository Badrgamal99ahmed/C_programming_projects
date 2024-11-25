#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
char dest[30] = "badr gamal ahmed";

int main()
{
	int lenght;
	lenght = strlen(dest);
	printf("The Length of {%s} is :  [%d]", dest, lenght);
	
	return 0;
}
*/


int My_strlen(const char *str);

char dest[30] = "badr gamal ahmed";

int main()
{
	int lenght;
	lenght = My_strlen(dest);
	printf("The Length of {%s} is :  [%d]", dest, lenght);
	
	return 0;
}

int My_strlen(const char *StartAddress){
	unsigned char *ptr = StartAddress;
	unsigned int lenght = 0;
	
	if(NULL == StartAddress){
		printf("The function failed due to a NULL poointer !! \n");
	}
	else{
		while(*ptr != '\0'){
			ptr++;
			lenght++;
		}
	}
	return lenght;
}
