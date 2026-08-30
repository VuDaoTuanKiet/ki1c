#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c;

    scanf("%lf %lf %lf",&a, &b ,&c);

    if(a == 0)
    {
        if(b== 0)
        {
            printf("NO");
        }
        else
        {
            double luu = -c/b;
            printf("%.2lf", luu);
        }
    }
    else
    {
        double luu = b*b - 4*a * c;

        if(luu < 0)
            printf("NO");
        else if(luu == 0)
        {
            double ans = -b/(2*a);
            printf("%.2lf", ans);
        }
        else
        {
            double x1 = (-b + sqrt(luu)) / (2*a);
            double x2 = (-b - sqrt(luu)) / (2*a);

            printf("%.2lf %.2lf", fmax(x1,x2), fmin(x1,x2));
        }
    }
}