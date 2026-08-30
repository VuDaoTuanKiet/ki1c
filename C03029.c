//spiderman will save me and bug in my code
#include<stdio.h>


#define int long long


signed main()
{
    int t;
    scanf("%lld", &t);

    while(t--)
    {
        int n;
        scanf("%lld", &n);
        int flag1 = !(n%2);
        int flag2 = 1;
        while(n > 0)
        {
            int luu = n%10;
            if(luu%2)
            {
                flag2 = 0;
                break;
            }

            n/=10;
        }

        printf((flag1 * flag2)?"YES\n":"NO\n");
    }

return 0;
}