//spiderman will save me and bug in my code
#include<stdio.h>
#include<string.h>


#define int long long

int check(char c)
{
   return (c == '2' || c == '3' || c == '5' || c == '7');
}

signed main()
{
        char s[25];
        scanf("%s", s);

        int count[11] = {0};
        int n = strlen(s);
        for(int i = 0;i<n;i++)
        {
            count[s[i]- '0']++;
        }

        for(int i = 0;i < n; i++)
        {
            int luu = s[i] -'0';
            if(check(s[i]) == 1 && count[luu] > 0)
            {
                printf("%lld %lld\n", luu, count[luu]);
            count[luu] = 0;
            }
        }
return 0;
}