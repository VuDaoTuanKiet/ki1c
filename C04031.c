//spiderman will save me and bug in my code
#include<stdio.h>

typedef long long ll;

int max(int a,int b)
{
    return (a > b)?a:b;
}
void xuly()
{
    int a[105] = {0};
    int n;
    scanf("%d", &n);


    for(int i = 1;i<=n;i++)
    scanf("%d", &a[i]);


    int maxx = 1;
    int dem = 1;
    a[n + 1] = -1;
    for(int i = 2;i<=n + 1;i++)
    {
        if(a[i] > a[i - 1])
        {
           dem++;
        }
        else
        {
            maxx = max(maxx, dem);
            dem = 1;
        }
    }
    dem = 1;

    printf("%d\n", maxx);

    for(int i= 2;i<=n + 1;i++)
    {
        if(a[i] > a[i - 1])
        {
            dem++;
        }
        else
        {
            if(dem == maxx)
            {
                for(int j = i - maxx;j<i;j++)
                {
                    printf("%d ", a[j]);
                }
                printf("\n");
               
            }
             dem = 1;

        }
    }

  
    
}

signed main()
{
    int t;
    scanf("%d" ,&t);

    for(int i =1;i<=t;i++)
    {
        printf("Test %d:\n", i);
        xuly();

    }
return 0;
}