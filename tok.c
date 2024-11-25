#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char dest_1[30] = "Badr - Gamal - Ahmed";
const char dest_2[2t] = "-";

int main()
{
	char *token;
	
	token = strtok(dest_1, dest_2);
	while(token != NULL){
		printf(" %s\n", token);
		token = strtok(NULL, dest_2);
	}
	
	return 0;
}





/*
char dest_1[30] = "Badr - Gamal - Ahmed";
const char dest_2[2] = "-";

char My_strtok( char *FAddress, const char *SAddress);

int main()
{
	
	char *token;
	
	token = strtok(dest_1, dest_2);
	while(token != NULL){
		printf(" %s\n", token);
		token = strtok(NULL, dest_2);
	}
	
	return 0;
}



char My_strtok( char *FAddress, const char *SAddress){
	static char *nexttoken = NULL;
	char start;
	
	if((NULL == FAddress) || (NULL == SAddress)){
		printf("The function failed due to a NULL poointer !! \n");
	}
	else{
		if(FAddress != '\0'){
			nexttoken == FAddress;
		}
		
		while(*nexttoken && strchr(SAddress, *nexttoken)){
			nexttoken++;
		}
		if(*nexttoken == '\0'){
			return NULL;
		}
		start = nexttoken;
		
		nexttoken = strpbrk(nexttoken, SAddress);
		
		if(nexttoken == NULL){
			nexttoken = strchr(start, '\0');
		}
		else{
			*nexttoken = '\0';
			nexttoken++;
		}
		return start;
	}
}
*/


