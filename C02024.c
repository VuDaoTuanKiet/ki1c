//spiderman will save me and bug in my code
#include<stdio.h>

int main()
{
    long long a,b;
    scanf("%lld %lld", &a, &b);


    for(int i = 0;i<a;i++)
    {
        for(int j = 0;j<b;j++)
        {
            if(i + j < b)
            printf("%c",i + j +'A');
            else
           printf("%c", b + 'A' - j - 1);
        }
        printf("\n");
    }
return 0;
}
