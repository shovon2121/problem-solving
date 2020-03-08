/*
|(x1(y1-y2)+x2(y3-y1)+x3(y1-y2))/2|
112, 231, 312
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    double x1,y1,x2,y2,x3,y3;
    double area;
    printf("Input the coordinates of the vertex:\n");
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &x2, &x3, &y1, &y2, &y3);
    area = abs((x1 * (y1 - y2) + x2 *(y3 - y1) + x3 *(y1 - y2)) / 2);
    printf("\nThe area is: %.2lf", area);
    return 0;
}
