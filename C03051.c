//spiderman will save me and bug in my code
#include<stdio.h>
#include<math.h>

#define N 1000000

typedef long long ll;

int b[N + 5];

int check(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

signed main()
{

   ll t;
   scanf("%lld", &t);
    while(t--)
    {
        ll l,r;
        scanf("%lld %lld", &l, &r);
            ll dem = 0;
            ll start = ceil(sqrt(l));
        ll end = floor(sqrt(r));
        for(ll i = start;i <= end;i++)
        {
           
            if(check(i))
            dem++;
        }
        printf("%lld\n", dem);
    }
   return 0;
}
