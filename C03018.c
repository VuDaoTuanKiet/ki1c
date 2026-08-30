//spiderman will save me and bug in my code
#include<stdio.h>
#define int long long

int checknt(int n)
{
    if(n <2 ) return 0;
    for(int i = 2;i*i<=n;i++)
        if(n%i == 0)
        return 0;

        return 1;
}

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

int xuly(int n)
{   
    if (!checknt(n)) return 0;
  //  int luu = n;
        int sum = 0;
        while(n> 0)
        {
            sum += n%10;
            n/=10;
        }

 return check(sum);
}   

int main()
{
    int a,b;
    scanf("%lld %lld", &a, &b);

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }


    for(int i = a;i<=b;i++)
    {
        if(xuly(i))
        printf("%lld ", i);
    }
    //printf("%lld %lld ", a ,b);

return 0;
}