//spiderman will save me and bug in my code
#include<stdio.h>
#define N 10000006

int b[N + 5];

void sang()
{
    b[0] = b[1] = 0;

    for(int i = 2;i<N;i++)
    {
        b[i] = 1;
    }

    for(int i = 2;i*i<N;i++)
    if(b[i] == 1)
    for(int j = i*i;j<N;j+=i)
    b[j] = 0;
}





int main()
{
    sang();
    long long n;
    scanf("%lld", &n);

    for(int i = 1;i<=n;i++)
    {
      if(b[i])
      printf("%d\n", i);
    }

return 0;
} 