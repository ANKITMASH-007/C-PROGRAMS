//to create a array of n elements and transfer  using pointers
#include<stdio.h>
int main()
{  int a;

    printf("Enter the maximum no of elements required!");
    scanf("%d",&a);
     int array[a];
    int arrayp[a];
    for(int i=0;i<a;++i)
    {
        printf("Enter the %d element",i);
        scanf("%d",&array[i]);
    }
     for(int i=0;i<a;++i)
      {
        int * ptr=&array[i];
         arrayp[i]=*ptr;
      }
    for(int i =0;i<a;++i)
    {
     printf("The %d element in the array is : %d \n ",i,arrayp[i]);   
    }
return 0;
}


