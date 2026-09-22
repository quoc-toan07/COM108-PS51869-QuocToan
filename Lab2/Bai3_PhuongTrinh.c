#include <stdio.h>
int main()
{
  int a, b;
  float x;

  printf("Nhap he so a:");
  scanf("%d", &a);
  printf("Nhap he so b:");
  scanf("%d", &b);

  x = -b / a;

  printf("Nghiem cua phuong trinh la: x = %.2f", x);

  return 0;
}