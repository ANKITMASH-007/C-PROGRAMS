//to create a program to input element to an array and print
#include<stdio.h>
int main ()
{
   int array[5];

   for(int i=0;i<5;++i)
   {
      printf("Enter the value in the array ! ");
      scanf("%d",&array[i]);
   
   }

int sum=0;

for(int i=0;i<5;++i)
{
    sum=sum+array[i];
   
}
 printf("The sum of the array : %d \n ",sum);



    return 0;
}