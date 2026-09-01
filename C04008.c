//spiderman will save me and bug in my code
#include<stdio.h>

typedef long long ll;


int a[105];
int b[105];


void xuly()
{
        ll n,m,p;
    scanf("%lld %lld %lld", &n, &m, &p);

    for(ll i = 0;i<n;i++)
    {
        scanf("%lld", &a[i]);
    }
    for(ll i = 0;i<m;i++)
        scanf("%lld", &b[i]);

   

  for (int i = 0;i<p;i++) 
        printf("%lld ", a[i]);
    for(int i = 0;i<m;i++)
           printf("%lld ", b[i]);
    for (int i = p ;i<n;i++) 
        printf("%lld ", a[i]);
    
    printf("\n");
  
}

signed main()
{
   int t;
   scanf("%d", &t);
   for(int i = 1;i<=t;i++)
   {
    printf("Test %d:\n", i);
    xuly();
   }

return 0;
}