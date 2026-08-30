#include<stdio.h>
#include<math.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long n;
        scanf("%lld",&n);
        long long k = sqrt(n);
        if(k*k == n)
        {
            printf("YES\n");
        }
        else
        printf("NO\n");
    }
}