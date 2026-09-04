//spiderman will save me and bug in my code
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define N 5005

typedef long long ll;

ll a[N + 5];

int cmp(const void *a, const void *b)
{
    return (*(const ll *) a > *(const ll *) b) - (*(const ll *) a < *(const ll *) b);
}

void xuly()
{
    memset(a, 0, sizeof(a));
    int n;
    scanf("%d", &n);
    for(int i = 1;i<=n;i++)
    {
        scanf("%lld", &a[i]);
        a[i] *= a[i];
    }

    qsort(a + 1, n, sizeof(ll), cmp);

    for(int i = n;i>= 3;i--)
    {
        int l = 1;
        int r = i - 1;
        while(l < r)
        {
            ll sum = a[l] + a[r];
            if(sum == a[i])
            {
                printf("YES\n");
                return;
            }
            else if(sum < a[i])
                l++;
            else
            r--;
        }
    }

    printf("NO\n");

}

signed main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        xuly();
    }

return 0;
}