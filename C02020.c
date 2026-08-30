//spiderman will save me and bug in my code
#include<stdio.h>

int main()
{
   int n;
   scanf("%d", &n);
    int luu = n;
   for(int i = 1;i<=n;i++)
   {
    for(int j = 1;j<luu;j++)
    printf("~");
    for(int j = 2;j<=2 * i;j += 2)
        printf("%d", j);

    
    for (int j = 2*i - 2;j >= 1;j -= 2) 
            printf("%d", j);
    
            luu--;
    printf("\n");
    }
   
return 0;
}   