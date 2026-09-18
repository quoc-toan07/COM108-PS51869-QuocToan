#include <stdio.h>
int main()
{
  char mssv[10] = "PS51869";
  char fullName[20] = "Tran Quoc Toan";
  float toan = 5.6;
  float ly = 4.5;
  float hoa = 5.9;

  float dtb = ((toan * 2) + ly + hoa) / (float)4;

  printf("Ma so sinh vien: %s\n", mssv);
  printf("Ho va ten: %s\n", fullName);
  printf("Diem trung binh: %.2f\n", dtb);

  return 0;
}