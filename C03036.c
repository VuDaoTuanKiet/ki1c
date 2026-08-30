//spiderman will save me and bug in my code
#include<stdio.h>


#define int long long

int checkr(int n)
{
        int luun = n;
        int re = 0;
        while(n > 0)
        {
            int luu = n%10;
            re = re * 10 + luu;
            n/=10;
        }
        return (re == luun);
}

int checks(int n)
{
    int sum =0;
    while(n > 0)
    {
        int luu = n%10;
        if(luu%2 == 0)
        return 0;
        sum += luu;
        n/=10;
    }
    return sum%2;
}

signed main()
{
        int t;
        scanf("%lld", &t);
        while(t--)
        {
            int n;
            scanf("%lld", &n);
            if(checks(n) * checkr(n) == 1)
            printf("YES\n");
            else
            printf("NO\n");
        }

return 0;
}