//spiderman will save me and bug in my code
#include<stdio.h>

typedef long long ll;

signed main()
{
    int luu[100005];
int a[105];
    int n;
    scanf("%d", &n);
    for(int i = 1;i<=n;i++)
    {
        scanf("%d", &a[i]);

        luu[a[i]]++;
    }

        int flag = 1;
    for(int i = 1;i<=n;i++)
    {
        if(luu[a[i]] > 1)
        {
            flag = 0;
            printf("%d ", a[i]);
            luu[a[i]] = 0;
        }
    }
    if(flag)
    printf("0");

return 0;
}