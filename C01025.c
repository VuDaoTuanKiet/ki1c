#include<stdio.h>

int max(int a, int b){
    return (a < b)? b : a;
}

int min(int a,int b){
    return (a<b) ? a : b;
}

int main()
{
    int x1,x2,y1,y2;
    int x3,x4,y3,y4;
    
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    scanf("%d %d %d %d", &x3, &y3, &x4, &y4);

    int minx = min(x1,min(x2,min(x3, x4)));
    int maxx = max(x1,max(x2,max(x3, x4)));
    int miny = min(y1,min(y2,min(y3, y4)));
    int maxy = max(y1,max(y2,max(y3, y4))); 


    int x = maxx - minx;
    int y = maxy - miny;

    int ans = max(x,y);

    printf("%lld", (long long)ans*ans);
}