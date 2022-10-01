// to find the smallest no in the array with help of pointer

#include<stdio.h>
int main()
{  int  n,c,e;
  int * ptr;
    printf("Enter the no. of elements you want: ");
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;++i)
    {
        c=i+1;
        printf("Enter the %d element: ",c);
        scanf("%d",&array[i]);
    }
    //to find the smallest no of the array
   * ptr =array[0];
    for(int i=0;i<n;++i)
    {
       if(*ptr<=array[i])
       {
        continue;
       }
       else
       {
          *ptr=array[i];
          
       }
    }
     

     printf("The smallest no. in the array is: %d",*ptr);

    return 0;
}