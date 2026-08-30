//spiderman will save me and bug in my code

#include<stdio.h>
#include<math.h>

void swap(long long *a, long long *b)
{
    long long temp = *b;
    *b = *a;
    *a = temp;
}


int main()
{
    long long a,b,c,d,e,f;
    scanf("%lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f);
    long long n = a * b + c * d + e * f;
    int y = sqrt(n);
	if (y*y != n)
	{
		printf("NO");
		return 0;
	}
    else
    {
            if (a > b) swap(&a, &b);
        if (c > d) swap(&c, &d);
        if (e > f) swap(&e, &f);

       if (b==d && d==f && f==y) {
            printf("YES");
        }
        else
        {
            if(d == y)
            {
                swap(&d, &b);
				swap(&c, &a);
            }
            if (f == y)
			{
				swap(&f, &b);
				swap(&e, &a);
			}
            	if (b == y)
			{
                int luu = y - a;
                if (c==luu && e==luu || c==luu && f==luu || d==luu && e==luu || d==luu && f==luu)
					printf("YES");
				else
					printf("NO");
            }
        }

    }

    return 0;



}