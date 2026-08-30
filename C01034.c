#include<stdio.h>
#include<math.h>
int main()
{
    long long a,b;
    scanf("%lld %lld", &a, &b);
    long long luu1 = sqrt(a);
    luu1 += (sqrt(a) * sqrt(a) != a);
    long long luu2 = sqrt(b);
    
    printf("%lld\n", luu2 - luu1 + 1);
    
    for(long long i =luu1;i<=luu2;i++)
    {
        printf("%lld\n" , (long long)i*i);
    }
    
 


}