#include<stdio.h>

int main()
{
    long long n;
    scanf("%lld", &n);
    long long sum = 0;
    for(int i = 1;i<n;i++)
    {
        if(n%i==0)
        sum+=i;
    }

    printf("%d", (sum == n));
}