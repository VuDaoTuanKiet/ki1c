//spiderman will save me and bug in my code
#include<stdio.h>
#include<stdlib.h>

#define N 100005

typedef long long ll;
int b[N + 5];
int luu[N + 5];

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

signed main()
{
    sang();

     int n;
    scanf("%d", &n);

    int j = 1;
    for(int i = 1;i<=n;i++)
    {
        int x;
        scanf("%d", &x);

        if(b[x] == 1)
        luu[j++] = x;
    }

    printf("%d ", j - 1);

    for(int i =1;i<j;i++)
    printf("%d ", luu[i]);

   
return 0;
}