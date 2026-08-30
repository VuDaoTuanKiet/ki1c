#include<stdio.h>

#define N 2000005

int b[N];

void sang()
{
    //b[0] = b[1] = 0;
    for(int i = 1;i<N;i++)
    b[i] = i;

    for(int i = 2;i*i<N;i++)
    if(b[i] == i)
    for(int j = i*i;j<N;j+=i)
    if(b[j] == j)
        b[j] = i;


}


int main()
{
    sang();
    long long n;
    scanf("%lld", &n);
    long long sum = 0;

    for(int i = 1;i<=n;i++)
    {
        long long x;
        scanf("%lld", &x);

        while(x > 1)
        {
            sum += b[x];
            x/= b[x];
        }

    }

    printf("%lld", sum);

}