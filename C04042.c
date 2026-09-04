//spiderman will save me and bug in my code
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define N 100000
typedef long long ll;



typedef struct 
{
    int fi;
    int se;

} ii;


ii a[N + 5];

int luu[N + 5];
void xuly()
{
    memset(luu, 0, sizeof(luu));

    int n;
    scanf("%d", &n);
    for(int i =1;i<=n;i++)
    {
        scanf("%d", &luu[i]);
    }
    
    for(int i = 1;i<n;i++)
    {
        for(int j = i + 1;j<=n;j++)
        {
            if(luu[i] == luu[j])
            {
                printf("%d\n", luu[i]);
                return;
            }
        }
    }
    
    printf("NO\n");


}

signed main()
{
    
    int t;
    scanf("%d", &t);
    while (t--)
    {
        xuly();
    }
    

return 0;
}