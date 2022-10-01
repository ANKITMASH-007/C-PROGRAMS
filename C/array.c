// to print a extra 100 with each element of an array
#include<stdio.h>

int main(){
//to decalre a array 
int a[5];
for(int i=0;i<5;++i)
{ 
printf("ENTER THE VALUE: ");
scanf("%d",&a[i]);

}
printf("the modified array is as follows\n");
for(int b=0;b<5;++b)
{
  printf("%d\n",a[b]+100);
}

}