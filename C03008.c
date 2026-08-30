//spiderman will save me and bug in my code
#include<stdio.h>

int check(long long n)
{
    if(n <= 1) return 0;
    long long sum = 1;
    for(long long i = 2;i*i <= n;i++)
    {
        if(n%i == 0)
        {
            sum += i;
            if(i != n/i)
            {
                sum += (n/i);
            }

        }
    }

    return (n == sum);

}


int main()
{
    long long n;
    scanf("%lld", &n);

    for(long long i = 1;i<=n;i++)
    {
            if(check(i))
            {
                printf("%lld ", i);
            }
    }

return 0;
}