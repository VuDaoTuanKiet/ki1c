//spiderman will save me and bug in my code
#include<stdio.h>

int main()
{
   long long n;
   scanf("%lld", &n);

   for(int i = 1;i<=n;i++)
   {
        for(int j = 1;j<2*i;j++)
            printf("%d", j);
            printf("\n");
            
   }
return 0;
}