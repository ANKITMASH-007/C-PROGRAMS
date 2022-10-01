//In this program we will make a function and we will call it by value
#include<stdio.h>
void square(int );
int main()
{
  int n =4;
square(n);
printf("the value was: %d \n",n);

    return 0;
}

void square(int n)
{
    n=n*n;
    printf("The square is: %d \n",n);
}