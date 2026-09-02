//spiderman will save me and bug in my code
#include<stdio.h>
#include<stdlib.h>


typedef long long ll;

int cmp1(const void *a, const void *b)
{
    return (*(const int *)a > *(const int *)b )-  (*(const int *)a < *(const int *)b );
}
int cmp2(const void *a, const void *b)
{
    return (*(const int *)a < *(const int *)b )-  (*(const int *)a > *(const int *)b );
}




void xuly()
{

int a[105];
int b[105];
    int n;
    scanf("%d", &n);

    for(int i = 1;i<=n;i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i = 1;i<=n;i++)
    {
        scanf("%d", &b[i]);
    }

    qsort(a + 1, n, sizeof(int), cmp1);
    qsort(b + 1, n, sizeof(int), cmp2);

    int j = 1;
    int p = 1;
    for(int i = 0;i<n*2;i++)
    {
        if(i%2 == 0)
        {
            printf("%d ", a[j++]);
        }
        else
            printf("%d ", b[p++]);
    }

    printf("\n");    
}

signed main()
{
    
    int t;
    scanf("%d", &t);

    for(int i = 1;i<=t;i++)
    {
        printf("Test %d:\n", i);
        xuly();
    }
return 0;
}