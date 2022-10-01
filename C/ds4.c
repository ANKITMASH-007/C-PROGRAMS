//to count the no of letters in the string 
#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];
   printf("Enter the string !!");
   scanf("%s",str);
   
   int length=strlen(str);
printf("The entered string have %d words",length);


 return 0;   
}