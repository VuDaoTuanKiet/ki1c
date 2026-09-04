//spiderman will save me and bug in my code
#include<stdio.h>

typedef long long ll;

int a[1005] = {0};
int b[1005] = {0};


signed main()
{
    int n,m;

    scanf("%d %d", &n,&m);

    for(int i = 1;i<=n;i++)
    {
        int x;
        scanf("%d", &x);
        a[x]++;
    }
    for(int i = 1;i<=m;i++)
    {
        int x;
        scanf("%d", &x);
        b[x]++;
    }

    for(int i = 1;i<=1000;i++)
    {
        if(a[i] > 0 && b[i] > 0)
        printf("%d ", i);
    }
    printf("\n");
   for(int i = 1;i<=1000;i++)
    {
        if(a[i] > 0 && b[i] == 0)
        printf("%d ", i);
    }
    printf("\n");
for(int i = 1;i<=1000;i++)
    {
        if(a[i] == 0 && b[i] > 0)
        printf("%d ", i);
    }
    printf("\n");


    return 0;
}