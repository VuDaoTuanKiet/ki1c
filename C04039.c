//spiderman will save me and bug in my code
#include<stdio.h>
#include<math.h>


typedef long long ll;

signed main()
{
    ll a,b;
    while(scanf("%lld %lld", &a, &b) != -1)
    {
        ll d = llabs(b - a);
        ll luu = (ll)sqrt(d);
        if (d == 0)
        {
            printf("0\n");
            continue;
        }
        if(luu * luu == d)
            printf("%lld\n", 2 * luu - 1);
        else if(d <= luu*luu + luu)
            printf("%lld\n", 2 * luu);
        else
            printf("%lld\n", 2 * luu + 1);
            

    }

return 0;
}