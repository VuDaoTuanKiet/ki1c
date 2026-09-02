//spiderman will save me and bug in my code
#include<stdio.h>

typedef long long ll;

int a[105];
int luu[10006];

signed main()
{
   int n;
   scanf("%d", &n);
   for(int i= 1;i<=n;i++)
   {
    scanf("%d",&a[i]);
    luu[a[i]]++;
}
    for(int i =1;i<=n;i++)
    {
        if(luu[a[i]] > 0)
        {
            printf("%d ", a[i]);
            luu[a[i]] = 0;
        }
    }


return 0;
}