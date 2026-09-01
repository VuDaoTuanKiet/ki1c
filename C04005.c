//spiderman will save me and bug in my code
#include<stdio.h>

typedef long long ll;

ll max(ll a, ll b)
{
    return (a> b)?a:b;
}

signed main()
{
    int t;
    scanf("%d",&t);


    while(t--)
    {
        ll a[105];
        int n;
        scanf("%d", &n);
        int maxx = -1;
        for(int i = 0;i<n;i++)
        {
            scanf("%lld", &a[i]);
            maxx= max(maxx,a[i]);
        }     
        printf("%lld\n", maxx);

        for(int i = 0;i<n;i++)
        {
            if(a[i] == maxx)
            printf("%d ", i);
        }
        printf("\n");

    }
return 0;
}