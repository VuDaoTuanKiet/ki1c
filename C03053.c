//spiderman will save me and bug in my code
#include<stdio.h>


typedef long long ll;

int check(ll n)
{
    if(n < 2)
    return 0;
    for(int i = 2;i*i<=n;i++)
    {
        if(n%i==0) return 0;

    }
    return 1;
}

signed main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        ll n;
        scanf("%lld", &n);
        for(ll i = 1;i<=n/2;i++)
        {
            ll luu = n - i;
            if(check(i) * (check(luu)) == 1)
            printf("%lld %lld ", i, luu);
        }

        printf("\n");
    }
return 0;
}