// to add two same size array
#include<stdio.h>
int main()
{ int size;
   printf("Enter the no of elements  in both arrays!");
   scanf("%d",&size);
   int array1[size];
   int array2[size];
   int array3[size];
   for(int i=0;i<size;++i)
   {
    printf("Enter the %d value in the first array \n",i);
    scanf("%d",&array1[i]);

    printf("Enter the %d  value in the second array \n",i);
    scanf("%d",&array2[i]);
  }
       for(int i=0;i<size;++i)
       {
        array3[i]=array1[i]+array2[i];
        
       }

 for(int i=0;i<size;++i)
 {
    printf("The addition of the array  %d elements is :%d \n ",i,array3[i]);
 }

    return 0;
}