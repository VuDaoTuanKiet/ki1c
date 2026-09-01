//spiderman will save me and bug in my code
#include<stdio.h>

typedef long long ll;

signed main()
{
   int t;
   scanf("%d", &t);
   while(t--)
   {
        int a[100];
        int n;
        scanf("%d", &n);
        for(int i = 1;i<=n;i++)
        {
            scanf("%d", &a[i]);
        }
        int dem =0;
        int maxx = -1;
        for(int i = 1;i<=n;i++)
        {
            if(a[i] >= maxx)
            {
            dem++;
            maxx = a[i];
        }
        } 
        printf("%d\n", dem);
   }
return 0;
}