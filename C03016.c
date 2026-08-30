//spiderman will save me and bug in my code
#include<stdio.h>
#define int long long

int check(int n)
{
    if(n == 1 || n == 0)
    return 1;

    int f1 = 1;
    int f2 = 1;
    int fn = f1 + f2;

    while(fn <= n)
    {
        if(fn == n)
            return 1;
        
            f1 = f2;
            f2 = fn;
            fn = f1 + f2;
    }

    return 0;
}   
int main()
{
        int t;
        scanf("%lld", &t);

        while(t--)
        {
            int n;
            scanf("%lld", &n);

            printf((check(n))?"YES\n":"NO\n");                                 
        }

return 0;
}