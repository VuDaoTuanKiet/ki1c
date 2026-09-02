//spiderman will save me and bug in my code
#include<stdio.h>

typedef long long ll;
int chia[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};

void xuly()
{
    int dem = 0;
    int n;
    scanf("%d", &n);
    for(int i = 0;i<10;i++)
    {
        if(n >= chia[i])
        {
            dem += n/chia[i];
            n%=chia[i];
        }
    }
    printf("%d\n", dem);
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