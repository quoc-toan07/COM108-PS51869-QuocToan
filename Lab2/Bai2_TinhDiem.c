#include <stdio.h>
int main()
{
  float toan, ly, hoa;
  printf("Nhap diem Toan:");
  scanf("%f", &toan);

  printf("Nhap diem Ly:");
  scanf("%f", &ly);

  printf("Nhap diem Hoa:");
  scanf("%f", &hoa);

  float dtb = ((toan * 3) + (ly * 2) + (hoa * 1)) / 6;

  printf("Diem trung binh: %.2f", dtb);
}