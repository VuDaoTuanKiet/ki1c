//spiderman will save me and bug in my code
#include<stdio.h>

typedef long long ll;

ll max(ll a, ll b)
{
    return (a > b)?a:b;
}

void xuly()
{
    
    int n;
    scanf("%d", &n);

    ll luu = 0;
    ll maxx = -1e9;
    for(int i =1;i<=n;i++)
    {
        ll x;
        scanf("%lld", &x);

        if(i == 1)
        {
            luu = x;
            maxx = x;
        }
        else
        {
            luu = max(x,luu +  x);
                maxx = max(maxx,luu);
        }
    }   

    printf("%lld\n", maxx);
}

signed main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        xuly();
    }
    
return 0;
}