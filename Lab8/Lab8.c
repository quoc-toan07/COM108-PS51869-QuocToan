#include <stdio.h>
#include <string.h>

struct SinhVien
{
  char mssv[50];
  char tenSV[50];
  char nganhHoc[50];
  float diemTB;
};

void printMenu();
void nhapXuatSV();

int main()
{

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
      nhapXuatSV();
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
void nhapXuatSV()
{
  int soLuong;
  printf("So luong sv muon nhap vao: ");
  scanf("%d", &soLuong);
  while (getchar() != '\n')
    ;
  if (soLuong > 50)
  {
    printf("Khong vuot qua 50 sinh vien\n");
    return;
  }
  struct SinhVien dssv[soLuong];
  for (int i = 0; i < soLuong; i++)
  {
    printf("Nhap MSSV:");
    fgets(dssv[i].mssv, sizeof(dssv[i]), stdin);
    dssv[i].mssv[strcspn(dssv[i].mssv, "\n")] = '\0';

    printf("Ten SV:");
    fgets(dssv[i].tenSV, sizeof(dssv[i]), stdin);
    dssv[i].tenSV[strcspn(dssv[i].tenSV, "\n")] = '\0';

    printf("Nganh hoc:");
    fgets(dssv[i].nganhHoc, sizeof(dssv[i]), stdin);
    dssv[i].nganhHoc[strcspn(dssv[i].nganhHoc, "\n")] = '\0';

    printf("Diem TB:");
    scanf("%f", &dssv[i].diemTB);
    while (getchar() != '\n')
      ;
    if (dssv[i].diemTB > 10.0 || dssv[i].diemTB < 0)
    {
      printf("Diem TB khong hop le: \n");
      return;
    }
  }

  for (int i = 0; i < soLuong; i++)
  {
    printf("Sinh vien thu: %d\n", i);
    printf("MSSV: %s\n", dssv[i].mssv);
    printf("Ten SV: %s\n", dssv[i].tenSV);
    printf("Nganh hoc: %s\n", dssv[i].nganhHoc);
    printf("Diem TB: %.2f\n", dssv[i].diemTB);
  }
}
