//spiderman will save me and bug in my code
#include<stdio.h>
#include<string.h>

typedef long long ll;

int check(char s[])
{
    int n = strlen(s);
   if (2 * (s[0] - '0') != (s[n - 1] - '0') && (s[0] - '0')!= 2*(s[n - 1] - '0')) return 0;
    for(int i =1;i<n/2;i++)
    {
        if(s[i] != s[n - 1 - i])
        return 0;
    }
    return 1;
}


signed main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        char s[25];
        scanf("%s", s);

        printf((check(s))?"YES\n":"NO\n");
    }

return 0;
}