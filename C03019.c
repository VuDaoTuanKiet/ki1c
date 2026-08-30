//spiderman will save me and bug in my code
#include<stdio.h>
#define int long long

int pow(int n)
{
        int sum = 1;
        for(int i = 1;i<n;i++)
        sum *= 10;

        return sum;
}



int checkr(int n)
{
        int luu = 0;
        int luun = n;

        while(n > 0)
        {
            int s = n%10;
            luu = luu *10 + s;
            n/=10;
        }

    return(luun == luu);
}

int checks(int n)
{
    int sum = 0;
    while(n > 0)
    {
        sum += n%10;
        n/=10;
    }

    if(sum%10 ==0)
    return 1;
    return 0;

}


int main()
{
    int t;
    scanf("%lld", &t);
    while(t--)
    {
        int n;
        scanf("%lld", &n);
        
        int start = pow(n);
        int end = pow(n + 1) - 1;
        
        int dem = 0;

        for(int i = start;i<=end;i++)
        {
            if(checkr(i) == 1 && checks(i) == 1)
            dem++;
        }
        printf("%lld\n", dem);
        
    }
return 0;
}