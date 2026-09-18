#include <stdio.h>
int main()
{
  int a = 9;
  int b = 2;
  printf("Truoc khi hoan vi: a =%d, b =%d\n", a, b);

  a = a + b;
  b = a - b;
  a = a - b;
  printf("Sau khi hoan vi: a =%d, b =%d", a, b);

  return 0;
}