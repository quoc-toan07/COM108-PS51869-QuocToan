#include <stdio.h>
void printMenu();
void ktSoNguyen();

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
      printf("BAN CHON CHUC NANG: Kiem tra so nguyen\n");
      break;
    case 2:
      printf("BAN CHON CHUC NANG: Tim uoc chung va boi chung cua 2 so\n");
      break;
    case 3:
      printf("BAN CHON CHUC NANG: Chuong trinh tinh tien quan Karaoke\n");
      break;
    case 4:
      printf("BAN CHON CHUC NANG: Tinh tien dien\n");
      break;
    case 5:
      printf("BAN CHON CHUC NANG: Doi tien\n");
      break;
    case 6:
      printf("BAN CHON CHUC NANG: Tinh lai xuat vay ngan hang/vay tra gop\n");
      break;
    case 7:
      printf("BAN CHON CHUC NANG: Vay tien mua xe\n");
      break;
    case 8:
      printf("BAN CHON CHUC NANG: Sap xep thong tin sinh vien\n");
      break;
    case 9:
      printf("BAN CHON CHUC NANG: Game POLY-LOTT\n");
      break;
    case 10:
      printf("BAN CHON CHUC NANG: Chuong trinh tinh toan phan so\n");
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
  printf("MENU CHUC NANG\n");
  printf("0. Thoat.\n");
  printf("1. Kiem tra so nguyen.\n");
  printf("2. Tim uoc chung va boi chung cua 2 so.\n");
  printf("3. Chuong trinh tinh tien quan Karaoke.\n");
  printf("4. Tinh tien dien.\n");
  printf("5. Chuc nang doi tien.\n");
  printf("6. Chuc nang tinh lai xuat vay ngan hang/vay tra gop.\n");
  printf("7. Vay tien mua xe.\n");
  printf("8. Sap xep thong tin sinh vien.\n");
  printf("9. Game POLY-LOTT.\n");
  printf("10. Chuong trinh tinh toan phan so.\n");
}