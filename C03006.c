//spiderman will save me and bug in my code
#include<stdio.h>
#define int long long

void xuly(int n)
{
        //scanf("%lld", &n);

        for(int i = 2;i*i<=n;i++)
        {
            int dem = 0;
            while(n%i == 0)
            {
                dem++;
                n /= i;
            }
            if(dem > 0)
            printf("%lld(%lld) ", i, dem);
        }
        if(n > 1)
        printf("%lld(1)", n);
}

int main()
{
   
    int t;
    scanf("%lld", &t);

    for(int i = 1;i<=t;i++)
    {
        int x;
        scanf("%lld", &x);
        printf("Test %lld: ", i);
        xuly(x);
        printf("\n");
    }

    

return 0;
}