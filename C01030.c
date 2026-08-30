#include<stdio.h>


void pt(long long n)
{
    for(long long i = 2;i*i<=n;i++)
    {
        while(n%i == 0)
        {
            printf("%lld ", i);
            n/=i;
        }
    }
    if(n > 1)
    printf("%lld", n);

}

int main()
{
        long long t;
        scanf("%lld",&t);

        while(t--)
        {
            long long n;
            scanf("%lld" , &n);
            
            pt(n);
            printf("\n");
        }
}