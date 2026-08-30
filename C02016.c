//spiderman will save me and bug in my code
#include<stdio.h>

int main()
{
        int n;
        scanf("%d", &n);
        for(int i = 1;i<=n;i++)
        {
            int j;
            if(i%2==0)
            j = 2;
            else
            j = 1;
            for(;j<=i*2;j+=2)
            printf("%d", j);
            printf("\n");
            
        }

return 0;
}