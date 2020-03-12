#include<stdio.h>
int main()
{
    char a[100], b[100];
    printf("Input first string\n");
    gets(a);
    printf("Input second string\n");
    gets(b);
    int i = 0;
    while(a[i] != '\0'){
        i++;
    }
    int j = 0;
    while(b[j] != '\0'){
        a[i+j] = b[j];
        j++;
    }
    a[i+j] = '\0';
    printf("\n%s", a);
}
