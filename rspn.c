#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
const char dest_1[] = "ABCDEFG01234";
const char dest_2[] = "ABCDE";

int main()
{
	int len;
	
	len = strspn(dest_1, dest_2);
	
	printf("Length of the initial segment matching : %d\n", len);
	
	return 0;
}*/



const char dest_1[] = "ABCDEFG01234";
const char dest_2[] = "ABCDE";
int My_strspn(const char *FAddress, const char *SAddress);
int main()
{
	int len;
	
	len = My_strspn(dest_1, dest_2);
	
	printf("Length of the initial segment matching : %d\n", len);
	
	return 0;
}

int My_strspn(const char *FAddress, const char *SAddress){
	const char *Ftemptr = FAddress;
	const char *Stemptr = SAddress;
unsigned int lenght = 0;
	
	if(NULL == FAddress){
		printf("The function failed due to a NULL poointer !! \n");
	}
	else{
		while((*Ftemptr != '\0') && (*Stemptr != '\0')){
			Ftemptr++;
			Stemptr++;
			lenght++;
		}
	}
	return lenght;
}