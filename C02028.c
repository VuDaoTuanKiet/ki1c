//spiderman will save me and bug in my code
#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
 char luu = ('A');
    for(int i = 0;i<n;i++)
    {
        char st = luu;
        for(int j = 1;j<= n - i;j++)
        {
            printf("%c", st);
            st += 2;
        }
        luu+=2;
        printf("\n");
    }
return 0;
}