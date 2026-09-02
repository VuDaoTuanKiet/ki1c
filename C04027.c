//spiderman will save me and bug in my code
#include<stdio.h>

typedef long long ll;

int a[1005];

void swap(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}

signed main()
{
  int n;
  scanf("%d", &n);
  for(int i = 1;i<=n;i++)
    scanf("%d", &a[i]);


    for(int i= 1;i<n;i++)
    {
        int minn = i;
        for(int j =i + 1;j <= n;j++)
        {

            if(a[j] < a[minn])
            {
               minn = j;
            }
        }
        swap(&a[minn], &a[i]);
        
        printf("Buoc %d: ", i); 
        for (int k = 1; k <= n; k++) {
            printf("%d ", a[k]);
        }
        printf("\n");
    }



return 0;
}
