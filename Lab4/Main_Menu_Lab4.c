#include <stdio.h>

void printMenu();
void tinhTBC();
void ktSoNguyenTo();
void ktSoChinhPhuong();

int main()
{
  int luaChon;
  do
  {
    printMenu();
    scanf("%d", &luaChon);

    switch (luaChon)
    {
    case 1:
      printf("Tinh trung binh tong cac so chia het cho 2\n");
      tinhTBC();
      break;
    case 2:
      printf("Kiem tra So nguyen to\n");
      ktSoNguyenTo();
      break;
    case 3:
      printf("Kiem tra So chinh phuong\n");
      ktSoChinhPhuong();
      break;
    default:
      printf("Chi nhap vao 1 - 4!\n");
      break;
    }
  } while (luaChon != 0);

  return 0;
}

void printMenu()
{
  printf("+--------------------------------------------------+\n");
  printf("|               MENU CHUONG TRINH LAB 4            |\n");
  printf("+--------------------------------------------------+\n");
  printf("| 1. Tinh trung binh tong cac so chia het cho 2    |\n");
  printf("| 2. Kiem tra So nguyen to                         |\n");
  printf("| 3. Kiem tra So chinh phuong                      |\n");
  printf("| 4. Thoat chuong trinh                            |\n");
  printf("+--------------------------------------------------+\n");
  printf(">> Xin moi chon chuc nang (1-4): ");
}

void tinhTBC()
{
  int min, max;
  int tong = 0;
  int dem = 0;
  float tbc;

  printf("Nhap 2 so min, max: ");
  scanf("%d%d", &min, &max);
  if (min > max)
  {
    printf(">Khong co so nao chia het cho 2 trong khoang da nhap!\n");
  }
  else
  {
    while (min <= max)
    {
      if (min % 2 == 0)
      {
        tong += min;
        dem++;
      }
      min++;
    }
    if (dem != 0)
    {
      tbc = (float)tong / (float)dem;
      printf(">Tong cac so chia het cho 2: %d\n", tong);
      printf(">So luong cac so chia het cho 2: %d\n", dem);
      printf(">Trung binh cong: %.2f\n", tbc);
    }
    else
    {
      printf(">Khong co so nao chia het cho 2 trong khoang da nhap!\n");
    }
  }
}

void ktSoNguyenTo()
{
}

void ktSoChinhPhuong()
{
}