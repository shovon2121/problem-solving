/*
cos(a) = (b^2 + c^2 - a^2)/2ca
cos(b) = (a^2 + c^2 - b^2)/2ac
cos(c) = (a^2 + b^2 - c^2)/2ab
*/
#include<stdio.h>
#include<math.h>
#define RAD_2_DEG  (57.2958)
#define TOTAL_DEG  (180.0)
int main()
{

    double A,B,C,x,y,z;
    printf("Input three of triangle:\n ");
    scanf("%lf %lf %lf", &x, &y, &z);
    A = RAD_2_DEG * acos((y * y + z * z - x * x) / (2.0 * y *z));
    B = RAD_2_DEG * acos((x * x + z * z - y * y) / (2 * x * z));
    C = 180. - (A + B);
    printf("\n A is: %f \n B is: %f \n C is: %f ", A, B, C);

}
