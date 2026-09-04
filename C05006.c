//spiderman will save me and bug in my code
#include<stdio.h>

typedef long long ll;
int a[1005][1005];

signed main()
{
    int n,m;
    scanf("%d %d", &n, &m);

    for(int i = 1;i<=n;i++)
    {
        for(int j = 1;j<=m;j++)
        {
             scanf("%d", &a[i][j]);
        }
    }
    int p,t;
    scanf("%d %d" , &p, &t);
    for(int i = 1;i<=n;i++)
    {
        if(i == p){
        for(int j = 1;j<=m;j++)
        {
                printf("%d ", a[t][j]);
        }
        }
        else if(i == t)
        {
             for(int j = 1;j<=m;j++)
        {
                printf("%d ", a[p][j]);
        }
        }
        else
             for(int j = 1;j<=m;j++)
        {
                printf("%d ", a[i][j]);
        }

        printf("\n");
    }

return 0;
}