//this program is to check weather the enterd no is prime or not 
#include<stdio.h>
int main(){
    int n , m ,f=0;
    printf("Enter the no: ");
    scanf("%d",&n);
     if(n==0||n==1)
     f=1;
     
     for(m=2;m<=n/2;++m)
     {
        if(n%m==0){
            f=1;
            break;
        }
     }

    if(f==0)
    printf("%d Is  a prime no: ",n);
    else
    printf("%d Is a not a prime no: ",n);
  
return 0;
}