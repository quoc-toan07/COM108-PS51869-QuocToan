#include <stdio.h>
int main()
{
  int a;
  int b;

  printf("So nguyen a: ");
  scanf("%d", &a);

  printf("So nguyen b: ");
  scanf("%d", &b);

  printf("--------\n");

  printf("Truoc khi hoan vi: a=%d, b=%d\n", a, b);
  a = a + b;
  b = a - b;
  a = a - b;
  printf("Sau khi hoan vi: a=%d, b=%d\n", a, b);

  return 0;
}