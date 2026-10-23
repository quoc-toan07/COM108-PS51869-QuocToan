#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>

void demNguyenAmPhuAm();
void dangNhap();

int main()
{
  // demNguyenAmPhuAm();
  // dangNhap();

  return 0;
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
  printf("Chuoi %s co chua: %d nguyen am va %d phu am.", str, demNgyenAm, demPhuAm);
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
