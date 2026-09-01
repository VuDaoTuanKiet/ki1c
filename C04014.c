//spiderman will save me and bug in my code
#include<stdio.h>

typedef long long ll;

int a[1005];
int luu[100005];
int b[1005];
signed main()
{
    int n;
    scanf("%d", &n);

    for(int i = 1;i<=n;i++)
    {
        scanf("%d", &a[i]);
        luu[a[i]]++;
    }

    int j = 1;
    for(int i =1;i<=n;i++)
    {
        if(luu[a[i]])
        {
        printf("%d %d\n", a[i], luu[a[i]]);
            luu[a[i]] = 0;
    }
    }


   
return 0;
}