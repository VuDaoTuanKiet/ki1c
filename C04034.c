//spiderman will save me and bug in my code
#include<stdio.h>

typedef long long ll;

int max(int a,int b)
{
    return (a > b)?a:b;
}

void xuly()
{
    int a[10005];
    int luu[10005];
    int n;
    scanf("%d", &n);

    for(int i = 1;i<=n;i++)
    scanf("%d" , &a[i]);


    luu[n + 1] = -1e9;
   
    
    for(int i = n;i>=1;i--)
        luu[i] = max(a[i], luu[i + 1]);

    for(int i =1;i<=n;i++)
    {
       // printf("%d ", luu[i]);
        if(a[i] > luu[i + 1])
        {
              printf("%d ", a[i]);
        }
    }

    printf("\n");
  
}

signed main()
{
  int t;
  scanf("%d", &t);
  while(t--)
    {
        xuly();
    }
return 0;
}


