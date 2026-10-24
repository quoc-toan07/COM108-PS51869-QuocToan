#include <stdio.h>
void clear_buffer()
{
  char c;
  while ((c = getchar()) != '\n' && c != EOF)
  {
  }
}

int main()
{
  const int n = 3;
  struct SinhVien
  {
    char mssv[10];
    char tenSV[10];
    float diem;
  } sv1;

  struct SinhVien ds[n];

  for (int i = 0; i < n; i++)
  {
    clear_buffer();
    printf("Nhap MSSV: ");
    gets(ds[i].mssv);
    printf("Nhap ten SV: ");
    gets(ds[i].tenSV);
    printf("Nhap diem: ");
    scanf("%f", &sv1.diem);
  }

  for (int i = 0; i < n; i++)
  {
    printf("MSSV: %s, Ten SV: %s, Diem: %.2f", ds[i].tenSV, ds[i].mssv, ds[i].diem);
  }

  return 0;
}