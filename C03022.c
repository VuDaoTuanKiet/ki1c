//spiderman will save me and bug in my code
#include<stdio.h>


#define int long long
#define N 100006

int b[N + 5];

void sang()
{
    b[0] = b[1] = 0;
    for(int i = 2;i<N;i++)
    b[i] = 1;

    for(int i = 2;i*i<N;i++)
    if(b[i])
    for(int j = i*i;j<N;j+=i)
    b[j] = 0;
}

int check(int n)
{
    int sum = 0;
    while(n>0)
    {
        sum += n%10;
        n/= 10;
    }
    
    if(sum % 5 == 0)
    return 1;
    return 0;

}

signed main()
{
    sang();
    int n;
    scanf("%lld", &n);
    int dem = 0;
    
    for(int i = 1;i<=n;i++)
    {
        if(check(i) == 1 && b[i] == 1)
        {
            dem++;
            printf("%lld ", i);
        }
    }

    printf("\n%lld",dem);


return 0;
}