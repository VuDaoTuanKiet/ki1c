#include<stdio.h>


int main()
{
        long long t;
        scanf("%lld",&t);

        while(t--)
        {
            long long n;
            scanf("%lld", &n);
            long long luu = 1;
            for(int i = 2;i*i<=n;i++)
            {
                int flag = 0;
                while(n%i==0)
                {
                    if(flag == 0)
                    {
                        luu*= i;
                        flag = 1;
                    }
                    n/=i;
                }
            }
            if(n> 1)
            luu *= n;

            printf("%lld\n", luu);
        }
}