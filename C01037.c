#include<stdio.h>

int max(int a,int b)
{
    return (a > b)? a: b;
}
int min(int a,int b)
{
    return (a < b)? a: b;
}


int main()
{
    long long a,b;
    scanf("%lld %lld", &a, &b);
        if(a > b)
        {
        long long temp = a;
        a = b;
        b = temp;
        }
   long long luu = b - a + 1;
        long long ans = luu*(a + b)/2;

    printf("%lld", ans);
}