#include<stdio.h>
#include<math.h>

int main(){

int ul,ll ;
printf("ENTER THE UPPER VALUE");
scanf("%d",&ul);

printf("ENTER THE LOWER VALUE");
scanf("%d",&ll);


for(int i=ll;i<=ul;++i)
{
   if(i%2==0)
   {
     printf("THE EVEN NO B/W IS :%d \n",i);

   }
else 
{

    continue;
}



}



    return 0;
}