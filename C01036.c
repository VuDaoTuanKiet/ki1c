#include<stdio.h>

int main()
{
    long long n;
    scanf("%lld", &n);
    int luu = 1;
    if(n == 0)
    {
        printf("0");
        return 0;
    }
    while(n > 0)
    {
        luu *= n%10;
        n/=10;
    }   

    printf("%lld", luu);

}