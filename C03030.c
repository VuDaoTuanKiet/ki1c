//spiderman will save me and bug in my code, i hate c03030
#include<stdio.h>


int a[10];

int het,n;
void tao()
{
    for(int i = 1;i<=n;i++)
    a[i] = 1;
}


void sinh()
{
    int i = n;
    while(i >= 1 && a[i] == 9)
    {
        i--;
    }
    if(i == 0)
         het = 0;
    else
    {
        a[i]++;
        for(int j = i + 1;j<=n;j++)
        a[j] = a[i];
    }

}

signed main()
{

    int t;
    scanf("%d" , &t);
        while(t--)
        {
           
            scanf("%d", &n);

            tao();
            het = 1;
            while(het)
            {
                for(int i = 1;i<=n;i++)
                    printf("%d" , a[i]);
                
                    printf(" ");
                     sinh();
            }
            printf("\n");
           
        }
return 0;
}
