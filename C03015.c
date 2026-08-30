//spiderman will save me and bug in my code
#include<stdio.h>
#define int long long


int xuly(int n)
{
    int maxx = -1;
        for(int i = 2;i*i<=n;i++)
        {
            while(n%i == 0)
            {
                maxx = i;
                n/=i;
            }
        }

        if(n > 1)
        maxx = n;

        return maxx;

}

int main()
{
        int t;
        scanf("%lld", &t);
        while(t--)
        {
            int n;
            scanf("%lld", &n);
            printf("%lld\n", xuly(n));

        }

return 0;
}
