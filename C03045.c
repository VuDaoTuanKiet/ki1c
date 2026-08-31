//spiderman will save me and bug in my code
#include<stdio.h>


typedef long long ll;

ll xuly(ll n)
{
    ll maxx = -1;

    for(ll i = 2;i*i<=n;i++)
    {
        while(n%i==0)
        {
            maxx = i;
            n/=i;
        }

    }
    if(n > 1)
    maxx = n;
    return maxx;
}

signed main()
{
    ll t;
    scanf("%lld",&t);
    while(t--)
    {
        ll n;
        scanf("%lld", &n);

        printf("%lld\n", xuly(n));
    }

return 0;
}