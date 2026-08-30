//spiderman will save me and bug in my code
#include<stdio.h>
#define int long long


int checkr(int n)
{
    int luun = n;
    int sum = 0;
    while(n> 0)
    {
        int luu = n%10;
        sum = sum * 10 + luu;
        n/= 10;
    }

    return (sum == luun);
}

int check(int n)
{
    int sum = 0;
    int flag = 0;
  //  int luun = n;
    while(n > 0)
    {
        int luu = n%10;
        if(luu == 6)
        flag = 1;
        sum += luu;
        n/= 10;
    }

    int d = sum%10;
    if(d == 8 && flag == 1)
    return 1;

    return 0;

}

signed main()
{
    int a,b;
    scanf("%lld %lld", &a, &b);

    if(a > b)
    {
        int temp = b;
        b = a;
        a = temp;
    }

    for(int i = a;i<=b;i++)
    {
        if(check(i) == 1&& checkr(i) == 1)
        printf("%lld ", i);
    }

return 0;
}