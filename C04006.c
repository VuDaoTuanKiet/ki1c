//spiderman will save me and bug in my code
#include<stdio.h>

typedef long long ll;
ll a[10005];

signed main()
{
   int n;
   scanf("%d", &n);

   for(int i = 1;i<=n;i++)
   {
    scanf("%lld", &a[i]);
   }
   for(int i = n;i>=1;i--)
   printf("%lld ", a[i]);
   

return 0;
}