//spiderman will save me and bug in my code
#include<stdio.h>
#include<string.h>

typedef long long ll;
char xuly(char n)
{
    if(n == '0'|| n == '8'  || n == '9')
    return '0';
    if(n == '1' ) return '1';
    else
    return '@';
}

signed main()
{
  int t;
  scanf("%d", &t);
    while(t--)
    {
        char s[10005];
        scanf("%s", s);
        int n = strlen(s);
        int dem = 0;
        int flag = 0;
        for(int i = 0;i<n;i++)
        {
            char c = s[i];
            if(xuly(c) == '@')
            {
                    flag = 1;
                    break;
            }
            else{
            s[i] = xuly(c);
            dem += (s[i] == '1');
        }
        }
            ll ans = 0;
        
        if(dem > 0 && flag == 0)
        {
            for(int i = 0;i<n;i++){
            int digit = s[i] - '0';
                ans = ans * 10 + digit;
            }

            printf("%lld\n", ans);
        }
        else
        printf("INVALID\n");
        
    }
return 0;
}