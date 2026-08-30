//spiderman will save me and bug in my code
#include<stdio.h>


#define int long long

int checksnt(int n)
{
        if(n < 2)
            return 0;

    for(int i = 2;i*i <=n;i++)
    if(n%i== 0)
    return 0;
    return 1;
}

int tongd(int n)
{
    int sum = 0;
    while(n > 0)
    {
        int r = n % 10;
        if (r != 2 && r != 3 && r != 5 && r != 7) {
            return 0;
        }
        sum += r;
        n/=10;
    }
    return checksnt(sum);

}

int xuly(int n)
{
    if(tongd(n) == 0) return 0;
    return checksnt(n);
}



signed main()
{
  int t;
  scanf("%lld" , &t);

  while(t--)
  {
    int a,b;

    scanf("%lld %lld" , &a, &b);
    
    int dem = 0;
    for(int i = a;i<=b;i++)
    {
        if(xuly(i))
        dem++;
    }

    printf("%lld\n", dem);

  }

return 0;
}