#include <stdio.h>
int main()
{
  float dtb;
  int hanhKiem, chuyenDoiDtb, ketQuaXetTN;

  printf("Nhap diem trung binh: ");
  scanf("%f", &dtb);

  printf("Nhap hanh kiem: ");
  scanf("%d", &hanhKiem);

  if (dtb >= 8)
  {
    chuyenDoiDtb = 1;
  }
  else
  {
    chuyenDoiDtb = 0;
  }

  if (chuyenDoiDtb == 1 && hanhKiem == 1)
  {
    ketQuaXetTN = 1;
  }
  else
  {
    ketQuaXetTN = 0;
  }

  printf("-----\n");
  printf("Dieu kien diem trung binh >= 8: %d\n", chuyenDoiDtb);
  printf("Dieu kien hanh kiem tot: %d\n", hanhKiem);
  printf("Ket qua xet hoc bong: %d\n", ketQuaXetTN);

  return 0;
}