#include<stdio.h>

int main()
{
    double a,b;
    scanf("%lf %lf", &a, &b);

    if(a == 0 && b == 0){
        printf("Vo so nghiem");
        return 0;
    }
    if(a == 0 && b != 0)
    {
        printf("Vo nghiem");
        return 0;
    }
    else
    {
        double del = -b/a;
        printf("%.2lf", del);
    }

    return 0;
}