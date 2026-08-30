#include<stdio.h>
#include<string.h>

#define N 26

int a[N + 5];
int dem[N + 5];

int check(char c) {
    return (c == '2' || c == '3' || c == '5' || c == '7');
}

int main()
{
       char s[N + 5];
       scanf("%s", s);
        int n= strlen(s);
        for(int i = 0;i<n;i++)
        {  
            if(check(s[i]))
            a[s[i] - '0']++;
        }

        for(int i = 0;i<n;i++)
        {
            int luu = s[i] - '0';
            if(check(s[i]) && !dem[luu])
            {
                printf("%d %d\n", luu, a[luu]);
                dem[luu] = 1;
            }

        }

}