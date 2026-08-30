//spiderman will save me and bug in my code
#include<stdio.h>

#define N 400
char a[N + 5][N + 5];


int main()
{
    int n;
    scanf("%d", &n);

    int luu = 0;
    for(int i = 1;i<=n;i++)
    {
        for(int j = i;j<=n;j++)
        {
            a[j][i] = (char)('A' + luu);
            luu++;
        }
    }

    for(int i =1;i<=n;i++)
    {
        for(int j = 1;j<=i;j++)
        printf("%c ", a[i][j]);

        printf("\n");
    }

    return 0;
}