#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        long long ans = n*2;
        printf("%d\n", ans);
    }
    return 0;
}