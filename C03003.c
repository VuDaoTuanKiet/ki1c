//spiderman will save me and bug in my code
#include<stdio.h>

int check(int n)
{
    if(n< 2) return 0;
    for(int i  = 2;i*i<=n;i++)
    if(n%i == 0)
    return 0;

    return 1;
}




int main()
{
  //  sang();
    long long n;
    scanf("%lld", &n);
int j = 0;
int i = 1;
    while(1)
    {
       if(j == n)
        break;

        if(check(i))
        {
            printf("%d\n", i);
            j++;
        }
        i++;

         
    }

return 0;
} 