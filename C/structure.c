//the struct key word is declared globaly 
// Structure is a collection  of hetrogeneus data 

#include<stdio.h>
#include<math.h>
struct student 
{
int rollno;
char name[100];
int marks_ds;
}
int main()
{
//to implement structure we have to declare a variable and access the element of of the structure
    
    struct student s1;
    s1.rollno=1;
    s1.name=";Ankit";
    s1.marks_ds=98;
    






return 0;
}