// to create a program to add two arrays and print values
#include<stdio.h>

int main()
{
int array1[5];
int array2[5];

printf("Enter the value in the Arrays: \n");
for(int i=0;i<5;++i )
{
printf("Enter the %d value array 1:",i);
scanf("%d",&array1[i]);

printf("Enter the %d value array 2:",i);
scanf("%d",&array2[i]);
}

printf("The sum of these array is :\n");

for(int a=0;a<5;++a)
{
   int sum=array1[a]+array2[a];
    printf("The sum of the %d elements is:%d \n",a,sum);
}
 return 0;
} 