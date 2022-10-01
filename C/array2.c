#include<stdio.h>
#include<math.h>
int main()
{
int array[5];
for(int i=0;i<5;++i)
{
  printf("Enter the value:");
  scanf("%d",&array[i]);
}
for(int a=0;a<5;++a)
{
printf("The %d element is :%d \n",a,array[a]);
}
printf("Thank you !!");
return 0;
}