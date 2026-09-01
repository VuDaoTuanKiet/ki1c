//spiderman will save me and bug in my code
#include<stdio.h>

typedef long long ll;

signed main()
{
    int n,k;
    scanf("%d %d", &n ,&k);
    int dem = 0;

    for(int i = 1;i<=n;i++)
    {
        if(i%2 == 0)
        {
            int luu = i;
            while(luu%2==0)
            {
                dem++;
                luu/=2;
            }
        }
    }
    printf((dem >= k)?"Yes":"No");

return 0;
}   