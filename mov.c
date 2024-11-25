#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char name_1[20] = "badr_gamal";
const char name_2[20] = "new_string";

void *my_memmove(void *DestAddress, const void * SrcAddress, unsigned int Length);

int main()
{
	/*
	printf("before memmove name_1 = %s\n, name_2 = %s \n", name_1, name_2);
	memmove(name_1, name_2, 20);
	printf("after memmove name_1 = %s\n, name_2 = %s \n", name_1, name_2);
	*/
	printf("%s : %s \n", name_1, name_2);
	my_memmove(name_1, name_2, 20);
	printf("%s : %s \n", name_1, name_2);
	
	
	return 0;
}


void *my_memmove(void *DestAddress, const void * SrcAddress, unsigned int Length){
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
