//spiderman will save me and bug in my code
#include<stdio.h>

typedef long long ll;

int a[25005];
int b[25005];

int min(int a,int b)
{
    return (a < b)?a:b;
}

int max(int a,int b)
{
    return (a > b)?a:b;
}

signed main()
{
   int n;
   scanf("%d", &n);
    int sum1 = 0;
    int sum2 = 0;

    int minn1 = 1e9;
    int minn2 = 1e9;
   for(int i =1;i<=n;i++)
   {
    scanf("%d %d", &a[i], &b[i]);
    sum1 += a[i];
    sum2 += b[i];
    minn1 = min(minn1, a[i]);
    minn2 = min(minn2, b[i]);
   }

   int ans1 = sum1 + minn2;
   int ans2 = sum2 + minn1;

   printf("%d", max(ans1, ans2));
return 0;

}