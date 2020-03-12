/*
1/2 - 2/3 + 3/4 - 4/5 + 5/6 - ...... n

*/
#include<stdio.h>
int main()
{

    int n;
    double sum = 0;
    printf("Input the value of n\n");
    scanf("%d", &n);
    double i = 1;


    for(; i <= n; i++){
        if((int)i % 2 == 1){
            sum = sum - (i / (i + 1));
        }else{
            sum = sum + (i / (i + 1));
        }
    }
    printf("The sum is %lf", sum);

}

