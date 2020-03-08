/*
s = (a + b + c) / 2
area = sqrt(s*(s-a)*(s-b)*(s-c))
*/

#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,s,area;
    printf("Input sides of triangle\n");
    scanf("%lf %lf %lf", &a, &b, &c);
    s = (a + b + c) / 2.;
    area = sqrt(s * (s - a) * ( s - b) * (s - c));
    printf("The area of the triangle is: %.2lf", area);
    return 0;
}
