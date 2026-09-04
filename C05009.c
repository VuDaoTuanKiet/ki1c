//spiderman will save me and bug in my code
#include<stdio.h>

typedef long long ll;

int a[55][55];
int b[55][55];


signed main()
{
    int n;
    scanf("%d", &n);

    for(int i = 1;i<=n;i++)
    {
        for(int j = 1;j<=n;j++)
        {
            scanf("%d", &a[i][j]);
            b[i][j] = a[i][j];
        }
    }

    int j = n;
    for(int i = 1;i<=n;i++)
    {
        b[i][i] = a[i][j--];
    }
         j = n;
    for(int i = 1;i<=n;i++)
        {
            b[i][j--] = a[i][i];
        }


        for(int i =1;i<=n;i++)
        {
            for(int j = 1;j<=n;j++)
            printf("%d ", b[i][j]);
            printf("\n");
        }
    return 0;
}