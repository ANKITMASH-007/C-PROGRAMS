// in this program we are going to covert celcius to farenhiegt and vice versa
#include<stdio.h>
#include<math.h>

int main()
{
   int u;
   float v,f ,c;

   printf("Select the unit in which you want to enter the value:\n");
   printf("If celcius press 1 \n");
   printf("If farehnight press 2 \n");
   scanf("%d",&u);
   printf("Enter the temprature you want to convert:\n");
   scanf("%f",&v);
    if(u==1)
    {
      f=(v*(9/5)+32);
      printf("The given value in farenheit is: %f \n",f);
    }
     else if(u==2)
     {   
        c=(v-32*5/9);
        printf("The entered value in celcius is: %f \n",&c);
     }
     else
     {
        printf("The input is not valid :\n");
     }
     printf("Thank you !!");
    return 0;
}