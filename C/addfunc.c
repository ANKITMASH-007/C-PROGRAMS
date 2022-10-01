// to make a function to add two no
#include<stdio.h>
//declaration of the function
void add(int a,int b);
int main()
{
    int x,y;
   printf("Enter the first no: ");
   scanf("%d",&x);
   printf("Enter the second no: ");
   scanf("%d",&y);
   
   // call the function
   add(x,y);
 return 0;
}
//defination of the function
void add(int a,int b)
{
    int sum=a+b;
    add(a,b;)
    printf("The sum of the given no is : %d",sum);
}