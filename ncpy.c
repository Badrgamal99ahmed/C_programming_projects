#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char dest_1[20] = "badr - gamal";
char dest_2[20];
/*
int main()
{
	
	strncpy(dest_2, dest_1, 15);
	printf("The seconed destenation is = %s", dest_2);
	
	return 0;
}
*/



char *My_strncpy(char *FAddress, const char *SAddress, unsigned int length);

int main()
{

	My_strncpy(dest_2, dest_1, 15);
	printf("The seconed destenation is = %s", dest_2);

	
	return 0;
}


char *My_strncpy(char *FAddress, const char *SAddress, unsigned int length){
	char *Fptr = FAddress;
	char *Sptr = SAddress;
	
	//int ReturnState = 0;  //indicates address is equal
	
	if((NULL == FAddress) || (NULL == SAddress)){
		printf("Memcpy function failed due to a NULL poointer !! \n");
	}
	else{
		while(length){
			*Fptr = *Sptr;
			Fptr++;
			Sptr++;
			length--;
		}
		return SAddress;
	}
}

