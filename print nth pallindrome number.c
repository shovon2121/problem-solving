#include<stdio.h>
int main()
{

    int n,tmp,count,digit;
    int rev = 0;
    int number=1;
    printf("Input the value of n\n");
    scanf("%d", &n);
    count = 0;

    while(count != n){
        rev = 0;
        tmp = number;
        while(number > 0){
            digit = number % 10;
            rev = (rev * 10) + digit;
            number /= 10;
        }
        if(tmp == rev){
            count++;


            printf("count = %d\n", count);
            printf("rev is %d\n", rev);
        }
        number = tmp + 1;
    }
    printf("The %dth palindrome is: %d", n, tmp);


}
