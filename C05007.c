//spiderman will save me and bug in my code
#include<stdio.h>
#include<stdlib.h>

int a[55][55];

typedef long long ll;

signed main()
{
   int n,m;
   scanf("%d %d", &n, &m);

   for(int i = 1;i<=n;i++)
    {
        for(int j = 1;j<=m;j++)
        scanf("%d", &a[i][j]);
    }

    int t,p;
    scanf("%d %d", &t, &p);

    for(int i = 1;i<=n;i++)
    {
        for(int j = 1;j<=m;j++){
        if(j == t)
        {
            printf("%d " , a[i][p]);
        }
        else if(j == p)
        {
            printf("%d ", a[i][t]); 
        }
        else
            printf("%d ", a[i][j]);


        }
        printf("\n");
        
    }

return 0;
}
