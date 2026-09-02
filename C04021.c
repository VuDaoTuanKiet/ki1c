//spiderman will save me and bug in my code
#include<stdio.h>

typedef long long ll;

int a[105];

signed main()
{
   int n;
   scanf("%d", &n);

   for(int i = 0;i<n;i++)
   scanf("%d", &a[i]);

   int p;
   scanf("%d", &p);

    for(int i = n - p;i<n;i++)
    printf("%d ", a[i]);


    for(int i = 0 ;i<n - p;i++)
    printf("%d ", a[i]);

return 0;
}