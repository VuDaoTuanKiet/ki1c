#include<stdio.h>
#include<string.h>


int main()
{
    char s[15];
    scanf("%s", s);
    int n = strlen(s);
    
    printf("%c %c", s[0] , s[n - 1]);
}