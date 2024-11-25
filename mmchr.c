#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*
const char MyName1[20] = "badr - gamal";
const char MyName2 = '-';
char *ret;

int main()
{
	ret = memchr(MyName1, MyName2, MyName1);
	printf("string after |%c|is -> |%s| \n", MyName2, ret);

	return 0;
}*/



const char name_1[20] = "badr -gamal";
const char name_2= '-';


void *My_memchr(const void *StartAddress, unsigned char Value, unsigned int Length);

int main()
{
	unsigned char *ret;
	
	printf("%s \n", name_1);
	
	ret = My_memchr(name_1, name_2, 20);
	
	if(NULL == ret){
		printf("Memchr function failed due to a NULL poointer !! \n");
	}
	else{
			printf("string after |%c|is -> |%s| \n", name_2, ret);
		}
	
	return 0;
}

void *My_memchr(const void *StartAddress, unsigned char Value, unsigned int Length)
{
	unsigned char *Ptr = StartAddress;
	
	for(int i = 0; i < Length; i++){
		if(Ptr[i] == name_2){
			return (void*)&Ptr[i];
		}
		else{
			
		}
	}
}
