//in this program we will check wether the sum is even or odd
#include<stdio.h>
#include<math.h>
int main()
{  int firstno,secondno,lastno;
    printf("Enter the first no: \n ");
    scanf("%d",&firstno);

  printf("Enter the second no: \n ");
    scanf("%d",&secondno);

    int sum =firstno+secondno;
    printf("The sum of the no is : %d \n ",sum);

    printf("Enter the no you want to add to the sum: \n ");
    scanf("%d",&lastno);

    sum=sum+lastno;
    if(sum%2==0)
    printf("The final sum is %d and is a even no! \n",sum);
    else 
    printf("The final sum is %d and is a odd no !\n",sum );



    return 0;
}