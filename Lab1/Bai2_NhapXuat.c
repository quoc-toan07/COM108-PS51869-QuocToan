#include <stdio.h>
int main()
{
  char mssv[10];
  char fullName[20];
  int yearOfBirdth;
  float averageScore;

  printf("Mssv:");
  scanf("%s", mssv);

  printf("Fullname:");
  scanf(" %[^\n]", fullName);

  printf("Average score:");
  scanf("%f", &averageScore);

  printf("Year of birdth:");
  scanf("%d", &yearOfBirdth);
  int age = 2026 - yearOfBirdth;

  printf("------- \n");

  printf("Mssv: %s\n", mssv);
  printf("Fullname: %s\n", fullName);
  printf("Average score: %.2f\n", averageScore);
  printf("Age: %d\n", age);

  return 0;
}

/*

*/