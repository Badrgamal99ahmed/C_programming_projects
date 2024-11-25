#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char MyName1[20] = "badr gamal";
char MyName2[20];

void *my_memset(void *StartAddress, unsigned char Value, unsigned int Length);

int main()
{
	/*
	printf("%s \n", MyName1);
	memset(MyName1, '*', 20);
	printf("%s \n", MyName1);
	memset(MyName1+5, 'B', 3);
	printf("%s \n", MyName1);
	*/
	
	printf("%s \n", MyName1);
	
	my_memset(MyName1, '*', 20);
	printf("%s \n", MyName1);
	
	my_memset(MyName1+5, 'B', 5);
	printf("%s \n", MyName1);
	printf("-----------------------\n\n");
	
	my_memset(MyName2, '*', 20);
	printf("%s \n", MyName2);
	
	my_memset(MyName2+5, 'B', 5);
	printf("%s \n", MyName2);
	
	return 0;
}




void *my_memset(void *StartAddress, unsigned char Value, unsigned int Length){
	unsigned char *TempPtr = StartAddress;

	
	if(NULL == StartAddress){
		printf("Memset function failed due to a NULL poointer !! \n");
	}
	else{
		while(Length--){
			*TempPtr = Value;
			TempPtr++;
		}
		
	}
	return StartAddress;
}
