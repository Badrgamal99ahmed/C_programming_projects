#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char dest[30] = "Badr - Gamal";
const char src = '-';

char *my_strchr(char *DestAddress, unsigned int value);

int main()
{
	
	unsigned char *ret;
	/*
	ret = strchr(dest, src);
	printf("string after |%c|is -> |%s| \n", src, ret);
	*/
	
	my_strchr(dest, src);
	printf("The All string = %s\n\n", dest);
	
	ret = my_strchr(dest, src);
	if(NULL == ret){
		printf("Strchr function failed due to a NULL poointer !! \n");
	}
	else
	{
		printf("string after |%c| is => |%s| \n", src, ret);
	}
	
	return 0;
}

char *my_strchr(char *DestAddress, unsigned int value){
	unsigned int i;
	
	unsigned char *Ptr = DestAddress;
	
	for(int i = 0; i < 30; i++){
		if(Ptr[i] == src){
			return (char*)&Ptr[i];
		}
		else{
			
		}
	}
	/*
	while(*DestAddress != '\n'){
		if(*DestAddress == src){
			return (char*)DestAddress;
		}
		DestAddress++;
	}
	return NULL;*/
}
