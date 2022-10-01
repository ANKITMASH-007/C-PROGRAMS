//to create  two array of diffrent size and merge in third array
#include<stdio.h>
int main()
{  int a,b;

    printf("Enter the maximum no of elements required!");
    scanf("%d",&a);
    printf("Enter the maximum no of elements required!");
    scanf("%d",&b);
    int f=a+b;
     int ar[a];
    int arp[b];
    int arf[f];
    printf("Enter the value in the first array \n");
    for(int i=0;i<a;++i)
    {
        printf("Enter the %d element",i);
        scanf("%d",&ar[i]);
    }
   printf("Enter the value in the second array  \n");
      for(int i=0;i<b;++i)
    {
        printf("Enter the %d element",i);
        scanf("%d",&arp[i]);
    }

    int index;
    for(int i=0;i<a;++i)
    {
        arf[i]=ar[i];
       index=i+1;
    }
         for( int i =0;i<b;++i)
    {
        arf[index]=arp[i];
        ++index;
    }
     for(int i=0;i<f;++i)
    {
        printf("The final merged value will be ! %d \n",arf[i]);
       
    }

   return 0;
}