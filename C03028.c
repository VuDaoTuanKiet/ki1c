//spiderman will save me and bug in my code
#include<stdio.h>


#define int long long

int dq(int n, int k) {
    if (k == 0||k == n) {
        return 1;
    }
    return dq(n -1,k - 1) + dq(n-1,k);
}

signed main()
{
    
    int n;
    scanf("%lld", &n);
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<=i;j++)
        {
            printf("%lld " , dq(i,j));
        }
        printf("\n");
    }
    
    return 0;
}