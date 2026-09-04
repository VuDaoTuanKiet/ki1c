//spiderman will save me and bug in my code
#include<stdio.h>
#include<stdlib.h>


typedef long long ll;

int cmp(const void *a, const void *b)
{
    return (*(const int *)a > *(const int *) b) - (*(const int *)a < *(const int *) b);
}

int check(int n)
{
    if(n< 2) return 0;
    for(int i = 2;i*i<=n;i++)
    {
        if(n%i==0)
        return 0;
    }

    return 1;
}

void xuly()
{
    int luu[1005] = {0};
    int a[105] = {0};
    int n;
    scanf("%d" , &n);
    int j = 1;
    for(int i = 1;i<=n;i++)
    {
            int x;
            scanf("%d ", &x);

            if(check(x) == 1 && luu[x] == 0)
            {
                a[j++] = x;
            }
            luu[x]++;
    
    }

    qsort(a + 1, j - 1 , sizeof(int), cmp);

    for(int i = 1;i<j;i++)
    {
        printf("%d ", a[i]);
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
