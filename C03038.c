//spiderman will save me and bug in my code
#include<stdio.h>


#define int long long

signed main()
{
   int t;
   scanf("%lld", &t);

   while(t--)
   {
    int a,b;
    scanf("%lld %lld", &a, &b);
        int dem = 0;
    while (a > 0)
    {
       dem += (a/b);
        a/= b;
    }
    
    printf("%lld\n", dem);
   }

return 0;
}