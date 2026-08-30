//spiderman will save me and bug in my code
#include<stdio.h>

int main()
{
    long long n;
    scanf("%lld", &n);

    int luu= 0;
    for(int i = 1;i<=n;i++)
    {
        int s = luu;
        int e = luu + i - 1;

        if(i%2)
        {
            for(int j = s;j<=e;j++)
            printf("%c ", 'a' + j);
        }
        else
        {
            for(int j = e;j>= s;j--)
            {
                printf("%c ", 'a' + j);
            }
        }
        printf("\n");
        luu  = e + 1;
    }
return 0;
}