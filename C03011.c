//spiderman will save me and bug in my code
#include<stdio.h>

#define int long long

int giaithua(int n)
{
    int a[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
    return a[n];
}

int check(int n)
{
    int luu = n;
    int sum = 0;
    while(n > 0)
    {
        int luu1 =  n%10;
        sum += giaithua(luu1);
        n/=10;
    }

    return (luu == sum);
}

int main()
{
  
  
/*
   for(int i = 0;i<=9;i++)    
        {
            int luu = 1;
            for(int j = 1;j<=i;j++)
            {
                    luu *= j;             
            }

            printf("%lld ", luu);
          //1 1 2 6 24 120 720 5040 40320 362880 
        }

*/
    int a,b;
    scanf("%lld %lld" , &a, &b);

    if(a > b)
    {
        int temp =b;
        b= a;
        a = temp;
    }

    for(int i = a;i<=b;i++)
    {
        if(check(i))
        printf("%lld ", i);
    }


return 0;
}