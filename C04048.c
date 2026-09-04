//spiderman will save me and bug in my code
#include<stdio.h>
#include<stdlib.h>


int a[10005];
typedef long long ll;

int cmp(const void *a, const void *b)
{
    return (*(const int *)a > *(const int *)b) - (*(const int *)a < *(const int *)b);
}

signed main()
{
 
    int n;
    scanf("%d", &n);
    int m,k;
    scanf("%d %d", &m, &k);
    for(int i = 1;i<=m;i++)
    {
            scanf("%d", &a[i]);
    }

    qsort(a + 1, m, sizeof(int), cmp);

    int luu = 0;
    int ans = 0;
    for(int i =1;i<=m;i++)
    {
        int l  = a[i]-k;
        int r = a[i] + k;

            while(luu < l -1)
            {
                ans++;
                luu += (2 * k + 1);
            }
            if(luu < r)
            {
                luu = r;
            }

    }
    while(luu < n)
    {
        ans++;
        luu += (2 * k + 1);
    }

    printf("%d", ans);
return 0;
}   