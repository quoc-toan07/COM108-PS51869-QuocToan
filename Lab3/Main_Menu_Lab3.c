#include <stdio.h>
#include <math.h>

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
      printf("Tinh hoc luc sinh vien\n");
      tinhHocLuc();
      break;
    case 2:
      printf("Giai phuong trinh bac hai\n");
      ptBacHai();
      break;
    case 3:
      printf("Tinh tien dien tieu thu\n");
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
  do
  {
    printf("Nhap diem trung binh: ");
    scanf("%f", &dtb);
  } while (dtb < 0 || dtb > 10);

  if (dtb >= 9.0)
  {
    printf("Hoc luc: Xuat sac\n");
  }
  else if (dtb >= 8.0)
  {
    printf("Hoc luc: Gioi\n");
  }
  else if (dtb >= 6.5)
  {
    printf("Hoc luc: Kha\n");
  }
  else if (dtb >= 5.0)
  {
    printf("Hoc luc: Trung binh\n");
  }
  else if (dtb >= 3.5)
  {
    printf("Hoc luc: Yeu\n");
  }
  else
  {
    printf("Hoc luc: Yeu\n");
  }
}

void giaiPTBacHai()
{
  printf("Giai phuong trinh bac hai\n");
  int a, b, c;
  float x1, x2 = 0;

  printf("Nhap vao a,b,c: ");
  scanf("%d%d%d", &a, &b, &c);

  if (a == 0)
  {
    if (b == 0)
    {
      if (c == 0)
      {
        printf("Phuong trinh vo so nghiem.\n");
      }
      else
      {
        printf("Phuong trinh vo nghiem.\n");
      }
    }
    else
    {
      x1 = (float)-c / b;
      printf("Phuong trinh co nghiem duy nhat: x =  %.0f\n", x1);
    }
  }
  else
  {
    int delta = b * b - 4 * a * c;
    if (delta < 0)
    {
      printf("Phuong trinh vo so nghiem.\n");
    }
    else if (delta == 0)
    {
      x1 = (float)-b / (2 * a);
      printf("Phuong trinh co nghiem kep: x = %.0f\n", x1);
    }
    else
    {
      x1 = (float)(-b + sqrt(delta)) / (2 * a);
      x2 = (float)(-b - sqrt(delta)) / (2 * a);
      printf("Phuong trinh co 2 nghiem phan biet: x1 = %.0f, x2 = %.0f\n", x1, x2);
    }
  }
}

void tinhTienDien()
{
  const float BAC1 = 1.678;
  const float BAC2 = 1.734;
  const float BAC3 = 2.014;
  const float BAC4 = 2.536;
  const float BAC5 = 2.834;
  const float BAC6 = 2.927;

  int tongKwh;
  float tongTien = 0;
  do
  {
    printf("Nhap vao tong kwh: ");
    scanf("%d", &tongKwh);
  } while (tongKwh < 0);
  if (tongKwh <= 50)
  {
    tongTien = tongKwh * BAC1;
  }
  else if (tongKwh <= 100)
  {
    tongTien = 50 * BAC1 + (tongKwh - 50) * BAC2;
  }
  else if (tongKwh <= 200)
  {
    tongTien = 50 * BAC1 + 50 * BAC2 + (tongKwh - 100) * BAC3;
  }
  else if (tongKwh <= 300)
  {
    tongTien = 50 * BAC1 + 50 * BAC2 + 100 * BAC3 + (tongKwh - 200) * BAC4;
  }
  else if (tongKwh <= 400)
  {
    tongTien = 50 * BAC1 + 50 * BAC2 + 100 * BAC3 + 100 * BAC4 + (tongKwh - 300) * BAC5;
  }
  else
  {
    tongTien = 50 * BAC1 + 50 * BAC2 + 100 * BAC3 + 100 * BAC4 + 100 * BAC5 + (tongKwh - 400) * BAC6;
  }

  printf("Tong tien dien cho %dkwh la: %.2f dong\n", tongKwh, tongTien);
}