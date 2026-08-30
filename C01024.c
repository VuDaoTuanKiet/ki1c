#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
          char c[11];
    scanf("%s",c);
    int sz = strlen(c);
    if(c[0] == c[sz - 1])
    printf("YES\n");
    else
    printf("NO\n");

    }
    
  
    return 0;

}