//spiderman will save me and bug in my code
#include<stdio.h>


#define int long long

int checkd(int n)
{

    if(n == 2|| n == 3|| n == 5 || n == 7)
    return 1;
    return 0;

}
int checkdigit(int n)
{
    while(n > 0)
    {
        int luu = n%10;
        if(!checkd(luu))
        return 0;
        n/=10;
    }
    return 1;
}

int checksnt(int n)
{
    if(n < 2)
    return 0;
    for(int i = 2;i*i <= n;i++)
    {
        if(n%i == 0)
        return 0;
    }
    return 1;

}

signed main()
{
   int t;
   scanf("%lld", &t);

   while(t--)
   {
    int dem = 0;
    int a,b;
    scanf("%lld %lld", &a, &b);
    for(int i =a;i<=b;i++)
    {
        if(checkdigit(i) == 1 && checksnt(i) == 1)
        dem++; 
    }

    printf("%lld\n", dem);
   }

return 0;
}
