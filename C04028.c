//spiderman will save me and bug in my code
#include<stdio.h>

typedef long long ll;
int a[1005];

signed main()
{
   int n;
   scanf("%d" , &n);

   for(int i = 1;i<=n;i++)
   {
    scanf("%d", &a[i]);
   }

   for(int i= 1;i<=n;i++)
    {
       int luu = a[i];
       int j = i - 1;
       while(j > 0 && a[j] > luu)
        {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = luu;
        
        printf("Buoc %d: ", i - 1); 
        for (int k = 1; k <= i; k++) {
            printf("%d ", a[k]);
        }
        printf("\n");
    }
return 0;
}