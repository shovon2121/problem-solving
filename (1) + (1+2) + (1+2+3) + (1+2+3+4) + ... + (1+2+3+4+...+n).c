#include<stdio.h>
int main()
{
    int n;
    unsigned long sum = 0;
    printf("Input the value of n\n");
    scanf("%d", &n);
    int i = 1;
    int j;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            sum = sum + j;
        }
    }
    printf("\nThe sum is:%ld", sum);
}
