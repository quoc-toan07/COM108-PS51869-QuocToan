#include <stdio.h>
void menu();
int main()
{
  menu();
  return 0;
}

void menu()
{
  printf("MENU CHUC NANG\n");
  printf("-------------------------------\n");

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

  printf("-------------------------------\n");

  int chucNang;
  printf("Nhap vao chuc nang ban muon thuc hien:");
  scanf("%d", &chucNang);

  switch (chucNang)
  {
  case 1:
  {
    printf("%d", chucNang);
    break;
  }
  case 2:
  {
    printf("%d", chucNang);
    break;
  }
  case 3:
  {
    printf("%d", chucNang);
    break;
  }
  case 4:
  {
    printf("%d", chucNang);
    break;
  }
  case 5:
  {
    printf("%d", chucNang);
    break;
  }
  case 6:
  {
    printf("%d", chucNang);
    break;
  }
  case 7:
  {
    printf("%d", chucNang);
    break;
  }
  case 8:
  {
    printf("%d", chucNang);
    break;
  }
  case 9:
  {
    printf("%d", chucNang);
    break;
  }
  case 10:
  {
    printf("%d", chucNang);
    break;
  }
  default:
  {
    printf("Chuc nang %d khong hop le", chucNang);
    break;
  }
  }
}
