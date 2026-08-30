//spiderman will save me and bug in my code
#include<stdio.h>

int max(int a, int b)
{
    return (a > b)?a:b;
}
int min(int a, int b)
{
    return (a < b)?a:b;
}

int main()
{
    long long a,b;
    scanf("%lld %lld", &a, &b);
    int maxx = max(a,b);
    char maxc = 'a' + maxx - 1;

    for(int i = 0;i<a;i++)
    {
        for(int j = 0;j<b;j++)
        {
            printf("%c", maxc - min(i,j));

        }
        printf("\n");
    }

return 0;
}