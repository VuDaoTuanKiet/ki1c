#include<stdio.h>
#include<string.h>

void xuly()
{
     char s[25];
    scanf("%s", s);

    int n = strlen(s);
    for(int i = 1;i<n;i++)
    {
        if(s[i - 1] > s[i])
        {
            printf("NO\n");
            return;
        }
    }
    printf("YES\n");
}

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        xuly();
    }
}