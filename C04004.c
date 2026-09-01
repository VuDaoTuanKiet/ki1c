//spiderman will save me and bug in my code
#include<stdio.h>

#define N 1000005
typedef long long ll;


ll f[N];


void fibo()
{
     f[1] = 1;
    f[2] = 1;
    for (int i = 3; i <= 92; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }
}

signed main()
{
    fibo();
    int t;
    scanf("%d", &t);
    
    while(t--)
    {
            ll n;
            scanf("%lld", &n);
            printf("%lld\n", f[n]);
    }

return 0;
}