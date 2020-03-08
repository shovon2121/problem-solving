#include<stdio.h>
int main()
{
    int year;
    printf("Input year:\n");
    scanf("%d", &year);
    if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
        printf("\nLeap Year");
    else
        printf("\nNot Leap Year");
    return 0;
}
