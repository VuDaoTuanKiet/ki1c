#include<stdio.h>
#include<string.h>

int main()
{
    long long n;
    scanf("%lld", &n);

    long long ans = 0;
    while(n>0)
    {
        ans += n%10;
        n/=10;
    }

    printf("%lld", ans);


}