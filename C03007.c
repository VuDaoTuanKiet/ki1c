//spiderman will save me and bug in my code
#include<stdio.h>
//#define int long long

#define N 1000005

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

int check(int n)
{
     int luu = 0;
    int c = n;
     while(n > 0)
     {
        int luu1 = n%10;
        luu = luu * 10 + luu1;
        n/=10;
     }

     return (c == luu);
}

int main()
{
    sang();
    int t;
    scanf("%d", &t);
    
    while(t--)
    {
        int dem = 0;
       int l,r;
       scanf("%d %d", &l, &r);
        
       for(int i = l;i<=r;i++)
       {
            if(b[i] == 1 && check(i) == 1)
            {
                printf("%d ", i);
                dem++;
                if(dem == 10)
                printf("\n");
            }

            dem%=10;
       }


       printf("\n");

    }
return 0;
}