#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char dest_1[] = "badr012356gamaahmed";
const char dest_2[] = "013";

//int My_strcspn(const char *FAddress, const char *SAddress);

int main()
{
	int length;
	
	length = strcspn(dest_1, dest_2);
	printf("The First matched character is at %d\n", length + 1);
	
	return 0;
}


