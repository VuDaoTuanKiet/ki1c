//spiderman will save me and bug in my code
#include<stdio.h>

int main()
{
    long long a,b;
    scanf("%lld %lld", &a, &b);

    for(int i = 1;i<=b;i++)
    {
            printf("%d", i);
    }
    printf("\n");

    for(int i = 2;i<=a;i++)
    {
        int j = i;
        int check = 0,dem = 0;
        while(dem < b)
        {
            if(j == 1)
            {
                printf("%d", j);
                j++;
                dem++;
                check = 1;
                continue;
            }
            if(check == 1)
            {
                printf("%d", j);
                j++;
                dem++;
                continue;
            }
            if(check == 0)
            {
                  printf("%d", j);
                j--;
                dem++;
                continue;
            }
        }
        printf("\n");

    }

return 0;
}