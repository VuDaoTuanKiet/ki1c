//spiderman will save me and bug in my code
#include <stdio.h>

int main()
{
    long long n;
    scanf("%lld",&n);
    for (int i = 1;i <= n;i++)
    {
        for (int j = 1;j <= n;j++)
            printf("*");


        printf("\n");
    }
    return 0;
}