//spiderman will save me and bug in my code
#include<stdio.h>


#define int long long

int check(int n)
{
    if(n == 1 || n == 0)
    return 0;

    int luun = n;
    int sum = 0;
    while(n > 0)
    {
        int luu = n%10;
        if(luu == 9)
        return 0;
        sum = sum * 10 + luu;
        n/= 10;
    }
    return (luun == sum);
}

signed main()
{
    int n;
    scanf("%lld", &n);
    int dem = 0;

    for(int i = 2;i<n;i++)
    {
        if(check(i))
        {
            dem++;
            printf("%lld ", i);
        }
    }

    printf("\n%lld", dem);
return 0;
}
