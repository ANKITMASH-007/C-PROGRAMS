#include<stdio.h>
#include<math.h>

int main()
{
int ul, ll;
printf("enter the upper limit");
scanf("%d",&ul);
printf("enter the lower value");
scanf("%d",&ll);

for(int i=ll;i<=ul;++i)
{
   
   if((i%2)==0)
   {
   continue;
   }
    
   else
   {
      printf("%d \n",i);
   }
 



}




return 0;
}