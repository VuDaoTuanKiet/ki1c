//spiderman will save me and bug in my code
#include<stdio.h>

int min(int a,int b)
{
    return (a < b)?a:b;
}


int main()
{
    long long a,b;
    scanf("%lld %lld", &a, &b);

    for(int i = 0;i<a;i++){
        for(int j = 0;j<b;j++)
        {
                char ch = '@' + min(i + j, b - 1);
                printf("%c", ch);
        }
        printf("\n");
    }
return 0;
}