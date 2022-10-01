//to modify the values of the array using a function

#include<stdio.h>
//declaring the function
void modify(int array[],int s,int no);
int main()
{  int e;
    int array[10];
    int array2[10];
    for(int i=0;i<10;++i)
    {   e=i+1;
       printf("Enter the %d value ",e);
       scanf("%d",&array[i]);
      
      
    }
      modify(array,10,2);
     for(int i=0;i<10;++i)
     { 
      printf("The modified value is : %d \n",array[i]);
     }
    return 0;
    }
    //defination of the function
   
  void modify(int  array[], int s, int no) 
{ int in;
    for (int i=0; i<s; ++i) 
   {
         array[i]*=no;

   }
} 
    
    
     