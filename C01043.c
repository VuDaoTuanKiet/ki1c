#include<stdio.h>

int main()
{
    long long n;
    scanf("%d", &n );
    int luun = n;
    long long sum = 0;

    while(n > 0)
    {
        long long luu = n%10;
        long long luu1 = 1;
        for(int i = 1;i<=luu;i++)
        {
                luu1 *= i;
        }
      //  printf("%lld\n", luu1);
        sum += luu1;
        n/=10;
    }
   // printf("%lld\n", sum);
    printf("%d", (sum == luun));
}
