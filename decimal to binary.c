#include<stdio.h>
int main()
{
    int number = 4;
    int binary;
    while(number > 1){
        binary = number % 2;
        printf("%d", binary);
        number = number / 2;
        binary = 0;
    }


}
