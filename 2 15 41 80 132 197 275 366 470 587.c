#include<stdio.h>
int main()
{
    int n = 10;
    int i = 1;
    int sum = 2;
    printf("%d\n", sum);
    for(; i < n; i++){
        sum = sum + (i * 13);
        printf("%d\n", sum);
    }
}
