#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
const char dest_1[] = "badr012356gamaahmed";
const char dest_2[] = "54";

int My_strcspn(const char *FAddress, const char *SAddress);

int main()
{
	char *ret;
	
	ret = strpbrk(dest_1, dest_2);
	
	if(ret){
		printf("The First matched character %c\n", *ret);
	}
	else{
		printf("Character not found");
	}
	
	return 0;
}*/


const char dest_1[] = "badrgamaahmed";
const char dest_2[] = "ba";

char My_strpbrk(const char *FAddress, const char *SAddress);

int main()
{
	
	
	char *ret = My_strpbrk(dest_1, dest_2);
	
	if(ret != NULL){
		printf("The First matched character %c\n", *ret);
	}
	else{
		printf("Character not found");
	}
	
	return 0;
}

char My_strpbrk(const char *FAddress, const char *SAddress){
	const char *Ftemptr = FAddress;
	const char *Stemptr = SAddress;
	
	while(*Ftemptr != '\0'){
		
		while(*Stemptr != '\0'){
			
			if(*Ftemptr == *Stemptr){
				return (char *)Ftemptr;					
			}
			Stemptr++;
		}
		Ftemptr++;
	}
	return NULL;	
}


