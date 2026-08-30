#include<stdio.h>

int main()
{

    long long n;
    scanf("%lld" ,&n);

    int flag = 1;
    for(long long i =2 ; i*i<=n;i++)
    {
        while(n%i == 0)
        {
            if(flag == 0)
            {
                 printf("x");
            }
            printf("%lld", i);
            flag = 0;
            n/=i;
        }
    }
    if(n > 1)
    {
        printf("x");
            printf("%lld", n);
    }

return 0;

}