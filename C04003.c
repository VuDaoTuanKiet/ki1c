//spiderman will save me and bug in my code
#include<stdio.h>

typedef long long ll;

signed main()
{
    ll t;
    scanf("%lld", &t);
    while(t--)
    {
        ll a[105];
        ll n;
        scanf("%lld" , &n);
        for(int i = 1;i<=n;i++)
        {
            scanf("%lld", &a[i]);
        }
        int flag = 1;
        for(int i = 1;i<=n/2;i++)
        {
            if(a[i] != a[n - i + 1])
            {
                flag = 0;
                printf("NO\n");
                break;
            }
        }

        if(flag)
        printf("YES\n");
    }

return 0;
}