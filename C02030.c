//spiderman will save me and bug in my code
#include<stdio.h>

int main()
{
   int n;
   scanf("%d", &n);

    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<=i * 2;j++)
        {
            int luu;
                if((j <= i))
                {
                    luu = (j * 2);
                }
                else
                {
                    luu = (2 * i - j) * 2;
                }
            
                printf("%c", '@' + luu);
        }
        printf("\n");
    }

return 0;
}