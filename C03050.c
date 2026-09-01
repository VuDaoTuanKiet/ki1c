//spiderman will save me and bug in my code
#include<stdio.h>

typedef long long ll;

ll luu[100005] = {0};

signed main()
{
    ll n;
    scanf("%lld", &n);

    for(ll i = 1;i<n;i++)
    {
        ll a,b;
        scanf("%lld %lld", &a, &b);
        luu[a]++;
        luu[b]++;
    }

    for(ll i =1;i<=n;i++)
    {
        if(luu[i] == n -1)
        {
            printf("Yes");
            return 0;
        }
    }

    printf("No");
return 0;


}