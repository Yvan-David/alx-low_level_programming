#include <stdio.h>
#define PI 3.14
void circle();
int main()
{
    circle();
    return(0);
}
void circle()
{
    float radius,Area,Circumference;
    printf("please enter the radius: ");
    scanf("%f",&radius);
    if(radius > 0)
    {
    Area = PI * radius * radius;
    Circumference = 2 * PI * radius;
    printf("The Area is: %.2f\n",Area);
    printf("The circumference is: %.2f\n",Circumference);
    printf("Thank you for displaying the result!");
    }
    else
        printf("bad input");
}
