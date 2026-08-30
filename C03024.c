//spiderman will save me and bug in my code
#include<stdio.h>
#include<stdlib.h>


//#define int long long
int tinh(int n)
{
    int sum = 0;
    while(n > 0)
    {
        sum += n%10;
        n/= 10;
    }
    return sum;
}

int cmp(const void *a, const void *b)
{
     int A = *(const int *)a;
     int B = *(const int *)b;

    int luua = tinh(A);
    int luub = tinh(B);

    return (luua > luub) - (luua < luub); 
}

signed main()
{
    int a[2];

    scanf("%d %d", &a[0], &a[1]);

    qsort(a, 2, sizeof(int), cmp);

    printf("%d %d", a[0] , a[1]);
return 0;
}