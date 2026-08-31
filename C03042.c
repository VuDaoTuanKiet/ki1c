//spiderman will save me and bug in my code 
//no hope

#include<stdio.h>
#include<stdlib.h>


//#define int long long
#define N 1000000
int s[N + 5];

int luu = 0;

void qd(int numb, int e)
{
    s[luu++] = numb;
    for(int i = 0;i<e;i++)
    {
        qd(numb * 10 + i, i);
    }
}

int cmp(const void *a, const void *b)
{
        int A = *(const int*) a;
        int B = *(const int*) b;

        return (A > B) - (A<B);
}

void xuly()
{
    for(int i = 1;i<=9;i++)
    {
        qd(i,i);

    }
    qsort(s, luu, sizeof(int), cmp);

}

signed main()
{
       xuly();
    int t;
    scanf("%d", &t);
    while(t--)
    {
    
        int l,r;
        scanf("%d %d", &l , &r);
        int dem = 0;
        for(int i = 0;i<luu;i++)
        {
            if(s[i] >= l && s[i] <= r)
            dem++;
            if(s[i] > r)
            break;
            }

            printf("%d\n", dem);


    }
return 0;
}