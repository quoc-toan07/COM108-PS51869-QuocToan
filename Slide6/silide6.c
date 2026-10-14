#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void declareArr(int Arr[], int size)
{
  srand(time(NULL));
  for (int i = 0; i < size; i++)
  {
    int randNum = rand() % size;
    Arr[i] = randNum;
  }
}
void printArr(int Arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%d\t", Arr[i]);
  }
}
void sortArr(int Arr[], int size)
{
  for (int i = 0; i < size - 1; i++) // i run tới 8
  {
    for (int j = i + 1; j < size; j++) // j run tới 9
    {
      // Sort tăng dần
      if (Arr[i] > Arr[j])
      {
        int temp = Arr[i];
        Arr[i] = Arr[j];
        Arr[j] = temp;
      }
    }
  }
}
int findIndex(int Arr[], int size, int valueToFind)
{
  for (int i = 0; i < size; i++)
  {
    if (Arr[i] == valueToFind)
    {
      return i;
    }
  }
  return -1;
}

int main()
{
  int size = 10;
  int nums[size];
  declareArr(nums, size);

  printf("Arr truoc khi sort: \n");
  printArr(nums, size);

  sortArr(nums, size);

  printf("\nArr sau khi sort: \n");
  printArr(nums, size);

  int vauleToFind = 8;
  int index = findIndex(nums, size, vauleToFind);
  if (index != -1)
  {
    printf("\nVi tri cua %d: %d\n", vauleToFind, index);
  }
  else
  {
    printf("Khong tim thay vi tri cua %d\n", vauleToFind);
  }

  return 0;
}