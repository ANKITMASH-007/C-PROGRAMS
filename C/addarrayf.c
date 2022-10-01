// to add  array elements  using function 
#include<stdio.h>
void addarray(int array[],int a);

int main()
{
 int e;
 printf("Enter the no of elements in the array: ");
 scanf("%d",&e);
 int array[e];
for(int i =0;i<e;++i)
{
    printf("enter the %d vallue : ",i);
    scanf("%d",&array[i]);
}
addarray(array,e);

    return 0;
}
void addarray(int array[],int a)
{   int sum=0;
     for(int i=0;i<a;++i )
     {
        sum= sum+array[i];
     }
     printf("the sum of the elements is : %d",sum);
}
