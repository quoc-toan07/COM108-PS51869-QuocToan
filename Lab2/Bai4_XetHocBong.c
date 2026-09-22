#include <stdio.h>
int main()
{
  float dtb;
  int hanhKiem;

  printf("Nhap diem trung binh:");
  scanf("%f", &dtb);

  printf("Nhap hanh kiem:");
  scanf("%d", &hanhKiem);

  printf("-----\n");

  if (dtb >= 8 && hanhKiem == 1)
  {
    printf("Dieu kien diem trung binh >= 8: %d\n", 1);
    printf("Dieu kien hanh kiem tot: %d\n", 1);
    printf("Ket qua xet hoc bong %d\n", 1);
  }
  else
  {
    printf("Dieu kien diem trung binh >= 8: %d\n", 0);
    printf("Dieu kien hanh kiem tot: %d\n", 0);
    printf("Ket qua xet hoc bong: %d\n", 0);
  }
}