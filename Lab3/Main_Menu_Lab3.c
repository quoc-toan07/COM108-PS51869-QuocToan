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

void ptBacHai()
{
  int a, b, c, x1, x2, Delta;
  printf("Nhap vao a, b, c: ");
  scanf("%f%f%f", a, b, c);

  if (a == 0)
  {
    if (b == 0)
    {
      if (c == 0)
      {
        printf("Phuong trinh vo so nghiem\n");
      }
      else
      {
        printf("Phuong trinh vo nghiem\n");
      }
    }
    else
    {
      x1 = -c / b;
      printf("Phuong trinh co nghiem duy nhat: x = %2.f\n", x1);
    }
  }
  else
  {
    Delta = b * b - 4 * a * c;
    if (Delta < 0)
    {
      printf("Phuong trinh vo so nghiem\n");
    }
    else if (Delta == 0)
    {
      printf("Phuong trinh co nghiem kep: x1 = x2 = %.2f\n", Delta);
    }
    else
    {
      x1 = (-b + sqrt(Delta)) / (2 * a);
      x2 = (-b - sqrt(Delta)) / (2 * a);
      printf("Phuong trinh co 2 nghiem phan biet: x1 =  %.2f, x2 = %.2f\n", x1, x2);
    }
  }
}

void tinhTienDien()
{
  /*
    1. Khai báo cố điện giá tiền ứng theo từng bậc
    2. Số Kwh kh có lẻ
    3. float * int -> tự ép kiểu về float
  */

  const int MAX50_UNIT = 50;
  const int MAX100_UNIT = 100;

  float tongKwh;
  float tongTienDien = 0;
  float phanDu = 0;

  // Đề chưa rõ: Nếu input âm thì cách xử lý?
  printf("Nhap tong so kwh: ");
  scanf("%f", &tongKwh);

  // Dùng do while tối ưu hơn.
  while (tongKwh < 0)
  {
    printf("So nhap vao khong hop le - nhap lai:");
    scanf("%f", &tongKwh);
  }
  // 80
  if (tongKwh >= 0 || tongKwh < 50)
  {
    if (tongKwh <= MAX50_UNIT)
    {
      tongTienDien = tongKwh * 1.678;
    }
    else
    {
      phanDu = tongKwh - (float)MAX50_UNIT;
      tongKwh -= phanDu;
      tongTienDien = tongKwh * 1.678;
    }
  }
  else if (tongKwh >= 50 || tongKwh <= 100)
  {
    phanDu -= (float)MAX50_UNIT;
    if (phanDu <= MAX50_UNIT)
    {
      tongTienDien = phanDu * 1.734;
    }
    else
    {
    }
  }
  printf("tongKwh: %f\n", tongKwh);
  printf("phanDu: %f\n", phanDu);
  printf("tongTienDien: %f\n", tongTienDien);
}