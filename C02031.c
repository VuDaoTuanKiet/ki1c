//spiderman will save me and bug in my code
#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int luu = n;
    for(int i = n;i>= 1;i--)
    {
       // int luu1 = luu;
        for(int j = 0;j<i;j++)
        {
            printf("%c", '@' + j + luu - 1);
            
        }
        luu--;
        printf("\n");
    }
return 0;
}