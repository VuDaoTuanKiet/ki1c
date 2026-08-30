//spiderman will save me and bug in my code
#include<stdio.h>

int max(int a,int b)
{
    return (a > b)?a:b;
}


int main()
{
    long long a,b;
    scanf("%lld %lld", &a, &b);

    for(int i = 0;i<a;i++){
        for(int j = 0;j<b;j++)
        {
                char ch =  (a - 1 - i) + j;
                if (ch >= b) {
                    ch = b - 1;
                }
                printf("%c", 'A' + ch);
        }
        printf("\n");
    }
return 0;
}