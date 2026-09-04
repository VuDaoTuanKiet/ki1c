//spiderman will save me and bug in my code
#include<stdio.h>

int a[105];
int luu[100005];

typedef long long ll;

signed main()
{
  int n;
  scanf("%d", &n);
    int dem = 0;
  for(int i =1;i<=n;i++){
    scanf("%d", &a[i]);
    luu[a[i]]++;
    if(luu[a[i]] ==2)
        dem++;
  }
  printf("%d\n", dem);
  for(int i = 1;i<=n;i++)
  {
    if(luu[a[i]] > 1)
    {
    printf("%d ", a[i]);
        luu[a[i]] = 0;
    }
  }
  return 0;
}
