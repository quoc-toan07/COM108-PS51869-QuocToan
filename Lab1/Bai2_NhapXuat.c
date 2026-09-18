#include <stdio.h>

int main() {
  const int SIZE = 20;
  
  char mssv[SIZE];
  char fullName[SIZE];
  int yearOfBirdth;
  float averageScore;

  printf("Mssv:");
  fgets(mssv, sizeof(mssv), stdin);

  printf("Fullname:");
  fgets(fullName, sizeof(fullName), stdin);

  printf("Average score:");
  scanf("%f", &averageScore);

  printf("Year of birdth:");
  scanf("%d", &yearOfBirdth);
  int age = 2026 - yearOfBirdth;

  printf("------- \n");

  printf("Mssv: %s", mssv);
  printf("Fullname: %s", fullName);
  printf("Average score: %.2f\n", averageScore);
  printf("Age: %d\n", age);

  return 0;
}
