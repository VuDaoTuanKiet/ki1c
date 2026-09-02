//spiderman will save me and bug in my code
#include<stdio.h>
#include<stdlib.h>

typedef long long ll;
int a[105];


int cmp(const void *a, const void *b)
{
    return (*(const int *) a >  *(const int *) b) - (*(const int *) a <  *(const int *) b); 
}

signed main()
{
    int n;
    scanf("%d", &n);

    for(int i = 1;i<=n;i++)
    scanf("%d", &a[i]);

    qsort(a + 1 , n, sizeof(int),  cmp);


    for(int i = 1;i<=n;i++)
    printf("%d " , a[i]);
return 0;
}