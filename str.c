#include <stdio.h>
#include <stdlib.h>
#include <string.h>


const char dest_1[] = "badrgamalahmed";
const char dest_2[] = "gamal";

int main()
{
	char *ret;
	
	ret = strstr(dest_1, dest_2);
	
	printf("The substring is : %s\n", ret);
	
	return 0;
}



/*
const char dest_1[] = "badrgamalahmed";
const char dest_2[] = "gamal";
int My_strstr(const char *FAddress, const char *SAddress);
int main()
{
	char *ret;
	
	ret = My_strstr(dest_1, dest_2);
	
	printf("The substring is : %s\n", ret);
	
	return 0;
}

int My_strstr(const char *FAddress, const char *SAddress){
	const char *Ftemptr = FAddress;
	const char *Stemptr = SAddress;
	
	if((NULL == FAddress) || (NULL == SAddress)){
		printf("The function failed due to a NULL poointer !! \n");
	}
	else{}
		
}
*/

