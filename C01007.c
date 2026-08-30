#include<stdio.h>

int main()
{
    long long a,b;
    scanf("%lld %lld", &a, &b);
    long long tong = a + b;
    long long hieu = a-b;
    long long tich = a*b;
    long long chia = a/b;
    long long mod = a%b;
    double idk = (double)a/b;

    printf("%lld\n%lld\n%lld\n%lld\n%lld\n%.2lf", tong ,hieu,tich , chia, mod, idk);

}