// to create a program to linear search
#include<stdio.h>
int main()
{
int e,num;
    printf("Enter the no of element :");
    scanf("%d",&e);
     int array[e];
     for(int i=0;i<e;++i)
     {
        printf("Enter the %d value : ",i);
        scanf("%d",&array[i]);
     }

      printf("Enter the no you want to search: ");
      scanf("%d",&num);

      for(int i =0;i<e;++i)
      {
          if(num==array[i])
          {
        
             printf("The number is at %d index!",i);
             break;    
          }
           else if(num!=array[i] && i==(e-1))
           {
            printf("The given element is not found:");
           }
        }        
   return 0;
}