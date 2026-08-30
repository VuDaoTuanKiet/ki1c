#include<stdio.h>

int main()
{
   long long n;
    scanf("%lld", &n);
    double f = (n*9/(5.0)) + 32;
    printf("%.2lf", f);
}