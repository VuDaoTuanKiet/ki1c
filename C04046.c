//spiderman will save me and bug in my code
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define N 100000


typedef long long ll;
ll a[N + 5];


int cmp(const void *a, const void *b)
{
    return (*(const ll *)a > *(const ll *)b) - (*(const ll *)a < *(const ll *)b);
}

void xuly()
{
    memset(a, 0, sizeof(a));
    int n;
    scanf("%d", &n);

    for(int i = 1;i<=n;i++)
    {
        scanf("%lld" , &a[i]);
    }

    qsort(a + 1, n , sizeof(ll), cmp);
    
    
    ll minn = 1e9;
    int dem = 1;
    for(int i = 2;i<=n;i++)
    {
        ll luu = a[i] - a[i - 1];
        if(luu < minn)
        {
            minn = luu;
            dem = 1;
        }
        else if(luu == minn)
        {
            dem++;
        }
        
    }

    printf("%lld %d\n", minn, dem);
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