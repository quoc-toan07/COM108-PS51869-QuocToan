#include <stdio.h>

void printMenu();

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
      break;
    case 2:
      printf("Kiem tra So nguyen to\n");
      break;
    case 3:
      printf("Kiem tra So chinh phuong\n");
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