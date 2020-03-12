#include<stdio.h>
int main()
{
    char name[20];
    char reverse[20];
    printf("Input your name\n");
    gets(name);
    int i = 0;
    while(name[i] != '\0'){
        i++;
    }
    i -= 1;
    int j = 0;
    while(i >= 0){
        reverse[j] = name[i];
        i--;
        j++;
    }
    reverse[j] = '\0';
    printf("\n %s", reverse);


}
