#include <stdio.h>
#include <string.h>

void printMenu();
void tinhHocLuc();
void ptBacHai();
void tinhTienDien();

int main()
{
  printMenu();
  int luaChon;

  do
  {
    printf("Nhap lua chon cua ban: ");
    scanf("%d", &luaChon);

    switch (luaChon)
    {
    case 0:
      printf("Tam biet\n");
      break;
    case 1:
      printf("BAN CHON CHUC NANG: Tinh hoc luc sinh vien\n");
      tinhHocLuc();
      break;
    case 2:
      printf("BAN CHON CHUC NANG: Giai phuong trinh bac hai\n");
      ptBacHai();
      break;
    case 3:
      printf("BAN CHON CHUC NANG: Tinh tien dien tieu thu\n");
      tinhTienDien();
      break;
    default:
      printf("Chua co chua nang lua chon\n");
      break;
    }
  } while (luaChon != 0);

  return 0;
}

void printMenu()
{
  printf("===== MENU CHUONG TRINH LAB 3 =====\n");
  printf("1. Tinh hoc luc sinh vien\n");
  printf("2. Giai phuong trinh bac hai\n");
  printf("3. Tinh tien dien tieu thu\n");
  printf("0. Thoat chuong trinh\n");
}

void tinhHocLuc()
{
  float dtb;
  char hocLuc[20];

  printf("Nhap diem trung binh: ");
  scanf("%f", &dtb);

  if (dtb >= 0.0 && dtb < 10.0)
  {
    if (dtb >= 9.0)
    {
      strcpy(hocLuc, "Xuat xac");
    }
    else if (dtb >= 8.0 && dtb < 9.0)
    {
      strcpy(hocLuc, "Gioi");
    }
    else if (dtb >= 6.5 && dtb < 8.0)
    {
      strcpy(hocLuc, "Kha");
    }
    else if (dtb >= 5.0 && dtb < 6.5)
    {
      strcpy(hocLuc, "Trung Binh");
    }
    else if (dtb >= 3.5 && dtb < 5.0)
    {
      strcpy(hocLuc, "Yeu");
    }
    else
    {
      strcpy(hocLuc, "Kem");
    }
    printf("Hoc luc: %s\n", hocLuc);
  }
  else
  {
    printf("Diem so nhap vao khong hop le!\n");
  }
}

void ptBacHai()
{
  printf("Test bai 3\n");
}

void tinhTienDien()
{
  printf("Test bai 4\n");
  /*
    tongKwh: 50
    temp = 0;
    tongTienDien = 0;

    if 0 <= tongKwh <= 50 (&&)
     if tongKwh - 50 >= 0 => temp = tongKwh - 50
     else tongTienDien += tongKwh * 1.678

    if 50 < tongKwh <= 100 (&&)
     if tongKwh - 100 >= 0 => temp = tongKwh - 100;
     else tongTienDien += tongKwh * 1.678

  */
}
