#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char dest_1[20] = "badr - gamal";
char dest_2[20];
/*
int main()
{
	
	strcpy(dest_2, dest_1);
	printf("The seconed destenation is = %s", dest_2);
	
	return 0;
}
*/



char *strcpy(char *FAddress, const char *SAddress);

int main()
{

	strcpy(dest_1, dest_2);
	printf("The seconed destenation is = %s", dest_2);

	
	return 0;
}


char *strcpy(char *FAddress, const char *SAddress){
	char *Sptr = SAddress;
	
	//int ReturnState = 0;  //indicates address is equal
	
	if((NULL == FAddress) || (NULL == SAddress)){
		printf("Memcpy function failed due to a NULL poointer !! \n");
	}
	else{
		while(*FAddress != '\0'){
			*Sptr = *FAddress;
			Sptr++;
			FAddress++;
		}
		return SAddress;
	}
}

