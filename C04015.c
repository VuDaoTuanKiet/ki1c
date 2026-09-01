//spiderman will save me and bug in my code
#include<stdio.h>

typedef long long ll;


signed main()
{
    int t;
    scanf("%d", &t);
   for(int p = 1;p<=t;p++)
    {
        int a[1005];
int luu[100005];
    
printf("Test %d:\n" , p);
    int n;
    scanf("%d", &n);

    for(int i = 1;i<=n;i++)
    {
        scanf("%d", &a[i]);
        luu[a[i]]++;
    }

    int j = 1;
    for(int i =1;i<=n;i++)
    {
        if(luu[a[i]])
        {
        printf("%d xuat hien %d lan\n", a[i], luu[a[i]]);
            luu[a[i]] = 0;
    }
    }

    printf("\n");

}
   
return 0;
}