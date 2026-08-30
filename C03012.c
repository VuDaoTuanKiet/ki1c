//spiderman will save me and bug in my code
#include<stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    int f0 = 1;
    int f1 = 1;
    int flag = 0;
     int fn = f0 + f1;
    while(fn <= n)
    {
        if(fn == n)
        {
            printf("1");
            return 0;
        }
        f0 = f1;
        f1 = fn;
        fn = f0 + f1;
    }

    printf("0");



return 0;
}