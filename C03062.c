//spiderman will save me and bug in my code
#include<stdio.h>

typedef long long ll;

ll gcd(ll a, ll b)
{
    if(b == 0) return a;
    return gcd(b, a%b);
}

ll bcnn(ll a, ll b)
{
    return a*(b/gcd(a,b));
}

signed main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        ll n,m;
        scanf("%lld %lld", &n, &m);

        ll ans = 1;
        for(int i = n;i<=m;i++)
        ans = bcnn(ans , i);

        printf("%lld\n", ans);
    }
    

return 0;
}