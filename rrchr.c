#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
const char dest[30] = "Badr - Gamal";
const char src = '-';

int main()
{
	unsigned char *ret;
	
	ret = strrchr(dest, src);
	printf("string after |%c|is -> |%s| \n", src, ret);
	
	return 0;
}*/



const char dest[30] = "Badr - Gamal";
const char src = '-';

char *my_strrchr(const char *DestAddress, unsigned int value);

int main()
{
	
	unsigned char *ret;
	
	my_strrchr(dest, src);
	printf("The All string = %s\n\n", dest);
	
	ret = my_strrchr(dest, src);
	if(NULL == ret){
		printf("Strrchr function failed due to a NULL poointer !! \n");
	}
	else
	{
		printf("string after |%c| is => |%s| \n", src, ret);
	}
	
	return 0;
}



char *my_strrchr(const char *DestAddress, unsigned int value){
	const char *Lastoccur = NULL;
		
	while(*DestAddress != '\0'){
		if(*DestAddress == value){
			Lastoccur = DestAddress;
		}
		DestAddress++;
	}
	if(DestAddress == value){
		Lastoccur = DestAddress;
	}
	return (char *)Lastoccur;
}

