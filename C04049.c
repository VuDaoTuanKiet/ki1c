//spiderman will save me and bug in my code
#include<stdio.h>
#include<string.h>

typedef long long ll;

int a[1005];

int gcd(int a,int b)
{
    if(b == 0) return a;
    return gcd(b, a%b);
}

int lcm(int a,int b)
{
    return a*(b/gcd(a,b));
}

void xuly()
{
    memset(a, 0, sizeof(a));
    int n;
    scanf("%d", &n);

    for(int i = 1;i<=n;i++)
    scanf("%d", &a[i]);

     printf("%d ", a[1]);

     for(int i = 2;i<=n;i++)
     {
        printf("%d ", lcm(a[i], a[i - 1]));
     }

     printf("%d", a[n]);

     printf("\n");
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