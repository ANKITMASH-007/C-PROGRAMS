// to insert and delete values at specific index
#include<stdio.h>
int main()
{
  int op,in,val;
  int array[5];
  printf("To Delete from Array PRESS 1 \n");
  printf("To Insert value in Array PRESS 2");
  scanf("%d",&op);
 
 if(op==1)
 {
  printf("Insert the index the value to delete element");
  scanf("%d",&in);
   array[in]=0;
 } 
else if(op==2)
{
  printf("Insert the index the value to insert element");
  scanf("%d",&in);
  printf("Enter the value !!");
  scanf("%d",&val);
  array[in]=val;
}
else
{
    printf("Invaild Value!!");
}
printf("The value at the index is : %d \n",array[in]);
return 0;
}