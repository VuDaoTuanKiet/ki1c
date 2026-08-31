//spiderman will save me and bug in my code
#include<stdio.h>


#define int long long


int checkcs(int n)
{
    int sum = 0;

    while(n > 0)
    {
        sum += n%10;
        n/= 10;
    }

    return sum;
}

int checkp(int n)
{
    int sum = 0;
    for(int i = 2;i*i<=n;i++)
    {
        while(n%i == 0)
        {
            sum += checkcs(i);
            n/=i;
        }
    }

    if(n > 1)
    sum += checkcs(n);

    return sum;
}


signed main()
{
    int n;
    scanf("%lld", &n);

    if(checkcs(n) == checkp(n))
    {
        printf("YES");
    }
    else
    printf("NO");

return 0;
}