//spiderman will save me and bug in my code
#include<stdio.h>
#include<stdlib.h>


typedef long long ll;

typedef struct{
    int fi;
    int se;
}ii;



int luu[1000005];
ii a[100005];

int cmp(const ii a, const ii b)
{
   return a.se < b.se;
}


void swap( ii *a,  ii *b)
{
     ii temp = *a;
    *a = *b;
    *b = temp;
}


int check(int n)
{
    int luu = n%10;
    n/= 10;
    while(n > 0)
    {
        int d = n%10;
        if(d > luu)
        return 0;

        luu = d;
        n/=10;
    }

    return 1;

}

signed main()
{
    int x;
    int n = 1;
    while(scanf("%d", &x) != -1)
    {
        if(check(x))
        {
            int flag = 0;
            for(int i =1 ;i<=n;i++)
            {
                if(a[i].fi == x)
                {
                    flag = 1;
                    a[i].se++;
                    break;
                }
                
            }
            if(!flag)
                {
                    a[n].fi = x;
                    a[n].se = 1;
                    n++;
                }
        }   
    }

    for(int i= 1;i<n;i++)
    {
        for(int j = i + 1;j<=n;j++)
        {
                if(cmp(a[i], a[j]))
                swap(&a[i], &a[j]);
        }
    }
    
   

    for(int i = 1;i<n;i++)
    {
      
        printf("%d %d\n", a[i].fi , a[i].se);
       
    }




return 0;
}