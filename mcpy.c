#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char name_1[20] = "badr - gamal";
char name_2[20];

void *my_memcpy(void *DestAddress, const void * SrcAddress, unsigned int Length);
int main()
{
	/*
	memcpy(name_2, name_1, 20);
	printf("%s", name_2);
	*/
	

	printf("%s \n", name_2);
	my_memcpy(name_2, name_1, 30);
	printf("%s \n", name_2);
	
	return 0;
}

void *my_memcpy(void *DestAddress, const void * SrcAddress, unsigned int Length){
	
	unsigned char *ptrDest = DestAddress;
	unsigned char *ptrSrc = SrcAddress;
	if((NULL == DestAddress) || (NULL == SrcAddress)){
		printf("Memcpy function failed due to a NULL poointer !! \n");
	}
	else{
		while(Length){
			*ptrDest = *ptrSrc;
			ptrDest++;
			ptrSrc++;
			Length--;
		}
	}
	return DestAddress;
}