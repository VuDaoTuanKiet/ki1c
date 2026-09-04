//spiderman will save me and bug in my code
#include<stdio.h>

typedef long long ll;

void xuly()
{
    int a[15][15] = {0};
    int lc[15] = {0};
    int lh[15] = {0};
    int n,m;
    scanf("%d %d", &n,&m);

    for(int i =1;i<=n;i++)
    {
        for(int j =1;j<=m;j++)
        {
                scanf("%d", &a[i][j]);
                lc[i]+= a[i][j];
             
        }
    }

    int lmaxc, lmaxh ;
    int maxx1 = -1e9, maxx2 = -1e9;
    for(int i = 1;i<=n;i++)
    {
            if(maxx1 < lc[i])
            {
                maxx1 = lc[i];
                lmaxc = i;
            }
    }
   // printf("%d\n", lmaxc);
  for(int i = 1;i<=n;i++)
    {
        if(i == lmaxc)
        continue;
        for(int j = 1;j<=m;j++)
        {
                lh[j] += a[i][j];
        }
    }
/*
    
    for(int i =1;i<=n;i++)
    {
        printf("%d ", lc[i]);
    }


    printf("\n");

*/

     for(int i = 1;i<=n;i++)
    {
        if(i == lmaxc)
        continue;
        for(int j = 1;j<=m;j++)
        {
                if(maxx2 < lh[j])
                {
                    maxx2 = lh[j];
                    lmaxh = j;
                }
        }
    }
    /*
    printf("%d\n", lmaxh);

    
    for(int i =1;i<=n;i++)
    {
        printf("%d ", lh[i]);
    }
    */
   // printf("\n\n");
    
        for(int i= 1;i<=n;i++)
        {
            if(i == lmaxc)
                continue;
            for(int j = 1;j<=m;j++)
            {
                if(j == lmaxh)
                continue;
                
                printf("%d ", a[i][j]);
            }

            printf("\n");
        }

        
}

signed main()
{
    int t;
    scanf("%d",&t);

    for(int i =1;i<=t;i++)
    {
        printf("Test %d:\n", i);
        xuly();
    }

return 0;
}