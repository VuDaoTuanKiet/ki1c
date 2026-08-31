//spiderman will save me and bug in my code
#include<stdio.h>

typedef long long ll;

int check(ll n)
{
    int deml = 0, demc = 0;
    while(n > 0)
    {
        int luu = n%10;
        if(luu%2)
        deml++;
        else
        demc++;
        n/=10;
    }
    return demc > deml;
}

signed main()
{
   ll t;
   scanf("%lld" ,&t);
   while(t--)
   {
    ll n;
    scanf("%lld", &n);

    printf((check(n))?"YES\n":"NO\n");
   }

return 0;
}