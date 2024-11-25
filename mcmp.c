#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char name_1[5] = {1, 4, 3, 4, 5};
char name_2[5] = {1, 4, 3, 4, 5};


int my_memcmp(const void *FAddress, const void *SAddress, unsigned int Length);

int main()
{
	int ReturnState;
	
	/*
	ReturnState = memcmp(MyName1, MyName2, 7);
	if(ReturnState > 0){
		printf("MyName2 less than MyName1 : 1");
	}
	else if(ReturnState < 0){
		printf("MyName1 less than MyName2 : -1");
	}
	else{
		printf("MyName2 Equal to MyName1 : 0");
	}*/
	
	ReturnState = my_memcmp(name_1, name_2, 5);
	printf("ReturnState : %d", ReturnState);
	

	return 0;
}



int my_memcmp(const void *FAddress, const void *SAddress, unsigned int Length){
	unsigned char *TempFAddress = FAddress;
	unsigned char *TempSAddress = SAddress;
	int ReturnState = 0;  //indicates address is equal

	if((NULL == FAddress) || (NULL == SAddress)){
		printf("Function failed due to a NULL poointer !! \n");
	}
	else{
		if(TempFAddress == TempSAddress){
			ReturnState = 0;  //indicates address is equal
		}
		else{
			while(Length){
				if(*TempFAddress != *TempSAddress){
					ReturnState = (*TempFAddress < *TempSAddress) ? -1 : 1;
					break;
				}
				else{
					Length--;
					TempFAddress++;
					TempSAddress++;
				}
			}
		}
	}
	return ReturnState;
	
}