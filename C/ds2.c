//to get the no of diffrent char of the string

#include<stdio.h>
#include<string.h>
int main()
{    int no=0,ch=0,spc=0,sm=0;
    char str[20];
    printf("Enter the string !!");
    scanf("%s",str);
    int x=strlen(str);

for(int i=0;i<x ;++i)
{
     
    int ascii=str[i];
    if(ascii>=48&&ascii<=57)
    {   
        no+=1;
    }
    else if(ascii>=65&&ascii<=90)
    {
        ch+=1;
    }
    else if(ascii>=97&&ascii<=122)
    {
         ch+=1;
    }

}
 
     sm=no+ch;
     spc=x-sm;

     printf("The string have %d characters!!\n",ch);
     printf("The string have %d digits!!\n",no);
     printf("The string have %d special characters!!\n",spc);
     

    return 0;
}