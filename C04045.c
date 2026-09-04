//spiderman will save me and bug in my code
#include<stdio.h>

typedef long long ll;



void xuly()
{
    int n = 0;
        int x;
        int deml = 0;
        int demc = 0;
        while(scanf("%d", &x) != -1)
        {
            n++;
            demc += (x%2 == 0);
            deml += (x%2 != 0);
            
            char c = getchar();
            if(c == '\n')
            break;

        }   

        

        if((n%2== 0 && demc > deml) || (n%2 != 0 && deml > demc))
        printf("YES\n");
        else
        printf("NO\n");
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