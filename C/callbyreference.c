//this program we will implement call by reference method 
#include<stdio.h>
void square(int *n);

int main()
{int i=4;
    
    square(&i);
    printf("The value is : %d",i);
    return 0;
}

void square(int *n)
{
    *n=(*n)*(*n);
    printf("The square is: %d \n",*n);
}