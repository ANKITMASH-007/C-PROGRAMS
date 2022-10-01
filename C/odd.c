#include<stdio.h>
#include<math.h>

int main(){

int a ;
printf("enter the input\n");
scanf("%d",&a);

for(;a>0;)
{

if((a%2)==0)
{
printf("enter the input\n");
scanf("%d",&a);

}
else
{
break;
}

}

printf("YOU HAVE ENTERED A ODD NO SO THE LOOP HAS ENDED");
    return 0;
}