#include <stdio.h>
#include <string.h>
void printMenu();
void chucNang01();

int main()
{
  printMenu();
  int luaChon;

  do
  {
    printf("Nhap lua chon chuc nang: ");
    scanf("%d", &luaChon);

    switch (luaChon)
    {
    case 0:
      printf("Tam biet\n");
      break;
    case 1:
      printf("Kiem tra so nguyen\n");
      chucNang01();
      break;
    case 2:
      printf("Tim uoc chung va boi chung cua 2 so\n");
      break;
    case 3:
      printf("Chuong trinh tinh tien quan Karaoke\n");
      break;
    case 4:
      printf("Tinh tien dien\n");
      break;
    case 5:
      printf("Doi tien\n");
      break;
    case 6:
      printf("Tinh lai xuat vay ngan hang/vay tra gop\n");
      break;
    case 7:
      printf("Vay tien mua xe\n");
      break;
    case 8:
      printf("Sap xep thong tin sinh vien\n");
      break;
    case 9:
      printf("Game POLY-LOTT\n");
      break;
    case 10:
      printf("Chuong trinh tinh toan phan so\n");
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
  printf("+------------------------------------------------------+\n");
  printf("|                  MENU CHUC NANG                      |\n");
  printf("+------------------------------------------------------+\n");
  printf("| 0. Thoat.                                            |\n");
  printf("|------------------------------------------------------|\n");
  printf("| 1. Kiem tra so nguyen.                               |\n");
  printf("|------------------------------------------------------|\n");
  printf("| 2. Tim uoc chung va boi chung cua 2 so.              |\n");
  printf("|------------------------------------------------------|\n");
  printf("| 3. Chuong trinh tinh tien quan Karaoke.              |\n");
  printf("|------------------------------------------------------|\n");
  printf("| 4. Tinh tien dien.                                   |\n");
  printf("|------------------------------------------------------|\n");
  printf("| 5. Chuc nang doi tien.                               |\n");
  printf("|------------------------------------------------------|\n");
  printf("| 6. Chuc nang tinh lai xuat vay ngan hang/vay tra gop.|\n");
  printf("|------------------------------------------------------|\n");
  printf("| 7. Vay tien mua xe.                                  |\n");
  printf("|------------------------------------------------------|\n");
  printf("| 8. Sap xep thong tin sinh vien.                      |\n");
  printf("|------------------------------------------------------|\n");
  printf("| 9. Game POLY-LOTT.                                   |\n");
  printf("|------------------------------------------------------|\n");
  printf("| 10. Chuong trinh tinh toan phan so.                  |\n");
  printf("+------------------------------------------------------+\n");
}

void chucNang01()
{
  float x;
  printf("Nhap x: ");
  scanf("%f", &x);
  int xConverted = (int)x;

  if (x != 0)
  {
    if (x > 0)
    {
      if (x == xConverted)
      {
        printf("%.2f la so nguyen\n", x);
        int demSNT = 0;
        int demSCP = 0;
        for (int i = 1; i <= x; i++)
        {
          // CHECK SNT
          if (xConverted % i == 0)
          {
            demSNT++;
          }
          if (i * i == xConverted)
          {
            demSCP++;
          }
        }
        if (demSNT == 2)
        {
          printf("%.2f la so nguyen to\n", x);
        }
        else
        {
          printf("%.2f khong phai so nguyen to\n", x);
        }

        if (demSCP > 0)
        {
          printf("%.2f la so chinh phuong\n", x);
        }
        else
        {
          printf("%.2f khong phai so chinh phuong\n", x);
        }
      }
      else
      {
        printf("%.2f khong phai so nguyen\n", x);
        printf("%.2f khong phai so nguyen to\n", x);
        printf("%.2f khong phai so chinh phuong\n", x);
      }
    }
    else
    {

      if (x == xConverted)
      {
        printf("%.2f la so nguyen\n", x);
      }
      else
      {
        printf("%.2f khong phai so nguyen\n", x);
      }
      printf("%.2f khong phai so nguyen to\n", x);
      printf("%.2f khong phai so chinh phuong\n", x);
    }
  }
  else
  {
    printf("%.2f la so nguyen\n", x);
    printf("%.2f khong so nguyen to\n", x);
    printf("%.2f la so chinh phuong\n", x);
  }
}

void chucNang02()
{
}