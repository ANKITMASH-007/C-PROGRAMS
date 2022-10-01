//This program is to print sum of the elments of an array
#include<stdio.h>
int main()
{
    int sum;
     int array[5];
     for(int i=0;i<5;++i)
     {
       printf("Enter the %d element: \n",i);
       scanf("%d",&array[i]);
     } 
     sum=0;
     for(int i=0;i<5;++i)
     {   
        sum=sum+array[i];
       }
        printf("The sum of the given elements is : %d",sum); 
return 0;
}