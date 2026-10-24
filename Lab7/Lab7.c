#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>

void printMenu();
void demNguyenAmPhuAm();
void dangNhap();
void sapXepChuoi();
void doiThapPhanSangThapLucPhan();

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
      printf("Dem nguyen am & phu am cua 1 chuoi\n");
      demNguyenAmPhuAm();
      break;
    case 2:
      printf("Dang nhap bang Username và Password\n");
      dangNhap();
      break;
    case 3:
      printf("Sap xep chuoi theo chu cai\n");
      sapXepChuoi();
      break;
    case 4:
      printf("Doi so thap phan sang thap luc phan\n");
      doiThapPhanSangThapLucPhan();
      break;
    case 5:
      printf("Thoat chuong trinh\n");
      break;
    default:
      printf("Vui long chon chuc hop le(1-5)\n");
    }
  } while (chon != 5);
  return 0;
}
void printMenu()
{
  printf("MENU CHUONG TRINH LAB 7\n");
  printf("1. Dem nguyen am va phu am cua chuoi\n");
  printf("2. Dang nhap bang Username va Password\n");
  printf("3. Sap xep chuoi theo chu cai\n");
  printf("4. Doi so thap phan sang thap luc phan\n");
  printf("5. Thoat chuong trinh\n");
}
void demNguyenAmPhuAm()
{
  char nguyenAm[] = "aeiou";
  char str[100];
  char strCopy[100];

  printf("Nhap vao 1 chuoi: ");
  fgets(str, sizeof(str), stdin);
  str[strcspn(str, "\n")] = '\0';

  strcpy(strCopy, str);
  strlwr(strCopy);

  int demNgyenAm = 0;
  int demPhuAm = 0;

  int dodaiStr = strlen(strCopy);
  for (int i = 0; i < dodaiStr; i++)
  {

    if (isalpha(strCopy[i]))
    {
      if (strchr(nguyenAm, strCopy[i]) != NULL)
      {
        demNgyenAm++;
      }
      else
      {
        demPhuAm++;
      }
    }
  }
  printf("Chuoi %s co chua: %d nguyen am va %d phu am.\n", str, demNgyenAm, demPhuAm);
}
void dangNhap()
{
  const char username[] = "admin";
  const char password[] = "12345";
  int dodai = 6;

  char usernameInput[dodai];
  char passwordInput[dodai];

  printf("Nhap username(5 ky tu): ");
  scanf("%s", usernameInput);
  while (getchar() != '\n')
    ;

  printf("Nhap password(5 ky tu): ");
  int i;
  for (i = 0; i < dodai - 1; i++)
  {
    passwordInput[i] = getch();
    printf("*");
  }
  passwordInput[i] = '\0';
  printf("\n");

  int cmpUser = strcmp(username, usernameInput);
  int cmpPwd = strcmp(password, passwordInput);

  if (cmpUser == 0 && cmpPwd == 0)
  {
    printf("Dang nhap thanh cong!\n");
  }
  else
  {
    printf("Dang nhap that bai!\n");
  }
}
void sapXepChuoi()
{
  int n = 5;
  int m = 20;
  char str[n][m];
  printf("Nhap vao chuoi:");
  for (int i = 0; i < n; i++)
  {
    fgets(str[i], sizeof(str[i]), stdin);
    str[i][strcspn(str[i], "\n")] = '\0';
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (strcmp(str[i], str[j]) > 0)
      {
        char tam[m];
        strcpy(tam, str[i]);
        strcpy(str[i], str[j]);
        strcpy(str[j], tam);
      }
    }
  }
  printf("\nCac chuoi sau khi sap xep:\n");
  for (int i = 0; i < n; i++)
  {
    printf("%s\n", str[i]);
  }
}
void doiThapPhanSangThapLucPhan()
{
  const char bangTra[] = "0123456789ABCDEF";
  char hexa[20];
  long long so;
  int vt = 0;

  printf("Nhap vao so nguyen khong am: ");
  scanf("%lld", &so);
  while (getchar() != '\n')
    ;

  if (so < 0)
  {
    printf("So nhap vao khong hop le!\n");
    return;
  }

  long long goc = so;
  if (so == 0)
  {
    hexa[vt++] = '0';
  }
  while (so > 0)
  {
    hexa[vt++] = bangTra[so % 16];
    so = so / 16;
  }
  hexa[vt] = '\0';

  int dai = strlen(hexa);
  for (int i = 0; i < dai / 2; i++)
  {
    char tam = hexa[i];
    hexa[i] = hexa[dai - 1 - i];
    hexa[dai - 1 - i] = tam;
  }
  printf("So thap luc phan cua %lld la: %s\n", goc, hexa);
}