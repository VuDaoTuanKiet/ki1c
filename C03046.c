//spiderman will save me and bug in my code
#include<stdio.h>
#include<math.h>


typedef long long ll;

int checkt(ll n)
{
    ll sum = 0;
    while(n>0)
    {
        sum += n%10;
        n/= 10;
    }
    if(sum%10 == 0)
    return 1;
    return 0;
}

int checkr(ll n)
{
    ll luun = n;

    ll luu = 0;
    while(n > 0)
    {
        int d = n%10;
        if(d == 4)
        return 0;
        luu = luu* 10 + d;
        n/= 10;
    }
    return (luun == luu);
}


signed main()
{
   ll t;
   scanf("%lld", &t);
   while(t--)
   {
    ll n;
    scanf("%lld", &n);
    ll start= pow(10, n - 1);
    ll end = pow(10, n);
    for(ll i = start;i<=end;i++)
    {
        if(checkr(i) * checkt(i) == 1)
        printf("%lld ", i);
    }
    printf("\n");
   }

return 0;
}