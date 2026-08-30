#include<stdio.h>


int main()
{
    long long t;
    scanf("%lld", &t);
    while(t--){
    long long n;
    scanf("%lld", &n);

    long long ans = 0;
    while(n>0)
    {
        ans += n%10;
        n/=10;
    }

    printf("%lld\n", ans);

    }
    return 0;

}