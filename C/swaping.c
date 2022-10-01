//In this program we will implement call by value and call by reference
#include<stdio.h>

void swap(int a ,int b);
void _swap(int *a, int *b);

int main()
{
    int choice,A,B;
  printf("To swap using call by value press 1: \n");
  printf("To swap using call by reference press 2 : \n");
  scanf("%d",&choice);
  printf("Enter the value for A:  \n");
  scanf("%d",&A);
   printf("Enter the value for B:  \n");
  scanf("%d",&B);


  if(choice==1)
  {
    swap(A,B);
    printf("The call by value says: A=%d , B= %d \n",A,B);
  }
  else if(choice==2)
  {
     _swap(&A,&B);
     printf("The call by value says: A=%d , B= %d \n",A,B);
  }
  else 
  {
    printf("Invalid input:!")
  }

 return 0;
 }

 void swap(int a,int b)
 {
    int t;
     a=t;
     b=a;
    printf("The swap  says: A=%d , B= %d \n",,);

 }
 void _swap(int *a,int *b)
 {
    int *t;
     *a =(*t);
     *b=(*a);
    printf("The swap says: A=%d , B= %d \n",*b,*t);
 }