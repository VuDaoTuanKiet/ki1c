//spiderman will save me and bug in my code
#include<stdio.h>


#define int long long

signed main()
{
    int t;
    scanf("%lld", &t);
    while(t--)
    {
        int x1,x2,y1,y2;
        scanf("%lld %lld %lld %lld", &x1, &y1, &x2, &y2);
        if(x2 - x1 == y2 - y1)
        {
            printf("YES\n");
        }
        else{
        printf("NO\n");
        }
    }
return 0;
}