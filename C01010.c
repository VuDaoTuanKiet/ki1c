#include<stdio.h>

int main()
{
  int n;
    scanf("%d", &n);
    int nam = n/365;
    int luu = n%365;

    int tuan = luu/7;
    int ngay = luu%7;

    printf("%d %d %d", nam, tuan , ngay);
}
