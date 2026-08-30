#include<stdio.h>

int min(int a, int b)
{
    return (a < b)?a:b;
}

int main()
{
    long long a,b,c;
    scanf("%lld %lld %lld", &a, &b, &c);
        long long ans =  min(a, min(b,c));
    printf("%lld",ans);


}