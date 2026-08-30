#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
   char s[14];
   scanf("%s", s);
   int n = strlen(s);
   
   char luu = s[0];
   s[0] = s[n - 1];
   s[n - 1] = luu;

   int ans = atoi(s);

   printf("%d", ans);
}