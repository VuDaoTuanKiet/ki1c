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
    scanf("%d", &n);
    for(int i = 1;i<=n;i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i =1;i<n;i++)
    {
        int luu = i;
        for(int j = i+ 1;j<=n;j++)
        {
                if(a[j] < a[luu])
                {
                     luu = j;
                }
        }

        swap(&a[i], &a[luu]);
        
        for(int j = 1;j<=n;j++)
        {
            printf("%d ", a[j]);
        }
        printf("\n");

    }

return 0;
}