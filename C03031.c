//spiderman will save me and bug in my code
#include<stdio.h>


#define int long long

int gcd(int a,int b)
{
    if(b == 0)
    return a;
    return gcd(b, a%b);
}


signed main()
{

    int t;
    scanf("%lld", &t);
    while(t--)
    {
        int a,b,c,d;
        scanf("%lld %lld %lld %lld", &a, &b, &c,&d);   

        int luu1 = gcd(a,b);
        int luu2 = gcd(c,d);

        printf((luu1 == luu2)?"YES\n":"NO\n");
    }

return 0;
}