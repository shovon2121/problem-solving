#include<stdio.h>
#include<string.h>
int main()
{
   char str[50];
   printf("Input the string\n") ;
   gets(str);
   int i = 0;
   while(str[i] != '\0'){
        str[i] = str[i] - 32;
        i++;
   }
   printf("\n %s", str);

}
