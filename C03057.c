//spiderman will save me and bug in my code
#include<stdio.h>
#include<string.h>

typedef long long ll;
char doix(char n)
{
    if(n == '6')
    return '5';
    return n;
}

char doiy(char n)
{
    if(n == '5')
    return '6';
    return n;
}

ll xuly1( char s[10005])
{
     char s1[10005];

      int n = strlen(s);
        int dem = 0;
        int flag = 0;
        for(int i = 0;i<n;i++)
        {
            char c = s[i];
            s1[i] = doix(c);
        
           // dem += (s[i] == '1');
        }
        
        ll ans1 = 0;
        for (int i = 0;i<n;i++)
        {
            int d = s1[i] - '0';
            ans1 = ans1 * 10 + d;

        }
        return ans1;

}

ll xuly2( char s[10005])
{
     char s1[10005];

      int n = strlen(s);
        int dem = 0;
        int flag = 0;
        for(int i = 0;i<n;i++)
        {
            char c = s[i];
            s1[i] = doiy(c);
        
           // dem += (s[i] == '1');
        }
        
        ll ans1 = 0;
        for (int i = 0;i<n;i++)
        {
            int d = s1[i] - '0';
            ans1 = ans1 * 10 + d;

        }
        return ans1;

}

ll min(ll a, ll b)
{
    return (a < b)?a:b;
}
ll max(ll a, ll b)
{
    return (a > b)?a:b;
}
signed main()
{
  int t;
  scanf("%d", &t);
    while(t--)
    {
        char s1[10005];
        char s2[10005];
        scanf("%s %s", s1, s2);

        ll ans1 = xuly1(s1);
        ll ans2 = xuly1(s2);
        ll ans3 = xuly2(s1);
        ll ans4 = xuly2(s2);


        printf("%lld %lld\n", min(ans1 + ans2, ans3 + ans4), max(ans1 + ans2, ans3 + ans4));

        
          
    }
return 0;
}