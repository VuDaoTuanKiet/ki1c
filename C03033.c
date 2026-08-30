//spiderman will save me and bug in my code
#include<stdio.h>


#define int long long

void xuly(int n)
{
    printf("%lld = ", n);
    int flag = 1;
    for(int i = 2;i*i<=n;i++)
    {
        if(n%i == 0)
        {
        int dem = 0;

        while(n%i == 0)
        {
            dem++;
            n/= i;
        }
          
        
        
        if(!flag)
        printf(" * ");
        printf("%lld^%lld", i, dem);
        flag = 0;
        }
    }

    if(n > 1)
    {
        if (!flag) {
            printf(" * ");
        }
        printf("%lld^1", n);
    }

    printf("\n");

}

signed main()
{
    
    int t;
    scanf("%lld", &t);
    while(t--)
    {
        int n;
        scanf("%lld", &n);
            xuly(n);
    }
return 0;
}