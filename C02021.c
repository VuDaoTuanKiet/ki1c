//spiderman will save me and bug in my code
#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    printf("1\n");

    for(int i = 2;i<=n;i++)
    {
        int luu = n-1;
        int luu1 = i;
        for(int j = 1;j<=i;j++)
        {
            printf("%d ", luu1);
            luu1 += luu;
            luu--;
        }
        printf("\n");
    }


return 0;
}