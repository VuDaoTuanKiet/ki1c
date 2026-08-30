#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
    char s[15];
    scanf("%s", s);
    
    int n = strlen(s);
    
    int chan = 0;
    int le = 0;
    for(int i = 0;i<n;i++)
    {
        if((s[i] - '0')%2 ==0)
        chan++;
        else
        le++;
    }

    printf("%d %d\n", le, chan);
    }
    return 0;
}