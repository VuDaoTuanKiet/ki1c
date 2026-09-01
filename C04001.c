//spiderman will save me and bug in my code
#include<stdio.h>

typedef long long ll;


signed main()
{
   int t;
   scanf("%d", &t);
   while(t--)
    {
      //  int luu[1005] = {0};
       // int a[105];
        int n;
        scanf("%d",&n);
        int maxx = -1;

        for(int i = 1;i<=n;i++)
        {
            int x;

            scanf("%d", &x);
            
            if(x%2 == 0 )
            {
                printf("%d ", x);
            }
        

           // maxx = max(maxx,a[i]);
        }
        
        printf("\n");
    }

return 0;
}
