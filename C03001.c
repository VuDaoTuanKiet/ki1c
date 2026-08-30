//spiderman will save me and bug in my code
#include<stdio.h>
#include<string.h>

int main()
{
       
        int t;
        scanf("%d", &t);
        while(t--)
        {
            char s[15];
            scanf("%s", s);
            int n = strlen(s);
            int sum = 0;
            for(int i = 0;i<n;i++)
            {
                    sum += (s[i] - '0');
            }
            printf((sum%10==0)?"YES\n":"NO\n");
        }

return 0;
}