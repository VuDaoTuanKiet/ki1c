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
    int dem = 0;
    for(int i = 1;i*i<=n;i++)
    {

        if(n%i == 0)
        {
            dem+= !(i%2);
            if(i != n/i)
            dem+= !((n/i)%2);
        }
    }

    printf("%lld\n", dem);
 }
return 0;
}
