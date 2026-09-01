//spiderman will save me and bug in my code
#include<stdio.h>

typedef long long ll;

int check(int n)
{
    if(n < 2) return 0;
    for(int i = 2;i*i<=n;i++)
    {
        if(n%i==0)
        return 0;
    }

    return 1;

}

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
      
        for(int i = 1;i<=n;i++)
        {
            int x;

            scanf("%d", &x);
            
            if(check(x) )
            {
                printf("%d ", x);
            }
        

           // maxx = max(maxx,a[i]);
        }
        
        printf("\n");
    }

return 0;
}