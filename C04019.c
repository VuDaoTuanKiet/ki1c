//spiderman will save me and bug in my code
#include<stdio.h>

typedef long long ll;

int max(int a,int b)
{
    return (a > b)?a:b;
}

void xuly()
{
    int a[1005] = {0};
    int luu[30005] = {0};
    int n;
    scanf("%d", &n);

    for(int i = 1;i<=n;i++)
    {
        scanf("%d", &a[i]);
        luu[a[i]]++;
    }
    int flag = 0;
    int maxx = -1;
    for(int i = 1;i<=n;i++)
    {
        if(luu[a[i]] > 1)
        {
            maxx = max(maxx,luu[a[i]]);
            flag =  1;
        }
    }


    if(flag == 0)
    {
        for(int i =1;i<=n;i++)
        {
            printf("%d ", a[i]);
        }
    }
    else
    {
        for(int i = 1;i<=n;i++)
        {
            if(luu[a[i]] == maxx){
            printf("%d ", a[i]);
                luu[a[i]] = 0;
        }
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
