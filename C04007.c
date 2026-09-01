//spiderman will save me and bug in my code
#include<stdio.h>

typedef long long ll;

int a[105];
int b[105];

signed main()
{
    ll n,m;
    scanf("%lld %lld", &n, &m);

    ll p;
    for(ll i = 0;i<n;i++)
    {
        scanf("%lld", &a[i]);
    }
    for(ll i = 0;i<m;i++)
        scanf("%lld", &b[i]);

    scanf("%lld", &p);

  for (int i = 0;i<p;i++) 
        printf("%lld ", a[i]);
    for(int i = 0;i<m;i++)
           printf("%lld ", b[i]);
    for (int i = p;i<n;i++) 
        printf("%lld ", a[i]);
    
    return 0;

}