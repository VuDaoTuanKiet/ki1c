//spiderman will save me and bug in my code
#include<stdio.h>
#include<stdlib.h>

typedef long long ll;
int a[105];
int b[105];


int cmp(const void *a, const void *b)
{
    return (*(const int *) a >  *(const int *) b) - (*(const int *) a <  *(const int *) b); 
}

signed main()
{
    int n;
    scanf("%d", &n);
    int p = 1;
    int j = 1;
    for(int i = 1;i<=n;i++){
        int x;

    scanf("%d", &x);
    if(x%2 == 0)
    a[p++] = x;
    else
    b[j++] = x;
    
}

    qsort(a + 1 , p - 1, sizeof(int),  cmp);
    qsort(b + 1 , j - 1, sizeof(int),  cmp);

    for(int i = 1;i<p;i++)
    printf("%d " , a[i]);
     for(int i = 1;i<j;i++)
    printf("%d " , b[i]);
return 0;
}