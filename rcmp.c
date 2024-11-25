#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char dest_1[10] = {1, 6, 3, 4, 5};
char dest_2[10] =  {1, 10, 3, 4, 5};

int my_strcmp(const char *FAddress, const char *SAddress);

int main()
{
	
	int ReturnState;
	/*
	ReturnState = strcmp(dest_1, dest_2);
	if(ReturnState < 0){
	printf("The dest_1 less than dest_2 = -1 \n");
	}
	else if(ReturnState > 0){
	printf("The dest_2 less than dest_1 = 1 \n");
	}
	else{
	printf("The dest_1 Equal dest_2 = 0 \n");
	}*/
	
	
	ReturnState = my_strcmp(dest_1, dest_2);
	printf("ReturnState : %d", ReturnState);

	
	return 0;
}


int my_strcmp(const char *FAddress, const char *SAddress){
	const char *Fptr = FAddress;
	const char *Sptr = SAddress;
	
	int ReturnState = 0;  //indicates address is equal

	if((NULL == FAddress) || (NULL == SAddress)){
		printf("Function failed due to a NULL poointer !! \n");
	}
	else{
		if(Fptr == Sptr){
			ReturnState = 0;  //indicates address is equal
		}
		else{
			while(*Fptr != '\0' || *Sptr != '\0'){
				if(*Fptr != *Sptr){
					ReturnState = (*Fptr < *Sptr) ? -1 : 1;
					break;
				}
				else{
				Fptr++;
				Sptr++;
				}
			}	
		}
	}
	return ReturnState;

}