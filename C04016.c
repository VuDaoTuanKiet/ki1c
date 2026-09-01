//spiderman will save me and bug in my code
#include<stdio.h>
#include<stdlib.h>

#define N 100005

typedef long long ll;
int b[N + 5];

int cmp(const void *a, const void *b)
{
    return (*(const int *) a > *(const int *) b) - (*(const int *) a < *(const int *) b);
}

void sang()
{
    b[0] = b[1] = 0;
    for(int i = 2;i<N;i++)
    b[i] = 1;

    for(int i = 2;i*i<N;i++)
    if(b[i])
    for(int j = i*i;j<N;j+=i)
    b[j] = 0;
}

signed main()
{
    sang();

    int t;
    scanf("%d", &t);
   for(int p = 1;p<=t;p++)
    {
        int a[1005];
int luu[100005];
    
printf("Test %d:\n" , p);
    int n;
    scanf("%d", &n);

    for(int i = 1;i<=n;i++)
    {
        scanf("%d", &a[i]);
        luu[a[i]]++;
    }

    qsort(a, n + 1, sizeof(int), cmp);

    int j = 1;
    for(int i =1;i<=n;i++)
    {
        if(luu[a[i]]> 0 && b[a[i]] == 1)
        {
        printf("%d xuat hien %d lan\n", a[i], luu[a[i]]);
            luu[a[i]] = 0;
    }
    }

    printf("\n");

}
   
return 0;
}