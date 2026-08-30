#include<stdio.h>

signed main()
{
    long long a,b;
    
    scanf("%lld %lld", &a,&b);
    if(b!=0)
    {
    long long tong = a + b;
    long long hieu = a - b;
    long long tich = a * b;
    printf("%lld %lld %lld ", tong, hieu, tich);

    
        double thuong = (double)a /b;
        printf("%.2lf %lld", thuong, a%b);
    }
    else
    printf("0");

   return 0;
}