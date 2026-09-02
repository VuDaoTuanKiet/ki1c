//spiderman will save me and bug in my code
#include<stdio.h>

typedef long long ll;
int a[1005];

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

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
        int flag = 1;
        
        for(int j = 1;j <= n - i ;j++ )
        {
            if(a[j] > a[j + 1])
            {
                swap(&a[j], &a[j + 1]);
                flag = 0;
            }
            
        }

        if(flag)
        break;

        printf("Buoc %d: ", i); 
        for (int k = 1; k <= n; k++) {
            printf("%d ", a[k]);
        }
        printf("\n");
    }
return 0;
}