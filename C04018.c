//spiderman will save me and bug in my code
#include<stdio.h>

typedef long long ll;

signed main()
{
   int t;
   scanf("%d", &t);
   while(t--)
   {
        int n;
        scanf("%d", &n);
        int luu;
        int x;
        scanf("%d", &x);
        luu = x;
        int dem = 0;
        for(int i =2;i<=n;i++)
        {
            scanf("%d", &x);
            if(luu == x)
            dem++;
            luu = x;
        }

        printf("%d\n", dem);
   }

return 0;
}