#include <stdio.h>
int main() {
  int a;
  int b;

  printf("So nguyen a: ");
  scanf("%d", &a);

  printf("So nguyen b: ");
  scanf("%d", &b);
  
  printf("--------\n");

  printf("Truoc khi hoan vi: a=%d, b=%d", a, b);
  return 0;
}