//spiderman will save me and bug in my code
#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int l = 1;
    int r = 2*n - 1;
    for(int i = 1;i<=n;i++)
    {
        int luu = n;
        for(int j = 1;j<=2 *n - 1;j++)
        {
            if(j < l)
            {
                printf("%d", luu);
                luu--;
            }
            else if(j >= r)
            {
                 printf("%d", luu);
                luu++;
            }
            else
                printf("%d", luu);
        }
        l++;
        r--;
        printf("\n");
    }
    //done

    l -= 2;
    r+=2;

    for(int i = 1;i<n;i++)
    {
        int luu = n;
          for(int j = 1;j<=2 *n - 1;j++)
        {
            if(j < l)
            {
                printf("%d", luu);
                luu--;
            }
            else if(j >= r)
            {
                 printf("%d", luu);
                luu++;
            }
            else
                printf("%d", luu);
        }
        l--;
        r++;
        printf("\n");
    }

return 0;
}