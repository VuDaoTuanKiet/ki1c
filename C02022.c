//spiderman will save me and bug in my code
#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int dem = 1;
    for(int i = 1;i<=n;i++)
    {
        int luu = i;
        if(i%2){
        
            for(int j = 1;j<=i;j++)
            {
                printf("%d ", dem++);
            }
        }
        else
            {
                int maxr = dem + i - 1;
                dem = maxr + 1;
                for(int j = 1;j<=i;j++)
                {
                    printf("%d ", maxr--);
                }
                
            }
        printf("\n");
    }


return 0;
}