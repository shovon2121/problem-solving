#include<stdio.h>
int main()
{
    char a[100], b[100];
    printf("Input first string\n");
    gets(a);
    printf("Input second string\n");
    gets(b);
    int i = 0;
    int j = 0;
    int flag = 1;
    while(b[i] != '\0'){
        if(b[i] == a[i]){
            j = i + 1;
            while(b[j] != '\0'){
                if(b[j] != a[j]){
                    flag = 0;
                    break;
                }
                j++;
            }
            j = 0;
        }
        i++;
    }
    if(flag){
        printf("Found");
    }
    else{
        printf("Not found");
    }
}

/*
shovon
von
*/
