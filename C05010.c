//spiderman will save me and bug in my code
#include<stdio.h>

typedef long long ll;

int a[55][55];

int check(int n)
{
    if(n < 2)
    return 0;

    for(int i = 2;i*i <= n ;i++)
    {
        if(n%i == 0)
        return 0;
    }

    return 1;
}

signed main()
{
    int n;
    scanf("%d",&n);

    for(int i = 1;i<=n;i++)
    {
        for(int j = 1;j<=n;j++)
        scanf("%d", &a[i][j]);
    }
    int sum = 0;

    for(int i = 1;i<=n;i++)
    {
        for(int j = i;j <= n;j++)
        {
            if(check(a[i][j]))
            sum += a[i][j];
        }
    }
    printf("%d" , sum);
return 0;
}