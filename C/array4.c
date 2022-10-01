#include<stdio.h>
#include<math.h>
int main()
{

int array[5];
for(int i=0;i<5;++i)
{
printf("Enter the value : ");
scanf("%d",&array[i]);
}
for(int a=4;a>=0;--a)
{
    printf("The value in reverse order is: %d \n",array[a]);

}

return 0;
}
 