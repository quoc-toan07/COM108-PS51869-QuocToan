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
  /*
    SỐ NGUYÊN TỐ
    -Tiêu chí: >1 & %1==0 & %chính nó ==0
    Progress:
    1. n - nhập từ bàn phím
    2. if n <= 1 => in ra kh phải số nguyên tố
    3. else loop 1 -> n
    4. đếm mấy lần chia hết
    5. if đếm > 2 => in ra kh phải số nguyên tố
    6. else in là số nguyên tố
  */
  int x;
  int dem = 0;

  printf("Nhap vao x: ");
  scanf("%d", &x);
  if (x < 2)
  {
    printf(">%d khong phai la so nguyen to.\n", x);
  }
  else
  {
    for (int i = 1; i <= x; i++)
    {
      if (x % i == 0)
      {
        dem++;
      }
    }
    if (dem > 2)
    {
      printf(">%d khong phai la so nguyen to.\n", x);
    }
    else
    {
      printf(">%d la so nguyen to.\n", x);
    }
  }
}

void ktSoChinhPhuong()
{
  int x;
  int flag = 0; // false

  printf("Nhap x: ");
  scanf("%d", &x);

  if (x == 0)
  {
    printf("%d la so chinh phuong.\n", x);
  }
  else
  {
    for (int i = 1; i <= x; i++)
    {
      if (i * i == x)
      {
        printf("%d la so chinh phuong.\n", x);
        flag = 1; // true
        break;
      }
    }
    if (!flag) //
    {
      printf("%d khong phai so chinh phuong.\n", x);
    }
  }
}