#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
char dest_1[10] = {1, 2, 3, 4, 5};
char dest_2[10] =  {1, 2, 3, 4, 5};

int main()
{

        int ReturnState;

        ReturnState = strncmp(dest_1, dest_2, 6);
        if(ReturnState < 0){
        printf("The dest_1 less than dest_2 = -1 \n");
        }
        else if(ReturnState > 0){
        printf("The dest_2 less than dest_1 = 1 \n");
        }
        else{
        printf("The dest_1 Equal dest_2 = 0 \n");
        }


        return 0;
}
*/

char dest_1[10] = {1, 4, 3, 4, 5};
char dest_2[10] = {1, 6, 3, 4, 5};

int my_strncmp(const char *FAddress, const char *SAddress, unsigned int length);

int main() {

  int ReturnState;

  ReturnState = my_strncmp(dest_1, dest_2, 6);
  printf("ReturnState : %d", ReturnState);

  return 0;
}

int my_strncmp(const char *FAddress, const char *SAddress,
               unsigned int length) {
  const char *Fptr = FAddress;
  const char *Sptr = SAddress;

  int ReturnState = 0; // indicates address is equal

  if ((NULL == FAddress) || (NULL == SAddress)) {
    printf("Function failed due to a NULL poointer !! \n");
  } else {
    if (Fptr == Sptr) {
      ReturnState = 0; // indicates address is equal
    } else {
      while (length) {
        if (*Fptr != *Sptr) {
          ReturnState = (*Fptr < *Sptr) ? -1 : 1;
          break;
        } else {
          length--;
          Fptr++;
          Sptr++;
        }
      }
    }
  }
  return ReturnState;
}