//spiderman will save me and bug in my code
#include<stdio.h>

typedef long long ll;

int a[15][15];

signed main()
{
   int n,m;
   scanf("%d %d", &n, &m);
   for(int i =1;i<=n;i++)
   {
    for(int j = 1;j<=m;j++)
        scanf("%d", &a[i][j]);
   }

   for(int i = 1;i<=m;i++){
   for(int j = 1;j<=n;j++)
   {
        printf("%d ", a[i][j]);
   }
   printf("\n");
    }

return 0;
}