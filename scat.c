#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char dest[70] = "Badr Gamal";
char src[70] = " is a Robotics Engineer";

char *my_strcat(char *DestAddress, const char *SrcAddress);

int main()
{
	/*
	strcat(dest, src);
	printf("The Destenation = %s", dest);
	*/
	
	my_strcat(dest, src);
	printf("The Destenation = %s", dest);
	
	
	return 0;
}

char *my_strcat(char *DestAddress, const char *SrcAddress){
	unsigned char *TempDestAddress = DestAddress;
	while(*TempDestAddress != '\0'){
		*TempDestAddress++;
	}
	while(*SrcAddress != '\0'){
		*TempDestAddress = *SrcAddress;
		*TempDestAddress++;
		*SrcAddress++;
	}
	return DestAddress;

}