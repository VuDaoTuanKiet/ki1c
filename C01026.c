#include<stdio.h>

int ktra(int n)
{
    if(n < 2) return 0;
    for(int i = 2;i*i<=n;i++)
        if(n%i==0)
        return 0;
    return 1;
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
            long long n;
            scanf("%lld", &n);
            printf((ktra(n) == 1)?"YES\n":"NO\n");
    }
}