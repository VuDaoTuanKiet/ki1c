//spiderman will save me and bug in my code
#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d %d", &a, &b);

    for(int i = 1;i<=a;i++)
    {
            int j = i;
            int check = 0, dem =0;
            while(dem < b)
            {
                if(j >= b)
                {
                    printf("%d", j);
                    check = 1;
                    dem++;
                    j--;
                    continue;
                }
            if(check == 0)
            {
                printf("%d", j);
                j++;
                dem++;
                continue;
            }
            if (check == 1)
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