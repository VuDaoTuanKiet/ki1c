//spiderman will save me and bug in my code
#include<stdio.h>
#define int long long

int gcd(int a,int b)
{
    if(b == 0)
    return a;
    
    return gcd(b, a%b);
}

int bcnn(int a,int b)
{
    return a * (b/gcd(a,b));
}

signed main()
{
    int a,b;
    scanf("%lld %lld", &a, &b);

    printf("%lld\n%lld ", gcd(a,b) ,bcnn(a,b));

return 0;
}