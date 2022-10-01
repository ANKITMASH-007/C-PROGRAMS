//to create a funcntion to calculate the area of a circle and a square and rectangle 
#include<stdio.h>
#include<math.h>
float areasquare(float side);
float arearectangle(float a ,float b);
float areacircle(float radius);

int main()
{
    float side;
    printf("Enter the side of the square:\n");
    scanf("%f",&side);
    printf("the area of the square is %f",areasquare(side));

    float length=10 ,breadth=15;
    printf("Enter the lenght and breadth of the rectangle:\n");
    printf("the area of the given rectangle is :%f",arearectangle(length,breadth));
    float radius;
    printf("Enter the radius of the circle:\n");
    scanf("%f",&radius);
    printf("the area of the given circle is : %f \n",areacircle(radius));
    return 0;
}

float areasquare(float side)
{
    
    
    
return side=(pow(side,2));
     
}
float arearectangle(float a,float b)
{
   return a*b;
}
float areacircle(float radius)
{
    return (3.14 * radius);
}