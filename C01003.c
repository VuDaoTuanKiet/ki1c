#include<stdio.h>

int main()
{
    long long t;
    scanf("%d", &t);
    while(t--){
    long long n;
    scanf("%lld", &n);
    long long ans = n*n;
    printf("%lld\n", ans);
    }
return 0;

}