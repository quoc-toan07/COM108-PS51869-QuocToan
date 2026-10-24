#include <stdio.h>
#include <string.h>

void printMenu();

int main()
{
  struct SinhVien
  {
    char mssv[50];
    char tenSV[50];
    char nganhHoc[50];
    float diemTB;
  };
  int chon;
  do
  {
    printMenu();
    printf("Chon chuc nang: ");
    scanf("%d", &chon);
    while (getchar() != '\n')
      ;
    switch (chon)
    {
    case 1:
      printf("Nhap va xuat danh sach sinh vien\n");
      break;
    case 2:
      printf("Sap xep sinh vien theo diem tang dan\n");
      break;
    case 3:
      printf("Tim kiem sinh vien theo MSSV\n");
      break;
    case 4:
      printf("Xuat sinh vien nhan hoc bong theo nganh\n");
      break;
    case 5:
      printf("Thoat chuong trinh \n");
      break;
    default:
      printf("Chuc nang nhap vao chua hop le(1-5)\n");
      break;
    }

  } while (chon != 5);
  return 0;
}

void printMenu()
{
  printf("MENU CHUONG TRINH LAB 8\n");
  printf("1. Nhap va xuat danh sach sinh vien\n");
  printf("2. Sap xep sinh vien theo diem tang dan\n");
  printf("3. Tim kiem sinh vien theo MSSV\n");
  printf("4. Xuat sinh vien nhan hoc bong theo nganh\n");
  printf("5. Thoat chuong trinh\n");
}
