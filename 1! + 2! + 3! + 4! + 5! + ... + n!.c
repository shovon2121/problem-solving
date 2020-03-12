#include<stdio.h>

long fact(int n)
{
    if(n >= 1){
        return n * fact(n - 1);
    }else{
        return 1;
    }
}

int main()
{
    int n;
    printf("Input the value of n\n");
    scanf("%d", &n);
    unsigned long long sum = 0;
    int i = 1;
    for(; i <= n; i++){
        sum = sum + fact(i);
    }
    printf("The sum is %lld", sum);
}

