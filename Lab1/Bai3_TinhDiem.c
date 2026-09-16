#include <stdio.h> 
// #include<stdlib.h>

int main() {
  const int SIZE = 20;
  const int HE_SO = 2;

  char mssv[SIZE];
  char fullName[SIZE];
  float math;
  float physics;
  float chemistry;

  printf("Mssv:");
  fgets(mssv, sizeof(mssv), stdin);

  printf("Fullname:");
  fgets(fullName, sizeof(fullName), stdin);

  printf("Math score:");
  scanf("%f", &math);

  printf("Physics score:");
  scanf("%f", &physics);
  
  printf("Chemistry score:");
  scanf("%f", &chemistry);

  float avg = (
    ((float)math * HE_SO) 
    + (float)physics 
    + (float)chemistry) 
    / (float)4;

  printf("-------\n");

  printf("Mssv: %s", mssv);
  printf("Fullname: %s", fullName);
  printf("Average score: %.2f\n", avg);



  return 0;
}