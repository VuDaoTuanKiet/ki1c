//spiderman will save me and bug in my code
#include<stdio.h>

typedef long long ll;

//int a[105];
int le[105];
int chan[105];

signed main()
{
   int n;
   scanf("%d", &n);

    int j = 1;
    int p = 1;
   for(int i = 1;i<=n;i++)
   {
        int x;
        scanf("%d", &x);
        if(x %2 == 0)
        chan[p++] = x;
        else
        le[j++] = x;
      
   }

   for(int i = 1;i<p;i++)
   printf("%d ", chan[i]);

   printf("\n");
   for(int i = 1;i<j;i++)
   printf("%d ", le[i]);



return 0;
}