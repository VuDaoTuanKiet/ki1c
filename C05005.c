//spiderman will save me and bug in my code
#include<stdio.h>

typedef long long ll;

void xuly()
{
    int a[15][15];
    int n,m;
    scanf("%d %d", &n, &m);

    for(int i = 1;i<=n;i++)
    {
        for(int j = 1;j<=m;j++)
        scanf("%d", &a[i][j]);
    }

    for(int i = 2;i<=n;i++)
    {
        for(int j = 2;j<=m;j++)
        printf("%d ", a[i][j]);
        printf("\n");
    }

  //  printf("\n");
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
