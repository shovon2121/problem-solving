#include<stdio.h>
int main()
{
    double r, area, pi;
    scanf("%lf", &r);
    pi = acos(-1.);// cos pi = -1
    printf("%lf\n", pi);
    area = pi * r * r;
    printf("The area is: %lf\n", area);
    long long a;
    a = 100;
    printf("%lld", a);

    return 0;
}
