#include <stdio.h>
const int SIZE = 20;
const int HE_SO = 2;

int main()
{
  char mssv[SIZE];
  char fullName[SIZE];
  float math;
  float physics;
  float chemistry;

  printf("Mssv:");
  scanf("%s", mssv);

  printf("Fullname:");
  scanf(" %[^\n]", fullName);

  printf("Math score:");
  scanf("%f", &math);

  printf("Physics score:");
  scanf("%f", &physics);

  printf("Chemistry score:");
  scanf("%f", &chemistry);

  float avg = (((float)math * HE_SO) + (float)physics + (float)chemistry) / (float)4;

  printf("-------\n");

  printf("Mssv: %s\n", mssv);
  printf("Fullname: %s\n", fullName);
  printf("Average score: %.2f\n", avg);

  return 0;
}