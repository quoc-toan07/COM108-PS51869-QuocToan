#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>

void printMenu();
void demNguyenAmPhuAm();
void dangNhap();
void sapXepChuoi();

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
      break;
    case 4:
      printf("Doi so thap phan sang thap luc phan\n");
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
}