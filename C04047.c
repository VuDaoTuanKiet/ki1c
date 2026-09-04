//spiderman will save me and bug in my code
#include<stdio.h>
#include<stdlib.h>


typedef long long ll;

typedef struct
{
    int fi;
    int se;
} ii;

int cmp(const void *a, const void *b)
{
    ii A = *(const ii *)a;
    ii B =  *(const ii *)b;

    return (A.fi > B.fi) - (A.fi < B.fi);
}

ii a[105];



signed main()
{

    int n;
    scanf("%d", &n);
    for(int i = 1;i<=n;i++)
    {
        scanf("%d %d", &a[i].fi , &a[i].se);
    }

    qsort(a + 1, n, sizeof(ii), cmp);

    int luu = 0;
    for(int i =1;i<=n;i++)
    {
        //printf("%d %d\n", a[i].fi , a[i].se);
        if(luu < a[i].fi)
        {
            luu = a[i].fi;
        }

        luu += a[i].se;
    }

    printf("%d", luu);

return 0;
}
