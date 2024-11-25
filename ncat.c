#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char dest[70] = "Badr Gamal";
char src[70] = " is a Embedd_software Engineer";

char *my_strncat(char *DestAddress, const char *SrcAddress,
                 unsigned int Length);

int main() {
  /*
  strncat(dest, src,35);
  printf("The Destenation = %s", dest);
  */

  my_strncat(dest, src, 35);
  printf("The Destenation = %s", dest);

  return 0;
}

char *my_strncat(char *DestAddress, const char *SrcAddress,
                 unsigned int Length) {
  unsigned char *TempDestAddress = DestAddress;
  while (*TempDestAddress != '\0') {
    *TempDestAddress++;
  }
  while (*SrcAddress != '\0') {
    *TempDestAddress = *SrcAddress;
    *TempDestAddress++;
    *SrcAddress++;
    Length--;
  }
  return DestAddress;
}