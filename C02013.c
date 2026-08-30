//spiderman will save me and bug in my code
#include<stdio.h>

int max(int a,int b)
{
    return (a>b)?a:b;
}

int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    int luu = max(a,b);

    for(int i =  1;i<=a;i++)
    {
        int j = luu;
        int check = 0, dem = 0;
        while(dem < b){
        if(j == 1)
        {
            printf("%d", j);
            j++;
            dem++;
            check = 1;
            continue;
        }
        if(check == 1)
        {
            printf("%d", j);
            j++;
            dem++;
            continue;
        }
        if(check == 0)
        {
            printf("%d", j);
            j--;
            dem++;
            continue;
        }
        }
        printf("\n");
        luu--;
    }


return 0;
}