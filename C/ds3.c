// to check weather the enterd string is pallindrome or not

#include<stdio.h>
#include<string.h>
void pal(char array[]);
int main()
{    char str[20];
      
    printf("Enter the String!! ");
    scanf("%s",str);
    int l =strlen(str);
    char rev[l];
    for(int i=0;i<l;++i)
    {
        printf("%c \n",str[i]);
    }
    int a=l-1;
    for(int i=0;i<l;++i)
     {
        rev[i]=str[a];
        --a;
     }
     for(int i=0;i<l;++i)
     {
        printf("%c",rev[i]);

        
     }

     

    return 0;
}


   
