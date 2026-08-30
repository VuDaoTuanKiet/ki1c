//spiderman will save me and bug in my code
#include<stdio.h>
#define int long long

int gcd(int a,int b)
{
    if(b == 0) return a;

    return gcd(b, a%b);
}

int main()
{
    int a,b;
    scanf("%lld %lld", &a, &b);

    for(int i = a;i<b;i++)
    {
        for(int j = i + 1;j<=b;j++)
        {
                if(gcd(i,j) == 1)
                printf("(%d,%d)\n", i, j);
        }
    }

return 0;
}