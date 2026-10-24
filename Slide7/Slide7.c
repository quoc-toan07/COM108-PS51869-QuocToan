#include <stdio.h>
#include <string.h>

int main()
{
  char ho[6];
  printf("Nhap ho: ");
  gets(ho);

  char ten[20];
  printf("Nhap ten: ");
  gets(ten);

  strcat(ho, ten);
  printf("Ho & ten: %s\n", ho);

  return 0;
}